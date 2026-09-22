/*
    _____ __________  ________ ____ ___  _____________  ___   ____   _____________ 
   /  _  \\______   \/  _____/|    |   \/   _____/\   \/  /   \   \ /   /\______  \
  /  /_\  \|       _/   \  ___|    |   /\_____  \  \     /     \   Y   /     /    /
 /    |    \    |   \    \_\  \    |  / /        \ /     \      \     /     /    /
 \____|__  /____|_  /\______  /______/ /_______  //___/\  \      \___/     /____/  
         \/       \/        \/                 \/       \_/                       
                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575
						
                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-2366ba214ec740ca
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 100         𝓕𝓪𝓲𝓵𝓮𝓭: 2
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 249.74s
						
			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1CFA0D0);
    const uintptr_t InvokeServer = REBASE(0x35AC990);
    const uintptr_t TouchInterest = REBASE(0xBCFA00);
    const uintptr_t OpCodeLookupTable = REBASE(0x6F1BF50);
    const uintptr_t EnableLoadModule = REBASE(0x85C4E80);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x82D4A28);
    const uintptr_t IsCoreScript = 0x158;
    const uintptr_t TaskScheduler = REBASE(0x8C8D108);
    const uintptr_t KTable = REBASE(0x81E9120);
    const uintptr_t PushInstance = REBASE(0x41D9F50);
    const uintptr_t CastArgs = REBASE(0x414ECD0);
    const uintptr_t InstanceNew = REBASE(0x4303370);
    const uintptr_t GetGlobalState = REBASE(0x41F2300);
    const uintptr_t GetLuaState = REBASE(0x427D540);

    namespace Identity {
        constexpr uintptr_t IdentityStruct = REBASE(0x828CA38);
        constexpr uintptr_t Impersonator = REBASE(0x1D34C30);
        constexpr uintptr_t GetTssData = REBASE(0x7240);
        constexpr uintptr_t GetCapabilities = REBASE(0x1D34B70);
    };

    namespace ExtraSpace {
        constexpr uintptr_t Capabilities = 0x30;
        constexpr uintptr_t RequireBypass = 0xAAE;
    };

    namespace Crash {
        constexpr uintptr_t LockViolationScriptCrash = REBASE(0x85C4BE0);
        constexpr uintptr_t LockViolationInstanceCrash = REBASE(0x8670120);
    };

    namespace SC {
        constexpr uintptr_t SCResumeOffset = REBASE(0x429B530);
        constexpr uintptr_t SC2Resume = 0xA38;
    };

    namespace RakNet {
        constexpr uintptr_t Job2RakPeer = 0x1D8;
        constexpr uintptr_t RakPeerVTableSize = 0x3E0;
        constexpr uintptr_t idx_Connect = 13;
        constexpr uintptr_t idx_Send = 20;
        constexpr uintptr_t idx_Recieve = 25;
    };

    namespace TaskDefer {
        constexpr uintptr_t TaskSynchronize = REBASE(0x4359070);
        constexpr uintptr_t TaskDesynchronize = REBASE(0x4359480);
        constexpr uintptr_t TaskDefer = REBASE(0x435A060);
        constexpr uintptr_t TaskSpawn = REBASE(0x435A520);
        constexpr uintptr_t TaskDelay = REBASE(0x435A8B0);
        constexpr uintptr_t TaskWait = REBASE(0x435ABB0);
        constexpr uintptr_t TaskCancel = REBASE(0x435AE30);
    };

    namespace Luau {
        constexpr uintptr_t LoadModule = REBASE(0x42A92D0);
        constexpr uintptr_t LuaVM_Load = REBASE(0x41E8BD0);
        constexpr uintptr_t Luau_Execute = REBASE(0x269E520);
        constexpr uintptr_t LuaD_Throw = REBASE(0x266EA40);
        constexpr uintptr_t LuaH_dummynode = REBASE(0x64B68D8);
        constexpr uintptr_t LuaO_nilobject = REBASE(0x64BA248);
        constexpr uintptr_t luaC_step = REBASE(0x26838F0);
    };

    namespace Luau_Other {
        constexpr uintptr_t luaB_assert = REBASE(0x26C1500);
        constexpr uintptr_t luaB_print = REBASE(0x26BA470);
        constexpr uintptr_t luaB_error = REBASE(0x26BA8C0);
        constexpr uintptr_t luaB_gcinfo = REBASE(0x26BFE60);
        constexpr uintptr_t luaB_getfenv = REBASE(0x26BBE80);
        constexpr uintptr_t luaB_getmetatable = REBASE(0x26BB2F0);
        constexpr uintptr_t luaB_next = REBASE(0x26C0A50);
        constexpr uintptr_t luaB_newproxy = REBASE(0x26C2440);
        constexpr uintptr_t luaB_rawequal = REBASE(0x26BC170);
        constexpr uintptr_t luaB_rawget = REBASE(0x26BC280);
        constexpr uintptr_t luaB_rawset = REBASE(0x26BCC90);
        constexpr uintptr_t luaB_rawlen = REBASE(0x26BFDC0);
        constexpr uintptr_t luaB_select = REBASE(0x26C15B0);
        constexpr uintptr_t luaB_setfenv = REBASE(0x26BBF40);
        constexpr uintptr_t luaB_setmetatable = REBASE(0x26BB470);
        constexpr uintptr_t luaB_tonumber = REBASE(0x26BA540);
        constexpr uintptr_t luaB_tostring = REBASE(0x26C23E0);
        constexpr uintptr_t luaB_type = REBASE(0x26BFE80);
        constexpr uintptr_t luaB_typeof = REBASE(0x26C0470);
        constexpr uintptr_t lua_typename = REBASE(0x265CEA0);
        constexpr uintptr_t LuaT_eventname = REBASE(0x64DBF30);
        constexpr uintptr_t LuaT_typenames = REBASE(0x64DBEC0);
        constexpr uintptr_t lua_yield = REBASE(0x1564A20);
        constexpr uintptr_t lua_checkstack = REBASE(0x265C4D0);
        constexpr uintptr_t pseudo2addr = REBASE(0x265C330);
    };

    namespace Coroutine {
        constexpr uintptr_t close = REBASE(0x575C450);
        constexpr uintptr_t create = REBASE(0x575BAD0);
        constexpr uintptr_t isyieldable = REBASE(0x575C3C0);
        constexpr uintptr_t running = REBASE(0x575C350);
        constexpr uintptr_t status = REBASE(0x575A060);
        constexpr uintptr_t wrap = REBASE(0x575C080);
        constexpr uintptr_t yield = REBASE(0x575C2F0);
    };

    namespace RayCast {
        constexpr uintptr_t WorldRoot_Raycast = REBASE(0xDD5640);
        constexpr uintptr_t BlockCast = REBASE(0xDD6830);
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
        constexpr uintptr_t LocalScriptByteCode = 0x180;
        constexpr uintptr_t ModuleScriptByteCode = 0x128;
    };

    namespace DataModel {
        constexpr uintptr_t Workspace = 0x150;
    };

    namespace FakeDataModel {
        constexpr uintptr_t Pointer = REBASE(0x8EE1728);
        constexpr uintptr_t FakeDataModelToDataModel = 0x1F8;
    };

    namespace Signal {
        constexpr uintptr_t Disconnect = REBASE(0x41B40E0);
    };

    namespace Input {
        constexpr uintptr_t FireMouseClick = REBASE(0x3C3EDC0);
        constexpr uintptr_t FireRightMouseClick = REBASE(0x3C3EF60);
        constexpr uintptr_t FireMouseHoverEnter = REBASE(0x3C403B0);
        constexpr uintptr_t FireMouseHoverLeave = REBASE(0x3C40550);
        constexpr uintptr_t FireProximityPrompt = REBASE(0x31BD800);
        constexpr uintptr_t FireTouchInterest = REBASE(0x1584BC0);
    };

    namespace Hyperion {
        const ULONGLONG Hyperion_ZwAllocateVirtualMemory = REBASE(0x15819E0);
        const ULONGLONG Hyperion_NtContinue = REBASE(0x8B7E80);
        const ULONGLONG Hyperion_NtFreeVirtualMemory = REBASE(0x129B820);
        const ULONGLONG Hyperion_NtQuerySystemInformation = REBASE(0x83DEA0);
        const ULONGLONG Hyperion_ZwRaiseException = REBASE(0x7D6890);
        const ULONGLONG Hyperion_KiRaiseUserExceptionDispatcher = REBASE(0x8997C0);
        const ULONGLONG Hyperion_KiUserApcDispatcher = REBASE(0x7DAFC0);
        const ULONGLONG Hyperion_KiUserCallbackDispatcher = REBASE(0x7DAED0);
        const ULONGLONG Hyperion_KiUserExceptionDispatcher = REBASE(0x7DAEB0);
        const ULONGLONG Hyperion_ZwUnmapViewOfSection = REBASE(0x849C20);
        const ULONGLONG Hyperion_NtCreateSectionEx = REBASE(0x7F49F0);
        const ULONGLONG Hyperion_LdrInitializeThunk = REBASE(0x7DAFD0);
        const ULONGLONG Hyperion_RtlGetNativeSystemInformation = REBASE(0x83DEA0);
        const ULONGLONG Hyperion_NtTerminateThread = REBASE(0xA4A6E0);
        const ULONGLONG Hyperion_NtAllocateVirtualMemoryEx = REBASE(0x8A1720);
        const ULONGLONG Hyperion_NtContinueEx = REBASE(0x8F30E0);
        const ULONGLONG Hyperion_NtCreateSection = REBASE(0x12C85D0);
        const ULONGLONG Hyperion_NtCreateThread = REBASE(0x24D870);
        const ULONGLONG Hyperion_NtCreateThreadEx = REBASE(0x29C130);
        const ULONGLONG Hyperion_ZwQueryVirtualMemory = REBASE(0xA401F0);
        const ULONGLONG Hyperion_NtMapViewOfSection = REBASE(0x9017E0);
        const ULONGLONG Hyperion_NtMapViewOfSectionEx = REBASE(0x12C5580);
        const ULONGLONG Hyperion_NtProtectVirtualMemory = REBASE(0x877EF0);
        const ULONGLONG Hyperion_NtRaiseHardError = REBASE(0xA67850);
        const ULONGLONG Hyperion_RtlExitUserProcess = REBASE(0xC3C130);
        const ULONGLONG Hyperion_NtSetContextThread = REBASE(0x8D9800);
        const ULONGLONG Hyperion_NtSuspendThread = REBASE(0x8864B0);
        const ULONGLONG Hyperion_NtTerminateProcess = REBASE(0x132CEA0);
        const ULONGLONG Hyperion_NtUnmapViewOfSectionEx = REBASE(0x905650);
        const ULONGLONG Hyperion_GetCurrentProcessId = REBASE(0x142F730);
        const ULONGLONG Hyperion_SetUnhandledExceptionFilter = REBASE(0x8F4AD0);
        const ULONGLONG __guard_dispatcher_icall_fptr = REBASE(0x7DB080);
        const ULONGLONG bitmap = REBASE(0x205098);
        const ULONGLONG InstrumentationCallback = REBASE(0x7DAEF0);
    };
}
