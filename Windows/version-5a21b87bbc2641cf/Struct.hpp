#define CLOSURE_CONT_ENC vmval3
#define LSTATE_STACKSIZE_ENC vmval2
#define PROTO_ABSLINEINFO_ENC vmval4
#define PROTO_DEBUGINSN_ENC vmval3
#define PROTO_DEBUGNAME_ENC vmval3
#define PROTO_LINEINFO_ENC vmval3
#define PROTO_LOCVARS_ENC vmval3
#define PROTO_SOURCE_ENC vmval1
#define PROTO_TYPEINFO_ENC vmval2
#define PROTO_UPVALUES_ENC vmval4
#define PROTO_USERDATA_ENC vmval1
#define TSTRING_HASH_ENC vmval2
#define UDATA_META_ENC vmval2

#define CommonHeader \
    uint8_t marked; \
    uint8_t tt; \
    uint8_t memcat

struct LuaTable {
    CommonHeader; /* (0) (0x0) */
    uint8_t tmcache; /* (3) (0x3) */
    uint8_t lsizenode; /* (4) (0x4) */
    uint8_t readonly; /* (5) (0x5) */
    uint8_t safeenv; /* (6) (0x6) */
    uint8_t nodemask8; /* (7) (0x7) */
    int sizearray; /* (8) (0x8) */
    union {
        int lastfree;
        int aboundary;
    }; /* (12) (0xC) */
    LuaTable* metatable; /* (16) (0x10) */
    LuaNode* node; /* (24) (0x18) */
    GCObject* gclist; /* (32) (0x20) */
    TValue* array; /* (40) (0x28) */
};
static_assert(sizeof(LuaTable) == 48, "sizeof(LuaTable) == 48");

struct global_State {
    stringtable strt; /* (0) (0x0) */
    GCObject* gray; /* (16) (0x10) */
    GCObject* weak; /* (24) (0x18) */
    GCObject* grayagain; /* (32) (0x20) */
    lua_Alloc frealloc; /* (40) (0x28) */
    void* ud; /* (48) (0x30) */
    unsigned char currentwhite; /* (56) (0x38) */
    unsigned char gcstate; /* (57) (0x39) */
    char gap_0[0x2];
    int gcgoal; /* (60) (0x3C) */
    int gcstepsize; /* (64) (0x40) */
    int gcstepmul; /* (68) (0x44) */
    size_t GCthreshold; /* (72) (0x48) */
    size_t totalbytes; /* (80) (0x50) */
    lua_Page* allgcopages; /* (88) (0x58) */
    lua_Page* allpages; /* (90) (0x60) */
    lua_Page* sweepgcopage; /* (104) (0x68) */
    lua_State* mainthread; /* (112) (0x70) */
    UpVal uvhead; /* (120) (0x78) */
    lua_Page* freepages[40]; /* (160) (0xA0) */
    lua_Page* freegcopages[40]; /* (480) (0x1E0) */
    TString* tmname[TM_N]; /* (800) (0x320) */
    TString* ttname[LUA_T_COUNT]; /* (968) (0x3C8) */
    LuaTable* mt[LUA_T_COUNT]; /* (1080) (0x438) */
    lua_Page* sweepgcopage_cage; /* (1192) (0x4A8) */
    struct lua_jmpbuf* errorjmp; /* (1200) (0x4B0) */
    lua_Page* allgcopages_cage; /* (1208) (0x4B8) */
    lua_CageAlloc cagealloc; /* (1216) (0x4C0) */
    lua_Page* freegcopages_cage[40];
    TValue pseudotemp; /* (1544) (0x608) */
    TValue registry; /* (1560) (0x618) */
    registryfree_t registryfree; /* (1576) (0x628) */
    char gap_1[0x4];
    void* cageud; /* (1584) (0x630) */
    unsigned __int64 rngstate; /* (1592) (0x638) */
    lua_Callbacks cb; /* (1600) (0x640) */
    unsigned __int64 ptrenckey[4]; /* (1712) (0x6B0) */
    lua_ExecutionCallbacks ecb; /* (1744) (0x6D0) */
    char gap_2[0x18]; //expansion of ecb here, remove padding when update
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; /* (1840) (0x730) */
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; /* (2352) (0x930) */
    char gap_3[0xA88]; //place new members here
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; /* (14408) (0x3848) */
    void (*udatagc[LUA_UTAG_LIMIT])(struct lua_State*, void*); /* (16456) (0x4048) */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; /* (17480) (0x4448) */
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* (18504) (0x4848) */
    TValue weakregistry; /* (19528) (0x4C48) */
    int weakregistryfree; /* (19544) (0x4158) */
    int weakregistrytop; /* (19548) (0x415C) */
    lua_EmbedderGc embeddergc; /* (19552) (0x4160) */
    TString* lightuserdataname[LUA_LUTAG_LIMIT]; /* (19560) (0x4C68) */
    LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; /* (20584) (0x5068) */
    Closure* builtinPcall; /* (21624) (0x5478) */
    Closure* builtinXpcall; /* (21632) (0x5480) */
    unsigned __int64 ptrenckeynew[8]; /* (21640) (0x5488) */
    bool ptrencactive; /* (21704) (0x54C8) */
    char gap_5[0x7];
    GCStats gcstats; /* (21712) (0x54D0) */
    unsigned int lastprotoid; /* (21896) (0x5588) */
    unsigned int lastclassid; /* (21900) (0x558C) */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* (21904) (0x5590) */
    char gap_6[0x8]; //padding for new gcmetrics member prob, remove when update
#endif
};
#ifdef LUAI_GCMETRICS
static_assert(sizeof(global_State) == 22384, "sizeof(global_State) == 22384");
#else
static_assert(sizeof(global_State) == 21904, "sizeof(global_State) == 21904");
#endif

struct Udata {
    CommonHeader; /* (0) (0x0) */
    unsigned char tag; /* (3) (0x3) */
    int len; /* (4) (0x4) */
    UDATA_META_ENC<struct LuaTable*> metatable; /* (8) (0x8) */
    char data[1]; /* (16) (0x10) */
};
static_assert(sizeof(Udata) == 24, "sizeof(Udata) == 24");

struct TString {
    CommonHeader; /* (0) (0x0) */
    uint16_t atomflag; /* (4) (0x4) */
    int16_t atom; /* (6) (0x6) */
    TString* next; /* (8) (0x8) */
    TSTRING_HASH_ENC<unsigned int> hash; /* (16) (0x10) */
    unsigned int len; /* (20) (0x14) */
    char data[1]; /* (24) (0x18) */
};
static_assert(sizeof(TString) == 32, "sizeof(TString) == 32");

struct Proto {
    CommonHeader; /* (0) (0x0) */
    unsigned char nups; /* (3) (0x3) */
    unsigned char numparams; /* (4) (0x4) */
    unsigned char flags; /* (5) (0x5) */
    unsigned char is_vararg; /* (6) (0x6) */
    unsigned char maxstacksize; /* (7) (0x7) */
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; /* (8) (0x8) */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* (16) (0x10) */
    unsigned int* codeentry; /* (24) (0x18) */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* (32) (0x20) */
    GCObject* gclist; /* (40) (0x28) */
    PROTO_SOURCE_ENC<TString*> source; /* (48) (0x30) */
    bool ___newmember1; /* (56) (0x38) */
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; /* (64) (0x40) */
    void* execdata; /* (72) (0x48) */
    uintptr_t exectarget; /* (80) (0x50) */
    Proto** p; /* (88) (0x58) */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* (96) (0x60) */
    int ___newmember2; /* (104) (0x68) */
    char gap_0[0x4];
    PROTO_USERDATA_ENC<uint64_t*> userdata; /* (112) (0x70) */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* (120) (0x78) */
    TValue* k; /* (128) (0x80) */
    unsigned int* code; /* (136) (0x88) */
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; /* (144) (0x90) */
    int sizeupvalues; /* (152) (0x98) */
    int linedefined; /* (156) (0x9C) */
    int sizelocvars; /* (160) (0xA0) */
    int bytecodeid; /* (164) (0xA4) */
    int linegaplog2; /* (168) (0xA8) */
    int sizep; /* (172) (0xAC) */
    int sizek; /* (176) (0xB0) */
    int sizetypeinfo; /* (180) (0xB4) */
    int sizecode; /* (184) (0xB8) */
    int sizelineinfo; /* (188) (0xBC) */
    struct FeedbackVectorSlot* feedbackvec; /* (192) (0xC0) */
    int feedbackvecsize; /* (200) (0xC8) */
    int funid; /* (204) (0xCC) */
    Proto* optimized; /* (208) (0xD0) */
    Proto* deoptimized; /* (216) (0xD8) */
    uint64_t cost; /* (224) (0xF0) */
};
static_assert(sizeof(Proto) == 232, "sizeof(Proto) == 232");

struct Closure {
    CommonHeader; /* offset (0) (0x0) */
    unsigned char isC; /* offset (3) (0x3) */
    unsigned char nupvalues; /* offset (4) (0x4) */
    unsigned char preload; /* offset (5) (0x5) */
    unsigned char stacksize; /* offset (6) (0x6) */
    char gap_0[0x1];
    GCObject* gclist; /* offset (8) (0x8) */
    LuaTable* env; /* offset (16) (0x10) */
    union {
        struct {
            lua_CFunction f; /* (0) (0x0) */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* (8) (0x8) */
            TString* debugname; /* (16) (0x10) */
            TValue upvals[1]; /* (24) (0x18) */
        } c;
        struct {
            Proto* p; /* (0) (0x0) */
            TValue uprefs[1]; /* (8) (0x8) */
        } l;
    };
};
static_assert(sizeof(Closure) == 64, "sizeof(Closure) == 64");

struct CallInfo {
    Proto* p; /* (0) (0x0) */
    TValue* func; /* (8) (0x8) */
    TValue* base; /* (16) (0x10) */
    TValue* top; /* (24) (0x18) */
    union {
        const Instruction* savedpc;
        int errfunc;
    }; /* (32) (0x20) */
    int nresults; /* (40) (0x28) */
    unsigned int flags; /* (44) (0x2C) */
};
static_assert(sizeof(CallInfo) == 48, "sizeof(CallInfo) == 48");

namespace RBX {

	struct Identity {
		uint32_t type;
		uint64_t assetId;
	};

	struct Instance {
		ULONGLONG filler;
	};

	struct Intrusive {
		template <typename T, typename U>
		struct Set {
			ULONGLONG count;
			T* head;
		};
	};
	struct detail {
		template <typename T, typename U, bool V>
		struct FlyweightData {
			uint32_t magic;
			T value;
			std::atomic<int> refs;
			int freshrefs;
		};
	};
}

struct RobloxExtraSpace;
struct Shared {
    RBX::Intrusive::Set<RobloxExtraSpace, RobloxExtraSpace> allThreads; /* (0) (0x0) */
    void* scriptContext; /* (16) (0x10) */
    void* engineContext; /* (24) (0x18) */
    std::vector<std::shared_ptr<void const>>* needToFree; /* (32) (0x20) */
    void* scriptVmState; /* (40) (0x28) */
    int threadCount; /* (48) (0x30) */
};
static_assert(sizeof(Shared) == 56, "sizeof(Shared) == 56");

struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* (0) (0x0) */
    RBX::Intrusive::Set<RobloxExtraSpace, RobloxExtraSpace>* _container; /* (8) (0x8) */
    RobloxExtraSpace* prev; /* (16) (0x10) */
    std::shared_ptr<Shared> shared; /* (24) (0x18) */
    char gap_0[0x8];
    std::weak_ptr<RBX::Instance const> InstanceDefiningCapabilities; /* (48) (0x30) */
    std::weak_ptr<uintptr_t> actor; /* (64) (0x40) */
    char gap_1[0x10];
    RBX::Identity identity; /* (96) (0x60) */
    void* scriptContext; /* (112) (0x70) */
    char gap_2[0x8];
    uint64_t capabilities; /* (128) (0x80) */
    std::weak_ptr<uintptr_t> script; /* (136) (0x88) */
    char gap_3[0x20];
};
static_assert(sizeof(RobloxExtraSpace) == 184, "sizeof(RobloxExtraSpace) == 184");

struct lua_State {
    CommonHeader; /* (0) (0x0) */
    uint8_t status; /* (3) (0x3) */
    uint8_t activememcat; /* (4) (0x4) */
    bool singlestep; /* (5) (0x5) */
    bool isactive; /* (6) (0x6) */
    char gap_0[0x1];
    unsigned short nCcalls; /* (8) (0x8) */
    unsigned short baseCcalls; /* (10) (0xA) */
    unsigned int cachedslot; /* (12) (0xC) */
    CallInfo* end_ci; /* (16) (0x10) */
    CallInfo* base_ci; /* (24) (0x18) */
    struct RobloxExtraSpace* userdata; /* (32) (0x20) */
    GCObject* gclist; /* (40) (0x28) */
    CallInfo* ci; /* (48) (0x30) */
    global_State* global; /* (56) (0x38) */
    TValue* stack; /* (64) (0x40) */
    TValue* top; /* (72) (0x48) */
    TValue* base; /* (80) (0x50) */
    TValue* stack_last; /* (88) (0x58) */
    LuaTable* finalizers; /* (96) (0x60) */
    TString* namecall; /* (104) (0x68) */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* (112) (0x70) */
    int size_ci; /* (116) (0x74) */
    UpVal* openupval; /* (120) (0x78) */
    LuaTable* gt; /* (128) (0x80) */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

struct stringtable {
    TString** hash; /* (0) (0x0) */
    uint32_t nuse; /* (8) (0x8) */
    int size; /* (12) (0xC) */
};
static_assert(sizeof(stringtable) == 16, "sizeof(stringtable) == 16");

struct lua_Callbacks {
    void* userdata; /* (0) (0x0) */
    void (*userfinalizer)(lua_State* L, lua_State* co); // GUESS
    void (*postresume)(lua_State* L); /* (16) (0x10) */
    void (*debugprotectederror)(lua_State* L); // GUESS
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); /* (32) (0x20) */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // GUESS
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* (48) (0x30) */
    void (*preresume)(lua_State* L); /* (56) (0x38) */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* (64) (0x40) */
    void (*panic)(lua_State* L, int errcode); // GUESS
    void (*interrupt)(lua_State* L, int gc);  // GUESS
    void (*onfree)(lua_State* L, void* block); /* (88) (0x58) */
    void (*userthread)(lua_State* LP, lua_State* L); /* (96) (0x60) */
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* (104) (0x68) */
};
static_assert(sizeof(lua_Callbacks) == 112, "sizeof(lua_Callbacks) == 112");

struct lua_Page
{
    lua_Page* listprev;
    lua_Page* listnext;

    lua_Page* prev;
    lua_Page* next;

    int pageSize;  // page size in bytes, including page header
    int blockSize; // block size in bytes, including block header (for non-GCO)

    void* freeList; // next free block in this page; linked with metadata()/freegcolink()
    int freeNext;   // next free block offset in this page, in bytes; when negative, freeList is used instead
    int busyBlocks; // number of blocks allocated out of this page

    // provide additional padding based on current object size to provide 16 byte alignment of data
    // later static_assert checks that this requirement is held
    char padding[sizeof(void*) == 8 ? 8 : 12];

    char data[1];
};
