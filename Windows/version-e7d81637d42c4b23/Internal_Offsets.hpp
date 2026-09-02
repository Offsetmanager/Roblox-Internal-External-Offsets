// ------------------------------------------------------------
//  Dumper      : Argus 3.1 (Internal Offsets)
//  Alert       : This is an experimental dumper, so please verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-e7d81637d42c4b23
//  Time Taken  : 15s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C8A050);
    const uintptr_t LuaVMLoad = REBASE(0x310B990);
    const uintptr_t GetCurrentThreadId = REBASE(0x47CE550);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x46F2BC0);
    const uintptr_t CastArgs = REBASE(0x3FDE600);
    const uintptr_t GetValues = REBASE(0xF8AD70);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x1CC5820);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x4115130);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x4123230);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x41D2D90);
    const uintptr_t TaskSynchronize = REBASE(0x41D2980);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x41D4160);
    const uintptr_t Desynchronize = REBASE(0x41D2D90);
    const uintptr_t Spawn = REBASE(0x41D3DF0);
    const uintptr_t Sync = REBASE(0x41D2980);
    const uintptr_t Wait = REBASE(0x41D4460);
    }

    namespace Input
    {
    const uintptr_t FireTouchInterest = REBASE(0xA5FAE0);
    }

    namespace Signal
    {
    const uintptr_t DisconnectConnect = REBASE(0x40410A0);
    }

    namespace Luau
    {
    const uintptr_t LuaD_Throw = REBASE(0x26D4690);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x47E7940);
    }
	
	namespace Hooks {
    inline uintptr_t NtCreateSection = 0x1088770;
    inline uintptr_t RtlExitUserProcess = 0x27a980;
    inline uintptr_t NtAllocateVirtualMemory = 0xb28110;
    inline uintptr_t NtFreeVirtualMemory = 0x145ece0;
    inline uintptr_t NtMapViewOfSection = 0x144e630;
    inline uintptr_t NtUnmapViewOfSection = 0xb30cb0;
    inline uintptr_t NtTerminateProcess = 0x99e1c0;
    inline uintptr_t NtCreateThread = 0x8c80f0;
    inline uintptr_t NtCreateThreadEx = 0x8f44b0;
    inline uintptr_t NtRaiseException = 0x1459d90;
    inline uintptr_t NtSuspendThread = 0xb1be90;
    inline uintptr_t NtQuerySystemInformation = 0x25cbf0;
    inline uintptr_t NtSetContextThread = 0x89cc40;
    inline uintptr_t NtProtectVirtualMemory = 0x27fe50;
    inline uintptr_t NtQueryVirtualMemory = 0x1453340;
    inline uintptr_t NtRaiseHardError = 0x8faa90;
    inline uintptr_t KiUserExceptionDispatcher = 0x2b17c0;
    inline uintptr_t KiUserCallbackDispatcher = 0x2b17e0;
    inline uintptr_t KiUserApcDispatcher = 0x2b18d0;
    inline uintptr_t LdrInitializeThunk = 0x2b18e0;
    inline uintptr_t NtContinue = 0x28ef20;
	}
}
