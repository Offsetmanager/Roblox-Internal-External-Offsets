/*
    _____ __________  ________ ____ ___  _____________  ___   ____   _____________ 
   /  _  \\______   \/  _____/|    |   \/   _____/\   \/  /   \   \ /   /\______  \
  /  /_\  \|       _/   \  ___|    |   /\_____  \  \     /     \   Y   /     /    /
 /    |    \    |   \    \_\  \    |  / /        \ /     \      \     /     /    /
 \____|__  /____|_  /\______  /______/ /_______  //___/\  \      \___/     /____/  
         \/       \/        \/                 \/       \_/                       
                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575
						
                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-cec3ad5889b447cf
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 97         𝓕𝓪𝓲𝓵𝓮𝓭: 4
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 313.66s
						
			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once
#include <cstdint>
#include <windows.h>

#define REBASE(addr) (addr + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C65A30);
    const uintptr_t InvokeServer = REBASE(0x351D380);
    const uintptr_t OpCodeLookupTable = REBASE(0x6F7FC40);
    const uintptr_t EnableLoadModule = REBASE(0x869DBC8);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x83E7808);
    const uintptr_t TaskScheduler = REBASE(0x8B79128);
    const uintptr_t KTable = REBASE(0x827B210);
    const uintptr_t PushInstance = REBASE(0x417A040);
    const uintptr_t CastArgs = REBASE(0x40ED3F0);
    const uintptr_t InstanceNew = REBASE(0x42AC410);
    const uintptr_t GetGlobalState = REBASE(0x41921C0);
    const uintptr_t GetLuaState = REBASE(0x41921C0);

    namespace Identity {
        constexpr uintptr_t IdentityStruct = REBASE(0x835AD38);
        constexpr uintptr_t Impersonator = REBASE(0x1CA24A0);
        constexpr uintptr_t GetTssData = REBASE(0x6BB0);
        constexpr uintptr_t GetCapabilities = REBASE(0x1CA23E0);
    };

    namespace ExtraSpace {
        constexpr uintptr_t Capabilities = 0x58;
        constexpr uintptr_t RequireBypass = 0x975;
    };

    namespace Bytecode {
        constexpr uintptr_t ByteCodeTableVerificationA = REBASE(0x83DE9B0);
        constexpr uintptr_t LocalScriptByteCode = 0x180;
        constexpr uintptr_t ModuleScriptByteCode = 0x128;
    };

    namespace SC {
        constexpr uintptr_t SCResumeOffset = REBASE(0x423C6F0);
        constexpr uintptr_t SC2Resume = 0x8F0;
    };

    namespace RakNet {
        constexpr uintptr_t Job2RakPeer = 0x1E0;
        constexpr uintptr_t RakPeerVTableSize = 0x3E0;
        constexpr uintptr_t idx_Connect = 13;
        constexpr uintptr_t idx_Send = 20;
        constexpr uintptr_t idx_Recieve = 25;
    };

    namespace TaskDefer {
        constexpr uintptr_t TaskSynchronize = REBASE(0x43042E0);
        constexpr uintptr_t TaskDesynchronize = REBASE(0x4304750);
        constexpr uintptr_t TaskDefer = REBASE(0x4305390);
        constexpr uintptr_t TaskSpawn = REBASE(0x4305880);
        constexpr uintptr_t TaskDelay = REBASE(0x4305C20);
        constexpr uintptr_t TaskWait = REBASE(0x4305F30);
        constexpr uintptr_t TaskCancel = REBASE(0x4303CA0);
    };

    namespace Luau {
        constexpr uintptr_t LoadModule = REBASE(0x424AB00);
        constexpr uintptr_t LuaVM_Load = REBASE(0x4188AF0);
        constexpr uintptr_t Luau_Execute = REBASE(0x25CB0D0);
        constexpr uintptr_t LuaD_Throw = REBASE(0x259B470);
        constexpr uintptr_t LuaH_dummynode = REBASE(0x6500E48);
        constexpr uintptr_t LuaO_nilobject = REBASE(0x6504708);
        constexpr uintptr_t luaC_step = REBASE(0x25B0430);
    };

    namespace Luau_Other {
        constexpr uintptr_t luaB_assert = REBASE(0x25EE450);
        constexpr uintptr_t luaB_print = REBASE(0x25E7350);
        constexpr uintptr_t luaB_error = REBASE(0x25E77B0);
        constexpr uintptr_t luaB_gcinfo = REBASE(0x25ECD90);
        constexpr uintptr_t luaB_getfenv = REBASE(0x25E8DA0);
        constexpr uintptr_t luaB_getmetatable = REBASE(0x25E81F0);
        constexpr uintptr_t luaB_next = REBASE(0x25ED9A0);
        constexpr uintptr_t luaB_newproxy = REBASE(0x25EF370);
        constexpr uintptr_t luaB_rawequal = REBASE(0x25E9090);
        constexpr uintptr_t luaB_rawget = REBASE(0x25E91A0);
        constexpr uintptr_t luaB_rawset = REBASE(0x25E9BC0);
        constexpr uintptr_t luaB_rawlen = REBASE(0x25ECCF0);
        constexpr uintptr_t luaB_select = REBASE(0x25EE500);
        constexpr uintptr_t luaB_setfenv = REBASE(0x25E8E60);
        constexpr uintptr_t luaB_setmetatable = REBASE(0x25E8380);
        constexpr uintptr_t luaB_tonumber = REBASE(0x25E7420);
        constexpr uintptr_t luaB_tostring = REBASE(0x25EF310);
        constexpr uintptr_t luaB_type = REBASE(0x25ECDB0);
        constexpr uintptr_t luaB_typeof = REBASE(0x25ED3B0);
        constexpr uintptr_t lua_typename = REBASE(0x2588310);
        constexpr uintptr_t LuaT_eventname = REBASE(0x65263B0);
        constexpr uintptr_t LuaT_typenames = REBASE(0x6526340);
        constexpr uintptr_t lua_yield = REBASE(0x14BB4A0);
        constexpr uintptr_t lua_checkstack = REBASE(0x2587960);
        constexpr uintptr_t pseudo2addr = REBASE(0x25877C0);
    };

    namespace Coroutine {
        constexpr uintptr_t close = REBASE(0x578BBE0);
        constexpr uintptr_t create = REBASE(0x578B250);
        constexpr uintptr_t isyieldable = REBASE(0x578BB50);
        constexpr uintptr_t running = REBASE(0x578BAE0);
        constexpr uintptr_t status = REBASE(0x57897D0);
        constexpr uintptr_t wrap = REBASE(0x578B810);
        constexpr uintptr_t yield = REBASE(0x578BA80);
    };

    namespace RayCast {
        constexpr uintptr_t BlockCast = REBASE(0xD34110);
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
        constexpr uintptr_t ScriptContext = 0x1C0;
    };

    namespace TaskSchedulerJob {
        constexpr uintptr_t JobName = 0x18;
        constexpr uintptr_t JobTypeName = 0xF8;
    };

    namespace Crash {
        constexpr uintptr_t LockViolationScriptCrash = REBASE(0x869D9D8);
        constexpr uintptr_t LockViolationInstanceCrash = REBASE(0x8749848);
    };

    namespace DataModel {
        constexpr uintptr_t Workspace = 0x150;
    };

    namespace FakeDataModel {
        constexpr uintptr_t Pointer = REBASE(0x8BCFD50);
        constexpr uintptr_t FakeDataModelToDataModel = 0x1F8;
    };

    namespace Signal {
        constexpr uintptr_t Disconnect = REBASE(0x41547C0);
    };

    namespace Input {
        constexpr uintptr_t FireMouseClick = REBASE(0x3BC8C60);
        constexpr uintptr_t FireRightMouseClick = REBASE(0x3BC8E00);
        constexpr uintptr_t FireMouseHoverEnter = REBASE(0x3BCA250);
        constexpr uintptr_t FireMouseHoverLeave = REBASE(0x3BCA3F0);
        constexpr uintptr_t FireProximityPrompt = REBASE(0x30E9D90);
    };

    namespace Hyperion {
        const ULONGLONG Hyperion_ZwAllocateVirtualMemory = REBASE(0xD813F0);
        const ULONGLONG Hyperion_NtContinue = REBASE(0x321490);
        const ULONGLONG Hyperion_NtFreeVirtualMemory = REBASE(0x61CA20);
        const ULONGLONG Hyperion_NtQuerySystemInformation = REBASE(0xF87320);
        const ULONGLONG Hyperion_ZwRaiseException = REBASE(0x15301F0);
        const ULONGLONG Hyperion_KiRaiseUserExceptionDispatcher = REBASE(0x602C50);
        const ULONGLONG Hyperion_KiUserApcDispatcher = REBASE(0x61C920);
        const ULONGLONG Hyperion_KiUserCallbackDispatcher = REBASE(0x61C830);
        const ULONGLONG Hyperion_KiUserExceptionDispatcher = REBASE(0x61C810);
        const ULONGLONG Hyperion_ZwUnmapViewOfSection = REBASE(0xD971B0);
        const ULONGLONG Hyperion_NtCreateSectionEx = REBASE(0xE35950);
        const ULONGLONG Hyperion_LdrInitializeThunk = REBASE(0x61C930);
        const ULONGLONG Hyperion_RtlGetNativeSystemInformation = REBASE(0xF87320);
        const ULONGLONG Hyperion_NtTerminateThread = REBASE(0x155B380);
        const ULONGLONG Hyperion_NtAllocateVirtualMemoryEx = REBASE(0xE271D0);
        const ULONGLONG Hyperion_NtContinueEx = REBASE(0x15293A0);
        const ULONGLONG Hyperion_NtCreateSection = REBASE(0x154BA50);
        const ULONGLONG Hyperion_NtCreateThread = REBASE(0xF668E0);
        const ULONGLONG Hyperion_NtCreateThreadEx = REBASE(0xE20D60);
        const ULONGLONG Hyperion_ZwQueryVirtualMemory = REBASE(0x1534220);
        const ULONGLONG Hyperion_NtMapViewOfSection = REBASE(0xDCF4F0);
        const ULONGLONG Hyperion_NtMapViewOfSectionEx = REBASE(0x15805D0);
        const ULONGLONG Hyperion_NtProtectVirtualMemory = REBASE(0x268C70);
        const ULONGLONG Hyperion_NtRaiseHardError = REBASE(0xE1F560);
        const ULONGLONG Hyperion_RtlExitUserProcess = REBASE(0xDD2470);
        const ULONGLONG Hyperion_NtSetContextThread = REBASE(0x729210);
        const ULONGLONG Hyperion_NtSuspendThread = REBASE(0x6E35D0);
        const ULONGLONG Hyperion_NtTerminateProcess = REBASE(0x89BC10);
        const ULONGLONG Hyperion_NtUnmapViewOfSectionEx = REBASE(0x6E2530);
        const ULONGLONG Hyperion_GetCurrentProcessId = REBASE(0xD97F10);
        const ULONGLONG Hyperion_SetUnhandledExceptionFilter = REBASE(0x14A02C0);
        const ULONGLONG __guard_dispatcher_icall_fptr = REBASE(0x61C9E0);
        const ULONGLONG bitmap = REBASE(0x4A5B8);
        const ULONGLONG InstrumentationCallback = REBASE(0x61C850);
    };
}
