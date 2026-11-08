#pragma once
#include <Roblox/EncryptionsHelper.hpp>

#define PROTO_LINEINFO_ENC      VMValue3
#define PROTO_LOCVARS_ENC       VMValue2
#define PROTO_UPVALUES_ENC      VMValue2
#define PROTO_DEBUGINSN_ENC     VMValue4
#define PROTO_TYPEINFO_ENC      VMValue4
#define PROTO_SOURCE_ENC        VMValue1
#define PROTO_ABSLINEINFO_ENC   VMValue4
#define PROTO_DEBUGNAME_ENC     VMValue4
#define PROTO_USERDATA_ENC      VMValue3
#define UDATA_META_ENC          VMValue2
#define CLOSURE_DEBUGNAME_ENC   VMValue0
#define CLOSURE_CONT_ENC        VMValue4
#define TSTRING_HASH_ENC        VMValue2
#define LSTATE_STACKSIZE_ENC    VMValue1
#define PROTO_P_ENC             VMValue0

#define CommonHeader \
    uint8_t marked; \
    uint8_t tt; \
    uint8_t memcat

struct LuaTable {
    CommonHeader; // 0x0
    uint8_t tmcache; // 0x3
    uint8_t safeenv; // 0x4
    uint8_t nodemask8; // 0x5
    uint8_t readonly; // 0x6
    uint8_t lsizenode; // 0x7
    int sizearray; // 0x8
    union {
        int lastfree; // 0xC
        int aboundary; // 0xC
    }; // 0xC
    LuaTable* metatable; // 0x10
    GCObject* gclist; // 0x18
    LuaNode* node; // 0x20
    TValue* array; // 0x28
};

struct stringtable {
    uint32_t hashadd; // 0x0
    uint32_t nuse; // 0x4
    int size; // 0x8
    TString** hash; // 0x10
    uint32_t hashmul; // 0x18
    uint8_t hashshift; // 0x1C
};

struct TValue {
    Value value; // 0x0
    int32_t extra[1]; // 0x8
    int tt; // 0xC
};

struct UpVal {
    CommonHeader; // 0x0
    uint8_t markedopen; // 0x3
    TValue* v; // 0x8
    struct {
        union {
            struct {
                UpVal* prev; // 0x10
                UpVal* next; // 0x18
                UpVal* threadnext; // 0x20
            } open; // 0x10
            TValue value; // 0x10
        }; // 0x10
    } u; // 0x10
};

struct lua_Callbacks {
    void* userdata; // 0x0
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); // 0x8
    char gap_0[0x8];
    void (*debugprotectederror)(lua_State* L); // 0x18
    void (*userthread)(lua_State* LP, lua_State* L); // 0x20
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); // 0x28
    void (*preresume)(lua_State* L); // 0x30
    void (*debugstep)(lua_State* L, lua_Debug* ar); // 0x38
    void (*postresume)(lua_State* L); // 0x40
    void (*onfree)(lua_State* L, void* block); // 0x48
    void (*userfinalizer)(lua_State* L, lua_State* co); // 0x50
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // 0x58
    void (*interrupt)(lua_State* L, int gc); // 0x60
    void (*debugbreak)(lua_State* L, lua_Debug* ar); // 0x68
};

struct global_State {
    unsigned char currentwhite; // 0x0
    uint8_t gcpaused; // 0x1
    unsigned char gcstate; // 0x2
    lua_Alloc frealloc; // 0x8
    void* ud; // 0x10
    int gcstepsize; // 0x18
    int gcstepmul; // 0x1C
    int gcgoal; // 0x20
    GCObject* gray; // 0x28
    GCObject* grayagain; // 0x30
    GCObject* weak; // 0x38
    stringtable strt; // 0x40
    size_t GCthreshold; // 0x60
    size_t totalbytes; // 0x68
    lua_Page* sweepgcopage; // 0x70
    lua_State* mainthread; // 0x78
    UpVal uvhead; // 0x80
    lua_Page* allgcopages; // 0xA8
    lua_Page* freepages[40]; // 0xB0
    lua_Page* freegcopages[40]; // 0x1F0
    char gap_0[0x8];
    LuaTable* mt[LUA_T_COUNT]; // 0x338
    TString* ttname[LUA_T_COUNT]; // 0x3A8
    TString* tmname[TM_N]; // 0x418
    lua_Page* freegcopages_cage[40]; // 0x4C0
    void* cageud; // 0x600
    lua_Page* allgcopages_cage; // 0x608
    lua_CageAlloc cagealloc; // 0x610
    lua_Page* sweepgcopage_cage; // 0x618
    TValue pseudotemp; // 0x620
    TValue registry; // 0x630
    registryfree_value registryfree; // 0x640
    alignas(16) uint64_t ptrenckey[4]; // 0x650
    lua_Callbacks cb; // 0x670
    unsigned __int64 rngstate; // 0x6E0
    lua_ExecutionCallbacks ecb; // 0x6E8
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; // 0x740
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; // 0x940
    LuauPageset taggedpageset[8]; // 0x2DD0
    int sweeppageset; // 0x3850
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; // 0x3858
    void (*udatagc[LUA_UTAG_LIMIT])(struct lua_State*, void*); // 0x4058
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; // 0x4458
    LuaTable* udatamt[LUA_UTAG_LIMIT]; // 0x4858
    TValue weakregistry; // 0x4C58
    int weakregistryfree; // 0x4C68
    int weakregistrytop; // 0x4C6C
    lua_EmbedderGc embeddergc; // 0x4C70
    TString* lightuserdataname[LUA_LUTAG_LIMIT]; // 0x4C78
    struct LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; // 0x5078
    Closure* builtinPcall; // 0x5488
    Closure* builtinXpcall; // 0x5490
    unsigned __int64 ptrenckeynew[8]; // 0x5498
    bool ptrencactive; // 0x54D8
    struct GCStats gcstats; // 0x54E0
    unsigned int lastprotoid; // 0x5598
    unsigned int lastclassid; // 0x559C
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; // 0x55A0
#endif
};

struct Udata {
    CommonHeader; // 0x0
    unsigned char tag; // 0x3
    int len; // 0x4
    UDATA_META_ENC<struct LuaTable*> metatable; // 0x8
    char data[1]; // 0x10
};

struct TString {
    CommonHeader; // 0x0
    uint16_t lowBits; // 0x4
    int16_t atom; // 0x6
    TString* next; // 0x8
    TSTRING_HASH_ENC<unsigned int> hash; // 0x10
    unsigned int len; // 0x14
    char data[1]; // 0x18
};

struct Proto {
    CommonHeader; // 0x0
    unsigned char is_vararg; // 0x3
    unsigned char maxstacksize; // 0x4
    unsigned char nups; // 0x5
    unsigned char flags; // 0x6
    unsigned char numparams; // 0x7
    void* execdata; // 0x8
    uintptr_t exectarget; // 0x10
    uint8_t execflags; // 0x18
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x20
    uint32_t execcount; // 0x28
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x30
    GCObject* gclist; // 0x38
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x40
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x48
    PROTO_P_ENC<Proto**> p; // 0x50
    PROTO_SOURCE_ENC<TString*> source; // 0x58
    TValue* k; // 0x60
    unsigned int* code; // 0x68
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x70
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x78
    PROTO_USERDATA_ENC<uint64_t*> userdata; // 0x80
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x88
    unsigned int* codeentry; // 0x90
    int sizeupvalues; // 0x98
    int sizelocvars; // 0x9C
    int sizep; // 0xA0
    int linedefined; // 0xA4
    int sizecode; // 0xA8
    int sizek; // 0xAC
    int sizelineinfo; // 0xB0
    int bytecodeid; // 0xB4
    int sizetypeinfo; // 0xB8
    int linegaplog2; // 0xBC
    struct FeedbackVectorSlot* feedbackvec; // 0xC0
    uint32_t feedbackvecsize; // 0xC8
    int funid; // 0xCC
    Proto* optimized; // 0xD0
    Proto* deoptimized; // 0xD8
    uint64_t cost; // 0xE0
    void* lazyctx; // 0xE8
};

struct Closure {
    CommonHeader; // 0x0
    unsigned char preload; // 0x3
    unsigned char nupvalues; // 0x4
    unsigned char isC; // 0x5
    unsigned char stacksize; // 0x6
    GCObject* gclist; // 0x8
    LuaTable* env; // 0x10
    union {
        struct {
            CLOSURE_DEBUGNAME_ENC<TString*> debugname; // 0x18
            CLOSURE_CONT_ENC<lua_Continuation> cont; // 0x20
            lua_CFunction f; // 0x28
            TValue upvals[1]; // 0x30
        } c; // 0x18
        struct {
            Proto* p; // 0x18
            TValue uprefs[1]; // 0x20
        } l; // 0x18
    }; // 0x18
};

struct CallInfo {
    TValue* base; // 0x0
    TValue* top; // 0x8
    TValue* func; // 0x10
    Proto* p; // 0x18
    union {
        const Instruction* savedpc; // 0x20
        int errfunc; // 0x20
    }; // 0x20
    int nresults; // 0x28
    unsigned int flags; // 0x2C
};

struct RobloxExtraSpace {
    char gap_0[0x18];
    std::shared_ptr<void> shared; // 0x18
    char gap_1[0x18];
    std::weak_ptr<uintptr_t> Actor; // 0x40
    std::weak_ptr<uintptr_t> Script; // 0x50
    char gap_2[0x10];
    uint32_t Identity; // 0x70
    char gap_3[0xC];
    void* identity_script_context; // 0x80
    char gap_4[0x18];
    uint64_t Capabilities; // 0xA0
    char gap_5[0x18];
};

struct lua_State {
    CommonHeader; // 0x0
    uint8_t status; // 0x3
    bool singlestep; // 0x4
    bool isactive; // 0x5
    uint8_t activememcat; // 0x6
    struct RobloxExtraSpace* userdata; // 0x8
    LuaTable* gt; // 0x10
    TString* namecall; // 0x18
    CallInfo* end_ci; // 0x20
    CallInfo* base_ci; // 0x28
    UpVal* openupval; // 0x30
    unsigned short nCcalls; // 0x38
    unsigned short baseCcalls; // 0x3A
    unsigned int cachedslot; // 0x3C
    GCObject* gclist; // 0x40
    TValue* stack; // 0x48
    global_State* global; // 0x50
    TValue* base; // 0x58
    TValue* top; // 0x60
    TValue* stack_last; // 0x68
    CallInfo* ci; // 0x70
    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x78
    int size_ci; // 0x7C
    LuaTable* finalizers; // 0x80
};

struct lua_Page {
    lua_Page* listprev; // 0x0
    lua_Page* listnext; // 0x8
    lua_Page* prev; // 0x10
    lua_Page* next; // 0x18
    int pageSize; // 0x20
    int blockSize; // 0x24
    void* freeList; // 0x28
    int freeNext; // 0x30
    int busyBlocks; // 0x34
    int flags; // 0x38
    union {
        char data[1]; // 0x40
        char* dataptr; // 0x40
    }; // 0x40
};

struct lua_Debug {
    const char* short_src; // 0x0
    const char* source; // 0x8
    const char* what; // 0x10
    const char* name; // 0x18
    int linedefined; // 0x20
    int protoid; // 0x24
    int currentline; // 0x28
    int bytecodeid; // 0x2C
    void* userdata; // 0x30
    uint8_t nupvals; // 0x38
    uint8_t isvararg; // 0x39
    uint8_t nparams; // 0x3A
    char ssbuf[256]; // 0x3B
};

struct LocVar {
    TString* varname; // 0x0
    int startpc; // 0x8
    int endpc; // 0xC
    uint8_t reg; // 0x10
};

struct Instance {
    void** __vftable; // 0x0
    std::weak_ptr<RBX::Reflection::DescribedBase> _weak_this; // 0x8
    RBX::Reflection::ClassDescriptor* classDescriptor; // 0x18
    char Pad1[0x40];
    Instance* parent; // 0x60
    RBX::Name* name; // 0x68
    std::vector<std::shared_ptr<Instance>>* children; // 0x70
    std::_Ref_count_base* childrenControl; // 0x78
    char Pad2[0x18];
};
