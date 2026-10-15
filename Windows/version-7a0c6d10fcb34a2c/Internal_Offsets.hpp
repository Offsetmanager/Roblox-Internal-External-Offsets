/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-7a0c6d10fcb34a2c
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 118         𝓕𝓪𝓲𝓵𝓮𝓭: 0
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 9.87s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1CE4150);
    const uintptr_t InvokeServer = REBASE(0x351E2E0);
    const uintptr_t FireServer = REBASE(0x3448460);
    const uintptr_t FireClient = REBASE(0x3448600);
    const uintptr_t FireAllClients = REBASE(0x3448850);
    const uintptr_t OpCodeLookupTable = REBASE(0x7141390);
    const uintptr_t EnableLoadModule = REBASE(0x888F650);
    const uintptr_t TaskScheduler = REBASE(0x8D6F048);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x85DAA10);
    const uintptr_t KTable = REBASE(0x84698A0);
    const uintptr_t GetGlobalState = REBASE(0x41AB690);
    const uintptr_t GetLuaState = REBASE(0x41AB690);
    const uintptr_t CastArgs = REBASE(0x4100CF0);
    const uintptr_t PushInstance = REBASE(0x4191E60);
    const uintptr_t InstanceNew = REBASE(0x42C7F80);
    const uintptr_t InstanceFindFirstChild = REBASE(0x4FD9E0);
    const uintptr_t InstanceFindFirstChildOfClass = REBASE(0x4FA5B0);
    const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x4FA2D0);
    const uintptr_t InstanceGetChildren = REBASE(0x4FB5F0);

    namespace Identity {
        const uintptr_t GetCapabilities = REBASE(0x1D22A20);
        const uintptr_t TLS_Slot_get = REBASE(0x6BB0);
        const uintptr_t Impersonator = REBASE(0x1D22AE0);
    };

    namespace ExtraSpace {
        constexpr uintptr_t RequireBypass = 0xA81;
        constexpr uintptr_t IsCoreScript = 0x158;
    };

    namespace TaskDefer {
        const uintptr_t TaskDefer = REBASE(0x4322730);
        const uintptr_t TaskSpawn = REBASE(0x4322C10);
        const uintptr_t TaskDelay = REBASE(0x4322FB0);
        const uintptr_t TaskWait = REBASE(0x43232B0);
        const uintptr_t TaskSynchronize = REBASE(0x4321680);
        const uintptr_t TaskDesynchronize = REBASE(0x4321AF0);
        const uintptr_t TaskCancel = REBASE(0x43234B0);
    };

    namespace SC {
        const uintptr_t SCResumeOffset = REBASE(0x4256C10);
    };

    namespace Luau {
        const uintptr_t LoadModule = REBASE(0x41A1EF0);
        const uintptr_t LuaVM_Load = REBASE(0x41A1EF0);
        const uintptr_t Luau_Execute = REBASE(0x265DB10);
        const uintptr_t LuaD_Throw = REBASE(0x262C620);
        const uintptr_t luaC_step = REBASE(0x2642B60);
        const uintptr_t luaC_init = REBASE(0x265C6B0);
        const uintptr_t luaG_runerror = REBASE(0x2656E00);
        const uintptr_t luaO_pushfstring = REBASE(0x261BEA0);
        const uintptr_t luaM_visitgco = REBASE(0x265C250);
        const uintptr_t luaF_Freeproto = REBASE(0x2657C20);
        const uintptr_t luaM_free = REBASE(0x265BDF0);
        const uintptr_t luaM_freegco = REBASE(0x265BEA0);
        const uintptr_t luaM_freeblock = REBASE(0x265BD30);
        const uintptr_t luaM_freeclasspage = REBASE(0x265C360);
        const uintptr_t lua_clock = REBASE(0x26855E0);
        const uintptr_t GcStep = REBASE(0x2642940);
        const uintptr_t luaM_toobig = REBASE(0x265BD00);
        const uintptr_t luaL_argerrorL = REBASE(0x2620F10);
        const uintptr_t RegisterUserdata = REBASE(0x261CF10);
        const uintptr_t luaF_newproto = REBASE(0x2657550);
        const uintptr_t luaD_rawrunprotected = REBASE(0x262C5F0);
        const uintptr_t Freeobj = REBASE(0x2641530);
        const uintptr_t currfuncname = REBASE(0x2620E90);
        const uintptr_t luaO_pushvfstring = REBASE(0x2655760);
        const uintptr_t luaA_toobject = REBASE(0x26180B0);
        const uintptr_t lua_pushvfstring = REBASE(0x2619560);
        const uintptr_t NewUserdataTagged = REBASE(0x261BEB0);
        const uintptr_t Execute = REBASE(0x266BF80);
        const uintptr_t GetTypeName = REBASE(0x2618CF0);
        const uintptr_t GetObjectTypeName = REBASE(0x2658E30);
        const uintptr_t GetObjectTypeNameString = REBASE(0x2658CA0);
    };

    namespace Luau_Other {
        const uintptr_t LuaO_nilobject = REBASE(0x667D848);
        const uintptr_t LuaH_dummynode = REBASE(0x667D2E8);
        const uintptr_t luaB_assert = REBASE(0x26814B0);
        const uintptr_t luaB_print = REBASE(0x2679B30);
        const uintptr_t luaB_error = REBASE(0x2679F90);
        const uintptr_t luaB_gcinfo = REBASE(0x267FDF0);
        const uintptr_t luaB_getfenv = REBASE(0x267B540);
        const uintptr_t luaB_getmetatable = REBASE(0x267A9D0);
        const uintptr_t luaB_next = REBASE(0x2680A00);
        const uintptr_t luaB_newproxy = REBASE(0x26823D0);
        const uintptr_t luaB_rawequal = REBASE(0x267B830);
        const uintptr_t luaB_rawget = REBASE(0x267B940);
        const uintptr_t luaB_rawset = REBASE(0x267C7B0);
        const uintptr_t luaB_rawlen = REBASE(0x267FD50);
        const uintptr_t luaB_select = REBASE(0x2681560);
        const uintptr_t luaB_setfenv = REBASE(0x267B600);
        const uintptr_t luaB_setmetatable = REBASE(0x267AB60);
        const uintptr_t luaB_tonumber = REBASE(0x2679C00);
        const uintptr_t luaB_tostring = REBASE(0x2682370);
        const uintptr_t luaB_type = REBASE(0x267FE10);
        const uintptr_t luaB_typeof = REBASE(0x2680410);
        const uintptr_t lua_checkstack = REBASE(0x2618190);
        const uintptr_t pseudo2addr = REBASE(0x2617FE0);
    };

    namespace Coroutine {
        const uintptr_t create = REBASE(0x26918B0);
        const uintptr_t running = REBASE(0x5903E10);
        const uintptr_t status = REBASE(0x5901B10);
        const uintptr_t wrap = REBASE(0x5903B40);
        const uintptr_t yield = REBASE(0x5903DB0);
        const uintptr_t isyieldable = REBASE(0x5903E80);
        const uintptr_t close = REBASE(0x5903F10);
    };

    namespace Signal {
        const uintptr_t Disconnect = REBASE(0x4169EE0);
        const uintptr_t FireTouchInterest = REBASE(0x15205C0);
        const uintptr_t ConnectionDisconnectRaw = REBASE(0x49D5D50);
        const uintptr_t ConnectionUnlink = REBASE(0x49D6190);
        const uintptr_t ConnectionConnected = REBASE(0x49D5EE0);
        const uintptr_t ConnectionPushFront = REBASE(0x49D63E0);
        const uintptr_t RaiseEventInvocation = REBASE(0x1D35910);
    };

    namespace LuaError {
        const uintptr_t readonlyerror = REBASE(0x26567E0);
        const uintptr_t methoderror = REBASE(0x26567A0);
        const uintptr_t indexerror = REBASE(0x26566A0);
        const uintptr_t ordererror = REBASE(0x2656620);
        const uintptr_t forerrorL = REBASE(0x26564F0);
    };

    namespace InstanceBridge {
        const uintptr_t Index = REBASE(0x418D840);
        const uintptr_t UserdataIndex = REBASE(0x418F6F0);
    };

    namespace Event {
        const uintptr_t IsLegalSendEvent = REBASE(0x46F90A0);
    };

    namespace SharedString {
        const uintptr_t Create = REBASE(0x49E09D0);
    };

    namespace AppData {
        const uintptr_t Info = REBASE(0x14E1ED0);
    };

    namespace Input {
        const uintptr_t FireMouseClick = REBASE(0x3BCF940);
        const uintptr_t FireRightMouseClick = REBASE(0x3BCFAE0);
        const uintptr_t FireProximityPrompt = REBASE(0x30CFF60);
        const uintptr_t FireMouseHover = REBASE(0x3BD0F30);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3BD10D0);
    };

    namespace Crash {
        const uintptr_t LockViolationScriptCrash = REBASE(0x888F4A8);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x893C6E8);
        const uintptr_t RBXCrashPtr = REBASE(0x8C88450);
    };
}
