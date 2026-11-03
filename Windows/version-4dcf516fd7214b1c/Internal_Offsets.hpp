/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-4dcf516fd7214b1c
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 127         𝓕𝓪𝓲𝓵𝓮𝓭: 29
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 44.09s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <string>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

inline std::string ClientVersion = "version-4dcf516fd7214b1c";

namespace Offsets
{
    const uintptr_t InvokeServer                         = REBASE(0x35831C0);
    const uintptr_t FireServer                           = REBASE(0x34AB170);
    const uintptr_t FireClient                           = REBASE(0x34AB310);
    const uintptr_t FireAllClients                       = REBASE(0x34AB510);
    const uintptr_t EnableLoadModule                     = REBASE(0x81960E0);
    const uintptr_t TaskScheduler                        = REBASE(0x8E4D7B8);
    const uintptr_t TaskSchedulerTargetFps               = REBASE(0x81715B0);
    const uintptr_t KTable                               = REBASE(0x8530CF0);
    const uintptr_t GetGlobalState                       = REBASE(0x4274C30);
    const uintptr_t GetLuaState                          = REBASE(0x4274C30);
    const uintptr_t CastArgs                             = REBASE(0x41CB820);
    const uintptr_t PushInstance                         = REBASE(0x42594C0);
    const uintptr_t InstanceNew                          = REBASE(0x434DD00);
    const uintptr_t InstanceFindFirstChild               = REBASE(0x5700F0);
    const uintptr_t InstanceFindFirstChildOfClass        = REBASE(0x56C880);
    const uintptr_t InstanceFindFirstAncestorWhichIsA    = REBASE(0x56C540);

    namespace Identity {
        const uintptr_t GetCapabilities                  = REBASE(0x1CEA140);
        const uintptr_t Impersonator                     = REBASE(0x1CEA200);
    };

    namespace RobloxThread {
        const uintptr_t IdentityPtr                      = REBASE(0x855CF68);
    };

    namespace Bytecode {
        const uintptr_t VerificationTableA               = REBASE(0x86CB5E0);
    };

    namespace LuaError {
        const uintptr_t luaL_error                       = REBASE(0x26406B0);
        const uintptr_t readonlyerror                    = REBASE(0x26704B0);
        const uintptr_t methoderror                      = REBASE(0x2670470);
        const uintptr_t indexerror                       = REBASE(0x2670370);
        const uintptr_t ordererror                       = REBASE(0x26702F0);
        const uintptr_t forerrorL                        = REBASE(0x26701C0);
    };

    namespace Native {
        const uintptr_t DestroyString                    = REBASE(0x72E600);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass                = 0xB71;
        constexpr uintptr_t IsCoreScript                 = 0x150;
    };

    namespace TaskDefer {
        const uintptr_t TaskWait                         = REBASE(0x435CFB0);
        const uintptr_t TaskSynchronize                  = REBASE(0x435B180);
        const uintptr_t TaskDesynchronize                = REBASE(0x435B700);
        const uintptr_t TaskSpawn                        = REBASE(0x435C920);
        const uintptr_t TaskDelay                        = REBASE(0x435CCB0);
    };

    namespace ScriptContext {
        const uintptr_t Resume                           = REBASE(0x431B1F0);
    };

    namespace RbxTransport {
        const uintptr_t ClientRtti                       = REBASE(0x787B300);
        const uintptr_t AppRtti                          = REBASE(0x7804FD0);
        const uintptr_t ClientSend                       = REBASE(0x3B02970);
        const uintptr_t AppReceive                       = REBASE(0x21542B0);
        const uintptr_t AppReceiveMaxBytes               = REBASE(0x2154B60);
        const uintptr_t StreamCreate                     = REBASE(0x53E7E60);
        const uintptr_t StreamAppend                     = REBASE(0x215D0D0);
        const uintptr_t StreamDestroy                    = REBASE(0x211D570);
    };

    namespace Luau {
        const uintptr_t LoadModule                       = REBASE(0x10ED250);
        const uintptr_t LuaVM_Load                       = REBASE(0x10ED250);
        const uintptr_t Luau_Execute                     = REBASE(0x26789E0);
        const uintptr_t LuaD_Throw                       = REBASE(0x26360E0);
    };

    namespace Luau_Other {
        const uintptr_t LuaT_typenames                   = REBASE(0x68DC010);
        const uintptr_t LuaT_eventname                   = REBASE(0x68DC080);
        const uintptr_t luaC_init                        = REBASE(0x26A0640);
        const uintptr_t luaG_runerror                    = REBASE(0x2671020);
        const uintptr_t luaO_pushfstring                 = REBASE(0x266FBE0);
        const uintptr_t luaM_visitgco                    = REBASE(0x29CD830);
        const uintptr_t luaB_assert                      = REBASE(0x2699220);
        const uintptr_t luaB_print                       = REBASE(0x2693620);
        const uintptr_t luaB_error                       = REBASE(0x2693A70);
        const uintptr_t luaB_gcinfo                      = REBASE(0x26970A0);
        const uintptr_t luaB_getfenv                     = REBASE(0x26954C0);
        const uintptr_t luaB_getmetatable                = REBASE(0x2694980);
        const uintptr_t luaB_next                        = REBASE(0x2698770);
        const uintptr_t luaB_newproxy                    = REBASE(0x2699E00);
        const uintptr_t luaB_rawequal                    = REBASE(0x26957A0);
        const uintptr_t luaB_rawget                      = REBASE(0x26958B0);
        const uintptr_t luaB_rawset                      = REBASE(0x2696340);
        const uintptr_t luaB_rawlen                      = REBASE(0x2697000);
        const uintptr_t luaB_select                      = REBASE(0x26992D0);
        const uintptr_t luaB_setfenv                     = REBASE(0x2695580);
        const uintptr_t luaB_setmetatable                = REBASE(0x2694B00);
        const uintptr_t luaB_tonumber                    = REBASE(0x26936E0);
        const uintptr_t luaB_tostring                    = REBASE(0x2699DA0);
        const uintptr_t luaB_type                        = REBASE(0x26970C0);
        const uintptr_t luaB_typeof                      = REBASE(0x2697C20);
        const uintptr_t lua_checkstack                   = REBASE(0x262FDB0);
        const uintptr_t pseudo2addr                      = REBASE(0x262FC10);
        const uintptr_t luaM_freeblock                   = REBASE(0x269F700);
        const uintptr_t luaM_freeclasspage               = REBASE(0x269FBD0);
        const uintptr_t luaM_toobig                      = REBASE(0x269F6D0);
        const uintptr_t luaL_argerrorL                   = REBASE(0x263F620);
        const uintptr_t luaD_rawrunprotected             = REBASE(0x26360B0);
        const uintptr_t Freeobj                          = REBASE(0x3BB7470);
        const uintptr_t currfuncname                     = REBASE(0x5188300);
        const uintptr_t luaO_pushvfstring                = REBASE(0x1E16AE0);
        const uintptr_t luaA_toobject                    = REBASE(0x262FCD0);
        const uintptr_t lua_pushvfstring                 = REBASE(0x26311D0);
        const uintptr_t NewUserdataTagged                = REBASE(0x2634170);
        const uintptr_t Execute                          = REBASE(0x26862E0);
        const uintptr_t GetTypeName                      = REBASE(0x26308F0);
        const uintptr_t GetObjectTypeName                = REBASE(0x26741C0);
        const uintptr_t GetObjectTypeNameString          = REBASE(0x2674030);
        const uintptr_t Luau_Load                        = REBASE(0x4C32460);
        const uintptr_t CallYieldable                    = REBASE(0x26361C0);
    };

    namespace Coroutine {
        const uintptr_t create                           = REBASE(0x26AE220);
        const uintptr_t running                          = REBASE(0x5A618B0);
        const uintptr_t status                           = REBASE(0x5A5EB20);
        const uintptr_t wrap                             = REBASE(0x5A61580);
        const uintptr_t yield                            = REBASE(0x5A61850);
        const uintptr_t isyieldable                      = REBASE(0x5A61920);
        const uintptr_t close                            = REBASE(0x5A619B0);
    };

    namespace Signal {
        const uintptr_t Disconnect                       = REBASE(0x4239210);
        const uintptr_t FireTouchInterest                = REBASE(0x14B6AE0);
        const uintptr_t ConnectionDisconnectRaw          = REBASE(0x4AF09E0);
        const uintptr_t ConnectionUnlink                 = REBASE(0x4AF0E30);
        const uintptr_t ConnectionConnected              = REBASE(0x4AF0B70);
        const uintptr_t RaiseEventInvocation             = REBASE(0x1CFE4D0);
        const uintptr_t GetArguments                     = REBASE(0x42E2F60);
        const uintptr_t Once                             = REBASE(0x4237AE0);
        const uintptr_t Wait                             = REBASE(0x4134280);
    };

    namespace InstanceBridge {
        const uintptr_t Index                            = REBASE(0x42550A0);
        const uintptr_t UserdataIndex                    = REBASE(0x4256F50);
        const uintptr_t UserdataNamecall                 = REBASE(0x4258820);
        const uintptr_t NewIndex                         = REBASE(0x42548F0);
        const uintptr_t UserdataNewIndex                 = REBASE(0x4258150);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration                 = REBASE(0x19F5CDF);
    };

    namespace Input {
        const uintptr_t FireMouseClick                   = REBASE(0x3C6DAF0);
        const uintptr_t FireRightMouseClick              = REBASE(0x3C6DC90);
        const uintptr_t FireProximityPrompt              = REBASE(0x30FD840);
        const uintptr_t FireMouseHover                   = REBASE(0x3C6F060);
        const uintptr_t FireMouseHoverLeave              = REBASE(0x3C6F200);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash         = REBASE(0x8195AE0);
        const uintptr_t LockViolationInstanceCrash       = REBASE(0x81AACB8);
        const uintptr_t LockViolationInstanceCrashStudio = REBASE(0x81AAC40);
        const uintptr_t RBXCrashPtr                      = REBASE(0x85911D8);
    };

    namespace SharedString {
        const uintptr_t Create                           = REBASE(0x4AFC3A0);
    };

    namespace RobloxProperty {
        const uintptr_t GetProperty                      = REBASE(0x1CE8360);
    };

    namespace Scheduler {
        const uintptr_t StepWaitingHybridScripts         = REBASE(0x2880B70);
    };

    namespace Property {
        const uintptr_t ValueGetUnavailable              = REBASE(0xA7BDD0);
        const uintptr_t ValueSetUnavailable              = REBASE(0x7BB160);
    };
}

namespace Aliases {
    inline auto GetLuaState = Offsets::GetGlobalState;
    inline auto LuaVM_Load = Offsets::Luau::LoadModule;
}
