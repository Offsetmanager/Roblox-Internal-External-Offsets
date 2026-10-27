/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-5a21b87bbc2641cf
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 113.71s

		                𝒱𝑒𝓇𝒾𝒇𝓎 𝑜𝒻𝒇𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <cstddef>
#include <Roblox/EncryptionsHelper.hpp>

struct Proto; struct lua_State; struct global_State;
struct CallInfo; struct LuaTable; struct LuaNode;
struct TString; struct LocVar; struct TValue;
struct Instruction; struct GCObject; struct UpVal;
struct Udata; struct Closure; struct RobloxExtraSpace;
struct SharedExtraSpace; struct Identity;
struct FeedbackVectorSlot; struct GCStats; struct GCMetrics;
struct lua_Callbacks; struct lua_Debug; struct lua_Page;
struct stringtable; struct lua_ExecutionCallbacks;
struct lua_UdataDirectAccessData; struct lua_UserdataMark;
struct lua_EmbedderGc; struct RegistryFree;

typedef TValue* StkId;
typedef void* (*lua_Alloc)(void* ud, void* ptr, size_t osize, size_t nsize);
typedef int (*lua_CFunction)(lua_State* L);
typedef int (*lua_Continuation)(lua_State* L, int status);

#define CLOSURE_CONT_ENC           VMValue3
#define PROTO_ABSLINEINFO_ENC      VMValue4
#define PROTO_DEBUGINSN_ENC        VMValue3
#define PROTO_DEBUGNAME_ENC        VMValue3
#define PROTO_LINEINFO_ENC         VMValue3
#define PROTO_LOCVARS_ENC          VMValue3
#define PROTO_SOURCE_ENC           VMValue1
#define PROTO_TYPEINFO_ENC         VMValue2
#define PROTO_UPVALUES_ENC         VMValue4
#define PROTO_USERDATA_ENC         VMValue1
#define TSTRING_HASH_ENC           VMValue2
#define UDATA_META_ENC             VMValue2
#define LSTATE_STACKSIZE_ENC       VMValue2

struct GCObject {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
};

struct Proto {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    uint8_t nups; // 0x3
    uint8_t numparams; // 0x4
    uint8_t flags; // 0x5
    uint8_t is_vararg; // 0x6
    uint8_t maxstacksize; // 0x7
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; VMValue3
    PROTO_UPVALUES_ENC<TString**> upvalues; VMValue4
    const Instruction* codeentry; // 0x18
    PROTO_DEBUGNAME_ENC<TString*> debugname; VMValue3
    GCObject* gclist; // 0x28
    PROTO_SOURCE_ENC<TString*> source; VMValue1
    char _gap_0x38[0x8];
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; VMValue2
    void* execdata; // 0x48
    uintptr_t exectarget; // 0x50
    struct Proto** p; // 0x58
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; VMValue3
    uint32_t field_0x68; // 0x68
    char _gap_0x6c[0x4];
    PROTO_USERDATA_ENC<void*> userdata; VMValue1
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; VMValue4
    TValue* k; // 0x80
    Instruction* code; // 0x88
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; VMValue3
    int sizeupvalues; // 0x98
    int linedefined; // 0x9c
    int sizelocvars; // 0xa0
    int bytecodeid; // 0xa4
    int linegaplog2; // 0xa8
    int sizep; // 0xac
    int sizek; // 0xb0
    int sizetypeinfo; // 0xb4
    int sizecode; // 0xb8
    int sizelineinfo; // 0xbc
    FeedbackVectorSlot* feedbackvec; // 0xc0
    uint32_t feedbackvecsize; // 0xc8
    uint32_t funid; // 0xcc
    Proto* optimized; // 0xd0
    uint64_t field_0xd8; // 0xd8
    uint64_t cost; // 0xe0
};

struct TString {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    char _gap_0x3[0x1];
    int16_t marker; // 0x4
    int16_t atom; // 0x6
    TString* next; // 0x8
    TSTRING_HASH_ENC<unsigned int> hash; VMValue2
    unsigned int len; // 0x14
    char data; // 0x18
};

struct Udata {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    uint8_t tag; // 0x3
    char _gap_0x4[0x4];
    UDATA_META_ENC<struct LuaTable*> metatable; VMValue2
    char data; // 0x10
};

struct stringtable {
    TString** hash; // 0x0
    uint32_t nuse; // 0x8
    int size; // 0xc
};

struct Closure {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    uint8_t isC; // 0x3
    uint8_t nupvalues; // 0x4
    uint8_t preload; // 0x5
    uint8_t stacksize; // 0x6
    char _gap_0x7[0x1];
    GCObject* gclist; // 0x8
    struct LuaTable* env; // 0x10
    lua_CFunction u_f; // 0x18
    CLOSURE_CONT_ENC<lua_Continuation> u_cont; VMValue3
    TString* u_debugname; // 0x28
    TValue u_upvals; // 0x30
};

struct LuaTable {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    uint8_t tmcache; // 0x3
    uint8_t lsizenode; // 0x4
    uint8_t field_0x5; // 0x5
    uint8_t safeenv; // 0x6
    uint8_t nodemask8; // 0x7
    int sizearray; // 0x8
    int lastfree; // 0xc
    struct LuaTable* metatable; // 0x10
    LuaNode* node; // 0x18
    GCObject* gclist; // 0x20
    TValue* array; // 0x28
};

struct TValue {
    Value value; // 0x0
    int extra; // 0x8
    int tt; // 0xc
};

struct LuaNode {
    TValue val; // 0x0
    TKey key; // 0x10
};

struct CallInfo {
    Proto* p; // 0x0
    StkId func; // 0x8
    StkId base; // 0x10
    StkId top; // 0x18
    const Instruction* savedpc; // 0x20
    int nresults; // 0x28
    unsigned int flags; // 0x2c
};

struct lua_State {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    uint8_t status; // 0x3
    uint8_t activememcat; // 0x4
    bool singlestep; // 0x5
    uint8_t field_0x6; // 0x6
    char _gap_0x7[0x1];
    unsigned short nCcalls; // 0x8
    unsigned short baseCcalls; // 0xa
    int cachedslot; // 0xc
    CallInfo* end_ci; // 0x10
    CallInfo* base_ci; // 0x18
    RobloxExtraSpace* userdata; // 0x20
    GCObject* gclist; // 0x28
    CallInfo* ci; // 0x30
    global_State* global; VMValue3
    StkId stack; // 0x40
    StkId top; // 0x48
    StkId base; VMValue3
    StkId stack_last; // 0x58
    uint64_t field_0x60; // 0x60
    TString* namecall; // 0x68
    LSTATE_STACKSIZE_ENC<int> stacksize; VMValue2
    UpVal* openupval; // 0x78
    LuaTable* gt; // 0x80
    char _gap_0x88[0x8];
    uint64_t field_0x90; // 0x90
    char _gap_0x98[0x5d8];
    uint64_t field_0x670; // 0x670
    char _gap_0x678[0x20];
    uint64_t field_0x698; // 0x698
    uint64_t field_0x6a0; // 0x6a0
};

struct lua_Callbacks {
    void* userdata; // 0x0
    char _gap_0x8[0x8];
    void(*)(lua_State*) postresume; // 0x10
    char _gap_0x18[0x8];
    int16_t(*)(lua_State*,const char*,size_t) useratom; // 0x20
    void(*)(lua_State*,int) interrupt; // 0x28
    void(*)(lua_State*,void*,size_t,size_t,uint8_t,int,int) onallocate; // 0x30
    void(*)(lua_State*) preresume; // 0x38
    void(*)(lua_State*,lua_Debug*) debugstep; // 0x40
    char _gap_0x48[0x8];
    void(*)(lua_State*) debugprotectederror; // 0x50
    void(*)(lua_State*,void*) onfree; // 0x58
    void(*)(lua_State*,lua_State*) userthread; // 0x60
    void(*)(lua_State*,lua_Debug*) debugbreak; // 0x68
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
    char _gap_0x34[0x4];
    int busyBlocks; // 0x38
    char padding; // 0x3c
    char _gap_0x3d[0x3];
    char data; // 0x40
};

struct lua_Debug {
    const char* name; // 0x0
    const char* what; // 0x8
    const char* source; // 0x10
    const char* short_src; // 0x18
    uint8_t nparams; // 0x20
    char _gap_0x21[0x1];
    uint8_t isvararg; // 0x22
    char _gap_0x23[0x1];
    int bytecodeid; // 0x24
    int currentline; // 0x28
    int linedefined; // 0x2c
    int protoid; // 0x30
    char _gap_0x34[0x4];
    void* userdata; // 0x38
    char ssbuf; // 0x40
};

struct global_State {
    stringtable strt; // 0x0
    GCObject* gray; // 0x10
    GCObject* weak; // 0x18
    GCObject* grayagain; // 0x20
    lua_Alloc frealloc; // 0x28
    void* ud; // 0x30
    uint8_t currentwhite; // 0x38
    uint8_t gcstate; // 0x39
    char _gap_0x3a[0x2];
    int gcgoal; // 0x3c
    int gcstepsize; // 0x40
    int gcstepmul; // 0x44
    size_t GCthreshold; // 0x48
    size_t totalbytes; // 0x50
    uint64_t field_0x58; // 0x58
    char _gap_0x60[0x10];
    struct lua_State* mainthread; // 0x70
    UpVal uvhead; // 0x78
    struct lua_Page* freepages; // 0xa0
    char _gap_0xa8[0x138];
    struct lua_Page* freegcopages; // 0x1e0
    char _gap_0x1e8[0x138];
    TString* tmname; // 0x320
    uint64_t field_0x328; // 0x328
    char _gap_0x330[0x10];
    uint64_t field_0x340; // 0x340
    uint64_t field_0x348; // 0x348
    uint64_t field_0x350; // 0x350
    uint64_t field_0x358; // 0x358
    char _gap_0x360[0x10];
    uint64_t field_0x370; // 0x370
    uint64_t field_0x378; // 0x378
    uint64_t field_0x380; // 0x380
    char _gap_0x388[0x18];
    uint64_t field_0x3a0; // 0x3a0
    uint64_t field_0x3a8; // 0x3a8
    char _gap_0x3b0[0x18];
    TString* ttname; // 0x3c8
    char _gap_0x3d0[0x68];
    struct LuaTable* mt; // 0x438
    char _gap_0x440[0x20];
    uint64_t field_0x460; // 0x460
    char _gap_0x468[0x1a0];
    TValue pseudotemp; // 0x608
    TValue registry; // 0x618
    uint32_t field_0x628; // 0x628
    char _gap_0x62c[0xc];
    uint64_t rngstate; // 0x638
    lua_Callbacks cb; // 0x640
    uint64_t ptrenckey; // 0x6b0
    char _gap_0x6b8[0x18];
    lua_ExecutionCallbacks ecb; // 0x6d0
    char _gap_0x718[0x218];
    lua_UdataDirectAccessData udatadirect; // 0x930
    char _gap_0x978[0x2c18];
    struct lua_Page* allgcopages; // 0x3590
    struct lua_Page* sweepgcopage; // 0x3598
    char _gap_0x35a0[0x2a8];
    size_t memcatbytes; // 0x3848
    char _gap_0x3850[0x7f8];
    void(*)(lua_State*,void*) udatagc; // 0x4048
    char _gap_0x4050[0x3f8];
    lua_UserdataMark udatamark; // 0x4448
    char _gap_0x4450[0x3f8];
    LuaTable* udatamt; // 0x4848
    char _gap_0x4850[0x3f8];
    TValue weakregistry; // 0x4c48
    int weakregistryfree; // 0x4c58
    char _gap_0x4c5c[0x4];
    lua_EmbedderGc embeddergc; // 0x4c60
    TString* lightuserdataname; // 0x4c68
    char _gap_0x4c70[0x808];
    struct Closure* builtinPcall; // 0x5478
    struct Closure* builtinXpcall; // 0x5480
    char _gap_0x5488[0x48];
    GCStats gcstats; // 0x54d0
    uint32_t lastprotoid; // 0x5588
    char _gap_0x558c[0x4];
    GCMetrics gcmetrics; // 0x5590
    char _gap_0x5598[0x1d8];
};

struct RobloxExtraSpace {
    char _gap_0x0[0x18];
    std::shared_ptr<SharedExtraSpace> shared; // 0x18
    char _gap_0x28[0x18];
    std::weak_ptr<uintptr_t> actor; // 0x40
    char _gap_0x50[0x10];
    Identity identity; // 0x60
    char _gap_0x78[0x8];
    uintptr_t capabilities; // 0x80
    std::weak_ptr<uintptr_t> script; // 0x88
};

struct SharedExtraSpace {
    char _gap_0x0[0x10];
    uintptr_t ScriptContext; // 0x10
};

