#define CLOSURE_CONT_ENC vmval4
#define LSTATE_STACKSIZE_ENC vmval3
#define PROTO_ABSLINEINFO_ENC vmval4
#define PROTO_DEBUGINSN_ENC vmval3
#define PROTO_DEBUGNAME_ENC vmval3
#define PROTO_LINEINFO_ENC vmval3
#define PROTO_LOCVARS_ENC vmval3
#define PROTO_SOURCE_ENC vmval1
#define PROTO_TYPEINFO_ENC vmval3
#define PROTO_UPVALUES_ENC vmval2
#define PROTO_USERDATA_ENC vmval2
#define TSTRING_HASH_ENC vmval1
#define UDATA_META_ENC vmval1

#define CommonHeader \
    uint8_t tt; \
    uint8_t memcat; \
    uint8_t marked

struct LuaTable {
    CommonHeader; /* (0) (0x0) */
    uint8_t lsizenode; /* (3) (0x3) */
    uint8_t readonly; /* (4) (0x4) */
    uint8_t nodemask8; /* (5) (0x5) */
    uint8_t tmcache; /* (6) (0x6) */
    uint8_t safeenv; /* (7) (0x7) */
    int sizearray; /* (8) (0x8) */
    union {
        int lastfree;
        int aboundary;
    }; /* (12) (0xC) */
    LuaTable* metatable; /* (16) (0x10) */
    TValue* array; /* (24) (0x18) */
    GCObject* gclist; /* (32) (0x20) */
    LuaNode* node; /* (40) (0x28) */
};
static_assert(sizeof(LuaTable) == 48, "sizeof(LuaTable) == 48");

struct global_State {
    size_t GCthreshold; /* (0) (0x0) */
    size_t totalbytes; /* (8) (0x8) */
    GCObject* gray; /* (16) (0x10) */
    GCObject* weak; /* (24) (0x18) */
    GCObject* grayagain; /* (32) (0x20) */
    int gcgoal; /* (40) (0x28) */
    int gcstepmul; /* (44) (0x2C) */
    int gcstepsize; /* (48) (0x30) */
    char gap_0[0x4];
    lua_Alloc frealloc; /* (56) (0x38) */
    void* ud; /* (64) (0x40) */
    unsigned char currentwhite; /* (72) (0x48) */
    unsigned char gcstate; /* (73) (0x49) */
    char gap_1[0x6];
    stringtable strt; /* (80) (0x50) */
    lua_State* mainthread; /* (96) (0x60) */
    lua_Page* freegcopages[40]; /* (104) (0x68) */
    lua_Page* allpages; /* (424) (0x1A8) */
    lua_Page* freepages[40]; /* (432) (0x1B0) */
    UpVal uvhead; /* (752) (0x2F0) */
    lua_Page* allgcopages; /* (792) (0x318) */
    lua_Page* sweepgcopage; /* (800) (0x320) */
    TString* tmname[TM_N]; /* (808) (0x328) */
    TString* ttname[LUA_T_COUNT]; /* (976) (0x3D0) */
    LuaTable* mt[LUA_T_COUNT]; /* (1088) (0x440) */
    lua_CageAlloc cagealloc; /* (1200) (0x4B0) */
    lua_Page* sweepgcopage_cage; /* (1208) (0x4B8) */
    lua_Page* freegcopages_cage[40]; /* (1216) (0x4C0) */
    lua_Page* allgcopages_cage; /* (1536) (0x600) */
    struct lua_jmpbuf* errorjmp; /* (1544) (0x608) */
    TValue pseudotemp; /* (1552) (0x610) */
    TValue registry; /* (1568) (0x620) */
    registryfree_t registryfree; /* (1584) (0x630) */
    char gap_2[0x4];
    lua_Callbacks cb; /* (1592) (0x638) */
    unsigned __int64 ptrenckey[4]; /* (1704) (0x6A8) */
    unsigned __int64 rngstate; /* (1736) (0x6C8) */
    void* cageud; /* (1744) (0x6D0) */
    lua_ExecutionCallbacks ecb; /* (1752) (0x6D8) */
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; /* (1824) (0x720) */
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; /* (2336) (0x920) */
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; /* (11696) (0x2DB0) */
    void (*udatagc[LUA_UTAG_LIMIT])(struct lua_State*, void*); /* (13744) (0x35B0) */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; /* (14768) (0x39B0) */
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* (15792) (0x3DB0) */
    TValue weakregistry; /* (16816) (0x41B0) */
    int weakregistryfree; /* (16832) (0x41C0) */
    int weakregistrytop; /* (16836) (0x41C4) */
    lua_EmbedderGc embeddergc; /* (16840) (0x41C8) */
    TString* lightuserdataname[LUA_LUTAG_LIMIT]; /* (16848) (0x41D0) */
    struct LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; /* (17872) (0x45D0) */
    Closure* builtinPcall; /* (18912) (0x49E0) */
    Closure* builtinXpcall; /* (18920) (0x49E8) */
    unsigned __int64 ptrenckeynew[8]; /* (18928) (0x49F0) */
    bool ptrencactive; /* (18992) (0x4A30) */
    char gap_3[0x7];
    struct GCStats gcstats; /* (19000) (0x4A38) */
    unsigned int lastprotoid; /* (19184) (0x4AF0) */
    unsigned int lastclassid; /* (19188) (0x4AF4) */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* offset (19192) (0x4AF8) */
#endif
};
#ifdef LUAI_GCMETRICS
static_assert(sizeof(global_State) == 19664, "sizeof(global_State) == 19664");
#else
static_assert(sizeof(global_State) == 19200, "sizeof(global_State) == 19200");
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
    unsigned char numparams; /* (4) (0x4) */
    unsigned char nups; /* (5) (0x5) */
    unsigned char flags; /* (6) (0x6) */
    unsigned char maxstacksize; /* (7) (0x7) */
    GCObject* gclist; /* (8) (0x8) */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* (16) (0x10) */
    Proto** p; /* (24) (0x18) */
    TValue* k; /* (32) (0x20) */
    unsigned int* code; /* (40) (0x28) */
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; /* (48) (0x30) */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* (56) (0x38) */
    PROTO_USERDATA_ENC<uint64_t*> userdata; /* (64) (0x40) */
    PROTO_SOURCE_ENC<TString*> source; /* (72) (0x48) */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* (80) (0x50) */
    unsigned int* codeentry; /* (88) (0x58) */
    void* execdata; /* (96) (0x60) */
    uintptr_t exectarget; /* (104) (0x68) */
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; /* (112) (0x70) */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* (120) (0x78) */
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; /* (128) (0x80) */
    int sizetypeinfo; /* (136) (0x88) */
    int sizelineinfo; /* (140) (0x8C) */
    int sizeupvalues; /* (144) (0x90) */
    int sizecode; /* (148) (0x94) */
    int sizek; /* (152) (0x98) */
    int sizep; /* (156) (0x9C) */
    int linedefined; /* (160) (0xA0) */
    int linegaplog2; /* (164) (0xA4) */
    int bytecodeid; /* (168) (0xA8) */
    int sizelocvars; /* (172) (0xAC) */
    struct FeedbackVectorSlot* feedbackvec; /* (176) (0xB0) */
    int feedbackvecsize; /* (184) (0xB8) */
    int funid; /* (188) (0xBC) */
    Proto* optimized; /* (192) (0xC0) */
    Proto* deoptimized; /* (200) (0xC8) */
    uint64_t cost; /* (208) (0xD0) */
};
static_assert(sizeof(Proto) == 216, "sizeof(Proto) == 216");

struct Closure {
    CommonHeader; /* offset (0) (0x0) */
    unsigned char isC; /* offset (3) (0x3) */
    unsigned char preload; /* offset (4) (0x4) */
    unsigned char nupvalues; /* offset (5) (0x5) */
    unsigned char stacksize; /* offset (6) (0x6) */
    char gap_0[0x1];
    GCObject* gclist; /* offset (8) (0x8) */
    LuaTable* env; /* offset (16) (0x10) */
    union {
        struct {
            lua_CFunction f; /* (0) (0x0) */
            TString* debugname; /* (8) (0x8) */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* (16) (0x10) */
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
    TValue* func; /* (8) (0x8) */
    Proto* p; /* (16) (0x10) */
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
    std::vector<std::shared_ptr<void const>>* needToFree; /* (0) (0x0) */
    RBX::Intrusive::Set<RobloxExtraSpace, RobloxExtraSpace> allThreads; /* (8) (0x8) */
    void* engineContext; /* (24) (0x18) */
    int threadCount; /* (32) (0x20) */
    char gap_0[0x4];
    void* scriptVmState; /* (40) (0x28) */
    void* scriptContext; /* (48) (0x30) */
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
    char gap_1[0x8];
    std::weak_ptr<uintptr_t> script; /* (80) (0x50) */
    std::weak_ptr<RBX::Instance const> InstanceDefiningCapabilities; /* (96) (0x60) */
    RBX::detail::FlyweightData<std::string, void, false>* flyweightPtr; /* (112) (0x70) */
    char gap_2[0x18];
    std::weak_ptr<uintptr_t> actor; /* (144) (0x90) */
    uint64_t capabilities; /* (160) (0xA0) */
    char gap_3[0x10];
};
static_assert(sizeof(RobloxExtraSpace) == 184, "sizeof(RobloxExtraSpace) == 184");

struct lua_State {
    CommonHeader; /* (0) (0x0) */
    uint8_t status; /* (3) (0x3) */
    bool singlestep; /* (4) (0x4) */
    bool isactive; /* (5) (0x5) */
    uint8_t activememcat; /* (6) (0x6) */
    char gap_0[0x1];
    struct RobloxExtraSpace* userdata; /* (8) (0x8) */
    unsigned short nCcalls; /* (16) (0x10) */
    unsigned short baseCcalls; /* (18) (0x12) */
    unsigned int cachedslot; /* (20) (0x14) */
    UpVal* openupval; /* (24) (0x18) */
    CallInfo* end_ci; /* (32) (0x20) */
    CallInfo* base_ci; /* (40) (0x28) */
    LuaTable* finalizers; /* (48) (0x30) */
    TValue* stack_last; /* (56) (0x38) */
    CallInfo* ci; /* (64) (0x40) */
    TValue* base; /* (72) (0x48) */
    global_State* global; /* (80) (0x50) */
    TValue* top; /* (88) (0x58) */
    TValue* stack; /* (96) (0x60) */
    TString* namecall; /* (104) (0x68) */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* (112) (0x70) */
    int size_ci; /* (116) (0x74) */
    GCObject* gclist; /* (120) (0x78) */
    LuaTable* gt; /* (128) (0x80) */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

struct stringtable {
    TString** hash; /* (0) (0x0) */
    int size; /* (8) (0x8) */
    uint32_t nuse; /* (12) (0xC) */
};
static_assert(sizeof(stringtable) == 16, "sizeof(stringtable) == 16");

struct lua_Callbacks {
    void* userdata; /* (0) (0x0) */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* (8) (0x8) */
    void (*userthread)(lua_State* LP, lua_State* L); /* (16) (0x10) */
    void (*debugprotectederror)(lua_State* L); // GUESS
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* (32) (0x20) */
    void (*postresume)(lua_State* L); /* (40) (0x28) */
    void (*onfree)(lua_State* L, void* block); /* (48) (0x30) */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // GUESS
    void (*userfinalizer)(lua_State* L, lua_State* co); // GUESS
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); /* (72) (0x48) */
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* (80) (0x50) */
    void (*preresume)(lua_State* L); /* (88) (0x58) */
    void (*panic)(lua_State* L, int errcode); // GUESS
    void (*interrupt)(lua_State* L, int gc);  // GUESS
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
