/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-11f155f3450f4c8e
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 101         𝓕𝓪𝓲𝓵𝓮𝓭: 18
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 14.18s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1CE58F0);
    const uintptr_t InvokeServer = REBASE(0x351F9F0);
    const uintptr_t FireServer = REBASE(0x3449B70);
    const uintptr_t FireClient = REBASE(0x3449D10);
    const uintptr_t FireAllClients = REBASE(0x3449F60);
    const uintptr_t EnableLoadModule = REBASE(0x8891880);
    const uintptr_t TaskScheduler = REBASE(0x8D71348);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x85DCBF0);
    const uintptr_t KTable = REBASE(0x846BAA0);
    const uintptr_t GetGlobalState = REBASE(0x41ACDB0);
    const uintptr_t GetLuaState = REBASE(0x41ACDB0);
    const uintptr_t CastArgs = REBASE(0x4102410);
    const uintptr_t PushInstance = REBASE(0x4193580);
    const uintptr_t InstanceNew = REBASE(0x42C96A0);
    const uintptr_t InstanceFindFirstChild = REBASE(0x4FDA80);
    const uintptr_t InstanceFindFirstChildOfClass = REBASE(0x4FA650);
    const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x4FA370);
    const uintptr_t InstanceGetChildren = REBASE(0x4FB690);

    namespace Identity {
        const uintptr_t GetCapabilities = REBASE(0x1D241C0);
        const uintptr_t TLS_Slot_get = REBASE(0x6BB0);
        const uintptr_t Impersonator = REBASE(0x1D24280);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass = 0xA81;
        constexpr uintptr_t IsCoreScript = 0x158;
    };

    namespace TaskDefer {
        const uintptr_t TaskWait = REBASE(0x43249D0);
        const uintptr_t TaskSynchronize = REBASE(0x4322DA0);
        const uintptr_t TaskDesynchronize = REBASE(0x4323210);
    };

    namespace SC {
        const uintptr_t SCResumeOffset = REBASE(0x4258330);
    };

    namespace Luau {
        const uintptr_t LoadModule = REBASE(0x41A3610);
        const uintptr_t LuaVM_Load = REBASE(0x41A3610);
        const uintptr_t Luau_Execute = REBASE(0x265F2B0);
        const uintptr_t LuaD_Throw = REBASE(0x262DDC0);
        const uintptr_t luaC_step = REBASE(0x2644300);
        const uintptr_t luaC_init = REBASE(0x265DE50);
        const uintptr_t luaG_runerror = REBASE(0x26585A0);
        const uintptr_t luaO_pushfstring = REBASE(0x261D640);
        const uintptr_t luaM_visitgco = REBASE(0x265D9F0);
        const uintptr_t luaF_Freeproto = REBASE(0x26593C0);
        const uintptr_t luaM_free = REBASE(0x265D590);
        const uintptr_t luaM_freegco = REBASE(0x265D640);
        const uintptr_t luaM_freeblock = REBASE(0x265D4D0);
        const uintptr_t luaM_freeclasspage = REBASE(0x265DB00);
        const uintptr_t lua_clock = REBASE(0x2686D80);
        const uintptr_t GcStep = REBASE(0x26440E0);
        const uintptr_t RegisterUserdata = REBASE(0x261E6B0);
        const uintptr_t luaF_newproto = REBASE(0x2658CF0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x262DD90);
        const uintptr_t Freeobj = REBASE(0x2642CD0);
        const uintptr_t currfuncname = REBASE(0x2622630);
        const uintptr_t luaO_pushvfstring = REBASE(0x2656F00);
        const uintptr_t lua_pushvfstring = REBASE(0x261AD00);
        const uintptr_t NewUserdataTagged = REBASE(0x261D650);
        const uintptr_t Execute = REBASE(0x266D720);
        const uintptr_t GetObjectTypeName = REBASE(0x265A5D0);
        const uintptr_t GetObjectTypeNameString = REBASE(0x265A440);
    };

    namespace Luau_Other {
        const uintptr_t luaB_assert = REBASE(0x2682C50);
        const uintptr_t luaB_print = REBASE(0x267B2D0);
        const uintptr_t luaB_error = REBASE(0x267B730);
        const uintptr_t luaB_gcinfo = REBASE(0x2681590);
        const uintptr_t luaB_getfenv = REBASE(0x267CCE0);
        const uintptr_t luaB_getmetatable = REBASE(0x267C170);
        const uintptr_t luaB_next = REBASE(0x26821A0);
        const uintptr_t luaB_newproxy = REBASE(0x2683B70);
        const uintptr_t luaB_rawequal = REBASE(0x267CFD0);
        const uintptr_t luaB_rawget = REBASE(0x267D0E0);
        const uintptr_t luaB_rawset = REBASE(0x267DF50);
        const uintptr_t luaB_rawlen = REBASE(0x26814F0);
        const uintptr_t luaB_select = REBASE(0x2682D00);
        const uintptr_t luaB_setfenv = REBASE(0x267CDA0);
        const uintptr_t luaB_setmetatable = REBASE(0x267C300);
        const uintptr_t luaB_tonumber = REBASE(0x267B3A0);
        const uintptr_t luaB_tostring = REBASE(0x2683B10);
        const uintptr_t luaB_type = REBASE(0x26815B0);
        const uintptr_t luaB_typeof = REBASE(0x2681BB0);
        const uintptr_t lua_checkstack = REBASE(0x2619930);
        const uintptr_t pseudo2addr = REBASE(0x2619780);
    };

    namespace Coroutine {
        const uintptr_t create = REBASE(0x2693050);
        const uintptr_t running = REBASE(0x5905530);
        const uintptr_t status = REBASE(0x5903230);
        const uintptr_t wrap = REBASE(0x5905260);
        const uintptr_t yield = REBASE(0x59054D0);
        const uintptr_t isyieldable = REBASE(0x59055A0);
        const uintptr_t close = REBASE(0x5905630);
    };

    namespace Signal {
        const uintptr_t Disconnect = REBASE(0x416B600);
        const uintptr_t FireTouchInterest = REBASE(0x1521D60);
        const uintptr_t ConnectionDisconnectRaw = REBASE(0x49D7470);
        const uintptr_t ConnectionUnlink = REBASE(0x49D78B0);
        const uintptr_t ConnectionConnected = REBASE(0x49D7600);
        const uintptr_t ConnectionPushFront = REBASE(0x49D7B00);
        const uintptr_t RaiseEventInvocation = REBASE(0x1D370B0);
    };

    namespace InstanceBridge {
        const uintptr_t Index = REBASE(0x418EF60);
        const uintptr_t UserdataIndex = REBASE(0x4190E10);
    };

    namespace Event {
        const uintptr_t IsLegalSendEvent = REBASE(0x46FA7C0);
    };

    namespace AppData {
        const uintptr_t Info = REBASE(0x14E3670);
    };

    namespace Reflections {
        const uintptr_t TypeRegistration = REBASE(0x1A4A74F);
    };

    namespace Input {
        const uintptr_t FireMouseClick = REBASE(0x3BD1060);
        const uintptr_t FireRightMouseClick = REBASE(0x3BD1200);
        const uintptr_t FireProximityPrompt = REBASE(0x30D1720);
        const uintptr_t FireMouseHover = REBASE(0x3BD2650);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3BD27F0);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash = REBASE(0x88916D8);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x893E918);
    };
}
