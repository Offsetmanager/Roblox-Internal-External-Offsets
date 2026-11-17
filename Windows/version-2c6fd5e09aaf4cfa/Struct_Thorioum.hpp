#define CLOSURE_CONT_ENC vmval3
#define LSTATE_STACKSIZE_ENC vmval1
#define PROTO_ABSLINEINFO_ENC vmval1
#define PROTO_DEBUGINSN_ENC vmval2
#define PROTO_DEBUGNAME_ENC vmval4
#define PROTO_LINEINFO_ENC vmval4
#define PROTO_LOCVARS_ENC vmval2
#define PROTO_SOURCE_ENC vmval4
#define PROTO_TYPEINFO_ENC vmval1
#define PROTO_UPVALUES_ENC vmval1
#define PROTO_USERDATA_ENC vmval4
#define TSTRING_HASH_ENC vmval4
#define UDATA_META_ENC vmval4

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
    struct LuaTable* metatable; /* (16) (0x10) */
    GCObject* gclist; /* (24) (0x18) */
    TValue* array; /* (32) (0x20) */
    LuaNode* node; /* (40) (0x28) */
};
static_assert(sizeof(LuaTable) == 48, "sizeof(LuaTable) == 48");

struct global_State {
    stringtable strt; /* (0) (0x0) */
    lua_Alloc frealloc; /* (32) (0x20) */
    void* ud; /* (40) (0x28) */
    size_t GCthreshold; /* (48) (0x30) */
    size_t totalbytes; /* (56) (0x38) */
    GCObject* gray; /* (64) (0x40) */
    GCObject* weak; /* (72) (0x48) */
    GCObject* grayagain; /* (80) (0x50) */
    uint8_t currentwhite; /* (88) (0x58) */
    uint8_t gcdisabled; /* (89) (0x59) */
    uint8_t gcstate; /* (90) (0x5A) */
    char gap_0[0x1];
    int gcgoal; /* (92) (0x5C) */
    int gcstepmul; /* (96) (0x60) */
    int gcstepsize; /* (100) (0x64) */
    struct lua_Page* freepages[LUA_SIZECLASSES]; /* (104) (0x68) */
    struct lua_Page* allgcopages; /* (424) (0x1A8) */
    struct lua_Page* freegcopages[LUA_SIZECLASSES]; /* (432) (0x1B0) */
    struct lua_State* mainthread; /* (752) (0x2F0) */
    struct lua_Page* allpages; /* (760) (0x2F8) */
    struct lua_Page* sweepgcopage; /* (768) (0x300) */
    UpVal uvhead; /* (776) (0x308) */
    struct LuaTable* mt[LUA_T_COUNT]; /* (816) (0x330) */
    TString* tmname[TM_N]; /* (920) (0x398) */
    TString* ttname[LUA_T_COUNT]; /* (1088) (0x440) */
    lua_CageAlloc cagealloc; /* (1192) (0x4A8) */
    struct lua_Page* allgcopages_cage; /* (1200) (0x4B0) */
    struct lua_Page* freegcopages_cage[LUA_SIZECLASSES]; /* (1208) (0x4B8) */
    struct lua_Page* sweepgcopage_cage; /* (1528) (0x5F8) */
    void* cageud; /* (1536) (0x600) */
    TValue pseudotemp; /* (1544) (0x608) */
    TValue registry; /* (1560) (0x618) */
    registryfree_t registryfree; /* (1576) (0x628) */
    char gap_1[0x4];
    lua_Callbacks cb; /* (1584) (0x630) */
    uint64_t ptrenckey[4]; /* (1696) (0x6A0) */
    uint64_t rngstate; /* (1728) (0x6C0) */
    struct lua_jmpbuf* errorjmp; /* (1736) (0x6C8) */
    lua_ExecutionCallbacks ecb; /* (1744) (0x6D0) */
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; /* (1840) (0x730) */
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; /* (2352) (0x930) */
    LuauPageset taggedpageset[TAGGED_PAGESET_SIZE]; /* (11712) (0x2DC0) */
    int sweeppageset; /* (14400) (0x3848) */
    char gap_2[0x4];
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; /* (14408) (0x3848) */
    void (*udatagc[LUA_UTAG_LIMIT])(struct lua_State*, void*); /* (16456) (0x4048) */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; /* (17480) (0x4448) */
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* (18504) (0x4848) */
    TValue weakregistry; /* (19528) (0x4C48) */
    int weakregistryfree; /* (19544) (0x4C58) */
    int weakregistrytop;  /* (19548) (0x4C5C) */
    lua_EmbedderGc embeddergc;  /* (19552) (0x4C60) */
    TString* lightuserdataname[LUA_LUTAG_LIMIT]; /* (19560) (0x4C68) */
    struct LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; /* (20584) (0x5068) */
    struct Closure* builtinPcall; /* (21624) (0x5478) */
    struct Closure* builtinXpcall; /* (21632) (0x5480) */
    uint64_t ptrenckeynew[8]; /* (21640) (0x5488) */
    bool ptrencactive; /* (21704) (0x54C8) */
    char gap_3[0x7];
    GCStats gcstats; /* (21712) (0x54D0) */
    uint32_t lastprotoid; /* (21896) (0x5588) */
    uint32_t lastclassid; /* (21900) (0x558C) */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* (21904) (0x5590) */
#endif
};
#ifdef LUAI_GCMETRICS
static_assert(sizeof(global_State) == 22384, "sizeof(global_State) == 22384");
#else
static_assert(sizeof(global_State) == 21904, "sizeof(global_State) == 21904");
#endif

struct Udata {
    CommonHeader; /* (0) (0x0) */
    uint8_t tag; /* (3) (0x3) */
    int len; /* (4) (0x4) */
    UDATA_META_ENC<struct LuaTable*> metatable; /* (8) (0x8) */
    alignas(8) char data[1]; /* (16) (0x10) */
};
static_assert(sizeof(Udata) == 24, "sizeof(Udata) == 24");

struct TString {
    CommonHeader; /* (0) (0x0) */
    char gap_0[0x1];
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
    uint8_t maxstacksize; /* (3) (0x3) */
    uint8_t numparams; /* (4) (0x4) */
    uint8_t is_vararg; /* (5) (0x5) */
    uint8_t flags; /* (6) (0x6) */
    uint8_t nups; /* (7) (0x7) */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* (8) (0x8) */
    struct Proto** p; /* (16) (0x10) */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* (24) (0x18) */
    const Instruction* codeentry; /* (32) (0x20) */
    PROTO_USERDATA_ENC<uint64_t*> userdata; /* (40) (0x28) */
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; /* (48) (0x30) */
    uint8_t execflags; /* (56) (0x38) */
    char gap_0[0x7];
    PROTO_SOURCE_ENC<TString*> source; /* (64) (0x40) */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* (72) (0x48) */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* (80) (0x50) */
    uint32_t execcount; /* (88) (0x58) */
    char gap_1[0x4];
    void* execdata; /* (96) (0x60) */
    uintptr_t exectarget; /* (104) (0x68) */
    TValue* k; /* (112) (0x70) */
    Instruction* code; /* (120) (0x78) */
    GCObject* gclist; /* (128) (0x80) */
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; /* (136) (0x88) */
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; /* (144) (0x90) */
    int sizetypeinfo; /* (152) (0x98) */
    int linegaplog2; /* (156) (0x9C) */
    int sizelineinfo; /* (160) (0xA0) */
    int sizelocvars; /* (164) (0xA4) */
    int linedefined; /* (168) (0xA8) */
    int sizecode; /* (172) (0xAC) */
    int bytecodeid; /* (176) (0xB0) */
    int sizep; /* (180) (0xB4) */
    int sizek; /* (184) (0xB8) */
    int sizeupvalues; /* (188) (0xBC) */
    FeedbackVectorSlot* feedbackvec; /* (192) (0xC0) */
    uint32_t feedbackvecsize; /* (200) (0xC8) */
    uint32_t funid; /* (204) (0xCC) */
    Proto* optimized; /* (208) (0xD0) */
    Proto* deoptimized; /* (216) (0xD8) */
    uint64_t cost; /* (224) (0xE0) */
    struct LuauLazyChunk* lazychunk; /* (232) (0xE8) */
};
static_assert(sizeof(Proto) == 240, "sizeof(Proto) == 240");

struct Closure {
    CommonHeader; /* offset (0) (0x0) */
    uint8_t stacksize; /* offset (3) (0x3) */
    uint8_t nupvalues; /* offset (4) (0x4) */
    uint8_t preload; /* offset (5) (0x5) */
    uint8_t isC; /* offset (6) (0x6) */
    char gap_0[0x1];
    GCObject* gclist; /* offset (8) (0x8) */
    struct LuaTable* env; /* offset (16) (0x10) */
    union {
        struct {
            TString* debugname; /* (0) (0x0) */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* (8) (0x8) */
            lua_CFunction f; /* (16) (0x10) */
            TValue upvals[1]; /* (24) (0x18) */
        } c;
        struct {
            struct Proto* p; /* (0) (0x0) */
            TValue uprefs[1]; /* (8) (0x8) */
        } l;
    };
};
static_assert(sizeof(Closure) == 64, "sizeof(Closure) == 64");

struct CallInfo {
    Proto* p; /* (0) (0x0) */
    StkId func; /* (8) (0x8) */
    StkId base; /* (16) (0x10) */
    StkId top; /* (24) (0x18) */
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
    int threadCount; /* (0) (0x0) */
    char gap_0[0x4];
    void* scriptContext; /* (8) (0x8) */
    void* engineContext; /* (16) (0x10) */
    std::vector<std::shared_ptr<void const>>* needToFree; /* (24) (0x18) */
    RBX::Intrusive::Set<RobloxExtraSpace, RobloxExtraSpace> allThreads; /* (32) (0x20) */
    void* scriptVmState; /* (48) (0x30) */
};
static_assert(sizeof(Shared) == 56, "sizeof(Shared) == 56");

struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* (0) (0x0) */
    RBX::Intrusive::Set<RobloxExtraSpace, RobloxExtraSpace>* _container; /* (8) (0x8) */
    RobloxExtraSpace* prev; /* (16) (0x10) */
    std::shared_ptr<Shared> shared; /* (24) (0x18) */
    char gap_0[0x8];
    RBX::Identity identity; /* (48) (0x30) */
    void* scriptContext; /* (64) (0x40) */
    uint64_t capabilities; /* (72) (0x48) */
    char gap_1[0x18];
    std::weak_ptr<uintptr_t> script; /* (104) (0x68) */
    std::weak_ptr<uintptr_t> actor; /* (120) (0x78) */
    std::weak_ptr<RBX::Instance const> InstanceDefiningCapabilities; /* (136) (0x88) */
    char gap_2[0x20];
};
static_assert(sizeof(RobloxExtraSpace) == 184, "sizeof(RobloxExtraSpace) == 184");

struct lua_State {
    CommonHeader; /* (0) (0x0) */
    uint8_t status; /* (3) (0x3) */
    uint8_t activememcat; /* (4) (0x4) */
    bool isactive; /* (5) (0x5) */
    bool singlestep; /* (6) (0x6) */
    char gap_0[0x1];
    GCObject* gclist; /* (8) (0x8) */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* (16) (0x10) */
    int size_ci; /* (20) (0x14) */
    CallInfo* end_ci; /* (24) (0x18) */
    CallInfo* base_ci; /* (32) (0x20) */
    TString* namecall; /* (40) (0x28) */
    unsigned short nCcalls; /* (48) (0x30) */
    unsigned short baseCcalls; /* (50) (0x32) */
    int cachedslot; /* (52) (0x34) */
    LuaTable* finalizers; /* (56) (0x38) */
    UpVal* openupval; /* (64) (0x40) */
    struct RobloxExtraSpace* userdata; /* (72) (0x48) */
    LuaTable* gt; /* (80) (0x50) */
    CallInfo* ci; /* (88) (0x58) */
    StkId stack_last; /* (96) (0x60) */
    global_State* global; /* (104) (0x68) */
    StkId stack; /* (112) (0x70) */
    StkId base; /* (120) (0x78) */
    StkId top; /* (128) (0x80) */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

struct stringtable {
    uint32_t saltmult; /* (0) (0x0) */
    uint32_t saltadd; /* (4) (0x4) */
    uint8_t hashshift; /* (8) (0x8) */
    TString** hash; /* (16) (0x10) */
    uint32_t nuse; /* (24) (0x18) */
    int size; /* (28) (0x1C) */
};
static_assert(sizeof(stringtable) == 32, "sizeof(stringtable) == 32");

struct lua_Callbacks {
    void* userdata; /* (0) (0x0) */
    void (*panic)(lua_State* L, int errcode); // GUESS
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* (16) (0x10) */
    void (*postresume)(lua_State* L); /* (24) (0x18) */
    void (*interrupt)(lua_State* L, int gc); // GUESS
    void (*userthread)(lua_State* LP, lua_State* L); /* (40) (0x28) */
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); /* (48) (0x30) */
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* (56) (0x38) */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* (64) (0x40) */
    void (*onfree)(lua_State* L, void* block); /* (72) (0x48) */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // GUESS
    void (*debugprotectederror)(lua_State* L); // GUESS
    void (*preresume)(lua_State* L); /* (96) (0x60) */
    void (*userfinalizer)(lua_State* L, lua_State* co); /* (104) (0x68) */
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

    int flags;

    // provide additional padding based on current object size to provide 16 byte alignment of data
    // later static_assert checks that this requirement is held
    char padding[sizeof(void*) == 8 ? 4 : 8];

    union
    {
        char data[1];
        char* dataptr;
    };
};
