/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-5a21b87bbc2641cf
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 133         𝓕𝓪𝓲𝓵𝓮𝓭: 24
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 55.61s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <string>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

inline std::string ClientVersion = "version-5a21b87bbc2641cf";

namespace Offsets
{
    const uintptr_t Print                                = REBASE(0x1C50690);
    const uintptr_t InvokeServer                         = REBASE(0x35225F0);
    const uintptr_t FireServer                           = REBASE(0x3451A30);
    const uintptr_t FireClient                           = REBASE(0x3451BD0);
    const uintptr_t FireAllClients                       = REBASE(0x3451DD0);
    const uintptr_t TaskScheduler                        = REBASE(0x8C9D698);
    const uintptr_t TaskSchedulerTargetFps               = REBASE(0x7FD07C8);
    const uintptr_t KTable                               = REBASE(0x838A130);
    const uintptr_t GetGlobalState                       = REBASE(0x41D0080);
    const uintptr_t GetLuaState                          = REBASE(0x41D0080);
    const uintptr_t CastArgs                             = REBASE(0x4134690);
    const uintptr_t PushInstance                         = REBASE(0x41B76C0);
    const uintptr_t InstanceNew                          = REBASE(0x429DDC0);
    const uintptr_t InstanceFindFirstChild               = REBASE(0x56AE10);
    const uintptr_t InstanceFindFirstChildOfClass        = REBASE(0x5675A0);
    const uintptr_t InstanceFindFirstAncestorWhichIsA    = REBASE(0x567260);
    const uintptr_t InstanceGetChildren                  = REBASE(0x5687C0);

    namespace Identity {
        const uintptr_t GetCapabilities                  = REBASE(0x1C905D0);
        const uintptr_t PrintIdentity                    = REBASE(0x42774E0);
        const uintptr_t Impersonator                     = REBASE(0x1C90690);
    };

    namespace RobloxThread {
        const uintptr_t IdentityPtr                      = REBASE(0x83B6678);
    };

    namespace Bytecode {
        const uintptr_t VerificationTableA               = REBASE(0x8522860);
    };

    namespace LuaError {
        const uintptr_t luaL_error                       = REBASE(0x25FE4D0);
        const uintptr_t readonlyerror                    = REBASE(0x261C010);
        const uintptr_t methoderror                      = REBASE(0x261BFD0);
        const uintptr_t indexerror                       = REBASE(0x261BED0);
        const uintptr_t ordererror                       = REBASE(0x261BE50);
        const uintptr_t forerrorL                        = REBASE(0x261BD20);
    };

    namespace Native {
        const uintptr_t DestroyString                    = REBASE(0x7297E0);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass                = 0xB50;
        constexpr uintptr_t IsCoreScript                 = 0x150;
    };

    namespace TaskDefer {
        const uintptr_t TaskWait                         = REBASE(0x432EDB0);
        const uintptr_t TaskSynchronize                  = REBASE(0x432CF80);
        const uintptr_t TaskDesynchronize                = REBASE(0x432D500);
        const uintptr_t TaskSpawn                        = REBASE(0x432E720);
        const uintptr_t TaskDelay                        = REBASE(0x432EAB0);
    };

    namespace ScriptContext {
        const uintptr_t Resume                           = REBASE(0x4270490);
    };

    namespace RbxTransport {
        const uintptr_t ClientRtti                       = REBASE(0x76EACB8);
        const uintptr_t AppRtti                          = REBASE(0x7674F18);
        const uintptr_t ClientSend                       = REBASE(0x3A99A20);
        const uintptr_t ClientChannelConfig              = REBASE(0x3A99F80);
        const uintptr_t AppReceive                       = REBASE(0x211E890);
        const uintptr_t AppReceiveMaxBytes               = REBASE(0x211F140);
        const uintptr_t StreamCreate                     = REBASE(0x53260A0);
        const uintptr_t StreamAppend                     = REBASE(0x2126160);
        const uintptr_t StreamDestroy                    = REBASE(0x20E91F0);
    };

    namespace Luau {
        const uintptr_t LoadModule                       = REBASE(0x41C70F0);
        const uintptr_t LuaVM_Load                       = REBASE(0x41C70F0);
        const uintptr_t Luau_Execute                     = REBASE(0x26228C0);
        const uintptr_t LuaD_Throw                       = REBASE(0x25F6560);
        const uintptr_t luaC_step                        = REBASE(0x2615BD0);
    };

    namespace Luau_Other {
        const uintptr_t LuaT_typenames                   = REBASE(0x6756F70);
        const uintptr_t LuaT_eventname                   = REBASE(0x6756FE0);
        const uintptr_t luaC_init                        = REBASE(0x2646460);
        const uintptr_t luaG_runerror                    = REBASE(0x261C690);
        const uintptr_t luaO_pushfstring                 = REBASE(0x25F4870);
        const uintptr_t luaM_visitgco                    = REBASE(0x29785B0);
        const uintptr_t luaF_Freeproto                   = REBASE(0x261D6B0);
        const uintptr_t luaB_assert                      = REBASE(0x2641500);
        const uintptr_t luaB_print                       = REBASE(0x263C780);
        const uintptr_t luaB_error                       = REBASE(0x263CBE0);
        const uintptr_t luaB_gcinfo                      = REBASE(0x263FD70);
        const uintptr_t luaB_getfenv                     = REBASE(0x263E190);
        const uintptr_t luaB_getmetatable                = REBASE(0x263D610);
        const uintptr_t luaB_next                        = REBASE(0x2640A50);
        const uintptr_t luaB_newproxy                    = REBASE(0x2642110);
        const uintptr_t luaB_rawequal                    = REBASE(0x263E470);
        const uintptr_t luaB_rawget                      = REBASE(0x263E580);
        const uintptr_t luaB_rawset                      = REBASE(0x263F010);
        const uintptr_t luaB_rawlen                      = REBASE(0x263FCD0);
        const uintptr_t luaB_select                      = REBASE(0x26415B0);
        const uintptr_t luaB_setfenv                     = REBASE(0x263E250);
        const uintptr_t luaB_setmetatable                = REBASE(0x263D790);
        const uintptr_t luaB_tonumber                    = REBASE(0x263C850);
        const uintptr_t luaB_tostring                    = REBASE(0x26420B0);
        const uintptr_t luaB_type                        = REBASE(0x263FD90);
        const uintptr_t luaB_typeof                      = REBASE(0x2640400);
        const uintptr_t lua_checkstack                   = REBASE(0x25F0900);
        const uintptr_t pseudo2addr                      = REBASE(0x25F0750);
        const uintptr_t luaM_freeblock                   = REBASE(0x162E480);
        const uintptr_t luaM_freeclasspage               = REBASE(0x26459F0);
        const uintptr_t lua_clock                        = REBASE(0x2646D70);
        const uintptr_t GcStep                           = REBASE(0x26158C0);
        const uintptr_t luaM_toobig                      = REBASE(0x26454F0);
        const uintptr_t luaL_argerrorL                   = REBASE(0x25FD820);
        const uintptr_t luaD_rawrunprotected             = REBASE(0x25F6530);
        const uintptr_t currfuncname                     = REBASE(0x50C2F70);
        const uintptr_t luaO_pushvfstring                = REBASE(0x261AF50);
        const uintptr_t luaA_toobject                    = REBASE(0x25F0820);
        const uintptr_t NewUserdataTagged                = REBASE(0x25F4880);
        const uintptr_t Execute                          = REBASE(0x18A36E0);
        const uintptr_t GetTypeName                      = REBASE(0x25F1480);
        const uintptr_t GetObjectTypeName                = REBASE(0x261E8F0);
        const uintptr_t GetObjectTypeNameString          = REBASE(0x261E760);
        const uintptr_t Luau_Load                        = REBASE(0x265B4D0);
        const uintptr_t CallInternal                     = REBASE(0x55EA3F0);
        const uintptr_t CallYieldable                    = REBASE(0x25F6640);
    };

    namespace Coroutine {
        const uintptr_t create                           = REBASE(0x2652280);
        const uintptr_t running                          = REBASE(0x5993E90);
        const uintptr_t status                           = REBASE(0x5991B10);
        const uintptr_t wrap                             = REBASE(0x5993B70);
        const uintptr_t yield                            = REBASE(0x5993E30);
        const uintptr_t isyieldable                      = REBASE(0x5993F00);
        const uintptr_t close                            = REBASE(0x5993F90);
    };

    namespace Signal {
        const uintptr_t Disconnect                       = REBASE(0x419A260);
        const uintptr_t ConnectionDisconnectRaw          = REBASE(0x4A16850);
        const uintptr_t ConnectionUnlink                 = REBASE(0x4A16CA0);
        const uintptr_t ConnectionConnected              = REBASE(0x4A169E0);
        const uintptr_t RaiseEventInvocation             = REBASE(0x1CA44B0);
        const uintptr_t GetArguments                     = REBASE(0x423CFF0);
        const uintptr_t Once                             = REBASE(0x4198FE0);
        const uintptr_t Wait                             = REBASE(0x40A41D0);
    };

    namespace InstanceBridge {
        const uintptr_t Index                            = REBASE(0x41B3170);
        const uintptr_t UserdataIndex                    = REBASE(0x41B5020);
        const uintptr_t UserdataNamecall                 = REBASE(0x41B6A20);
        const uintptr_t NewIndex                         = REBASE(0x41B29D0);
        const uintptr_t UserdataNewIndex                 = REBASE(0x41B6210);
        const uintptr_t RegisterUserdata                 = REBASE(0x25F56A0);
    };

    namespace Event {
        const uintptr_t IsLegalSendEvent                 = REBASE(0x47342D0);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration                 = REBASE(0x19C538F);
    };

    namespace Input {
        const uintptr_t FireMouseClick                   = REBASE(0x3C00500);
        const uintptr_t FireRightMouseClick              = REBASE(0x3C006A0);
        const uintptr_t FireProximityPrompt              = REBASE(0x30A8980);
        const uintptr_t FireMouseHover                   = REBASE(0x3C01A70);
        const uintptr_t FireMouseHoverLeave              = REBASE(0x3C01C10);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash         = REBASE(0x7FF4B08);
        const uintptr_t LockViolationInstanceCrash       = REBASE(0x8009AC0);
        const uintptr_t LockViolationInstanceCrashStudio = REBASE(0x8009AD8);
    };

    namespace SharedString {
        const uintptr_t Create                           = REBASE(0x4A22180);
    };

    namespace RobloxProperty {
        const uintptr_t GetProperty                      = REBASE(0x1C8E7F0);
    };

    namespace Scheduler {
        const uintptr_t StepWaitingHybridScripts         = REBASE(0x282BD80);
    };

    namespace Property {
        const uintptr_t ValueGetUnavailable              = REBASE(0xA6D610);
        const uintptr_t ValueSetUnavailable              = REBASE(0x7B5200);
    };
}

namespace Aliases {
    inline auto GetLuaState = Offsets::GetGlobalState;
    inline auto LuaVM_Load = Offsets::Luau::LoadModule;
}
