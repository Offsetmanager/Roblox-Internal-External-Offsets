#define COMMON_HEADER_SHUFFLE(s, a1, a2, a3) a1 s a2 s a3
#define CALLINFO_SHUFFLE(s, a1, a2, a3, a4, a5, a6, a7) a1 s a3 s a4 s a2 s a5 s a6 s a7
#define LUA_STATE_SHUFFLE(s, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23) a1 s a2 s a3 s a4 s a8 s a9 s a7 s a5 s a6 s a10 s a22 s a13 s a14 s a19 s a20 s a15 s a16 s a17 s a21 s a18 s a11 s a12 s a23
#define STRINGTABLE_SHUFFLE(s, a1, a2, a3) a3 s a2 s a1
#define LUA_TABLE_SHUFFLE(s, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11) a1 s a2 s a4 s a5 s a3 s a6 s a7 s a10 s a9 s a8 s a11
#define CLOSURE_SHUFFLE(s, a1, a2, a3, a4, a5, a6) a1 s a4 s a3 s a2 s a5 s a6
#define CLOSURE_C_SHUFFLE(s, a1, a2, a3, a4, a5) a1 s a2 s a4 s a5
#define CLOSURE_L_SHUFFLE(s, a1, a2) a1 s a2
#define PROTO_START_SHUFFLE(s, a1, a2, a3, a4, a5) a1 s a5 s a2 s a4 s a3
#define PROTO_MIDDLE_SHUFFLE(s, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14) a7 s a5 s a6 s a1 s a9 s a14 s a13 s a2 s a10 s a8 s a12 s a4 s a3 s a11
#define PROTO_END_SHUFFLE(s, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) a8 s a10 s a4 s a7 s a3 s a9 s a2 s a6 s a1 s a5

#define PROTO_DEBUGINSN_ENC VMValue2
#define PROTO_TYPEINFO_ENC VMValue4
#define PROTO_LINEINFO_ENC VMValue2
#define PROTO_ABSLINEINFO_ENC VMValue1
#define PROTO_DEBUGNAME_ENC VMValue2
#define PROTO_USERDATA_ENC VMValue3
#define PROTO_UPVALUES_ENC VMValue3
#define PROTO_LOCVARS_ENC VMValue4
#define PROTO_SOURCE_ENC VMValue2
#define CLOSURE_DEBUGNAME_ENC VMValue0
#define CLOSURE_CONT_ENC VMValue2
#define LSTATE_STACKSIZE_ENC VMValue3
#define TSTRING_HASH_ENC VMValue4
#define UDATA_META_ENC VMValue4

#define CommonHeader \
     COMMON_HEADER_SHUFFLE(;, uint8_t tt, uint8_t marked, uint8_t memcat)

typedef struct CallInfo
{
    CALLINFO_SHUFFLE(
        ;,
         StkId base,
         StkId func,
         StkId top,
         Proto* p,

         union {
             const Instruction* savedpc;
             int errfunc;
         },

         int nresults,
         unsigned int flags
    );
} CallInfo;

struct lua_State
{
    CommonHeader;
    LUA_STATE_SHUFFLE(
        ;,
         uint8_t status,

         uint8_t activememcat,

         bool isactive,
         bool singlestep,

         StkId top,
         StkId base,
         global_State* global,
         CallInfo* ci,
         StkId stack_last,
         StkId stack,

         CallInfo* end_ci,
         CallInfo* base_ci,

         LSTATE_STACKSIZE_ENC<int> stacksize,
         int size_ci,

         unsigned short nCcalls,
         unsigned short baseCcalls,

         int cachedslot,

         LuaTable* gt,
         UpVal* openupval,
         GCObject* gclist,

         TString* namecall,

         LuaTable* finalizers,

         void* userdata

    );
};

typedef struct stringtable
{
    STRINGTABLE_SHUFFLE(
        ;,
         TString** hash,
         uint32_t nuse,
         int size
    );
} stringtable;

typedef struct LuaTable
{
    CommonHeader;
    LUA_TABLE_SHUFFLE(
        ;,
         uint8_t tmcache,
         uint8_t readonly,
         uint8_t safeenv,
         uint8_t lsizenode,
         uint8_t nodemask8,

         int sizearray,
         union {
             int lastfree;
             int aboundary;
         },

         struct LuaTable* metatable,
         TValue* array,
         LuaNode* node,
         GCObject* gclist
    );
} LuaTable;

typedef struct Closure
{
    CommonHeader;
    CLOSURE_SHUFFLE(
        ;,
         uint8_t isC,
         uint8_t nupvalues,
         uint8_t stacksize,
         uint8_t preload,

         GCObject* gclist,
         struct LuaTable* env
    );

    union
    {
        struct
        {
            CLOSURE_C_SHUFFLE(
                ;,
                 lua_CFunction f,
                 CLOSURE_CONT_ENC<lua_Continuation> cont,
                 CLOSURE_DEBUGNAME_ENC<const char*> debugname_DEPRECATED,
                 TString* debugname,
                 TValue upvals[1]
            );
        } c;

        struct
        {
            CLOSURE_L_SHUFFLE(;, struct Proto* p, TValue uprefs[1]);
        } l;
    };
} Closure;

typedef struct Proto
{
    CommonHeader;

    PROTO_START_SHUFFLE(
        ;,
         uint8_t nups,
         uint8_t numparams,
         uint8_t is_vararg,
         uint8_t maxstacksize,
         uint8_t flags
    );

    PROTO_MIDDLE_SHUFFLE(
        ;,
         TValue* k;
        Instruction * code,

        struct Proto** p,

        const Instruction* codeentry,

        void* execdata;
        uintptr_t exectarget,

        PROTO_LINEINFO_ENC<uint8_t*> lineinfo,

        PROTO_ABSLINEINFO_ENC<int*> abslineinfo,

        PROTO_LOCVARS_ENC<struct LocVar*> locvars,

        PROTO_UPVALUES_ENC<TString**> upvalues,

        PROTO_SOURCE_ENC<TString*> source,

        PROTO_DEBUGNAME_ENC<TString*> debugname,

        PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn,

        PROTO_TYPEINFO_ENC<uint8_t*> typeinfo,

        PROTO_USERDATA_ENC<void*> userdata,

        GCObject* gclist
    );

    PROTO_END_SHUFFLE(
        ;,
         int sizecode,
         int sizep,
         int sizelocvars,
         int sizeupvalues,
         int sizek,
         int sizelineinfo,
         int linegaplog2,
         int linedefined,
         int bytecodeid,
         int sizetypeinfo
    );

    FeedbackVectorSlot* feedbackvec;
    uint32_t feedbackvecsize;
    uint32_t funid;
    Proto* optimized;
    Proto* deoptimized;
    uintptr_t cost;
} Proto;


typedef struct TString
{
    CommonHeader;

    int16_t flag = -1;
    int16_t atom;

    TString* next;

    TSTRING_HASH_ENC<unsigned int> hash;
    unsigned int len;

    char data[1];
} TString;

typedef struct Udata
{
    CommonHeader;

    uint8_t tag;

    int len;

    UDATA_META_ENC<struct LuaTable*> metatable;

    alignas(8) char data[1];
} Udata;

struct lua_Callbacks
{
    void* userdata;
    void (*postresume)(lua_State* L);
    void (*userfinalizer)(lua_State* L, lua_State* co);
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag);
    int16_t (*useratom)(lua_State* L, const char* s, size_t l);
    void (*userthread)(lua_State* LP, lua_State* L);
    void (*debugstep)(lua_State* L, lua_Debug* ar);
    void (*debugprotectederror)(lua_State* L);
    void (*onfree)(lua_State* L, void* block);
    void (*panic)(lua_State* L, int errcode);
    void (*debugbreak)(lua_State* L, lua_Debug* ar);
    void (*interrupt)(lua_State* L, int gc);
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar);
    void (*preresume)(lua_State* L);
};

struct global_State
{
    uint8_t currentwhite;
    uint8_t gcstate;
    size_t GCthreshold;
    size_t totalbytes;
    stringtable strt;
    lua_Alloc frealloc;
    void* ud;
    int gcgoal;
    int gcstepsize;
    int gcstepmul;
    GCObject* gray;
    GCObject* weak;
    GCObject* grayagain;
    struct lua_Page* freepages[LUA_SIZECLASSES];
    struct lua_Page* allpages;
    struct lua_Page* freegcopages[LUA_SIZECLASSES];
    struct lua_State* mainthread;
    UpVal uvhead;
    struct lua_Page* sweepgcopage;
    struct lua_Page* allgcopages;
    struct LuaTable* mt[LUA_T_COUNT];
    TString* tmname[TM_N];
    TString* ttname[LUA_T_COUNT];
    lua_CageAlloc cagealloc;
    struct lua_Page* allgcopages_cage;
    struct lua_Page* sweepgcopage_cage;
    void* cageud;
    struct lua_Page* freegcopages_cage[LUA_SIZECLASSES];
    TValue pseudotemp;
    TValue registry;
    int registryfree;
    lua_Callbacks cb;
    uint64_t rngstate;
    struct lua_jmpbuf* errorjmp;
    uint64_t ptrenckey[4];
    lua_ExecutionCallbacks ecb;
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE];
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT];
    size_t memcatbytes[LUA_MEMORY_CATEGORIES];
    void (*udatagc[LUA_UTAG_LIMIT])(lua_State* L, void*);
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT];
    LuaTable* udatamt[LUA_UTAG_LIMIT];
    TValue weakregistry;
    int weakregistryfree;
    int weakregistrytop;
    lua_EmbedderGc embeddergc;
    TString* lightuserdataname[LUA_LUTAG_LIMIT];
    struct LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT];
    struct Closure* builtinPcall;
    struct Closure* builtinXpcall;
    uint64_t ptrenckeynew[8];
    bool ptrencactive;
    GCStats gcstats;
    uint32_t lastprotoid;
};
