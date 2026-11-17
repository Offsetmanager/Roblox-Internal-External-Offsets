/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗  ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝  ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░  ╚██╗░██╔╝╚██████║
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░  ░╚████╔╝░░╚═══██║
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗  ░░╚██╔╝░░░█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝  ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-2c6fd5e09aaf4cfa
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 108         𝓕𝓪𝓲𝓵𝓮𝓭: 52
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 70.21s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <string>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

inline std::string ClientVersion = "version-2c6fd5e09aaf4cfa";

namespace Offsets
{
    const uintptr_t Print                             = REBASE(0x1BF4F90);
    const uintptr_t InvokeServer                      = REBASE(0x343A67B);
    const uintptr_t FireServer                        = REBASE(0x3365142);
    const uintptr_t FireClient                        = REBASE(0x33654EA);
    const uintptr_t FireAllClients                    = REBASE(0x3365691);
    const uintptr_t TaskScheduler                     = REBASE(0x8DA5D98);
    const uintptr_t TaskSchedulerTargetFps            = REBASE(0x8104130);
    const uintptr_t GetGlobalState                    = REBASE(0x412F350);
    const uintptr_t GetLuaState                       = REBASE(0x412F350);
    const uintptr_t CastArgs                          = REBASE(0x17A2A20);
    const uintptr_t PushInstance                      = REBASE(0x41140D0);
    const uintptr_t InstanceNew                       = REBASE(0x420512C);
    const uintptr_t InstanceFindFirstChild            = REBASE(0x56E85D);
    const uintptr_t InstanceFindFirstChildOfClass     = REBASE(0x56B531);
    const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x56B1F1);
    const uintptr_t InstanceGetChildren               = REBASE(0x56C749);

    namespace Identity {
        const uintptr_t PrintIdentity                 = REBASE(0x41DA030);
        const uintptr_t Impersonator                  = REBASE(0x2B10C70);
    };

    namespace RobloxThread {
        const uintptr_t IdentityPtr                   = REBASE(0x84AED78);
    };

    namespace Native {
        const uintptr_t DestroyString                 = REBASE(0x6F8FB0);
    };

    namespace TaskDefer {
        const uintptr_t TaskWait                      = REBASE(0x4212D05);
        const uintptr_t TaskSynchronize               = REBASE(0x4210D75);
        const uintptr_t TaskDesynchronize             = REBASE(0x42112D3);
        const uintptr_t TaskDelay                     = REBASE(0x42127E0);
    };

    namespace ScriptContext {
        const uintptr_t Resume                        = REBASE(0x41D21CB);
    };

    namespace RbxTransport {
        const uintptr_t ClientRtti                    = REBASE(0x77F7380);
        const uintptr_t AppRtti                       = REBASE(0x777FA58);
        const uintptr_t AppReceive                    = REBASE(0x133C900);
        const uintptr_t AppReceiveMaxBytes            = REBASE(0x20727F0);
        const uintptr_t StreamCreate                  = REBASE(0x526AC40);
        const uintptr_t StreamAppend                  = REBASE(0x207B190);
    };

    namespace Luau {
        const uintptr_t LoadModule                    = REBASE(0x1048800);
        const uintptr_t LuaVM_Load                    = REBASE(0x1048800);
        const uintptr_t Luau_Execute                  = REBASE(0x258E0C0);
        const uintptr_t LuaD_Throw                    = REBASE(0x2551BB0);
    };

    namespace Luau_Other {
        const uintptr_t LuaT_typenames                = REBASE(0x67DBCD0);
        const uintptr_t LuaT_eventname                = REBASE(0x67DBD50);
        const uintptr_t luaC_init                     = REBASE(0x25A96D0);
        const uintptr_t luaG_runerror                 = REBASE(0x2586610);
        const uintptr_t luaO_pushfstring              = REBASE(0x25851A0);
        const uintptr_t luaM_visitgco                 = REBASE(0x28BC760);
        const uintptr_t luaF_Freeproto                = REBASE(0x2587E10);
        const uintptr_t luaB_assert                   = REBASE(0x58C7E80);
        const uintptr_t luaB_print                    = REBASE(0x58C2AF0);
        const uintptr_t luaB_error                    = REBASE(0x58C2F50);
        const uintptr_t luaB_gcinfo                   = REBASE(0x58C5C90);
        const uintptr_t luaB_getfenv                  = REBASE(0x58C4A80);
        const uintptr_t luaB_getmetatable             = REBASE(0x58C3EA0);
        const uintptr_t luaB_next                     = REBASE(0x58C7380);
        const uintptr_t luaB_newproxy                 = REBASE(0x58C8AD0);
        const uintptr_t luaB_rawequal                 = REBASE(0x58C4D90);
        const uintptr_t luaB_rawget                   = REBASE(0x58C4EB0);
        const uintptr_t luaB_rawset                   = REBASE(0x58C5440);
        const uintptr_t luaB_rawlen                   = REBASE(0x58C5BF0);
        const uintptr_t luaB_select                   = REBASE(0x58C7F30);
        const uintptr_t luaB_setfenv                  = REBASE(0x58C4B50);
        const uintptr_t luaB_setmetatable             = REBASE(0x58C4040);
        const uintptr_t luaB_tonumber                 = REBASE(0x58C2BB0);
        const uintptr_t luaB_tostring                 = REBASE(0x58C8A70);
        const uintptr_t luaB_type                     = REBASE(0x58C5CB0);
        const uintptr_t luaB_typeof                   = REBASE(0x58C6820);
        const uintptr_t lua_checkstack                = REBASE(0x254B930);
        const uintptr_t pseudo2addr                   = REBASE(0x254B780);
        const uintptr_t luaM_free                     = REBASE(0x25A8870);
        const uintptr_t luaM_freegco                  = REBASE(0x25A8870);
        const uintptr_t luaM_freeclasspage            = REBASE(0x25A8C80);
        const uintptr_t luaD_rawrunprotected          = REBASE(0x2551B80);
        const uintptr_t Freeobj                       = REBASE(0x3A896B0);
        const uintptr_t currfuncname                  = REBASE(0x50197F0);
        const uintptr_t luaO_pushvfstring             = REBASE(0x1D5FF60);
        const uintptr_t luaA_toobject                 = REBASE(0x254B840);
        const uintptr_t NewUserdataTagged             = REBASE(0x254FC70);
        const uintptr_t Execute                       = REBASE(0x259B710);
        const uintptr_t GetTypeName                   = REBASE(0x254C4D0);
        const uintptr_t GetObjectTypeName             = REBASE(0x25897E0);
        const uintptr_t GetObjectTypeNameString       = REBASE(0x2589650);
        const uintptr_t Luau_Load                     = REBASE(0x25781D0);
    };

    namespace Coroutine {
        const uintptr_t create                        = REBASE(0x58C07A0);
        const uintptr_t running                       = REBASE(0x58F86B0);
        const uintptr_t status                        = REBASE(0x58F5860);
        const uintptr_t wrap                          = REBASE(0x58F8380);
        const uintptr_t yield                         = REBASE(0x58F8650);
        const uintptr_t isyieldable                   = REBASE(0x58F8730);
        const uintptr_t close                         = REBASE(0x58F87D0);
    };

    namespace Signal {
        const uintptr_t Disconnect                    = REBASE(0x40F666E);
        const uintptr_t FireTouchInterest             = REBASE(0x13EDE10);
        const uintptr_t ConnectionDisconnectRaw       = REBASE(0x4968FD0);
        const uintptr_t ConnectionUnlink              = REBASE(0x4969420);
        const uintptr_t ConnectionConnected           = REBASE(0x4969160);
        const uintptr_t RaiseEventInvocation          = REBASE(0x1C44010);
        const uintptr_t GetArguments                  = REBASE(0x419C7D0);
        const uintptr_t Once                          = REBASE(0x40F4F40);
    };

    namespace InstanceBridge {
        const uintptr_t Index                         = REBASE(0x411036E);
        const uintptr_t UserdataIndex                 = REBASE(0x4112278);
        const uintptr_t UserdataNamecall              = REBASE(0x4113430);
        const uintptr_t UserdataNewIndex              = REBASE(0x4112D80);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration              = REBASE(0x19291FF);
    };

    namespace Input {
        const uintptr_t FireMouseClick                = REBASE(0x3B3CAC0);
        const uintptr_t FireRightMouseClick           = REBASE(0x3B3CC60);
        const uintptr_t FireProximityPrompt           = REBASE(0x2FC3FE0);
        const uintptr_t FireMouseHover                = REBASE(0x3B3E030);
        const uintptr_t FireMouseHoverLeave           = REBASE(0x3B3E1D0);
    };

    namespace SharedString {
        const uintptr_t Create                        = REBASE(0x20A2660);
    };

    namespace RobloxProperty {
        const uintptr_t GetProperty                   = REBASE(0x1C2F7D0);
    };

    namespace Property {
        const uintptr_t ValueGetUnavailable           = REBASE(0xA1A140);
        const uintptr_t ValueSetUnavailable           = REBASE(0x783B60);
    };

    namespace For_Luau_Violation_Reader {
        constexpr uintptr_t facets                    = 0x98;
        constexpr uintptr_t facets_end                = 0xA0;
    };
}

namespace Aliases {
    inline auto GetLuaState = Offsets::GetGlobalState;
    inline auto LuaVM_Load = Offsets::Luau::LoadModule;
    inline auto luaM_freegco = Offsets::Luau_Other::luaM_free;
}
