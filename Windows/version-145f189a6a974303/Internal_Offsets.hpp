#include <cstdint>

// ------------------------------------------------------------
//  Dumper   : Argus 1.3.7
//  Alert    : This is an experimental dumper, so please verify offsets before use.
//  Owner    : @phantomteam | @kreker757
//  Version  : version-145f189a6a974303
//  Failed   : 0
//  Success  : 191
//  Total    : 191
// ------------------------------------------------------------

namespace Offsets
{
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1DB73E0);
    const uintptr_t GetCapabilities = REBASE(0x215D1F0);
    const uintptr_t GetContextObject = REBASE(0x1D66C90);
    const uintptr_t GetCurrentThreadId = REBASE(0x5123F60);
    const uintptr_t GetCurrentThreadIdentity = REBASE(0x17D833B);
    const uintptr_t GetIdentityStruct = REBASE(0x4C2CE10);
    const uintptr_t GetLuaState = REBASE(0x1D56350);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x1DEB700);
    const uintptr_t GetProperty = REBASE(0xA1D677D);
    const uintptr_t GetValues = REBASE(0x1D507B0);
    const uintptr_t IdentityPtr = REBASE(0x8392B28);
    const uintptr_t Impersonator = REBASE(0x512B690);
    const uintptr_t NewInstance = REBASE(0xAB98C0);
    const uintptr_t OpCodeLookupTable = REBASE(0x66BB660);
    const uintptr_t PushInstance = REBASE(0x1D48CA0);
    const uintptr_t ScriptContextResume = REBASE(0x4D106B0);
    const uintptr_t SetFFlag = REBASE(0x5172100);
    const uintptr_t cocreate = REBASE(0x4B7E710);
    const uintptr_t coroutine_resume = REBASE(0x1D67CA0);
    const uintptr_t f_luaopen = REBASE(0x70D8C0);
    const uintptr_t getglobalstate = REBASE(0x1D66A90);
    const uintptr_t loadsafe = REBASE(0x67FC50);
    const uintptr_t print = REBASE(0x4C27BF0);

    namespace Luau
    {
        inline const uintptr_t Luau_Execute = REBASE(0x4B7B430);
        inline const uintptr_t LuaO_NilObject = REBASE(0x6BC0438);
        inline const uintptr_t LuaH_DummyNode = REBASE(0x6BC02C8);
        inline const uintptr_t LuaVMLoad = REBASE(0x1D9FF00);
        inline const uintptr_t LuaD_Throw = REBASE(0x4B68390);
    }

    namespace Lua
    {
        inline const uintptr_t atomic = REBASE(0x668630);
        inline const uintptr_t callerrfunc = REBASE(0x4B674E0);
        inline const uintptr_t close_state = REBASE(0x4B65C20);
        inline const uintptr_t currentline = REBASE(0x1EF450B);
        inline const uintptr_t luaA_toobject = REBASE(0x4B618C0);
        inline const uintptr_t luaB_assert = REBASE(0x643CF0);
        inline const uintptr_t luaB_error = REBASE(0x4B7DA50);
        inline const uintptr_t luaB_gcinfo = REBASE(0x4B7DE80);
        inline const uintptr_t luaB_getfenv = REBASE(0x4B7DBE0);
        inline const uintptr_t luaB_getmetatable = REBASE(0x4B7DAC0);
        inline const uintptr_t luaB_net = REBASE(0x4B7DF30);
        inline const uintptr_t luaB_newproy = REBASE(0x4B7E0E0);
        inline const uintptr_t luaB_pcally = REBASE(0x4B7D910);
        inline const uintptr_t luaB_pcally_alt = REBASE(0x4B7DA50);
        inline const uintptr_t luaB_print = REBASE(0x4B7D830);
        inline const uintptr_t luaB_rawequal = REBASE(0x26D0070);
        inline const uintptr_t luaB_rawget = REBASE(0x4B7DD70);
        inline const uintptr_t luaB_rawlen = REBASE(0x4B7DE20);
        inline const uintptr_t luaB_rawset = REBASE(0x4B7DDC0);
        inline const uintptr_t luaB_select = REBASE(0x4B7E000);
        inline const uintptr_t luaB_setfenv = REBASE(0x4B7DC40);
        inline const uintptr_t luaB_setmetatable = REBASE(0x4B7DB20);
        inline const uintptr_t luaB_tonumber = REBASE(0x4B7D910);
        inline const uintptr_t luaB_tostring = REBASE(0x4B7E0B0);
        inline const uintptr_t luaB_type = REBASE(0x4B7DEB0);
        inline const uintptr_t luaB_typeof = REBASE(0x4B7DEF0);
        inline const uintptr_t luaC_step = REBASE(0x4B6C800);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x4B68050);
        inline const uintptr_t luaF_freeproto = REBASE(0x4B93A80);
        inline const uintptr_t luaF_newLclosure = REBASE(0x4B93D70);
        inline const uintptr_t luaF_newproto = REBASE(0x4B93E20);
        inline const uintptr_t luaG_runerrorL = REBASE(0x4B18970);
        inline const uintptr_t luaH_clone = REBASE(0x4B8BF20);
        inline const uintptr_t luaH_new = REBASE(0x4B8C810);
        inline const uintptr_t luaL_argerrorL = REBASE(0x4B69390);
        inline const uintptr_t luaL_callmeta = REBASE(0x4B698E0);
        inline const uintptr_t luaL_checklstring = REBASE(0x4B69B10);
        inline const uintptr_t luaL_errorL = REBASE(0x4B69760);
        inline const uintptr_t luaL_findtable = REBASE(0x4B697B0);
        inline const uintptr_t luaL_register = REBASE(0x4B69E30);
        inline const uintptr_t luaL_tolstring = REBASE(0x64A6E0);
        inline const uintptr_t luaL_typerrorL = REBASE(0x4B6A680);
        inline const uintptr_t luaL_where = REBASE(0x1640E0);
        inline const uintptr_t luaM_free_ = REBASE(0x4B8A1A0);
        inline const uintptr_t luaM_freegco_ = REBASE(0x4B8A040);
        inline const uintptr_t luaM_visitgco = REBASE(0x4B8A940);
        inline const uintptr_t luaO_chunkid = REBASE(0x4B99D90);
        inline const uintptr_t luaO_pushfstring = REBASE(0x34B2770);
        inline const uintptr_t luaO_pushvfstring = REBASE(0x67CE30);
        inline const uintptr_t luaT_init = REBASE(0x4B8AC90);
        inline const uintptr_t luaT_objtypename = REBASE(0x4B8AD70);
        inline const uintptr_t luaV_gettable = REBASE(0x4B959E0);
        inline const uintptr_t lua_eception = REBASE(0x4B674C0);
        inline const uintptr_t lua_newstate = REBASE(0x4B66340);
        inline const uintptr_t lua_pcall = REBASE(0x4B68410);
        inline const uintptr_t lua_pushfstringL = REBASE(0x4B631A0);
        inline const uintptr_t lua_pushstring = REBASE(0x4B63510);
        inline const uintptr_t lua_pushvfstring = REBASE(0x4B638B0);
        inline const uintptr_t lua_setfield = REBASE(0x4B64870);
        inline const uintptr_t lua_typename = REBASE(0x5515D50);
        inline const uintptr_t lua_yield = REBASE(0x4B7E7B0);
        inline const uintptr_t luaopen_base = REBASE(0x4B7E520);
        inline const uintptr_t luaopen_math = REBASE(0x4B878D0);
        inline const uintptr_t newblock = REBASE(0x4B8AA10);
        inline const uintptr_t newclasspage = REBASE(0x51B8AA2A);
        inline const uintptr_t newpage = REBASE(0x4B8AB20);
        inline const uintptr_t pseudoaddr = REBASE(0x4B65A60);
        inline const uintptr_t pusherror = REBASE(0x4B68310);
        inline const uintptr_t tag_error = REBASE(0x4B6A870);
        inline const uintptr_t traversetable = REBASE(0x6376D5);
    }

    namespace TaskScheduler
    {
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5EE4E20);
        const uintptr_t RawScheduler = REBASE(0x5FE9EC0);
        const uintptr_t TaskDesynchronize = REBASE(0x1E95C80);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x83A5638);
        const uintptr_t TaskSpawn = REBASE(0x1E96520);
        const uintptr_t TaskSynchronize = REBASE(0x1E966A0);
        const uintptr_t task_cancel = REBASE(0x1E95330);
        const uintptr_t task_defer = REBASE(0x1E95640);
    }

    namespace Actor
    {
        constexpr uintptr_t ParallelFlag = 0x50;
    }

    namespace Input
    {
        const uintptr_t FireTouchInterest = REBASE(0x2B25900);
    }

    namespace RakNet
    {
        const uintptr_t ProcessNetworkPacket = REBASE(0x324E020);
        const uintptr_t RakPeerVirtualTable = REBASE(0x62C0560);
        const uintptr_t Receive = REBASE(0x32626B0);
        const uintptr_t ReliabilityLayerSend = REBASE(0x3265250);
    }

    namespace DataModel
    {
        constexpr uintptr_t GameLoaded = 0x578;
        constexpr uintptr_t RequireBypass = 0x919;
    }

    namespace Properties
    {
        constexpr uintptr_t ClassDescriptor = 0x18;
        constexpr uintptr_t ClassName = 0x8;
        constexpr uintptr_t Properties = 0x3C0;
        constexpr uintptr_t PropertyDescriptorBitFlags = 0x8C;
        constexpr uintptr_t TType = 0x68;
        constexpr uintptr_t TTypeNumber = 0x30;
    }

    namespace Capabilities
    {
        const uintptr_t GetCapabilities = REBASE(0x215D1F0);
        constexpr uintptr_t Capabilities = 0x28;
    }

    namespace GarbageCollector
    {
        constexpr uintptr_t L_global = 0x28;
        constexpr uintptr_t L_singlestep = 0x5;
        constexpr uintptr_t g_freepages = 0x98;
        constexpr uintptr_t g_gcstate = 0x59;
        constexpr uintptr_t g_gcstepmul = 0x49;
        constexpr uintptr_t g_gcstepsize = 0x4D;
        constexpr uintptr_t g_gray = 0x20;
        constexpr uintptr_t g_grayagain = 0x18;
        constexpr uintptr_t g_weak = 0x10;
    }

    namespace Flags
    {
        const uintptr_t GetFFlag = REBASE(0x516C650);
    }

    namespace PropertyDescriptor
    {
        constexpr uintptr_t CallbackStorage = 0x80;
        constexpr uintptr_t PropertyDescriptorBitFlags = 0x8C;
        constexpr uintptr_t ScriptableMask = 0x10;
        constexpr uintptr_t TypeDescriptor = 0x68;
    }

    namespace Callback
    {
        constexpr uintptr_t DataModelAdjustment = 0x1C8;
        constexpr uintptr_t Reference = 0x34;
        constexpr uintptr_t WeakChain = 0x38;
        constexpr uintptr_t WeakObject = 0x18;
        constexpr uintptr_t Wrapper = 0x18;
    }

    namespace ClassDescriptor
    {
        constexpr uintptr_t CallbackEntryKindValue = 0x4;
        constexpr uintptr_t PropertyEntryDescriptor = 0x0;
        constexpr uintptr_t PropertyEntryKind = 0x8;
        constexpr uintptr_t PropertyEntryKindValue = 0x0;
        constexpr uintptr_t PropertyMap = 0x250;
        constexpr uintptr_t PropertyMapBucketIndices = 0x2C8;
        constexpr uintptr_t PropertyMapBucketMask = 0x2D8;
        constexpr uintptr_t PropertyMapEntries = 0x2D0;
        constexpr uintptr_t PropertyMapEntrySize = 0x10;
    }

    namespace BasePart
    {
        constexpr uintptr_t Overlap = 0x1F0;
        constexpr uintptr_t Primitive = 0x128;
    }

    namespace Render
    {
        constexpr uintptr_t RenderJobToView = 0x1D0;
        constexpr uintptr_t RenderViewToDevice = 0x8;
    }

    namespace SignalConnection
    {
        const uintptr_t WaitScriptSlotVirtualTable = REBASE(0x6031440);
        constexpr uintptr_t Enabled = 0x20;
        constexpr uintptr_t FunctionScriptSlotSelf = 0x18;
        constexpr uintptr_t Next = 0x10;
        constexpr uintptr_t SelfWeakFallback = 0x48;
        constexpr uintptr_t SlotWrapper = 0x30;
        constexpr uintptr_t SlotWrapperFallbackSelf = 0x40;
        constexpr uintptr_t SlotWrapperSelf = 0x38;
        constexpr uintptr_t WeakChain = 0x68;
        constexpr uintptr_t WeakChainNext = 0x8;
    }

    namespace SignalWeakObject
    {
        constexpr uintptr_t FunctionReference = 0x34;
        constexpr uintptr_t Pointer = 0x60;
        constexpr uintptr_t Thread = 0x28;
        constexpr uintptr_t WaitContainer = 0x50;
    }

    namespace EventInstance
    {
        constexpr uintptr_t Descriptor = 0x0;
        constexpr uintptr_t OwningInstance = 0x18;
    }

    namespace EventDescriptor
    {
        constexpr uintptr_t Signature = 0x48;
    }

    namespace EventSignature
    {
        constexpr uintptr_t FirstParameter = 0x8;
        constexpr uintptr_t MaximumParameters = 0x80;
        constexpr uintptr_t ParameterStride = 0x70;
    }

    namespace VirtualTable
    {
        constexpr uintptr_t RaiseEventInvocation = 0x18;
    }

    namespace ExtraSpace
    {
        constexpr uintptr_t IsCoreScript = 0x168;
        constexpr uintptr_t ScriptContextToResume = 0x7E8;
    }

    namespace VTables
    {
        const uintptr_t FastClusterEntityVTable = REBASE(0x5F381C8);
        const uintptr_t FastClusterVTable = REBASE(0x5F31070);
    }

    namespace Identity
    {
        const uintptr_t GetIdentityStruct = REBASE(0x4C2CE10);
        const uintptr_t IdentityPtr = REBASE(0x8392B28);
    }

    namespace Touch
    {
        const uintptr_t FireTouchInterest = REBASE(0x2B25900);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x83A5638);
    }

    namespace Extra
    {
        constexpr uintptr_t ScriptContextToResume = 0x7E8;
    }

    namespace Atom
    {
        const uintptr_t KTable = REBASE(0x83A7300);
    }

    namespace Task
    {
        const uintptr_t TaskCancel = REBASE(0x1E95330);
        const uintptr_t TaskDefer = REBASE(0x1E95640);
        const uintptr_t TaskSpawn = REBASE(0x1E96520);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume = REBASE(0x4D106B0);
    }

    namespace Hyperion
    {
        const uintptr_t InstrumentationCallback = REBASE(0x14F950);
        const uintptr_t RobloxEntry = REBASE(0x54BE1F8);
    }
}
