// ------------------------------------------------------------
//  Dumper      : Argus 6.0 (Internal Offsets)
//  Alert       : Verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-4310300497aa4917
//  Time Taken  : 50.91s
//  Success     : 81
//  Failed      : 6
// ------------------------------------------------------------
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1CD9D90);
    const uintptr_t EnableLoadModule = REBASE(0x8515B38);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x8227738);
    const uintptr_t KTable = REBASE(0x813A7A0);
    const uintptr_t ScriptContextResume = REBASE(0x42C1E60);
    const uintptr_t CastArgs = REBASE(0x417B280);
    const uintptr_t InstanceNew = REBASE(0x43297B0);

    namespace Identity {
        constexpr uintptr_t GetCapabilities = REBASE(0x1D14D50);
    };

    namespace RequireBypass {
        constexpr uintptr_t RequireBypass = 0xA58;
        constexpr uintptr_t IsCoreScript = 0x168;
    };

    namespace TaskDefer {
        constexpr uintptr_t TaskSynchronize = REBASE(0x437DB00);
        constexpr uintptr_t TaskDesynchronize = REBASE(0x437DF10);
        constexpr uintptr_t TaskDefer = REBASE(0x437EAF0);
        constexpr uintptr_t TaskSpawn = REBASE(0x437EFB0);
        constexpr uintptr_t TaskDelay = REBASE(0x437F340);
        constexpr uintptr_t TaskWait = REBASE(0x437F640);
        constexpr uintptr_t TaskCancel = REBASE(0x437D520);
    };

    namespace Luau {
		constexpr uintptr_t LuaVM_Load = REBASE(0x128C1D0);
        constexpr uintptr_t LuaD_Throw = REBASE(0x2750300);
        constexpr uintptr_t LuaH_dummynode = REBASE(0x6437098);
        constexpr uintptr_t LuaO_nilobject = REBASE(0x6437A18);
        constexpr uintptr_t luaC_step = REBASE(0x2764400);
    };

    namespace Luau_Other {
        constexpr uintptr_t luaB_assert = REBASE(0x279BE30);
        constexpr uintptr_t luaB_print = REBASE(0x2795830);
        constexpr uintptr_t luaB_error = REBASE(0x2795C80);
        constexpr uintptr_t luaB_gcinfo = REBASE(0x279A770);
        constexpr uintptr_t luaB_getfenv = REBASE(0x2797260);
        constexpr uintptr_t luaB_getmetatable = REBASE(0x2796690);
        constexpr uintptr_t luaB_next = REBASE(0x279B380);
        constexpr uintptr_t luaB_newproxy = REBASE(0x279CD30);
        constexpr uintptr_t luaB_rawequal = REBASE(0x2797550);
        constexpr uintptr_t luaB_rawget = REBASE(0x2797660);
        constexpr uintptr_t luaB_rawset = REBASE(0x2798070);
        constexpr uintptr_t luaB_rawlen = REBASE(0x279A6D0);
        constexpr uintptr_t luaB_select = REBASE(0x279BEE0);
        constexpr uintptr_t luaB_setfenv = REBASE(0x2797320);
        constexpr uintptr_t luaB_setmetatable = REBASE(0x2796810);
        constexpr uintptr_t luaB_tonumber = REBASE(0x2795900);
        constexpr uintptr_t luaB_tostring = REBASE(0x279CCD0);
        constexpr uintptr_t luaB_type = REBASE(0x279A790);
        constexpr uintptr_t luaB_typeof = REBASE(0x279AD90);
        constexpr uintptr_t lua_typename = REBASE(0x273E6F0);
        constexpr uintptr_t LuaT_eventname = REBASE(0x6453D30);
        constexpr uintptr_t LuaT_typenames = REBASE(0x6453CC0);
        constexpr uintptr_t lua_yield = REBASE(0x164B4F0);
        constexpr uintptr_t lua_checkstack = REBASE(0x273DD50);
        constexpr uintptr_t pseudo2addr = REBASE(0x273DBB0);
    };

    namespace Coroutine {
        constexpr uintptr_t create = REBASE(0x5693C10);
        constexpr uintptr_t isyieldable = REBASE(0x5694510);
        constexpr uintptr_t running = REBASE(0x56944A0);
        constexpr uintptr_t status = REBASE(0x56921A0);
        constexpr uintptr_t wrap = REBASE(0x56941D0);
        constexpr uintptr_t yield = REBASE(0x5694440);
    };

    namespace RayCast {
        constexpr uintptr_t WorldRoot_Raycast = REBASE(0xECDDF0);
        constexpr uintptr_t BlockCast = REBASE(0xECEFE0);
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
        constexpr uintptr_t Workspace = 0x160;
    };

    namespace FakeDataModel {
        constexpr uintptr_t Pointer = REBASE(0x8E42C98);
        constexpr uintptr_t FakeDataModelToDataModel = 0x1F8;
    };

    namespace Input {
        constexpr uintptr_t FireMouseClick = REBASE(0x3B93BF0);
        constexpr uintptr_t FireRightMouseClick = REBASE(0x3B93D90);
        constexpr uintptr_t FireMouseHoverEnter = REBASE(0x3B951E0);
        constexpr uintptr_t FireMouseHoverLeave = REBASE(0x3B95380);
        constexpr uintptr_t FireProximityPrompt = REBASE(0x3140800);
        constexpr uintptr_t FireTouchInterest = REBASE(0xA74A50);
    };

    namespace Hooks {
        inline uintptr_t NtCreateSection = 0xBD2810;
        inline uintptr_t RtlExitUserProcess = 0x27D420;
        inline uintptr_t NtAllocateVirtualMemory = 0xBE67F0;
        inline uintptr_t NtFreeVirtualMemory = 0x28DFB0;
        inline uintptr_t NtMapViewOfSection = 0xB98990;
        inline uintptr_t NtUnmapViewOfSection = 0x93F540;
        inline uintptr_t NtTerminateProcess = 0x9E8DB0;
        inline uintptr_t NtCreateThread = 0x15689B0;
        inline uintptr_t NtCreateThreadEx = 0xF83D40;
        inline uintptr_t NtRaiseException = 0xBCEBD0;
        inline uintptr_t NtSuspendThread = 0xB97670;
        inline uintptr_t NtQuerySystemInformation = 0x103B7A0;
        inline uintptr_t NtSetContextThread = 0xA95FA0;
        inline uintptr_t NtProtectVirtualMemory = 0xFDB1B0;
        inline uintptr_t NtQueryVirtualMemory = 0x10335C0;
        inline uintptr_t NtRaiseHardError = 0x10F4B20;
        inline uintptr_t KiUserExceptionDispatcher = 0xBCE490;
        inline uintptr_t KiUserCallbackDispatcher = 0xBCE4B0;
        inline uintptr_t KiUserApcDispatcher = 0xBCE5A0;
        inline uintptr_t LdrInitializeThunk = 0xBCE5B0;
        inline uintptr_t NtContinue = 0xFA5A20;
    };
}