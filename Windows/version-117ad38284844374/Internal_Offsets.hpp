/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-117ad38284844374
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 139         𝓕𝓪𝓲𝓵𝓮𝓭: 17
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 42.57s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <string>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

inline std::string ClientVersion = "version-117ad38284844374";

namespace Offsets
{
    const uintptr_t Print                                = REBASE(0x1D071A0);
    const uintptr_t InvokeServer                         = REBASE(0x35B1B60);
    const uintptr_t FireServer                           = REBASE(0x34DE9B0);
    const uintptr_t FireClient                           = REBASE(0x34DEB50);
    const uintptr_t FireAllClients                       = REBASE(0x34DEDA0);
    const uintptr_t EnableLoadModule                     = REBASE(0x8A21BF0);
    const uintptr_t TaskScheduler                        = REBASE(0x8F026A8);
    const uintptr_t TaskSchedulerTargetFps               = REBASE(0x876CB58);
    const uintptr_t KTable                               = REBASE(0x85EAD60);
    const uintptr_t GetGlobalState                       = REBASE(0x425F7A0);
    const uintptr_t GetLuaState                          = REBASE(0x425F7A0);
    const uintptr_t CastArgs                             = REBASE(0x41C68B0);
    const uintptr_t PushInstance                         = REBASE(0x4246E90);
    const uintptr_t InstanceNew                          = REBASE(0x436EAE0);
    const uintptr_t InstanceFindFirstChild               = REBASE(0x529340);
    const uintptr_t InstanceFindFirstChildOfClass        = REBASE(0x525F10);
    const uintptr_t InstanceFindFirstAncestorWhichIsA    = REBASE(0x525C30);
    const uintptr_t InstanceGetChildren                  = REBASE(0x526F50);

    namespace Identity {
        const uintptr_t GetCapabilities                  = REBASE(0x1D45E30);
        const uintptr_t PrintIdentity                    = REBASE(0x43078E0);
        const uintptr_t TLS_Slot_get                     = REBASE(0x6BB0);
        const uintptr_t Impersonator                     = REBASE(0x1D45EF0);
    };

    namespace RobloxThread {
        const uintptr_t IdentityPtr                      = REBASE(0x86D8748);
    };

    namespace Bytecode {
        const uintptr_t VerificationTableA               = REBASE(0x87637B0);
    };

    namespace LuaError {
        const uintptr_t luaL_error                       = REBASE(0x26999F0);
        const uintptr_t readonlyerror                    = REBASE(0x26B6D60);
        const uintptr_t methoderror                      = REBASE(0x26B6D20);
        const uintptr_t indexerror                       = REBASE(0x26B6C20);
        const uintptr_t ordererror                       = REBASE(0x26B6BA0);
        const uintptr_t forerrorL                        = REBASE(0x26B6A70);
    };

    namespace Native {
        const uintptr_t DestroyString                    = REBASE(0x76AE10);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass                = 0x988;
        constexpr uintptr_t IsCoreScript                 = 0x150;
    };

    namespace TaskDefer {
        const uintptr_t TaskWait                         = REBASE(0x43C4450);
        const uintptr_t TaskSynchronize                  = REBASE(0x43C27B0);
        const uintptr_t TaskDesynchronize                = REBASE(0x43C2C80);
        const uintptr_t TaskDefer                        = REBASE(0x43C38D0);
        const uintptr_t TaskSpawn                        = REBASE(0x43C3DB0);
        const uintptr_t TaskDelay                        = REBASE(0x43C4150);
    };

    namespace ScriptContext {
        const uintptr_t Resume                           = REBASE(0x43004B0);
    };

    namespace RbxTransport {
        const uintptr_t ClientRtti                       = REBASE(0x7811B28);
        const uintptr_t AppRtti                          = REBASE(0x7775F50);
        const uintptr_t ClientChannelConfig              = REBASE(0x3B1E5B0);
        const uintptr_t AppReceive                       = REBASE(0x21C0120);
        const uintptr_t AppReceiveMaxBytes               = REBASE(0x21C09D0);
        const uintptr_t StreamCreate                     = REBASE(0x53B4350);
        const uintptr_t StreamAppend                     = REBASE(0x21C7A10);
        const uintptr_t StreamDestroy                    = REBASE(0x218AFF0);
    };

    namespace Luau {
        const uintptr_t LoadModule                       = REBASE(0x42560B0);
        const uintptr_t LuaVM_Load                       = REBASE(0x42560B0);
        const uintptr_t Luau_Execute                     = REBASE(0x26BCFD0);
        const uintptr_t LuaD_Throw                       = REBASE(0x2691F10);
        const uintptr_t luaC_step                        = REBASE(0x26B0B80);
    };

    namespace Luau_Other {
        const uintptr_t LuaT_typenames                   = REBASE(0x67DCAB0);
        const uintptr_t LuaT_eventname                   = REBASE(0x67DCB20);
        const uintptr_t luaC_init                        = REBASE(0x26E0370);
        const uintptr_t luaG_runerror                    = REBASE(0x26B7390);
        const uintptr_t luaO_pushfstring                 = REBASE(0x2690140);
        const uintptr_t luaM_visitgco                    = REBASE(0x26DFF30);
        const uintptr_t luaF_Freeproto                   = REBASE(0x26B81A0);
        const uintptr_t luaB_assert                      = REBASE(0x26DBC90);
        const uintptr_t luaB_print                       = REBASE(0x26D6FD0);
        const uintptr_t luaB_error                       = REBASE(0x26D7430);
        const uintptr_t luaB_gcinfo                      = REBASE(0x26DA5E0);
        const uintptr_t luaB_getfenv                     = REBASE(0x26D89E0);
        const uintptr_t luaB_getmetatable                = REBASE(0x26D7E60);
        const uintptr_t luaB_next                        = REBASE(0x26DB1E0);
        const uintptr_t luaB_newproxy                    = REBASE(0x26DC880);
        const uintptr_t luaB_rawequal                    = REBASE(0x26D8CC0);
        const uintptr_t luaB_rawget                      = REBASE(0x26D8DD0);
        const uintptr_t luaB_rawset                      = REBASE(0x26D9860);
        const uintptr_t luaB_rawlen                      = REBASE(0x26DA540);
        const uintptr_t luaB_select                      = REBASE(0x26DBD40);
        const uintptr_t luaB_setfenv                     = REBASE(0x26D8AA0);
        const uintptr_t luaB_setmetatable                = REBASE(0x26D7FE0);
        const uintptr_t luaB_tonumber                    = REBASE(0x26D70A0);
        const uintptr_t luaB_tostring                    = REBASE(0x26DC820);
        const uintptr_t luaB_type                        = REBASE(0x26DA600);
        const uintptr_t luaB_typeof                      = REBASE(0x26DAC00);
        const uintptr_t lua_checkstack                   = REBASE(0x268C3F0);
        const uintptr_t pseudo2addr                      = REBASE(0x268C250);
        const uintptr_t luaM_free                        = REBASE(0x26DFAD0);
        const uintptr_t luaM_freegco                     = REBASE(0x26DFB80);
        const uintptr_t luaM_freeclasspage               = REBASE(0x26E0040);
        const uintptr_t lua_clock                        = REBASE(0x26E0C10);
        const uintptr_t GcStep                           = REBASE(0x26B0960);
        const uintptr_t luaM_toobig                      = REBASE(0x26DF9F0);
        const uintptr_t luaL_argerrorL                   = REBASE(0x2698DA0);
        const uintptr_t luaF_newproto                    = REBASE(0x26B7AD0);
        const uintptr_t luaD_rawrunprotected             = REBASE(0x2691EE0);
        const uintptr_t currfuncname                     = REBASE(0x514D160);
        const uintptr_t luaO_pushvfstring                = REBASE(0x26B5D00);
        const uintptr_t luaA_toobject                    = REBASE(0x268C310);
        const uintptr_t NewUserdataTagged                = REBASE(0x2690150);
        const uintptr_t Execute                          = REBASE(0x26CA240);
        const uintptr_t GetTypeName                      = REBASE(0x268CF50);
        const uintptr_t GetObjectTypeName                = REBASE(0x26B93D0);
        const uintptr_t GetObjectTypeNameString          = REBASE(0x26B9240);
        const uintptr_t Luau_Load                        = REBASE(0x26F4750);
        const uintptr_t CallInternal                     = REBASE(0x268DB80);
        const uintptr_t CallYieldable                    = REBASE(0x2691FF0);
    };

    namespace Coroutine {
        const uintptr_t create                           = REBASE(0x26EBC70);
        const uintptr_t running                          = REBASE(0x59EB070);
        const uintptr_t status                           = REBASE(0x59E8DF0);
        const uintptr_t wrap                             = REBASE(0x59EADA0);
        const uintptr_t yield                            = REBASE(0x59EB010);
        const uintptr_t isyieldable                      = REBASE(0x59EB0E0);
        const uintptr_t close                            = REBASE(0x59EB170);
    };

    namespace Signal {
        const uintptr_t Disconnect                       = REBASE(0x422A100);
        const uintptr_t ConnectionDisconnectRaw          = REBASE(0x4A9E0B0);
        const uintptr_t ConnectionUnlink                 = REBASE(0x4A9E4F0);
        const uintptr_t ConnectionConnected              = REBASE(0x4A9E240);
        const uintptr_t ConnectionPushFront              = REBASE(0x4A9E740);
        const uintptr_t RaiseEventInvocation             = REBASE(0x1D59AA0);
        const uintptr_t GetArguments                     = REBASE(0x42CD100);
        const uintptr_t Once                             = REBASE(0x4228FC0);
        const uintptr_t Wait                             = REBASE(0x4229160);
    };

    namespace InstanceBridge {
        const uintptr_t Index                            = REBASE(0x4244A80);
        const uintptr_t UserdataNamecall                 = REBASE(0x42461B0);
        const uintptr_t NewIndex                         = REBASE(0x4242440);
    };

    namespace AppData {
        const uintptr_t Info                             = REBASE(0x1521490);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration                 = REBASE(0x1A82EDF);
    };

    namespace Input {
        const uintptr_t FireMouseClick                   = REBASE(0x3C7E520);
        const uintptr_t FireRightMouseClick              = REBASE(0x3C7E6C0);
        const uintptr_t FireProximityPrompt              = REBASE(0x312C010);
        const uintptr_t FireMouseHover                   = REBASE(0x3C7FB10);
        const uintptr_t FireMouseHoverLeave              = REBASE(0x3C7FCB0);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash         = REBASE(0x8A21A30);
        const uintptr_t LockViolationInstanceCrash       = REBASE(0x8ACF1D8);
        const uintptr_t LockViolationInstanceCrashStudio = REBASE(0x8ACF1F0);
        const uintptr_t RBXCrashPtr                      = REBASE(0x8E1B188);
    };

    namespace SharedString {
        const uintptr_t Create                           = REBASE(0x4AA8D10);
        const uintptr_t Release                          = REBASE(0x824510);
    };

    namespace RobloxProperty {
        const uintptr_t InternPropertyName               = REBASE(0x2AB03C0);
        const uintptr_t LookupPropertyName               = REBASE(0x2AB07E0);
        const uintptr_t GetProperty                      = REBASE(0x1D44010);
    };

    namespace Scheduler {
        const uintptr_t StepWaitingHybridScripts         = REBASE(0x4335AA0);
    };

    namespace Property {
        const uintptr_t ValueGetUnavailable              = REBASE(0xAC63D0);
        const uintptr_t ValueSetUnavailable              = REBASE(0x7F7160);
    };
}

namespace Aliases {
    inline auto GetLuaState = Offsets::GetGlobalState;
    inline auto LuaVM_Load = Offsets::Luau::LoadModule;
}
