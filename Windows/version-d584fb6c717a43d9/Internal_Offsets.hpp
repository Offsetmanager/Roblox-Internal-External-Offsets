#include <cstdint>
#include "Struct.hpp"

// ------------------------------------------------------------
//  Dumper   : Argus 2.0.5 (Internal Offsets)
//  Alert    : This is an experimental dumper, so please verify offsets before use.
//  Owner    : @phantomteam | @kreker757
//  Version  : version_d584fb6c717a43d9
//  Failed   : 17
//  Success  : 88
//  Total    : 105
// ------------------------------------------------------------

namespace Offsets
{
    const uintptr_t AppdataInfo = REBASE(0x689D608);
    const uintptr_t DisconnectConnect = REBASE(0x2291CD0);
    const uintptr_t GetCapabilities = REBASE(0x329C1E4);
    const uintptr_t GetContextObject = REBASE(0x2251160);
    const uintptr_t GetCurrentThreadId = REBASE(0x2C81420);
    const uintptr_t GetIdentityStruct = REBASE(0xDB6EA2);
    const uintptr_t GetLuaState = REBASE(0x2302B70);
    const uintptr_t GetLuaStateForInstance = REBASE(0x799660);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x2335A00);
    const uintptr_t GetProperty = REBASE(0xA70949D);
    const uintptr_t GetTLSPointer = REBASE(0x40E0);
    const uintptr_t IdentityPtr = REBASE(0x8370708);
    const uintptr_t PushInstance = REBASE(0x2B03550);
    const uintptr_t ScriptContextResume = REBASE(0x23F11E0);
    const uintptr_t SetFFlag = REBASE(0x2CA6760);
    const uintptr_t f_luaopen = REBASE(0x955D90);

    namespace reflections
    {
        const uintptr_t CastArgs = REBASE(0x977900);
    }

    namespace Luau
    {
        inline const uintptr_t Luau_Execute = REBASE(0x95E8C0);
        inline const uintptr_t LuaO_NilObject = REBASE(0x610B898);
        inline const uintptr_t LuaH_DummyNode = REBASE(0x610B760);
        inline const uintptr_t LuaVMLoad = REBASE(0x21DB510);
        inline const uintptr_t LuaD_Throw = REBASE(0x945D80);
    }

    namespace Lua
    {
        inline const uintptr_t LuaT_Eventnames = REBASE(0x610B808);
        inline const uintptr_t LuaT_typenames = REBASE(0x610B780);
        inline const uintptr_t atomic = REBASE(0x82B8C0);
        inline const uintptr_t currentline = REBASE(0x3659DE0);
        inline const uintptr_t luaA_toobject = REBASE(0x937CC0);
        inline const uintptr_t luaB_assert = REBASE(0x9EB8C0);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x945D50);
        inline const uintptr_t luaF_freeproto = REBASE(0x955D90);
        inline const uintptr_t luaG_runerrorL = REBASE(0x978940);
        inline const uintptr_t luaL_argerrorL = REBASE(0x93B840);
        inline const uintptr_t luaL_tolstring = REBASE(0x80E650);
        inline const uintptr_t luaL_typerrorL = REBASE(0x93B8C0);
        inline const uintptr_t luaL_where = REBASE(0x1922E0);
        inline const uintptr_t luaM_free_ = REBASE(0x954790);
        inline const uintptr_t luaM_freegco_ = REBASE(0x9546E0);
        inline const uintptr_t luaM_visitgco = REBASE(0x954930);
        inline const uintptr_t luaO_pushfstring = REBASE(0x248C9A0);
        inline const uintptr_t luaO_pushvfstring = REBASE(0x858FC0);
        inline const uintptr_t lua_eception = REBASE(0x945BF0);
        inline const uintptr_t lua_newstate = REBASE(0x936AB0);
        inline const uintptr_t lua_newthread = REBASE(0x937DA0);
        inline const uintptr_t lua_pcall = REBASE(0x94C250);
        inline const uintptr_t lua_pushfstringL = REBASE(0x9390D0);
        inline const uintptr_t lua_pushstring = REBASE(0x94BEC0);
        inline const uintptr_t lua_pushvfstring = REBASE(0x939060);
        inline const uintptr_t newblock = REBASE(0x954650);
        inline const uintptr_t newclasspage = REBASE(0x954540);
        inline const uintptr_t newpage = REBASE(0x954490);
        inline const uintptr_t pseudoaddr = REBASE(0x937C00);
        inline const uintptr_t traversetable = REBASE(0x5FB365);
    }

    namespace TaskScheduler
    {
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6CE61F8);
        const uintptr_t RawScheduler = REBASE(0x7A9A3F0);
        const uintptr_t TaskDesynchronize = REBASE(0x23F5C00);
        const uintptr_t TaskSchedulerPointer = REBASE(0x7A9A3F0);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x7EDB2B8);
        const uintptr_t TaskSpawn = REBASE(0x23F6D60);
        const uintptr_t TaskSynchronize = REBASE(0x23F5620);
        const uintptr_t task_defer = REBASE(0x23F68E0);
    }

    namespace Actor
    {
        const uintptr_t TaskDesynchronize = REBASE(0x23F5C00);
        const uintptr_t TaskSynchronize = REBASE(0x23F5620);
    }

    namespace Input
    {
        const uintptr_t FireClient = REBASE(0x4EADCC0);
        const uintptr_t FireServer = REBASE(0x4EADB20);
        const uintptr_t FireTouchInterest = REBASE(0x2D76340);
    }

    namespace Connection
    {
        const uintptr_t DisconnectConnect = REBASE(0x2291CD0);
    }

    namespace RakNet
    {
        const uintptr_t ProcessNetworkPacket = REBASE(0x4296E30);
        const uintptr_t RakPeerVirtualTable = REBASE(0x71B47F4);
        const uintptr_t Receive = REBASE(0x4268CE0);
        const uintptr_t ReliabilityLayerSend = REBASE(0x4266840);
        const uintptr_t ReportNetworkError = REBASE(0x376AC70);
    }

    namespace Capabilities
    {
        const uintptr_t GetCapabilities = REBASE(0x329C1E4);
        constexpr uintptr_t Capabilities = 0x28;
    }

    namespace GarbageCollector
    {
        constexpr uintptr_t L_singlestep = 0x4;
    }

    namespace Flags
    {
        const uintptr_t GetFFlag = REBASE(0x2C9EEB0);
    }

    namespace SignalConnection
    {
        const uintptr_t WaitScriptSlotVirtualTable = REBASE(0x707AB24);
    }

    namespace VTables
    {
        const uintptr_t FastClusterEntityVTable = REBASE(0x6F99C94);
        const uintptr_t FastClusterVTable = REBASE(0x6F96B1C);
    }

    namespace Identity
    {
        const uintptr_t GetIdentityStruct = REBASE(0xDB6EA2);
        const uintptr_t IdentityPtr = REBASE(0x8370708);
    }

    namespace Touch
    {
        const uintptr_t FireTouchInterest = REBASE(0x2D76340);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x7EDB2B8);
    }

    namespace Atom
    {
        const uintptr_t KTable = REBASE(0x7E73AE0);
    }

    namespace Task
    {
        const uintptr_t TaskDefer = REBASE(0x23F68E0);
        const uintptr_t TaskSpawn = REBASE(0x23F6D60);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume = REBASE(0x23F11E0);
    }
}
