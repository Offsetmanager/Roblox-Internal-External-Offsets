#define CLOSURE_CONT_ENC vmval4
#define LSTATE_STACKSIZE_ENC vmval1
#define PROTO_ABSLINEINFO_ENC vmval4
#define PROTO_DEBUGINSN_ENC vmval4
#define PROTO_DEBUGNAME_ENC vmval4
#define PROTO_LINEINFO_ENC vmval3
#define PROTO_LOCVARS_ENC vmval2
#define PROTO_SOURCE_ENC vmval1
#define PROTO_TYPEINFO_ENC vmval4
#define PROTO_UPVALUES_ENC vmval2
#define PROTO_USERDATA_ENC vmval3
#define TSTRING_HASH_ENC vmval2
#define UDATA_META_ENC vmval2

#define CommonHeader \
    uint8_t marked; \
    uint8_t tt; \
    uint8_t memcat

struct LuaTable {
    CommonHeader; /* (0) (0x0) */
    uint8_t tmcache; /* (3) (0x3) */
    uint8_t safeenv; /* (4) (0x4) */
    uint8_t nodemask8; /* (5) (0x5) */
    uint8_t readonly; /* (6) (0x6) */
    uint8_t lsizenode; /* (7) (0x7) */
    int sizearray; /* (8) (0x8) */
    union {
        int lastfree;
        int aboundary;
    }; /* (12) (0xC) */
    LuaTable* metatable; /* (16) (0x10) */
    GCObject* gclist; /* (24) (0x18) */
    LuaNode* node; /* (32) (0x20) */
    TValue* array; /* (40) (0x28) */
};
static_assert(sizeof(LuaTable) == 48, "sizeof(LuaTable) == 48");

struct global_State {
    unsigned char currentwhite; /* (0) (0x0) */
    char gap_0[0x1]; //new member?
    unsigned char gcstate; /* (2) (0x2) */
    char gap_1[0x5];
    lua_Alloc frealloc; /* (8) (0x8) */
    void* ud; /* (16) (0x10) */
    int gcstepsize; /* (24) (0x18) */
    int gcstepmul; /* (28) (0x1C) */
    int gcgoal; /* (32) (0x20) */
    char gap_2[0x4];
    GCObject* gray; /* (40) (0x28) */
    GCObject* grayagain; /* (48) (0x30) */
    GCObject* weak; /* (56) (0x38) */
    char gap_3[0x8]; //new member?
    stringtable strt; /* (72) (0x48) */
    char gap_4[0x8]; //new member?
    size_t GCthreshold; /* (96) (0x60) */
    size_t totalbytes; /* (104) (0x68) */
    lua_Page* sweepgcopage; /* (112) (0x70) */
    lua_State* mainthread; /* (120) (0x78) */
    UpVal uvhead; /* (128) (0x80) */
    lua_Page* allgcopages; /* (168) (0xA8) */
    lua_Page* freepages[40]; /* (176) (0xB0) */
    lua_Page* freegcopages[40]; /* (496) (0x1F0) */
    lua_Page* allpages; /* (818) (0x330) */
    LuaTable* mt[LUA_T_COUNT]; /* (824) (0x338) */
    TString* ttname[LUA_T_COUNT]; /* (936) (0x3A8) */
    TString* tmname[TM_N]; /* (1048) (0x418) */
    lua_Page* freegcopages_cage[40]; /* (1216) (0x4C0) */
    void* cageud; /* (1536) (0x600) */
    lua_Page* allgcopages_cage; /* (1544) (0x608) */
    lua_CageAlloc cagealloc; /* (1552) (0x610) */
    lua_Page* sweepgcopage_cage; /* (1560) (0x618) */
    TValue pseudotemp; /* (1568) (0x620) */
    TValue registry; /* (1584) (0x630) */
    registryfree_t registryfree; /* (1600) (0x640) */
    char gap_8[0x4];
    struct lua_jmpbuf* errorjmp; /* (1608) (0x648) */
    uint64_t ptrenckey[4]; /* (1616) (0x650) */
    lua_Callbacks cb; /* (1648) (0x670) */
    uint64_t rngstate; /* (1760) (0x6E0) */
    lua_ExecutionCallbacks ecb; /* (1768) (0x6E8) */
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; /* (1856) (0x740) */
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; /* (2368) (0x940) */
    LuauPageset taggedpageset[TAGGED_PAGESET_SIZE];
    int sweeppageset; /* (14416) (0x3850) */
    char gap_22[0x4];
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; /* (14424) (0x3858) */
    void (*udatagc[LUA_UTAG_LIMIT])(struct lua_State*, void*); /* (16472) (0x4058) */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT];
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* (18520) (0x4858) */
    TValue weakregistry;
    int weakregistryfree; 
    int weakregistrytop;
    lua_EmbedderGc embeddergc;
    TString* lightuserdataname[LUA_LUTAG_LIMIT]; /* (19560) (0x4C68) */
    LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; /* (20600) (0x5078) */
    Closure* builtinPcall; /* (21640) (0x5488) */
    Closure* builtinXpcall; /* (21648) (0x5490) */
    uint64_t ptrenckeynew[8]; /* (21656) (0x5498) */
    bool ptrencactive; /* (21720) (0x54D8) */
    char gap_13[0x7];
    GCStats gcstats; /* (21728) (0x54E0) */
    unsigned int lastprotoid; /* (21912) (0x5598) */
    unsigned int lastclassid; /* (21916) (0x559C) */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* (21920) (0x55A0) */
#endif
};
#ifdef LUAI_GCMETRICS
static_assert(sizeof(global_State) == 22400, "sizeof(global_State) == 22400");
#else
static_assert(sizeof(global_State) == 21920, "sizeof(global_State) == 21920");
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
    unsigned char is_vararg; /* (3) (0x3) */
    unsigned char maxstacksize; /* (4) (0x4) */
    unsigned char nups; /* (5) (0x5) */
    unsigned char flags; /* (6) (0x6) */
    unsigned char numparams; /* (7) (0x7) */
    void* execdata; /* (8) (0x8) */
    uintptr_t exectarget; /* (16) (0x10) */
    uint8_t execflags; /* (24) (0x18) */
    char gap_0[0x7];
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* (32) (0x20) */
    uint32_t execcount; /* (40) (0x28) */
    char gap_1[0x4];
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; /* (48) (0x30) */
    GCObject* gclist; /* (56) (0x38) */
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; /* (64) (0x40) */
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; /* (72) (0x48) */
    Proto** p; /* (80) (0x50) */
    PROTO_SOURCE_ENC<TString*> source; /* (88) (0x58) */
    TValue* k; /* (96) (0x60) */
    unsigned int* code; /* (104) (0x68) */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* (112) (0x70) */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* (120) (0x78) */
    PROTO_USERDATA_ENC<uint64_t*> userdata; /* (128) (0x80) */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* (136) (0x88) */
    unsigned int* codeentry; /* (144) (0x90) */
    int sizeupvalues; /* (152) (0x98) */
    int sizelocvars; /* (156) (0x9C) */
    int sizep; /* (160) (0xA0) */
    int linedefined; /* (164) (0xA4) */
    int sizecode; /* (168) (0xA8) */
    int sizek; /* (172) (0xAC) */
    int sizelineinfo; /* (176) (0xB0) */
    int bytecodeid; /* (180) (0xB4) */
    int sizetypeinfo; /* (184) (0xB8) */
    int linegaplog2; /* (188) (0xBC) */
    struct FeedbackVectorSlot* feedbackvec; /* (192) (0xC0) */
    int feedbackvecsize; /* (200) (0xC8) */
    int funid; /* (204) (0xCC) */
    Proto* optimized; /* (208) (0xD0) */
    Proto* deoptimized; /* (216) (0xD8) */
    uint64_t cost; /* (224) (0xF0) */
    void* newmember; /* (232) (0xE8) */
};
static_assert(sizeof(Proto) == 240, "sizeof(Proto) == 240");

struct Closure {
    CommonHeader; /* offset (0) (0x0) */
    unsigned char preload; /* offset (3) (0x3) */
    unsigned char nupvalues; /* offset (4) (0x4) */
    unsigned char isC; /* offset (5) (0x5) */
    unsigned char stacksize; /* offset (6) (0x6) */
    char gap_0[0x1];
    GCObject* gclist; /* offset (8) (0x8) */
    LuaTable* env; /* offset (16) (0x10) */
    union {
        struct {
            TString* debugname; /* (0) (0x0) */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* (8) (0x8) */
            lua_CFunction f; /* (16) (0x10) */
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
    TValue* base; /* (0) (0x0) */
    TValue* top; /* (8) (0x8) */
    TValue* func; /* (16) (0x10) */
    Proto* p; /* (24) (0x18) */
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
    void* engineContext; /* (16) (0x10) */
    void* scriptContext; /* (24) (0x18) */
    int threadCount; /* (32) (0x20) */
    char gap_0[0x4];
    void* scriptVmState; /* (40) (0x28) */
    std::vector<std::shared_ptr<void const>>* needToFree; /* (48) (0x30) */
};
static_assert(sizeof(Shared) == 56, "sizeof(Shared) == 56");

struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* (0) (0x0) */
    RBX::Intrusive::Set<RobloxExtraSpace, RobloxExtraSpace>* _container; /* (8) (0x8) */
    RobloxExtraSpace* prev; /* (16) (0x10) */
    std::shared_ptr<Shared> shared; /* (24) (0x18) */
    char gap_0[0x18];
    std::weak_ptr<uintptr_t> actor; /* (64) (0x40) */
    std::weak_ptr<uintptr_t> script; /* (80) (0x50) */
    std::weak_ptr<RBX::Instance const> InstanceDefiningCapabilities; /* (96) (0x60) */
    RBX::Identity identity; /* (112) (0x70) */
    void* scriptContext; /* (128) (0x80) */
    char gap_1[0x18];
    uint64_t capabilities; /* (160) (0xA0) */
    char gap_2[0x18];
};
static_assert(sizeof(RobloxExtraSpace) == 192, "sizeof(RobloxExtraSpace) == 192");

struct lua_State {
    CommonHeader; /* (0) (0x0) */
    uint8_t status; /* (3) (0x3) */
    bool singlestep; /* (4) (0x4) */
    bool isactive; /* (5) (0x5) */
    uint8_t activememcat; /* (6) (0x6) */
    char gap_0[0x1];
    struct RobloxExtraSpace* userdata; /* (8) (0x8) */
    LuaTable* gt; /* (16) (0x10) */
    TString* namecall; /* (24) (0x18) */
    CallInfo* end_ci; /* (32) (0x20) */
    CallInfo* base_ci; /* (40) (0x28) */
    UpVal* openupval; /* (48) (0x30) */
    unsigned short nCcalls; /* (56) (0x38) */
    unsigned short baseCcalls; /* (58) (0x3A) */
    unsigned int cachedslot; /* (60) (0x3C) */
    GCObject* gclist; /* (64) (0x40) */
    TValue* stack; /* (72) (0x48) */
    global_State* global; /* (80) (0x50) */
    TValue* base; /* (88) (0x58) */
    TValue* top; /* (96) (0x60) */
    TValue* stack_last; /* (104) (0x68) */
    CallInfo* ci; /* (112) (0x70) */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* (120) (0x78) */
    int size_ci; /* (124) (0x7C) */
    LuaTable* finalizers; /* (128) (0x80) */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

struct stringtable {
    int size; /* (0) (0x0) */
    uint32_t nuse; /* (4) (0x4) */
    TString** hash; /* (8) (0x8) */
};
static_assert(sizeof(stringtable) == 16, "sizeof(stringtable) == 16");

struct lua_Callbacks {
    void* userdata; /* (0) (0x0) */
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* (8) (0x8) */
    void (*debugprotectederror)(lua_State* L); // GUESS
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // GUESS
    void (*userthread)(lua_State* LP, lua_State* L); /* (32) (0x20) */
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); /* (40) (0x28) */
    void (*preresume)(lua_State* L); /* (48) (0x30) */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* (56) (0x38) */
    void (*postresume)(lua_State* L); /* (64) (0x40) */
    void (*onfree)(lua_State* L, void* block); /* (72) (0x48) */
    void (*userfinalizer)(lua_State* L, lua_State* co); /* (80) (0x50) */
    void (*panic)(lua_State* L, int errcode); // GUESS
    void (*interrupt)(lua_State* L, int gc);  // GUESS
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
