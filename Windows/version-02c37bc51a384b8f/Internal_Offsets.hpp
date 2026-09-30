/*
    _____ __________  ________ ____ ___  _____________  ___   ____   _____________ 
   /  _  \\______   \/  _____/|    |   \/   _____/\   \/  /   \   \ /   /\______  \
  /  /_\  \|       _/   \  ___|    |   /\_____  \  \     /     \   Y   /     /    /
 /    |    \    |   \    \_\  \    |  / /        \ /     \      \     /     /    /
 \____|__  /____|_  /\______  /______/ /_______  //___/\  \      \___/     /____/  
         \/       \/        \/                 \/       \_/                       
                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575
						
                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-02c37bc51a384b8f
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 100         𝓕𝓪𝓲𝓵𝓮𝓭: 1
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 123.92s
						
			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1D2EEB0);
    const uintptr_t InvokeServer = REBASE(0x359C5C0);
    const uintptr_t TouchInterest = REBASE(0xBF1DC0);
    const uintptr_t OpCodeLookupTable = REBASE(0x6F67270);
    const uintptr_t EnableLoadModule = REBASE(0x8635A08);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x8319D48);
    const uintptr_t IsCoreScript = 0x158;
    const uintptr_t TaskScheduler = REBASE(0x8AFF2A0);
    const uintptr_t KTable = REBASE(0x822C9C0);
    const uintptr_t PushInstance = REBASE(0x41E64E0);
    const uintptr_t CastArgs = REBASE(0x415A750);
    const uintptr_t InstanceNew = REBASE(0x4310890);
    const uintptr_t GetGlobalState = REBASE(0x41FE9B0);
    const uintptr_t GetLuaState = REBASE(0x4289D60);

    namespace Identity {
        constexpr uintptr_t IdentityStruct = REBASE(0x82D23D8);
        constexpr uintptr_t Impersonator = REBASE(0x1D6A880);
        constexpr uintptr_t GetTssData = REBASE(0x7320);
        constexpr uintptr_t GetCapabilities = REBASE(0x1D6A7C0);
    };

    namespace ExtraSpace {
        constexpr uintptr_t Capabilities = 0x48;
        constexpr uintptr_t RequireBypass = 0xAD0;
    };

    namespace Bytecode {
        constexpr uintptr_t ByteCodeTableVerificationA = REBASE(0x85EE880);
        constexpr uintptr_t LocalScriptByteCode = 0x180;
        constexpr uintptr_t ModuleScriptByteCode = 0x128;
    };

    namespace SC {
        constexpr uintptr_t SCResumeOffset = REBASE(0x42A7E60);
        constexpr uintptr_t SC2Resume = 0x900;
    };

    namespace RakNet {
        constexpr uintptr_t Job2RakPeer = 0x1D8;
        constexpr uintptr_t RakPeerVTableSize = 0x3E0;
        constexpr uintptr_t idx_Connect = 13;
        constexpr uintptr_t idx_Send = 20;
        constexpr uintptr_t idx_Recieve = 25;
    };

    namespace TaskDefer {
        constexpr uintptr_t TaskSynchronize = REBASE(0x4368870);
        constexpr uintptr_t TaskDesynchronize = REBASE(0x4368CE0);
        constexpr uintptr_t TaskDefer = REBASE(0x4369920);
        constexpr uintptr_t TaskSpawn = REBASE(0x4369DE0);
        constexpr uintptr_t TaskDelay = REBASE(0x436A170);
        constexpr uintptr_t TaskWait = REBASE(0x436A470);
        constexpr uintptr_t TaskCancel = REBASE(0x436A670);
    };

    namespace Luau {
        constexpr uintptr_t LoadModule = REBASE(0x42B6012);
        constexpr uintptr_t LuaVM_Load = REBASE(0x41F51A0);
        constexpr uintptr_t Luau_Execute = REBASE(0x578F542);
        constexpr uintptr_t LuaD_Throw = REBASE(0x26520B0);
        constexpr uintptr_t LuaH_dummynode = REBASE(0x6504798);
        constexpr uintptr_t LuaO_nilobject = REBASE(0x6507CD8);
        constexpr uintptr_t luaC_step = REBASE(0x26670B0);
    };

    namespace Luau_Other {
        constexpr uintptr_t luaB_assert = REBASE(0x26A4FE0);
        constexpr uintptr_t luaB_print = REBASE(0x269DEE0);
        constexpr uintptr_t luaB_error = REBASE(0x269E340);
        constexpr uintptr_t luaB_gcinfo = REBASE(0x26A3920);
        constexpr uintptr_t luaB_getfenv = REBASE(0x269F940);
        constexpr uintptr_t luaB_getmetatable = REBASE(0x269ED80);
        constexpr uintptr_t luaB_next = REBASE(0x26A4530);
        constexpr uintptr_t luaB_newproxy = REBASE(0x26A5F20);
        constexpr uintptr_t luaB_rawequal = REBASE(0x269FC30);
        constexpr uintptr_t luaB_rawget = REBASE(0x269FD40);
        constexpr uintptr_t luaB_rawset = REBASE(0x26A0760);
        constexpr uintptr_t luaB_rawlen = REBASE(0x26A3880);
        constexpr uintptr_t luaB_select = REBASE(0x26A5090);
        constexpr uintptr_t luaB_setfenv = REBASE(0x269FA00);
        constexpr uintptr_t luaB_setmetatable = REBASE(0x269EF10);
        constexpr uintptr_t luaB_tonumber = REBASE(0x269DFB0);
        constexpr uintptr_t luaB_tostring = REBASE(0x26A5EC0);
        constexpr uintptr_t luaB_type = REBASE(0x26A3940);
        constexpr uintptr_t luaB_typeof = REBASE(0x26A3F40);
        constexpr uintptr_t lua_typename = REBASE(0x2640470);
        constexpr uintptr_t LuaT_eventname = REBASE(0x6529DF0);
        constexpr uintptr_t LuaT_typenames = REBASE(0x6529D80);
        constexpr uintptr_t lua_yield = REBASE(0x1587086);
        constexpr uintptr_t lua_checkstack = REBASE(0x263FAB0);
        constexpr uintptr_t pseudo2addr = REBASE(0x263F910);
    };

    namespace Coroutine {
        constexpr uintptr_t close = REBASE(0x57B6330);
        constexpr uintptr_t create = REBASE(0x57B59B0);
        constexpr uintptr_t isyieldable = REBASE(0x57B62A0);
        constexpr uintptr_t running = REBASE(0x57B6230);
        constexpr uintptr_t status = REBASE(0x57B3F30);
        constexpr uintptr_t wrap = REBASE(0x57B5F60);
        constexpr uintptr_t yield = REBASE(0x57B61D0);
    };

    namespace RayCast {
        constexpr uintptr_t WorldRoot_Raycast = REBASE(0xE074B0);
        constexpr uintptr_t BlockCast = REBASE(0xE086A0);
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

    namespace Crash {
        constexpr uintptr_t LockViolationScriptCrash = REBASE(0x8635768);
        constexpr uintptr_t LockViolationInstanceCrash = REBASE(0x86E0D10);
    };

    namespace DataModel {
        constexpr uintptr_t Workspace = 0x150;
    };

    namespace FakeDataModel {
        constexpr uintptr_t Pointer = REBASE(0x8B54980);
        constexpr uintptr_t FakeDataModelToDataModel = 0x1F8;
    };

    namespace Signal {
        constexpr uintptr_t Disconnect = REBASE(0x41C0290);
    };

    namespace Input {
        constexpr uintptr_t FireMouseClick = REBASE(0x3C44F80);
        constexpr uintptr_t FireMouseHoverEnter = REBASE(0x3C46570);
        constexpr uintptr_t FireMouseHoverLeave = REBASE(0x3C46710);
        constexpr uintptr_t FireProximityPrompt = REBASE(0x3192070);
        constexpr uintptr_t FireTouchInterest = REBASE(0x15A6920);
    };

    namespace Hyperion {
        const ULONGLONG Hyperion_ZwAllocateVirtualMemory = REBASE(0x10F6150);
        const ULONGLONG Hyperion_NtContinue = REBASE(0x7BC2B0);
        const ULONGLONG Hyperion_NtFreeVirtualMemory = REBASE(0xAB59C0);
        const ULONGLONG Hyperion_NtQuerySystemInformation = REBASE(0x1005C40);
        const ULONGLONG Hyperion_ZwRaiseException = REBASE(0xB59160);
        const ULONGLONG Hyperion_KiRaiseUserExceptionDispatcher = REBASE(0x5DFA90);
        const ULONGLONG Hyperion_KiUserApcDispatcher = REBASE(0xABB870);
        const ULONGLONG Hyperion_KiUserCallbackDispatcher = REBASE(0xABB780);
        const ULONGLONG Hyperion_KiUserExceptionDispatcher = REBASE(0xABB760);
        const ULONGLONG Hyperion_ZwUnmapViewOfSection = REBASE(0x5A7E60);
        const ULONGLONG Hyperion_NtCreateSectionEx = REBASE(0xAB15B0);
        const ULONGLONG Hyperion_LdrInitializeThunk = REBASE(0xABB880);
        const ULONGLONG Hyperion_RtlGetNativeSystemInformation = REBASE(0x1005C40);
        const ULONGLONG Hyperion_NtTerminateThread = REBASE(0x7FF430);
        const ULONGLONG Hyperion_NtAllocateVirtualMemoryEx = REBASE(0xA1FFA0);
        const ULONGLONG Hyperion_NtContinueEx = REBASE(0xA85380);
        const ULONGLONG Hyperion_NtCreateSection = REBASE(0x9BDDA0);
        const ULONGLONG Hyperion_NtCreateThread = REBASE(0xA3E590);
        const ULONGLONG Hyperion_NtCreateThreadEx = REBASE(0x925DE0);
        const ULONGLONG Hyperion_ZwQueryVirtualMemory = REBASE(0xA7DD90);
        const ULONGLONG Hyperion_NtMapViewOfSection = REBASE(0xFB1490);
        const ULONGLONG Hyperion_NtMapViewOfSectionEx = REBASE(0xBB1760);
        const ULONGLONG Hyperion_NtProtectVirtualMemory = REBASE(0x1118550);
        const ULONGLONG Hyperion_NtRaiseHardError = REBASE(0xAA9240);
        const ULONGLONG Hyperion_RtlExitUserProcess = REBASE(0xA8B7E0);
        const ULONGLONG Hyperion_NtSetContextThread = REBASE(0xB9C6B0);
        const ULONGLONG Hyperion_NtSuspendThread = REBASE(0xEC6D00);
        const ULONGLONG Hyperion_NtTerminateProcess = REBASE(0xAAA9F0);
        const ULONGLONG Hyperion_NtUnmapViewOfSectionEx = REBASE(0x10FB4B0);
        const ULONGLONG Hyperion_GetCurrentProcessId = REBASE(0xEF0060);
        const ULONGLONG Hyperion_SetUnhandledExceptionFilter = REBASE(0xA3D880);
        const ULONGLONG __guard_dispatcher_icall_fptr = REBASE(0xABB930);
        const ULONGLONG bitmap = REBASE(0x13188);
        const ULONGLONG InstrumentationCallback = REBASE(0xABB7A0);
    };
}
