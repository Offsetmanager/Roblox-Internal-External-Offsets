/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-4ea8e85481e34f46
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 123         𝓕𝓪𝓲𝓵𝓮𝓭: 33
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 60.55s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <string>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

inline std::string ClientVersion = "version-4ea8e85481e34f46";

namespace Offsets
{
    const uintptr_t Print                                = REBASE(0x1CD77F0);
    const uintptr_t InvokeServer                         = REBASE(0x35B9980);
    const uintptr_t FireServer                           = REBASE(0x34E0140);
    const uintptr_t FireClient                           = REBASE(0x34E02E0);
    const uintptr_t FireAllClients                       = REBASE(0x34E04E0);
    const uintptr_t EnableLoadModule                     = REBASE(0x8268E20);
    const uintptr_t TaskScheduler                        = REBASE(0x8F1E408);
    const uintptr_t TaskSchedulerTargetFps               = REBASE(0x8244258);
    const uintptr_t KTable                               = REBASE(0x85FEA80);
    const uintptr_t GetGlobalState                       = REBASE(0x42D3B20);
    const uintptr_t GetLuaState                          = REBASE(0x42D3B20);
    const uintptr_t CastArgs                             = REBASE(0x1896990);
    const uintptr_t PushInstance                         = REBASE(0x42B6E70);
    const uintptr_t InstanceNew                          = REBASE(0x43AC340);
    const uintptr_t InstanceFindFirstChild               = REBASE(0x579FE0);
    const uintptr_t InstanceFindFirstChildOfClass        = REBASE(0x576770);
    const uintptr_t InstanceFindFirstAncestorWhichIsA    = REBASE(0x576430);
    const uintptr_t InstanceGetChildren                  = REBASE(0x577990);

    namespace Identity {
        const uintptr_t GetCapabilities                  = REBASE(0x1D18C30);
        const uintptr_t PrintIdentity                    = REBASE(0x4380FD0);
        const uintptr_t Impersonator                     = REBASE(0x2C44930);
    };

    namespace RobloxThread {
        const uintptr_t IdentityPtr                      = REBASE(0x862AC48);
    };

    namespace Bytecode {
        const uintptr_t VerificationTableA               = REBASE(0x8799FB0);
    };

    namespace LuaError {
        const uintptr_t luaL_error                       = REBASE(0x2674070);
        const uintptr_t readonlyerror                    = REBASE(0x26A0C10);
        const uintptr_t methoderror                      = REBASE(0x26A0BD0);
        const uintptr_t indexerror                       = REBASE(0x26A0AD0);
        const uintptr_t ordererror                       = REBASE(0x26A0A50);
        const uintptr_t forerrorL                        = REBASE(0x26A0920);
    };

    namespace Native {
        const uintptr_t DestroyString                    = REBASE(0x73AA70);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass                = 0xC30;
        constexpr uintptr_t IsCoreScript                 = 0x150;
    };

    namespace TaskDefer {
        const uintptr_t TaskWait                         = REBASE(0x43BB7C0);
        const uintptr_t TaskSynchronize                  = REBASE(0x43B9810);
        const uintptr_t TaskDelay                        = REBASE(0x43BB4C0);
    };

    namespace ScriptContext {
        const uintptr_t Resume                           = REBASE(0x4379900);
    };

    namespace RbxTransport {
        const uintptr_t ClientRtti                       = REBASE(0x7940758);
        const uintptr_t AppRtti                          = REBASE(0x78C98E0);
        const uintptr_t ClientSend                       = REBASE(0x3B52A00);
        const uintptr_t AppReceive                       = REBASE(0x14185E0);
        const uintptr_t AppReceiveMaxBytes               = REBASE(0x2183180);
        const uintptr_t StreamCreate                     = REBASE(0x5459D50);
        const uintptr_t StreamAppend                     = REBASE(0x218B7E0);
    };

    namespace Luau {
        const uintptr_t LoadModule                       = REBASE(0x110ABB0);
        const uintptr_t LuaVM_Load                       = REBASE(0x110ABB0);
        const uintptr_t Luau_Execute                     = REBASE(0x26A91B0);
        const uintptr_t LuaD_Throw                       = REBASE(0x266A470);
    };

    namespace Luau_Other {
        const uintptr_t LuaT_typenames                   = REBASE(0x6991A50);
        const uintptr_t LuaT_eventname                   = REBASE(0x6991A50);
        const uintptr_t luaC_init                        = REBASE(0x26C41A0);
        const uintptr_t luaG_runerror                    = REBASE(0x26A17A0);
        const uintptr_t luaO_pushfstring                 = REBASE(0x26A0320);
        const uintptr_t luaM_visitgco                    = REBASE(0x29EFE50);
        const uintptr_t luaB_assert                      = REBASE(0x5AAE900);
        const uintptr_t luaB_print                       = REBASE(0x5AA8F00);
        const uintptr_t luaB_error                       = REBASE(0x5AA9350);
        const uintptr_t luaB_gcinfo                      = REBASE(0x5AAC780);
        const uintptr_t luaB_getfenv                     = REBASE(0x5AAAE00);
        const uintptr_t luaB_getmetatable                = REBASE(0x5AAA290);
        const uintptr_t luaB_next                        = REBASE(0x5AADE60);
        const uintptr_t luaB_newproxy                    = REBASE(0x5AAF4F0);
        const uintptr_t luaB_rawequal                    = REBASE(0x5AAB0F0);
        const uintptr_t luaB_rawget                      = REBASE(0x5AAB200);
        const uintptr_t luaB_rawset                      = REBASE(0x5AABB70);
        const uintptr_t luaB_rawlen                      = REBASE(0x5AAC6E0);
        const uintptr_t luaB_select                      = REBASE(0x5AAE9B0);
        const uintptr_t luaB_setfenv                     = REBASE(0x5AAAEC0);
        const uintptr_t luaB_setmetatable                = REBASE(0x5AAA420);
        const uintptr_t luaB_tonumber                    = REBASE(0x5AA8FC0);
        const uintptr_t luaB_tostring                    = REBASE(0x5AAF490);
        const uintptr_t luaB_type                        = REBASE(0x5AAC7A0);
        const uintptr_t luaB_typeof                      = REBASE(0x5AAD300);
        const uintptr_t lua_checkstack                   = REBASE(0x26642E0);
        const uintptr_t pseudo2addr                      = REBASE(0x2664140);
        const uintptr_t luaM_freeclasspage               = REBASE(0x26C3750);
        const uintptr_t luaM_toobig                      = REBASE(0x26C3270);
        const uintptr_t luaL_argerrorL                   = REBASE(0x2673020);
        const uintptr_t RegisterUserdata                 = REBASE(0x2669140);
        const uintptr_t luaD_rawrunprotected             = REBASE(0x266A440);
        const uintptr_t Freeobj                          = REBASE(0x268DE20);
        const uintptr_t currfuncname                     = REBASE(0x52053A0);
        const uintptr_t luaO_pushvfstring                = REBASE(0x1E46D10);
        const uintptr_t luaA_toobject                    = REBASE(0x2664200);
        const uintptr_t NewUserdataTagged                = REBASE(0x2668590);
        const uintptr_t Execute                          = REBASE(0x26B6520);
        const uintptr_t GetTypeName                      = REBASE(0x2664E30);
        const uintptr_t GetObjectTypeName                = REBASE(0x26A49C0);
        const uintptr_t GetObjectTypeNameString          = REBASE(0x26A4830);
        const uintptr_t Luau_Load                        = REBASE(0x4C8D580);
    };

    namespace Coroutine {
        const uintptr_t create                           = REBASE(0x26D17D0);
        const uintptr_t running                          = REBASE(0x5ADE830);
        const uintptr_t status                           = REBASE(0x5ADBAA0);
        const uintptr_t wrap                             = REBASE(0x5ADE510);
        const uintptr_t yield                            = REBASE(0x5ADE7D0);
        const uintptr_t isyieldable                      = REBASE(0x5ADE8A0);
        const uintptr_t close                            = REBASE(0x5ADE930);
    };

    namespace Signal {
        const uintptr_t Disconnect                       = REBASE(0x4297720);
        const uintptr_t FireTouchInterest                = REBASE(0x14D0000);
        const uintptr_t ConnectionDisconnectRaw          = REBASE(0x4B477B0);
        const uintptr_t ConnectionUnlink                 = REBASE(0x4B47C00);
        const uintptr_t ConnectionConnected              = REBASE(0x4B47940);
        const uintptr_t RaiseEventInvocation             = REBASE(0x1D2D000);
        const uintptr_t GetArguments                     = REBASE(0x4342380);
        const uintptr_t Once                             = REBASE(0x4296000);
        const uintptr_t Wait                             = REBASE(0x39DE740);
    };

    namespace InstanceBridge {
        const uintptr_t Index                            = REBASE(0x42B2A50);
        const uintptr_t UserdataIndex                    = REBASE(0x42B4900);
        const uintptr_t UserdataNamecall                 = REBASE(0x42B61D0);
        const uintptr_t UserdataNewIndex                 = REBASE(0x42B5B00);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration                 = REBASE(0x1A17A7F);
    };

    namespace Input {
        const uintptr_t FireMouseClick                   = REBASE(0x3CC86D0);
        const uintptr_t FireRightMouseClick              = REBASE(0x3CC8870);
        const uintptr_t FireProximityPrompt              = REBASE(0x312A6F0);
        const uintptr_t FireMouseHover                   = REBASE(0x3CC9C40);
        const uintptr_t FireMouseHoverLeave              = REBASE(0x3CC9DE0);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash         = REBASE(0x8268820);
        const uintptr_t LockViolationInstanceCrash       = REBASE(0x827DAC8);
        const uintptr_t LockViolationInstanceCrashStudio = REBASE(0x827DAB0);
        const uintptr_t RBXCrashPtr                      = REBASE(0x8660068);
    };

    namespace SharedString {
        const uintptr_t Create                           = REBASE(0x21B4560);
    };

    namespace RobloxProperty {
        const uintptr_t GetProperty                      = REBASE(0x1D16EE0);
    };

    namespace Property {
        const uintptr_t ValueGetUnavailable              = REBASE(0xA866F0);
        const uintptr_t ValueSetUnavailable              = REBASE(0x7C7140);
    };
}

namespace Aliases {
    inline auto GetLuaState = Offsets::GetGlobalState;
    inline auto LuaVM_Load = Offsets::Luau::LoadModule;
    inline auto LuaT_eventname = Offsets::Luau_Other::LuaT_typenames;
}
