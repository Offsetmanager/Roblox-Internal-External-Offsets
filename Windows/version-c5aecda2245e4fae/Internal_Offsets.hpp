// ------------------------------------------------------------
//  Dumper      : Argus 5.2 (Internal Offsets)
//  Alert       : Verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-c5aecda2245e4fae
//  Time Taken  : 13.70s
//  Success     : 73
//  Failed      : 0
// ------------------------------------------------------------
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1CAB4B0);
    const uintptr_t OpCodeLookupTable = REBASE(0x6E26C70);
    const uintptr_t EnableLoadModule = REBASE(0x8496288);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x81A8D78);
    const uintptr_t GetLuaState = REBASE(0x4248600);
    const uintptr_t KTable = REBASE(0x80BBE20);
    const uintptr_t ScriptContextResume = REBASE(0x4260F50);
    const uintptr_t CastArgs = REBASE(0x4124670);

    namespace Identity {
        constexpr uintptr_t GetCapabilities = REBASE(0x1CE6760);
    };

    namespace RequireBypass {
        constexpr uintptr_t RequireBypass = 0xBB4;
        constexpr uintptr_t IsCoreScript = 0x168;
    };

    namespace TaskDefer {
        constexpr uintptr_t TaskSynchronize = REBASE(0x4318B60);
        constexpr uintptr_t TaskDesynchronize = REBASE(0x4318F70);
        constexpr uintptr_t TaskDefer = REBASE(0x4319B60);
        constexpr uintptr_t TaskSpawn = REBASE(0x431A020);
        constexpr uintptr_t TaskDelay = REBASE(0x431A3B0);
        constexpr uintptr_t TaskWait = REBASE(0x431A6B0);
    };

    namespace Luau {
        constexpr uintptr_t LuaVM_Load = REBASE(0x41B3B50);
        constexpr uintptr_t Luau_Execute = REBASE(0x272A260);
        constexpr uintptr_t LuaD_Throw = REBASE(0x2709720);
        constexpr uintptr_t LuaH_dummynode = REBASE(0x63CAB08);
        constexpr uintptr_t LuaO_nilobject = REBASE(0x63CDF48);
        constexpr uintptr_t luaC_step = REBASE(0x2719020);
    };

    namespace Luau_Other {
        constexpr uintptr_t luaB_assert = REBASE(0x27486D0);
        constexpr uintptr_t luaB_print = REBASE(0x2743020);
        constexpr uintptr_t luaB_error = REBASE(0x2743480);
        constexpr uintptr_t luaB_gcinfo = REBASE(0x2747020);
        constexpr uintptr_t luaB_getfenv = REBASE(0x2744A60);
        constexpr uintptr_t luaB_getmetatable = REBASE(0x2743E90);
        constexpr uintptr_t luaB_next = REBASE(0x2747C20);
        constexpr uintptr_t luaB_newproxy = REBASE(0x27495D0);
        constexpr uintptr_t luaB_rawequal = REBASE(0x2744D40);
        constexpr uintptr_t luaB_rawget = REBASE(0x2744E50);
        constexpr uintptr_t luaB_rawset = REBASE(0x27453A0);
        constexpr uintptr_t luaB_rawlen = REBASE(0x2746F80);
        constexpr uintptr_t luaB_select = REBASE(0x2748780);
        constexpr uintptr_t luaB_setfenv = REBASE(0x2744B20);
        constexpr uintptr_t luaB_setmetatable = REBASE(0x2744010);
        constexpr uintptr_t luaB_tonumber = REBASE(0x27430F0);
        constexpr uintptr_t luaB_tostring = REBASE(0x2749570);
        constexpr uintptr_t luaB_type = REBASE(0x2747040);
        constexpr uintptr_t luaB_typeof = REBASE(0x2747630);
        constexpr uintptr_t lua_typename = REBASE(0x26F84B0);
        constexpr uintptr_t LuaT_eventname = REBASE(0x63EABD0);
        constexpr uintptr_t LuaT_typenames = REBASE(0x63EAB60);
    };

    namespace Instance {
        constexpr uintptr_t childrenEnd = 0x8;
        constexpr uintptr_t Class = 0x18;
        constexpr uintptr_t Parent = 0x68;
        constexpr uintptr_t Name = 0x70;
        constexpr uintptr_t Children = 0x78;
    };

    namespace TaskScheduler {
        constexpr uintptr_t JobsStart = 0xC8;
        constexpr uintptr_t JobsEnd = 0xD0;
        constexpr uintptr_t ScriptContext = 0x1B8;
    };

    namespace TaskSchedulerJob {
        constexpr uintptr_t JobName = 0x18;
        constexpr uintptr_t JobTypeName = 0xF8;
    };

    namespace Scripts {
        constexpr uintptr_t LocalScriptByteCode = 0x190;
        constexpr uintptr_t ModuleScriptByteCode = 0x138;
    };

    namespace DataModel {
        constexpr uintptr_t Workspace = 0x158;
    };

    namespace FakeDataModel {
        constexpr uintptr_t Pointer = REBASE(0x8DC2258);
        constexpr uintptr_t FakeDataModelToDataModel = 0x1F8;
    };

    namespace Input {
        constexpr uintptr_t FireMouseClick = REBASE(0x3B4D9F0);
        constexpr uintptr_t FireRightMouseClick = REBASE(0x3B4DB90);
        constexpr uintptr_t FireMouseHoverEnter = REBASE(0x3B4EFE0);
        constexpr uintptr_t FireMouseHoverLeave = REBASE(0x3B4F180);
        constexpr uintptr_t FireProximityPrompt = REBASE(0x3102650);
        constexpr uintptr_t FireTouchInterest = REBASE(0xA6DFA0);
    };

    namespace Hooks {
        inline uintptr_t NtCreateSection = 0x6BC8C0;
        inline uintptr_t RtlExitUserProcess = 0x13FDCE0;
        inline uintptr_t NtAllocateVirtualMemory = 0x9AD980;
        inline uintptr_t NtFreeVirtualMemory = 0x684E10;
        inline uintptr_t NtMapViewOfSection = 0xD798F0;
        inline uintptr_t NtUnmapViewOfSection = 0x31A400;
        inline uintptr_t NtTerminateProcess = 0x13FB6E0;
        inline uintptr_t NtCreateThread = 0x2A5940;
        inline uintptr_t NtCreateThreadEx = 0x256AA0;
        inline uintptr_t NtRaiseException = 0x1405880;
        inline uintptr_t NtSuspendThread = 0x2918D0;
        inline uintptr_t NtQuerySystemInformation = 0x324B20;
        inline uintptr_t NtSetContextThread = 0xC6B550;
        inline uintptr_t NtProtectVirtualMemory = 0x293FD0;
        inline uintptr_t NtQueryVirtualMemory = 0x9B40F0;
        inline uintptr_t NtRaiseHardError = 0xD80060;
        inline uintptr_t KiUserExceptionDispatcher = 0x6F7DF0;
        inline uintptr_t KiUserCallbackDispatcher = 0x6F7E10;
        inline uintptr_t KiUserApcDispatcher = 0x6F7F00;
        inline uintptr_t LdrInitializeThunk = 0x6F7F10;
        inline uintptr_t NtContinue = 0x102A000;
    };
}
