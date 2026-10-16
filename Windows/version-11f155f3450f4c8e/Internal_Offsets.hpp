/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-11f155f3450f4c8e
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 151         𝓕𝓪𝓲𝓵𝓮𝓭: 0
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 22.63s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print                                = REBASE(0x1CE58F0);
    const uintptr_t InvokeServer                         = REBASE(0x351F9F0);
    const uintptr_t FireServer                           = REBASE(0x3449B70);
    const uintptr_t FireClient                           = REBASE(0x3449D10);
    const uintptr_t FireAllClients                       = REBASE(0x3449F60);
    const uintptr_t OpCodeLookupTable                    = REBASE(0x71433E0);
    const uintptr_t EnableLoadModule                     = REBASE(0x8891880);
    const uintptr_t TaskScheduler                        = REBASE(0x8D71348);
    const uintptr_t TaskSchedulerTargetFps               = REBASE(0x85DCC40);
    const uintptr_t KTable                               = REBASE(0x846BAA0);
    const uintptr_t GetGlobalState                       = REBASE(0x41ACDB0);
    const uintptr_t GetLuaState                          = REBASE(0x41ACDB0);
    const uintptr_t CastArgs                             = REBASE(0x4102410);
    const uintptr_t PushInstance                         = REBASE(0x4193580);
    const uintptr_t InstanceNew                          = REBASE(0x42C96A0);
    const uintptr_t InstanceFindFirstChild               = REBASE(0x4FDA80);
    const uintptr_t InstanceFindFirstChildOfClass        = REBASE(0x4FA650);
    const uintptr_t InstanceFindFirstAncestorWhichIsA    = REBASE(0x4FA370);
    const uintptr_t InstanceGetChildren                  = REBASE(0x4FB690);

    namespace Identity {
        const uintptr_t GetCapabilities                  = REBASE(0x1D241C0);
        const uintptr_t TLS_Slot_get                     = REBASE(0x6BB0);
        const uintptr_t Impersonator                     = REBASE(0x1D24280);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass                = 0xA81;
        constexpr uintptr_t IsCoreScript                 = 0x158;
    };

    namespace TaskDefer {
        const uintptr_t TaskWait                         = REBASE(0x43249D0);
        const uintptr_t TaskSynchronize                  = REBASE(0x4322DA0);
        const uintptr_t TaskDesynchronize                = REBASE(0x4323210);
        const uintptr_t TaskDefer                        = REBASE(0x4323E50);
        const uintptr_t TaskSpawn                        = REBASE(0x4324330);
        const uintptr_t TaskDelay                        = REBASE(0x43246D0);
        const uintptr_t TaskCancel                       = REBASE(0x4324BD0);
    };

    namespace ScriptContext {
        const uintptr_t Resume                           = REBASE(0x4258330);
    };

    namespace RbxTransport {
        const uintptr_t ClientRtti                       = REBASE(0x76C5958);
        const uintptr_t AppRtti                          = REBASE(0x762B640);
        const uintptr_t ClientSend                       = REBASE(0x3A86D70);
        const uintptr_t ClientChannelConfig              = REBASE(0x3A87510);
        const uintptr_t AppReceive                       = REBASE(0x2150C30);
        const uintptr_t AppReceiveMaxBytes               = REBASE(0x21514E0);
        const uintptr_t StreamCreate                     = REBASE(0x52CFEF0);
        const uintptr_t StreamAppend                     = REBASE(0x2158520);
        const uintptr_t StreamDestroy                    = REBASE(0x211BBC0);
    };

    namespace Luau {
        const uintptr_t LoadModule                       = REBASE(0x41A3610);
        const uintptr_t LuaVM_Load                       = REBASE(0x41A3610);
        const uintptr_t Luau_Execute                     = REBASE(0x265F2B0);
        const uintptr_t LuaD_Throw                       = REBASE(0x262DDC0);
        const uintptr_t luaC_step                        = REBASE(0x2644300);
        const uintptr_t LuaO_nilobject                   = REBASE(0x667F848);
        const uintptr_t LuaH_dummynode                   = REBASE(0x667F2E8);
        const uintptr_t ExecuteSingleStep                = REBASE(0x265FAB0);
    };

    namespace Luau_Other {
        const uintptr_t LuaT_typenames                   = REBASE(0x66A0F70);
        const uintptr_t LuaT_eventname                   = REBASE(0x66A0FE0);
        const uintptr_t luaC_init                        = REBASE(0x265DE50);
        const uintptr_t luaG_runerror                    = REBASE(0x26585A0);
        const uintptr_t luaO_pushfstring                 = REBASE(0x261D640);
        const uintptr_t luaM_visitgco                    = REBASE(0x265D9F0);
        const uintptr_t luaF_Freeproto                   = REBASE(0x26593C0);
        const uintptr_t luaB_assert                      = REBASE(0x2682C50);
        const uintptr_t luaB_print                       = REBASE(0x267B2D0);
        const uintptr_t luaB_error                       = REBASE(0x267B730);
        const uintptr_t luaB_gcinfo                      = REBASE(0x2681590);
        const uintptr_t luaB_getfenv                     = REBASE(0x267CCE0);
        const uintptr_t luaB_getmetatable                = REBASE(0x267C170);
        const uintptr_t luaB_next                        = REBASE(0x26821A0);
        const uintptr_t luaB_newproxy                    = REBASE(0x2683B70);
        const uintptr_t luaB_rawequal                    = REBASE(0x267CFD0);
        const uintptr_t luaB_rawget                      = REBASE(0x267D0E0);
        const uintptr_t luaB_rawset                      = REBASE(0x267DF50);
        const uintptr_t luaB_rawlen                      = REBASE(0x26814F0);
        const uintptr_t luaB_select                      = REBASE(0x2682D00);
        const uintptr_t luaB_setfenv                     = REBASE(0x267CDA0);
        const uintptr_t luaB_setmetatable                = REBASE(0x267C300);
        const uintptr_t luaB_tonumber                    = REBASE(0x267B3A0);
        const uintptr_t luaB_tostring                    = REBASE(0x2683B10);
        const uintptr_t luaB_type                        = REBASE(0x26815B0);
        const uintptr_t luaB_typeof                      = REBASE(0x2681BB0);
        const uintptr_t lua_checkstack                   = REBASE(0x2619930);
        const uintptr_t pseudo2addr                      = REBASE(0x2619780);
        const uintptr_t luaM_free                        = REBASE(0x265D590);
        const uintptr_t luaM_freegco                     = REBASE(0x265D640);
        const uintptr_t luaM_freeblock                   = REBASE(0x265D4D0);
        const uintptr_t luaM_freeclasspage               = REBASE(0x265DB00);
        const uintptr_t lua_clock                        = REBASE(0x2686D80);
        const uintptr_t GcStep                           = REBASE(0x26440E0);
        const uintptr_t luaM_toobig                      = REBASE(0x265D4A0);
        const uintptr_t luaL_argerrorL                   = REBASE(0x26226B0);
        const uintptr_t RegisterUserdata                 = REBASE(0x261E6B0);
        const uintptr_t luaF_newproto                    = REBASE(0x2658CF0);
        const uintptr_t luaD_rawrunprotected             = REBASE(0x262DD90);
        const uintptr_t Freeobj                          = REBASE(0x2642CD0);
        const uintptr_t currfuncname                     = REBASE(0x2622630);
        const uintptr_t luaO_pushvfstring                = REBASE(0x2656F00);
        const uintptr_t luaA_toobject                    = REBASE(0x2619850);
        const uintptr_t lua_pushvfstring                 = REBASE(0x261AD00);
        const uintptr_t NewUserdataTagged                = REBASE(0x261D650);
        const uintptr_t Execute                          = REBASE(0x266D720);
        const uintptr_t GetTypeName                      = REBASE(0x261A490);
        const uintptr_t GetObjectTypeName                = REBASE(0x265A5D0);
        const uintptr_t GetObjectTypeNameString          = REBASE(0x265A440);
        const uintptr_t newpage                          = REBASE(0x265DCE0);
        const uintptr_t Luau_Load                        = REBASE(0x269E780);
        const uintptr_t GetLine                          = REBASE(0x26579D0);
        const uintptr_t CallInternal                     = REBASE(0x261BD20);
        const uintptr_t CallYieldable                    = REBASE(0x262DEA0);
    };

    namespace Coroutine {
        const uintptr_t create                           = REBASE(0x2693050);
        const uintptr_t running                          = REBASE(0x5905530);
        const uintptr_t status                           = REBASE(0x5903230);
        const uintptr_t wrap                             = REBASE(0x5905260);
        const uintptr_t yield                            = REBASE(0x59054D0);
        const uintptr_t isyieldable                      = REBASE(0x59055A0);
        const uintptr_t close                            = REBASE(0x5905630);
    };

    namespace Signal {
        const uintptr_t Disconnect                       = REBASE(0x416B600);
        const uintptr_t FireTouchInterest                = REBASE(0x1521D60);
        const uintptr_t ConnectionDisconnectRaw          = REBASE(0x49D7470);
        const uintptr_t ConnectionUnlink                 = REBASE(0x49D78B0);
        const uintptr_t ConnectionConnected              = REBASE(0x49D7600);
        const uintptr_t ConnectionPushFront              = REBASE(0x49D7B00);
        const uintptr_t RaiseEventInvocation             = REBASE(0x1D370B0);
        const uintptr_t GetArguments                     = REBASE(0x421AA50);
        const uintptr_t Once                             = REBASE(0x416A5D0);
        const uintptr_t Wait                             = REBASE(0x416A770);
    };

    namespace LuaError {
        const uintptr_t readonlyerror                    = REBASE(0x2657F80);
        const uintptr_t methoderror                      = REBASE(0x2657F40);
        const uintptr_t indexerror                       = REBASE(0x2657E40);
        const uintptr_t ordererror                       = REBASE(0x2657DC0);
        const uintptr_t forerrorL                        = REBASE(0x2657C90);
    };

    namespace InstanceBridge {
        const uintptr_t Index                            = REBASE(0x418EF60);
        const uintptr_t UserdataIndex                    = REBASE(0x4190E10);
        const uintptr_t UserdataNamecall                 = REBASE(0x41928A0);
        const uintptr_t NewIndex                         = REBASE(0x418E7C0);
        const uintptr_t UserdataNewIndex                 = REBASE(0x4192200);
    };

    namespace Event {
        const uintptr_t IsLegalSendEvent                 = REBASE(0x46FA7C0);
    };

    namespace AppData {
        const uintptr_t Info                             = REBASE(0x14E3670);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration                 = REBASE(0x1A4A74F);
    };

    namespace Input {
        const uintptr_t FireMouseClick                   = REBASE(0x3BD1060);
        const uintptr_t FireRightMouseClick              = REBASE(0x3BD1200);
        const uintptr_t FireProximityPrompt              = REBASE(0x30D1720);
        const uintptr_t FireMouseHover                   = REBASE(0x3BD2650);
        const uintptr_t FireMouseHoverLeave              = REBASE(0x3BD27F0);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash         = REBASE(0x88916D8);
        const uintptr_t LockViolationInstanceCrash       = REBASE(0x893E918);
        const uintptr_t LockViolationInstanceCrashStudio = REBASE(0x893E930);
        const uintptr_t RBXCrashPtr                      = REBASE(0x8C8A680);
    };

    namespace SharedString {
        const uintptr_t Create                           = REBASE(0x49E20F0);
        const uintptr_t Release                          = REBASE(0x7F2C30);
    };

    namespace RobloxProperty {
        const uintptr_t InternPropertyName               = REBASE(0x2A5D930);
        const uintptr_t LookupPropertyName               = REBASE(0x2A5DD50);
        const uintptr_t GetProperty                      = REBASE(0x1D223A0);
    };

    namespace Scheduler {
        const uintptr_t StepWaitingHybridScripts         = REBASE(0x428DFE0);
    };

    namespace Property {
        const uintptr_t ValueGetUnavailable              = REBASE(0xA962B0);
        const uintptr_t ValueSetUnavailable              = REBASE(0x7C5540);
    };

    namespace CallbackChain {
        const uintptr_t AsyncTrampoline                  = REBASE(0xBA8D30);
    };
}

namespace Aliases {
    inline auto GetLuaState = Offsets::GetGlobalState;
    inline auto LuaVM_Load = Offsets::Luau::LoadModule;
}
