#include <cstdint>

// ------------------------------------------------------------
//  Dumper      : Argus 1.0.2
//  Owner       : @phantomteam | @kreker757
//  Version     : version-145f189a6a974303
//  Failed      : 0
//  Success     : 200
//  Total       : 200
// ------------------------------------------------------------

namespace Offsets
{
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1DB73E0);
    const uintptr_t CastArgs = REBASE(0x1D37050);
    const uintptr_t FireTouchInterest = REBASE(0x4BA62E0);
    const uintptr_t GetCapabilities = REBASE(0x215D1F0);
    const uintptr_t GetContextObject = REBASE(0x1D66C90);
    const uintptr_t GetCurrentThreadId = REBASE(0x5123F60);
    const uintptr_t GetCurrentThreadIdentity = REBASE(0x17D833B);
    const uintptr_t GetIdentityStruct = REBASE(0x1D508E0);
    const uintptr_t GetLuaState = REBASE(0x1D56350);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x1DEB700);
    const uintptr_t GetProperty = REBASE(0xA1D677D);
    const uintptr_t GetValues = REBASE(0x1D507B0);
    const uintptr_t IdentityPtr = REBASE(0x7A65818);
    const uintptr_t Impersonator = REBASE(0x512B690);
    const uintptr_t NewInstance = REBASE(0xAB98C0);
    const uintptr_t OpCodeLookupTable = REBASE(0x66BB660);
    const uintptr_t ProcessNetworkPacket = REBASE(0x6903A0);
    const uintptr_t PushInstance = REBASE(0x1D48CA0);
    const uintptr_t ScriptContextResume = REBASE(0x4D106B0);
    const uintptr_t cocreate = REBASE(0x4B7E710);
    const uintptr_t coroutine_resume = REBASE(0x1D67CA0);
    const uintptr_t f_luaopen = REBASE(0x70D8C0);
    const uintptr_t getglobalstate = REBASE(0x1D66A90);
    const uintptr_t loadsafe = REBASE(0x67FC50);
    const uintptr_t luavm__load = REBASE(0xBAB370);

    namespace Luau
    {
        const uintptr_t atomic = REBASE(0x668630);
        const uintptr_t callerrfunc = REBASE(0x4B674E0);
        const uintptr_t close_state = REBASE(0x4B65C20);
        const uintptr_t currentline = REBASE(0x1EF450B);
        const uintptr_t luaA_toobject = REBASE(0x4B618C0);
        const uintptr_t luaB_assert = REBASE(0x643CF0);
        const uintptr_t luaB_error = REBASE(0x4B7DA50);
        const uintptr_t luaB_gcinfo = REBASE(0x4B7DE80);
        const uintptr_t luaB_getfenv = REBASE(0x4B7DBE0);
        const uintptr_t luaB_getmetatable = REBASE(0x4B7DAC0);
        const uintptr_t luaB_net = REBASE(0x4B7DF30);
        const uintptr_t luaB_newproy = REBASE(0x4B7E0E0);
        const uintptr_t luaB_pcally = REBASE(0x4B7D910);
        const uintptr_t luaB_pcally_alt = REBASE(0x4B7DA50);
        const uintptr_t luaB_print = REBASE(0x4B7D830);
        const uintptr_t luaB_rawequal = REBASE(0x26D0070);
        const uintptr_t luaB_rawget = REBASE(0x4B7DD70);
        const uintptr_t luaB_rawlen = REBASE(0x4B7DE20);
        const uintptr_t luaB_rawset = REBASE(0x4B7DDC0);
        const uintptr_t luaB_select = REBASE(0x4B7E000);
        const uintptr_t luaB_setfenv = REBASE(0x4B7DC40);
        const uintptr_t luaB_setmetatable = REBASE(0x4B7DB20);
        const uintptr_t luaB_tonumber = REBASE(0x4B7D910);
        const uintptr_t luaB_tostring = REBASE(0x4B7E0B0);
        const uintptr_t luaB_type = REBASE(0x4B7DEB0);
        const uintptr_t luaB_typeof = REBASE(0x4B7DEF0);
        const uintptr_t luaC_step = REBASE(0x4B6C800);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4B68050);
        const uintptr_t luaD_throw = REBASE(0x4B68390);
        const uintptr_t luaF_freeproto = REBASE(0x4B93A80);
        const uintptr_t luaF_newLclosure = REBASE(0x4B93D70);
        const uintptr_t luaF_newproto = REBASE(0x4B93E20);
        const uintptr_t luaG_runerrorL = REBASE(0x4B18970);
        const uintptr_t luaH_clone = REBASE(0x4B8BF20);
        const uintptr_t luaH_dummynode = REBASE(0x602F598);
        const uintptr_t luaH_new = REBASE(0x4B8C810);
        const uintptr_t luaL_argerrorL = REBASE(0x4B69390);
        const uintptr_t luaL_callmeta = REBASE(0x4B698E0);
        const uintptr_t luaL_checklstring = REBASE(0x4B69B10);
        const uintptr_t luaL_errorL = REBASE(0x4B69760);
        const uintptr_t luaL_findtable = REBASE(0x4B697B0);
        const uintptr_t luaL_register = REBASE(0x4B69E30);
        const uintptr_t luaL_tolstring = REBASE(0x64A6E0);
        const uintptr_t luaL_typerrorL = REBASE(0x4B6A680);
        const uintptr_t luaL_where = REBASE(0x1640E0);
        const uintptr_t luaM_free_ = REBASE(0x4B8A1A0);
        const uintptr_t luaM_freegco_ = REBASE(0x4B8A040);
        const uintptr_t luaM_visitgco = REBASE(0x4B8A940);
        const uintptr_t luaO_chunkid = REBASE(0x4B99D90);
        const uintptr_t luaO_nilobject = REBASE(0x602F5F0);
        const uintptr_t luaO_pushfstring = REBASE(0x34B2770);
        const uintptr_t luaO_pushvfstring = REBASE(0x67CE30);
        const uintptr_t luaT_init = REBASE(0x4B8AC90);
        const uintptr_t luaT_objtypename = REBASE(0x4B8AD70);
        const uintptr_t luaV_gettable = REBASE(0x4B959E0);
        const uintptr_t lua_eception = REBASE(0x4B674C0);
        const uintptr_t lua_newstate = REBASE(0x4B66340);
        const uintptr_t lua_pcall = REBASE(0x4B68410);
        const uintptr_t lua_pushfstringL = REBASE(0x4B631A0);
        const uintptr_t lua_pushstring = REBASE(0x4B63510);
        const uintptr_t lua_pushvfstring = REBASE(0x4B638B0);
        const uintptr_t lua_setfield = REBASE(0x4B64870);
        const uintptr_t lua_typename = REBASE(0x5515D50);
        const uintptr_t lua_yield = REBASE(0x4B7E7B0);
        const uintptr_t luaopen_base = REBASE(0x4B7E520);
        const uintptr_t luaopen_math = REBASE(0x4B878D0);
        const uintptr_t newblock = REBASE(0x4B8AA10);
        const uintptr_t newclasspage = REBASE(0x51B8AA2A);
        const uintptr_t newpage = REBASE(0x4B8AB20);
        const uintptr_t pseudoaddr = REBASE(0x4B65A60);
        const uintptr_t pusherror = REBASE(0x4B68310);
        const uintptr_t tag_error = REBASE(0x4B6A870);
        const uintptr_t traversetable = REBASE(0x6376D5);
    }

    namespace TaskScheduler
    {
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5EE4E20);
        const uintptr_t RawScheduler = REBASE(0x5FE9EC0);
        const uintptr_t TaskDesynchronize = REBASE(0x1E95C80);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6C36228);
        const uintptr_t TaskSpawn = REBASE(0x1E9AC20);
        const uintptr_t TaskSynchronize = REBASE(0x1E966A0);
        const uintptr_t task_cancel = REBASE(0x1E95330);
        const uintptr_t task_defer = REBASE(0x202120);
        const uintptr_t task_delay = REBASE(0x6A2479);
        const uintptr_t task_wait = REBASE(0x49C1360);
    }

    namespace Actor
    {
        const uintptr_t GetParallel = REBASE(0x1D66A80);
        constexpr uintptr_t ParallelFlag = 0x50;
    }

    namespace Input
    {
        const uintptr_t FireMouseClick = REBASE(0x4737C40);
        const uintptr_t FireMouseHoverEnter = REBASE(0x4737E50);
        const uintptr_t FireMouseHoverLeave = REBASE(0x4738040);
        const uintptr_t FireProximityPrompt = REBASE(0x4773FD0);
        const uintptr_t FireRightMouseClick = REBASE(0x47382B0);
        const uintptr_t FireTouchInterest = REBASE(0x4BA62E0);
    }

    namespace Connection
    {
        const uintptr_t DisconnectConnection = REBASE(0x1D5DBA0);
    }

    namespace RakNet
    {
        const uintptr_t DeallocatePacket = REBASE(0x325E990);
        const uintptr_t HandleConnectionState = REBASE(0xAA2320);
        const uintptr_t ProcessNetworkPacket = REBASE(0x326A4F0);
        const uintptr_t RakPeerVirtualTable = REBASE(0x62AE320);
        const uintptr_t Receive = REBASE(0x326F0E0);
        const uintptr_t ReliabilityLayerSend = REBASE(0x326BD30);
        const uintptr_t ReportNetworkError = REBASE(0xA96D00);
        const uintptr_t Send = REBASE(0x326B070);
        const uintptr_t SharedSend = REBASE(0x326AB20);
    }

    namespace DataModel
    {
        constexpr uintptr_t GameLoaded = 0x578;
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
        constexpr uintptr_t g_freepages = 0x98;
        constexpr uintptr_t g_gcstate = 0x59;
        constexpr uintptr_t g_gcstepmul = 0x49;
        constexpr uintptr_t g_gcstepsize = 0x4D;
        constexpr uintptr_t g_gray = 0x20;
        constexpr uintptr_t g_grayagain = 0x18;
        constexpr uintptr_t g_weak = 0x10;
    }

    namespace Crash
    {
        const uintptr_t RobloxLogCrash = REBASE(0x51402B0);
    }

    namespace Flags
    {
        const uintptr_t BooleanTypeDescriptor = REBASE(0x6C32558);
        const uintptr_t CanonicalBooleanTypeDescriptor = REBASE(0x6C326A8);
        const uintptr_t GetFFlag = REBASE(0x5172100);
        const uintptr_t IntegerTypeDescriptor = REBASE(0x6C32440);
        const uintptr_t SetFFlag = REBASE(0x5177C40);
        const uintptr_t StringTypeDescriptor = REBASE(0x6C332A8);
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
        const uintptr_t HashLookup = REBASE(0xE55A2CD);
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
        const uintptr_t Disconnect = REBASE(0x5145680);
        const uintptr_t WaitScriptSlotVirtualTable = REBASE(0x6046320);
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
        constexpr uintptr_t RequireBypass = 0x919;
        constexpr uintptr_t ScriptContextToResume = 0x7E8;
    }

    namespace VTables
    {
        const uintptr_t FastClusterEntityVTable = REBASE(0x5F381C8);
        const uintptr_t FastClusterVTable = REBASE(0x5F31070);
    }
}
