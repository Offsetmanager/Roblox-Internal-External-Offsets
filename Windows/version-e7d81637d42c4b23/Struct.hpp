#define CLOSURE_CONT_ENC vmval3
#define LSTATE_STACKSIZE_ENC vmval2
#define PROTO_ABSLINEINFO_ENC vmval3
#define PROTO_DEBUGINSN_ENC vmval3
#define PROTO_DEBUGNAME_ENC vmval1
#define PROTO_LINEINFO_ENC vmval4
#define PROTO_LOCVARS_ENC vmval2
#define PROTO_SOURCE_ENC vmval2
#define PROTO_TYPEINFO_ENC vmval1
#define PROTO_UPVALUES_ENC vmval1
#define PROTO_USERDATA_ENC vmval3
#define TSTRING_HASH_ENC vmval2
#define UDATA_META_ENC vmval2

#define CommonHeader \
    uint8_t memcat; \
    uint8_t tt; /* offset 1 */ \
    uint8_t marked; /* offset 2 */

struct LuaTable
{
    CommonHeader;
    unsigned char lsizenode;
    unsigned char nodemask8;
    unsigned char readonly;
    unsigned char tmcache;
    unsigned char safeenv; /* offset 7 */
    int sizearray; /* offset 8 */
    union /* offset 12 */
    {
        int lastfree;
        int aboundary;
    };
    LuaTable* metatable; /* offset 16 */
    GCObject* gclist; /* offset 24 */
    TValue* array; /* offset 32 */
    LuaNode* node; /* offset 40 */
};

struct global_State
{
    size_t GCthreshold;
    size_t totalbytes; /* offset 8 */
    lua_Alloc frealloc; /* offset 16 */
    void* ud; /* offset 24 */
    stringtable strt; /* offset 32 */
    unsigned char currentwhite; /* offset 48 */
    unsigned char gcstate; /* offset 49 */
    unsigned char gap_00[0x2]; /* offset 50 */
    int gcgoal; /* offset 52 */
    int gcstepmul; /* offset 56 */
    int gcstepsize; /* offset 60 */
    GCObject* gray; /* offset 64 */
    GCObject* grayagain; /* offset 72 */
    GCObject* weak; /* offset 80 */
    lua_Page* freepages[40]; /* offset 88 */
    lua_Page* freegcopages[40]; /* offset 408 */
    lua_Page* sweepgcopage; /* offset 728 */
    lua_Page* allpages; /* offset 736 */
    UpVal uvhead; /* offset 744 */
    lua_Page* allgcopages; /* offset 784 */
    lua_State* mainthread; /* offset 792 */
    TString* tmname[21]; /* offset 800 */
    TString* ttname[14]; /* offset 968 */
    LuaTable* mt[14]; /* offset 1080 */
    TValue pseudotemp; /* offset 1192 */
    TValue registry; /* offset 1208 */
    registryfree_t registryfree; /* offset 1224 */
    struct lua_jmpbuf* errorjmp; /* offset 1232 */
    unsigned __int64 ptrenckey[4]; /* offset 1240 */
    lua_Callbacks cb; /* offset 1272 */
    unsigned __int64 rngstate; /* offset 1376 */
    lua_ExecutionCallbacks ecb; /* offset 1384 */
    unsigned char ecbdata[512]; /* offset 1456 */
    lua_UdataDirectAccessData udatadirect[130]; /* offset 1968 */
    size_t memcatbytes[256]; /* offset 11328 */
    void (*udatagc[128])(struct lua_State*, void*); /* offset 13376 */
    lua_UserdataMark udatamark[128]; /* offset 14400 */
    LuaTable* udatamt[128]; /* offset 15424 */
    TValue weakregistry; /* offset 16448 */
    int weakregistryfree; /* offset 16464 */
    unsigned char gap_02[0x4]; /* offset 16468 */
    lua_EmbedderGc embeddergc; /* offset 16472 */
    TString* lightuserdataname[128]; /* offset 16480 */
    struct LuaTable* udatadirectfields[130]; /* offset 17504 */
    Closure* builtinPcall; /* offset 18544 */
    Closure* builtinXpcall; /* offset 18552 */
    unsigned __int64 ptrenckeynew[8]; /* offset 18560 */
    unsigned char ptrencactive; /* offset 18624 */
    struct GCStats gcstats; /* offset 18632 */
    unsigned int lastprotoid; /* offset 18816 */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* offset 18824 */
#endif
};

struct Udata
{
    CommonHeader;
    unsigned char tag;
    int len;
    UDATA_META_ENC<struct LuaTable*> metatable; /* offset 8 */
    char data[1]; /* offset 16 */
};

struct TString
{
    CommonHeader;
    unsigned char gap_00[0x1];
    uint16_t atomflag;
    int16_t atom;
    TString* next; /* offset 8 */
    TSTRING_HASH_ENC<unsigned int> hash; /* offset 16 */
    unsigned int len; /* offset 20 */
    char data[1]; /* offset 24 */
};

struct Proto
{
    CommonHeader;
    unsigned char maxstacksize;
    unsigned char flags;
    unsigned char numparams;
    unsigned char nups;
    unsigned char is_vararg; /* offset 7 */
    void* execdata; /* offset 8 */
    uintptr_t exectarget; /* offset 16 */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* offset 24 */
    PROTO_USERDATA_ENC<uint64_t*> userdata; /* offset 32 */
    TValue* k; /* offset 40 */
    unsigned int* code; /* offset 48 */
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; /* offset 56 */
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; /* offset 64 */
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; /* offset 72 */
    GCObject* gclist; /* offset 80 */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* offset 88 */
    unsigned int* codeentry; /* offset 96 */
    PROTO_SOURCE_ENC<TString*> source; /* offset 104 */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* offset 112 */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* offset 120 */
    Proto** p; /* offset 128 */
    int sizeupvalues; /* offset 136 */
    int sizelineinfo; /* offset 140 */
    int bytecodeid; /* offset 144 */
    int linedefined; /* offset 148 */
    int sizecode; /* offset 152 */
    int linegaplog2; /* offset 156 */
    int sizelocvars; /* offset 160 */
    int sizek; /* offset 164 */
    int sizetypeinfo; /* offset 168 */
    int sizep; /* offset 172 */
    struct FeedbackVectorSlot* feedbackvec; /* offset 176 */
    int feedbackvecsize; /* offset 184 */
    int funid; /* offset 188 */
    Proto* optimized; /* offset 192 */
    Proto* deoptimized; /* offset 200 */
    uint64_t cost; /* offset 208 */
};

struct Closure
{
    CommonHeader;
    unsigned char stacksize;
    unsigned char nupvalues;
    unsigned char preload;
    unsigned char isC;
    GCObject* gclist; /* offset 8 */
    struct LuaTable* env; /* offset 16 */
    union /* offset 24 */
    {
        struct
        {
            TString * debugname;
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* offset 8 */
            lua_CFunction f; /* offset 16 */
            TValue upvals[1]; /* offset 24 */
        } c;
        struct
        {
            Proto * p;
            TValue uprefs[1]; /* offset 8 */
        } l;
    };
};

struct CallInfo
{
    TValue* base;
    TValue* top; /* offset 8 */
    TValue* func; /* offset 16 */
    Proto* p; /* offset 24 */
    union /* offset 32 */
    {
        const Instruction* savedpc;
        int errfunc;
    };
    int nresults; /* offset 40 */
    unsigned int flags; /* offset 44 */
};

struct Shared
{
    unsigned char gap_00[0x8];
    void* scriptContext; /* offset 8 */
};

struct RobloxExtraSpace
{
    unsigned char gap_00[0x18];
    std::shared_ptr<Shared> shared; /* offset 24 */
    unsigned char gap_01[0x18]; /* offset 40 */
    uint64_t capabilities; /* offset 64 */
    std::weak_ptr<uintptr_t> script; /* offset 72 */
    unsigned char gap_02[0x10];
    RBX::Identity identity; /* offset 104 */
};

struct lua_State
{
    CommonHeader;
    unsigned char status;
    unsigned char activememcat;
    bool singlestep;
    unsigned char isactive;
    unsigned short nCcalls; /* offset 8 */
    unsigned short baseCcalls; /* offset 10 */
    unsigned int cachedslot; /* offset 12 */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* offset 16 */
    int size_ci; /* offset 20 */
    CallInfo* end_ci; /* offset 24 */
    CallInfo* base_ci; /* offset 32 */
    GCObject* gclist; /* offset 40 */
    TString* namecall; /* offset 48 */
    LuaTable* gt; /* offset 56 */
    UpVal* openupval; /* offset 64 */
    struct RobloxExtraSpace* userdata; /* offset 72 */
    CallInfo* ci; /* offset 80 */
    TValue* base; /* offset 88 */
    TValue* stack; /* offset 96 */
    TValue* stack_last; /* offset 104 */
    global_State* global; /* offset 112 */
    TValue* top; /* offset 120 */
};

typedef struct stringtable
{
    int size;
    int nuse;
    TString** hash; /* offset 8 */
} stringtable;

typedef struct lua_Callbacks
{
    void* userdata;
    void (*preresume)(lua_State* L); //GUESS
    void (*postresume)(lua_State* L); //GUESS
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* offset 24 */
    void (*onfree)(lua_State* L, void* block); /* offset 32 */
    void (*debugstep)(lua_State* L, lua_Debug* ar); //GUESS
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, unsigned char memcat, int tt, int tag); /* offset 48 */
    void (*panic)(lua_State* L, int errcode); //GUESS
    void (*debugprotectederror)(lua_State* L); /* offset 64 */
    void (*interrupt)(lua_State* L, int gc); /* offset 72 */
    void (*userthread)(lua_State* LP, lua_State* L); /* offset 80 */
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); /* offset 88 */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); //GUESS
} lua_Callbacks;

struct lua_Page
{
    lua_Page* listprev;
    lua_Page* listnext;

    lua_Page* prev;
    lua_Page* next;

    int pageSize;
    int blockSize;

    void* freeList;
    int freeNext;
    int busyBlocks;
    char padding[sizeof(void*) == 8 ? 8 : 12];

    char data[1];
};
