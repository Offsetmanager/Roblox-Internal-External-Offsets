#pragma once
#include <Roblox/EncryptionsHelper.hpp>

#define PROTO_LINEINFO_ENC      VMValue3
#define PROTO_LOCVARS_ENC       VMValue1
#define PROTO_UPVALUES_ENC      VMValue3
#define PROTO_DEBUGINSN_ENC     VMValue4
#define PROTO_TYPEINFO_ENC      VMValue3
#define PROTO_SOURCE_ENC        VMValue1
#define PROTO_ABSLINEINFO_ENC   VMValue2
#define PROTO_DEBUGNAME_ENC     VMValue1
#define PROTO_USERDATA_ENC      VMValue1
#define UDATA_META_ENC          VMValue1
#define CLOSURE_DEBUGNAME_ENC   VMValue0
#define CLOSURE_CONT_ENC        VMValue3
#define TSTRING_HASH_ENC        VMValue1
#define LSTATE_STACKSIZE_ENC    VMValue3
#define PROTO_P_ENC             VMValue0

#define CommonHeader \
    uint8_t marked; \
    uint8_t memcat; \
    uint8_t tt

struct LuaTable {
    CommonHeader; // 0x0
    uint8_t tmcache; // 0x3
    uint8_t safeenv; // 0x4
    uint8_t nodemask8; // 0x5
    uint8_t lsizenode; // 0x6
    uint8_t readonly; // 0x7
    int sizearray; // 0x8
    union {
        int lastfree; // 0xC
        int aboundary; // 0xC
    }; // 0xC
    struct LuaTable* metatable; // 0x10
    TValue* array; // 0x18
    LuaNode* node; // 0x20
    GCObject* gclist; // 0x28
};

struct stringtable {
    TString** hash; // 0x0
    uint32_t nuse; // 0x8
    int size; // 0xC
};

struct TValue {
    Value value; // 0x0
    int32_t extra[1]; // 0x8
    int tt; // 0xC
};

struct UpVal {
    CommonHeader; // 0x0
    uint8_t markedopen; // 0x3
    char gap_0[0x4];
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
    void (*debugbreak)(lua_State* L, lua_Debug* ar); // 0x8
    void (*postresume)(lua_State* L); // 0x10
    void (*debugstep)(lua_State* L, lua_Debug* ar); // 0x18
    int16_t (*useratom)(lua_State* L, const char* s, size_t l); // 0x20
    char gap_0[0x8];
    void (*preresume)(lua_State* L); // 0x30
    void (*debugprotectederror)(lua_State* L); // 0x38
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // 0x40
    void (*onfree)(lua_State* L, void* block); // 0x48
    char gap_1[0x8];
    void (*interrupt)(lua_State* L, int gc); // 0x58
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); // 0x60
    void (*userfinalizer)(lua_State* L, lua_State* co); // 0x68
};


struct global_State {
    stringtable strt; // 0x0
    unsigned char currentwhite; // 0x10
    unsigned char gcstate; // 0x11
    char gap_0[0x2];
    int gcgoal; // 0x14
    int gcstepmul; // 0x18
    int gcstepsize; // 0x1C
    lua_Alloc frealloc; // 0x20
    void* ud; // 0x28
    GCObject* gray; // 0x30
    GCObject* grayagain; // 0x38
    GCObject* weak; // 0x40
    size_t GCthreshold; // 0x48
    size_t totalbytes; // 0x50
    lua_Page* freepages[41]; // 0x58
    lua_State* mainthread; // 0x1A0
    UpVal uvhead; // 0x1A8
    lua_Page* freegcopages[40]; // 0x1D0
    lua_Page* sweepgcopage; // 0x310
    lua_Page* allgcopages; // 0x318
    char gap_1[0x70];
    TString* tmname[21]; // 0x390
    TString* ttname[14]; // 0x438
    lua_CageAlloc cagealloc; // 0x4A8
    lua_Page* allgcopages_cage; // 0x4B0
    lua_Page* sweepgcopage_cage; // 0x4B8
    lua_Page* freegcopages_cage[40]; // 0x4C0
    void* cageud; // 0x600
    TValue pseudotemp; // 0x608
    TValue registry; // 0x618
    registryfree_value registryfree; // 0x628
    char gap_2[0x2C];
    uint64_t rngstate; // 0x658
    lua_Callbacks cb; // 0x660
    lua_ExecutionCallbacks ecb; // 0x6D0
    char gap_3[0x2698];
    size_t memcatbytes[256]; // 0x2DB0
    void (*udatagc[128])(lua_State*, void*); // 0x35B0
    lua_UserdataMark udatamark[128]; // 0x39B0
    LuaTable* udatamt[128]; // 0x3DB0
    TValue weakregistry; // 0x41B0
    int weakregistryfree; // 0x41C0
    char gap_4[0x4];
    lua_EmbedderGc embeddergc; // 0x41C8
    char gap_5[0x400];
    LuaTable* udatadirectfields[130]; // 0x45D0
    Closure* builtinPcall; // 0x49E0
    Closure* builtinXpcall; // 0x49E8
    char gap_6[0x48];
    GCStats gcstats; // 0x4A38
    unsigned int lastprotoid; // 0x4AF0
    unsigned int lastclassid; // 0x4AF4
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; // 0x4AF8
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
    char gap_0[0x1];
    uint16_t lowBits; // 0x4
    int16_t atom; // 0x6
    TString* next; // 0x8
    TSTRING_HASH_ENC<unsigned int> hash; // 0x10
    unsigned int len; // 0x14
    char data[1]; // 0x18
};

struct Proto {
    CommonHeader; // 0x0
    unsigned char nups; // 0x3
    unsigned char is_vararg; // 0x4
    unsigned char maxstacksize; // 0x5
    unsigned char numparams; // 0x6
    unsigned char flags; // 0x7
    PROTO_SOURCE_ENC<TString*> source; // 0x8
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x10
    GCObject* gclist; // 0x18
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x20
    unsigned int* codeentry; // 0x28
    PROTO_P_ENC<Proto**> p; // 0x30
    PROTO_USERDATA_ENC<uint64_t*> userdata; // 0x38
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x40
    TValue* k; // 0x48
    unsigned int* code; // 0x50
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x58
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x60
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x68
    void* execdata; // 0x70
    uintptr_t exectarget; // 0x78
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x80
    int sizetypeinfo; // 0x88
    int sizeupvalues; // 0x8C
    int linedefined; // 0x90
    int sizek; // 0x94
    int bytecodeid; // 0x98
    int linegaplog2; // 0x9C
    int sizelineinfo; // 0xA0
    int sizecode; // 0xA4
    int sizep; // 0xA8
    int sizelocvars; // 0xAC
    struct FeedbackVectorSlot* feedbackvec; // 0xB0
    int feedbackvecsize; // 0xB8
    int funid; // 0xBC
    Proto* optimized; // 0xC0
    Proto* deoptimized; // 0xC8
    uint64_t cost; // 0xD0
};

struct Closure {
    CommonHeader; // 0x0
    unsigned char isC; // 0x3
    unsigned char preload; // 0x4
    unsigned char nupvalues; // 0x5
    unsigned char stacksize; // 0x6
    char gap_0[0x1];
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
    char gap_0[0x8];
    TValue*   func; // 0x8
    Proto* p; // 0x10
    TValue*   top; // 0x18
    const Instruction* savedpc; // 0x20
    char gap_1[0x8];
};

struct RobloxExtraSpace {
    struct Shared {
        void* zeroed_0x0; // 0x0
        struct {
            size_t count; // 0x8
            RobloxExtraSpace* head; // 0x10
        } allThreads; // 0x8
        int32_t threadCount; // 0x18
        uint8_t _unexplained_1C_0[12]; // 0x1C
        void* zeroed_0x28; // 0x28
        void* script_context; // 0x30
    };
    char gap_0[0x18];
    std::shared_ptr<Shared> shared; // 0x18
    char gap_1[0x8];
    std::weak_ptr<Instance> InstanceDefiningCapabilities; // 0x30
    char gap_2[0x10];
    uint64_t Capabilities; // 0x50
    char gap_3[0x8];
    uint32_t Identity; // 0x60
    char gap_4[0xC];
    void* identity_script_context; // 0x70
    char gap_5[0x10];
    std::weak_ptr<Instance> Script; // 0x88
    std::weak_ptr<Instance> Actor; // 0x98
    char gap_6[0x10];
};

struct lua_State {
    CommonHeader; // 0x0
    uint8_t status; // 0x3
    uint8_t activememcat; // 0x4
    bool singlestep; // 0x5
    bool isactive; // 0x6
    char gap_0[0x1];
    LuaTable* gt; // 0x8
    CallInfo* end_ci; // 0x10
    CallInfo* base_ci; // 0x18
    unsigned short nCcalls; // 0x20
    unsigned short baseCcalls; // 0x22
    unsigned int cachedslot; // 0x24
    struct RobloxExtraSpace* userdata; // 0x28
    LuaTable* finalizers; // 0x30
    TString* namecall; // 0x38
    GCObject* gclist; // 0x40
    UpVal* openupval; // 0x48
    CallInfo* ci; // 0x50
    TValue* base; // 0x58
    TValue* stack; // 0x60
    TValue* stack_last; // 0x68
    TValue* top; // 0x70
    global_State* global; // 0x78
    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x80
    int size_ci; // 0x84
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
    char padding[8]; // 0x38
    char data[1]; // 0x40
};

struct lua_Debug {
    void* userdata; // 0x0
    uint8_t nupvals; // 0x8
    uint8_t nparams; // 0x9
    uint8_t isvararg; // 0xA
    char gap_0[0x1];
    int protoid; // 0xC
    int bytecodeid; // 0x10
    int linedefined; // 0x14
    int currentline; // 0x18
    char gap_1[0x4];
    const char* name; // 0x20
    const char* what; // 0x28
    const char* source; // 0x30
    const char* short_src; // 0x38
    char ssbuf[256]; // 0x40
};

struct LocVar {
    TString* varname; // 0x0
    int startpc; // 0x8
    int endpc; // 0xC
    uint8_t reg; // 0x10
    char gap_0[0x7];
};

struct Instance {
    void** __vftable; // 0x0
    std::weak_ptr<RBX::Reflection::DescribedBase> _weak_this; // 0x8
    RBX::Reflection::ClassDescriptor* classDescriptor; // 0x18
    char Pad1[0x40];
    Instance* parent; // 0x60
    char Pad2[0x8];
    std::vector<std::shared_ptr<Instance>>* children; // 0x70
    std::_Ref_count_base* childrenControl; // 0x78
    char Pad3[0x18];
};
