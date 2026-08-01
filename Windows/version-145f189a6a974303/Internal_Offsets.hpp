#include <cstdint>
#include "Struct.hpp"

// ------------------------------------------------------------
//  Dumper   : Argus 2.0.5 (Internal Offsets)
//  Alert    : This is an experimental dumper, so please verify offsets before use.
//  Owner    : @phantomteam | @kreker757
//  Version  : version-145f189a6a974303
//  Failed   : 0
//  Success  : 156
//  Total    : 156
// ------------------------------------------------------------

namespace Offsets
{
    const uintptr_t AppdataInfo = REBASE(0x606D1E0);
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1DB73E0);
    const uintptr_t GetCapabilities = REBASE(0x4C2D260);
    const uintptr_t GetContextObject = REBASE(0x1D66C90);
    const uintptr_t GetCurrentThreadId = REBASE(0x5123F60);
    const uintptr_t GetCurrentThreadIdentity = REBASE(0x17D833B);
    const uintptr_t GetGlobalState = REBASE(0x1D56360);
    const uintptr_t GetIdentityStruct = REBASE(0x4C2CE10);
    const uintptr_t GetLuaState = REBASE(0x1D56360);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x1DEB700);
    const uintptr_t GetProperty = REBASE(0xA1D677D);
    const uintptr_t GetPropertyData = REBASE(0xC8ACA0);
    const uintptr_t GetTLSPointer = REBASE(0x80E0);
    const uintptr_t GetValues = REBASE(0x1D507B0);
    const uintptr_t IdentityPtr = REBASE(0x8392B28);
    const uintptr_t IentityToCaps = REBASE(0x4C2D260);
    const uintptr_t Impersonator = REBASE(0x512B690);
    const uintptr_t NewInstance = REBASE(0xAB98C0);
    const uintptr_t OpCodeLookupTable = REBASE(0x639F7B0);
    const uintptr_t PushInstance = REBASE(0x1D48CA0);
    const uintptr_t ScriptContextResume = REBASE(0x1E21510);
    const uintptr_t SetFFlag = REBASE(0x5172100);
    const uintptr_t cocreate = REBASE(0x4B7E710);
    const uintptr_t coroutine_resume = REBASE(0x1D67CA0);
    const uintptr_t f_luaopen = REBASE(0x70D8C0);
    const uintptr_t getglobalstate = REBASE(0x1D66A90);
    const uintptr_t loadsafe = REBASE(0x4B6ECE0);
    const uintptr_t print = REBASE(0x4C27BF0);

    namespace reflections
    {
        const uintptr_t CastArgs = REBASE(0x54BDA98);
    }

    namespace Luau
    {
        inline const uintptr_t Luau_Execute = REBASE(0x4B7B430);
        inline const uintptr_t LuaO_NilObject = REBASE(0x6BC0438);
        inline const uintptr_t LuaH_DummyNode = REBASE(0x6BC02C8);
        inline const uintptr_t LuaVMLoad = REBASE(0x4B6EA30);
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

    namespace Bytecode
    {
        constexpr uint8_t BC_VERSION_MIN = 3;
        constexpr uint8_t BC_VERSION_MAX = 13;
        constexpr uint8_t BC_TYPE_VERSION_MIN = 1;
        constexpr uint8_t BC_TYPE_VERSION_MAX = 3;
        constexpr uint8_t UD_REMAP_DEFAULT = 0x7;
        constexpr uint8_t UD_REMAP_COUNT = 32;
        constexpr uint8_t UD_TAGGED_BASE = 0x40;
        inline const uintptr_t OPCODE_REMAP_LUT = REBASE(0x6BBD950);
        inline const uintptr_t OPCODE_ENC_TABLE = REBASE(0x66BB660);
    }

    namespace TaskScheduler
    {
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5EE4E20);
        const uintptr_t RawScheduler = REBASE(0x79D5A90);
        const uintptr_t TaskDelay = REBASE(0x1E95A30);
        const uintptr_t TaskDesynchronize = REBASE(0x1E95C80);
        const uintptr_t TaskSchedulerPointer = REBASE(0x79D5A90);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x83A5638);
        const uintptr_t TaskSpawn = REBASE(0x1E96520);
        const uintptr_t TaskSynchronize = REBASE(0x1E966A0);
        const uintptr_t TaskWait = REBASE(0x1E968A0);
        const uintptr_t task_cancel = REBASE(0x1E95330);
        const uintptr_t task_defer = REBASE(0x1E95640);
    }

    namespace Input
    {
        const uintptr_t FireMouseClick = REBASE(0x26ADEE0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x26AE0F0);
        const uintptr_t FireMouseHoverLeave = REBASE(0x26AE2E0);
        const uintptr_t FireProximityPrompt = REBASE(0x26E9EC0);
        const uintptr_t FireRightMouseClick = REBASE(0x26AE550);
        const uintptr_t FireTouchInterest = REBASE(0x2B25900);
    }

    namespace RakNet
    {
        const uintptr_t HandleConnectionState = REBASE(0xA49490);
        const uintptr_t ProcessNetworkPacket = REBASE(0x324E020);
        const uintptr_t RakPeerVirtualTable = REBASE(0x62C0560);
        const uintptr_t Receive = REBASE(0x32529A0);
        const uintptr_t ReliabilityLayerSend = REBASE(0x324F860);
        const uintptr_t ReportNetworkError = REBASE(0xA3DEA0);
        const uintptr_t Send = REBASE(0x324E650);
    }

    namespace Capabilities
    {
        const uintptr_t GetCapabilities = REBASE(0x4C2D260);
    }

    namespace GarbageCollector
    {
        constexpr uintptr_t L_global = 0x28;
        constexpr uintptr_t L_singlestep = 0x5;
        constexpr uintptr_t g_gcstepmul = 0x49;
        constexpr uintptr_t g_gcstepsize = 0x4D;
    }

    namespace Flags
    {
        const uintptr_t GetFFlag = REBASE(0x516C650);
    }

    namespace SignalConnection
    {
        const uintptr_t WaitScriptSlotVirtualTable = REBASE(0x6031440);
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
        const uintptr_t KTable = REBASE(0x85A7390);
    }

    namespace Task
    {
        const uintptr_t TaskCancel = REBASE(0x1E95330);
        const uintptr_t TaskDefer = REBASE(0x1E95640);
        const uintptr_t TaskSpawn = REBASE(0x1E96520);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume = REBASE(0x1E21510);
    }
}
