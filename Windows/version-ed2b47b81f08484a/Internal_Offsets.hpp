#include <cstdint>

// ------------------------------------------------------------
//  by phantomteam
//  Version     : version-ed2b47b81f08484a
//  Success     : 210
//  Failed      : 0
//  Total       : 210
// ------------------------------------------------------------

#define CLOSURE_CONT_ENC          VMValue2
#define CLOSURE_DEBUGNAME_ENC     VMValue1
#define LSTATE_STACKSIZE_ENC      VMValue2
#define PROTO_ABSLINEINFO_ENC     VMValue3
#define PROTO_DEBUGINSN_ENC       VMValue1
#define PROTO_DEBUGNAME_ENC       VMValue2
#define PROTO_LINEINFO_ENC        VMValue2
#define PROTO_LOCVARS_ENC         VMValue2
#define PROTO_SOURCE_ENC          VMValue4
#define PROTO_TYPEINFO_ENC        VMValue3
#define PROTO_UPVALUES_ENC        VMValue2
#define PROTO_USERDATA_ENC        VMValue4
#define TSTRING_HASH_ENC          VMValue3
#define UDATA_META_ENC            VMValue3

namespace Offsets
{
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1DBEEE0);
    const uintptr_t CastArgs = REBASE(0x1D3FD70);
    const uintptr_t FireTouchInterest = REBASE(0x4B5E9A0);
    const uintptr_t GetCapabilities = REBASE(0x2166410);
    const uintptr_t GetContextObject = REBASE(0x1D6F9B0);
    const uintptr_t GetCurrentThreadId = REBASE(0x50D4080);
    const uintptr_t GetCurrentThreadIdentity = REBASE(0xA31140);
    const uintptr_t GetIdentityStruct = REBASE(0x1D595A0);
    const uintptr_t GetLuaState = REBASE(0x1D5F220);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x1DF7810);
    const uintptr_t GetProperty = REBASE(0xA1DF44D);
    const uintptr_t GetValues = REBASE(0x1D59480);
    const uintptr_t IdentityPtr = REBASE(0x7A0EFD8);
    const uintptr_t IentityToCaps = REBASE(0x4BE5D40);
    const uintptr_t Impersonator = REBASE(0x4AD56467);
    const uintptr_t NewInstance = REBASE(0xADC6B0);
    const uintptr_t OpCodeLookupTable = REBASE(0x6671C60);
    const uintptr_t ProcessNetworkPacket = REBASE(0x665E50);
    const uintptr_t PushInstance = REBASE(0x1D51980);
    const uintptr_t ScriptContextResume = REBASE(0x4CCA290);
    const uintptr_t cocreate = REBASE(0x4B37500);
    const uintptr_t coroutine_resume = REBASE(0x1D77600);
    const uintptr_t f_luaopen = REBASE(0x71AFA0);
    const uintptr_t getglobalstate = REBASE(0x1D5EE50);
    const uintptr_t loadsafe = REBASE(0x68C900);
    const uintptr_t luavm__load = REBASE(0xBCCEB0);
    const uintptr_t print = REBASE(0x4BE0790);

    namespace Luau
    {
        const uintptr_t atomic = REBASE(0x6753B0);
        const uintptr_t callerrfunc = REBASE(0x4B200E0);
        const uintptr_t close_state = REBASE(0x4B1E860);
        const uintptr_t currentline = REBASE(0x1F01A8B);
        const uintptr_t currfuncname = REBASE(0x4B21BF0);
        const uintptr_t luaA_toobject = REBASE(0x4B1A5D0);
        const uintptr_t luaB_assert = REBASE(0x650B90);
        const uintptr_t luaB_error = REBASE(0x4B365E0);
        const uintptr_t luaB_gcinfo = REBASE(0x4B36A10);
        const uintptr_t luaB_getfenv = REBASE(0x4B36770);
        const uintptr_t luaB_getmetatable = REBASE(0x4B36650);
        const uintptr_t luaB_net = REBASE(0x4B36AC0);
        const uintptr_t luaB_newproy = REBASE(0x4B36C70);
        const uintptr_t luaB_pcallrun = REBASE(0x4B370C0);
        const uintptr_t luaB_pcally = REBASE(0x4B364A0);
        const uintptr_t luaB_pcally_alt = REBASE(0x4B365E0);
        const uintptr_t luaB_print = REBASE(0x4B363C0);
        const uintptr_t luaB_rawequal = REBASE(0x26C3C80);
        const uintptr_t luaB_rawget = REBASE(0x4B36900);
        const uintptr_t luaB_rawlen = REBASE(0x4B369B0);
        const uintptr_t luaB_rawset = REBASE(0x4B36950);
        const uintptr_t luaB_select = REBASE(0x4B36B90);
        const uintptr_t luaB_setfenv = REBASE(0x4B367D0);
        const uintptr_t luaB_setmetatable = REBASE(0x4B366B0);
        const uintptr_t luaB_tonumber = REBASE(0x4B364A0);
        const uintptr_t luaB_tostring = REBASE(0x4B36C40);
        const uintptr_t luaB_type = REBASE(0x4B36A40);
        const uintptr_t luaB_typeof = REBASE(0x4B36A80);
        const uintptr_t luaC_step = REBASE(0x4B255B0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4B20D80);
        const uintptr_t luaD_throw = REBASE(0x4B210C0);
        const uintptr_t luaF_freeproto = REBASE(0x4B4C660);
        const uintptr_t luaF_newLclosure = REBASE(0x4B4C930);
        const uintptr_t luaF_newproto = REBASE(0x4B4C9E0);
        const uintptr_t luaG_runerrorL = REBASE(0x4AD1390);
        const uintptr_t luaH_clone = REBASE(0x4B44B10);
        const uintptr_t luaH_dummynode = REBASE(0x5FEEA88);
        const uintptr_t luaH_new = REBASE(0x4B45410);
        const uintptr_t luaL_argerrorL = REBASE(0x4B22100);
        const uintptr_t luaL_callmeta = REBASE(0x4B22650);
        const uintptr_t luaL_checklstring = REBASE(0x4B22880);
        const uintptr_t luaL_errorL = REBASE(0x4B224D0);
        const uintptr_t luaL_findtable = REBASE(0x4B22520);
        const uintptr_t luaL_getmetafield = REBASE(0x4B1AEC0);
        const uintptr_t luaL_register = REBASE(0x4B22BA0);
        const uintptr_t luaL_tolstring = REBASE(0x657580);
        const uintptr_t luaL_typerrorL = REBASE(0x4B23400);
        const uintptr_t luaL_where = REBASE(0x164350);
        const uintptr_t luaM_free_ = REBASE(0x4B42F90);
        const uintptr_t luaM_freegco_ = REBASE(0x4B42E40);
        const uintptr_t luaM_visitgco = REBASE(0x4B434E0);
        const uintptr_t luaO_chunkid = REBASE(0x4B52960);
        const uintptr_t luaO_nilobject = REBASE(0x5FEEAE0);
        const uintptr_t luaO_pushfstring = REBASE(0x349B400);
        const uintptr_t luaO_pushvfstring = REBASE(0x689AE0);
        const uintptr_t luaT_init = REBASE(0x4B438B0);
        const uintptr_t luaT_objtypename = REBASE(0x4B43990);
        const uintptr_t luaV_gettable = REBASE(0x4B4E5A0);
        const uintptr_t lua_eception = REBASE(0x4B200C0);
        const uintptr_t lua_newstate = REBASE(0x4B1EF40);
        const uintptr_t lua_pcall = REBASE(0x4B21140);
        const uintptr_t lua_pushfstringL = REBASE(0x4B1BE70);
        const uintptr_t lua_pushstring = REBASE(0x4B1C1D0);
        const uintptr_t lua_pushvfstring = REBASE(0x4B1C570);
        const uintptr_t lua_reallocstack = REBASE(0x4B20970);
        const uintptr_t lua_resetthread = REBASE(0x4B1FF90);
        const uintptr_t lua_setfield = REBASE(0x4B1D530);
        const uintptr_t lua_typename = REBASE(0x54C6040);
        const uintptr_t lua_yield = REBASE(0x4B375A0);
        const uintptr_t luaopen_base = REBASE(0x4B37310);
        const uintptr_t luaopen_math = REBASE(0x4B406D0);
        const uintptr_t luau_execute = REBASE(0x4B34050);
        const uintptr_t newblock = REBASE(0x4B435B0);
        const uintptr_t newclasspage = REBASE(0x4B43640);
        const uintptr_t newgcoblock = REBASE(0x4B43250);
        const uintptr_t newpage = REBASE(0x4B43740);
        const uintptr_t pseudoaddr = REBASE(0x4B1E6A0);
        const uintptr_t pusherror = REBASE(0x4B21040);
        const uintptr_t tag_error = REBASE(0x4B235F0);
        const uintptr_t traversetable = REBASE(0x644535);
    }

    namespace TaskScheduler
    {
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5EA5140);
        const uintptr_t RawScheduler = REBASE(0x5FA8E00);
        const uintptr_t TaskDesynchronize = REBASE(0x1EA30A0);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6BEC998);
        const uintptr_t TaskSpawn = REBASE(0x1EA3940);
        const uintptr_t TaskSynchronize = REBASE(0x1EA3AC0);
        const uintptr_t task_cancel = REBASE(0x1EA2750);
        const uintptr_t task_defer = REBASE(0x20E440);
        const uintptr_t task_delay = REBASE(0x6AEA09);
        const uintptr_t task_wait = REBASE(0x497B990);
    }

    namespace Actor
    {
        const uintptr_t GetParallel = REBASE(0x1D6F7A0);
        constexpr uintptr_t ParallelFlag = 0x50;
    }

    namespace Input
    {
        const uintptr_t FireMouseClick = REBASE(0x46F0300);
        const uintptr_t FireMouseHoverEnter = REBASE(0x46F0510);
        const uintptr_t FireMouseHoverLeave = REBASE(0x46F0700);
        const uintptr_t FireProximityPrompt = REBASE(0x472C690);
        const uintptr_t FireRightMouseClick = REBASE(0x46F0970);
        const uintptr_t FireTouchInterest = REBASE(0x4B5E9A0);
    }

    namespace Connection
    {
        const uintptr_t DisconnectConnection = REBASE(0x1D668C0);
    }

    namespace RakNet
    {
        const uintptr_t DeallocatePacket = REBASE(0x3246850);
        const uintptr_t HandleConnectionState = REBASE(0xA8A1E0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x32523B0);
        const uintptr_t RakPeerVirtualTable = REBASE(0x62961E0);
        const uintptr_t Receive = REBASE(0x3256FA0);
        const uintptr_t ReliabilityLayerSend = REBASE(0x3253BF0);
        const uintptr_t ReportNetworkError = REBASE(0xA7EBC0);
        const uintptr_t Send = REBASE(0x3252F30);
        const uintptr_t SharedSend = REBASE(0x32529E0);
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
        const uintptr_t GetCapabilities = REBASE(0x2166410);
        constexpr uintptr_t Capabilities = 0x28;
    }

    namespace GarbageCollector
    {
        constexpr uintptr_t L_global = 0x60;
        constexpr uintptr_t L_singlestep = 0x5;
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
        const uintptr_t RobloxLogCrash = REBASE(0x50F03F0);
    }

    namespace Flags
    {
        const uintptr_t BooleanTypeDescriptor = REBASE(0x6C32558);
        const uintptr_t CanonicalBooleanTypeDescriptor = REBASE(0x6C326A8);
        const uintptr_t GetFFlag = REBASE(0x5122240);
        const uintptr_t IntegerTypeDescriptor = REBASE(0x6C32440);
        const uintptr_t SetFFlag = REBASE(0x5127D80);
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
        const uintptr_t HashLookup = REBASE(0xE562F9D);
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
        const uintptr_t Disconnect = REBASE(0x50F57C0);
        const uintptr_t WaitScriptSlotVirtualTable = REBASE(0x5FF6460);
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
        const uintptr_t FastClusterEntityVTable = REBASE(0x5EF8158);
        const uintptr_t FastClusterVTable = REBASE(0x5EF10C0);
    }
}
