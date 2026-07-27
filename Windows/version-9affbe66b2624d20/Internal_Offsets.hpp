#pragma once
#include <Windows.h>
#include <cstdint>

inline std::uintptr_t resolve(std::uintptr_t Address) {
    return Address + reinterpret_cast<std::uintptr_t>(GetModuleHandleA(nullptr));
}

namespace Offsets {
    inline const uintptr_t Print = resolve(0x834D90);
    inline const uintptr_t KTable = resolve(0x8166010);
    inline const uintptr_t FlogDataBank = resolve(0x85918F8);
    inline const uintptr_t TaskSchedulerTargetFps = resolve(0x815D0E8);
    inline const uintptr_t LockViolationInstanceCrash = resolve(0x85B96F8);
    inline const uintptr_t LockViolationScriptCrash = resolve(0x845BEA8);
    inline const uintptr_t OpcodeLookupTable = resolve(0x5F1AAF0);

    // Rendering
    inline const uintptr_t RenderJobToRenderView = 0x1D0;
    inline const uintptr_t RenderViewToDevice = 0x8;
    inline const uintptr_t DeviceToSwapChain = 0xC8;

    // FFlag
    inline const uintptr_t GetFFlag = resolve(0x27F2BA0);
    inline const uintptr_t SetFFlag = resolve(0x27F86E0);

    // State / Context
    inline const uintptr_t GetVMState = resolve(0x1F1F530);
    inline const uintptr_t GetGlobalState = resolve(0x1E79020);
    // Failed to resolve GetLuaState
    inline const uintptr_t GetCurrentState = resolve(0x65FEA0);
    inline const uintptr_t GetCurrentThreadId = resolve(0x7FB0);
    inline const uintptr_t ScriptContextResume = resolve(0x1EFF650);
    inline const uintptr_t EnableLoadModule = resolve(0x845FB00);

    // Identity / Capabilities
    // Failed to resolve GetIdentityStruct
    inline const uintptr_t GetCapabilities = resolve(0x793540);

    // Struct Field Offsets
    inline const uintptr_t ttype = 0x68;
    inline const uintptr_t ttype_number = 0x30;
    inline const uintptr_t get_set = 0x90;
    inline const uintptr_t getter = 0x8;
    inline const uintptr_t setter = 0x10;

    // Task Library
    inline const uintptr_t TaskDefer = resolve(0x1FA93D0);
    inline const uintptr_t TaskSpawn = resolve(0x1FAA2B0);
    inline const uintptr_t TaskDelay = resolve(0x1FA97C0);
    inline const uintptr_t TaskWait = resolve(0x1FAA630);
    inline const uintptr_t TaskCancel = resolve(0x1FA90C0);
    inline const uintptr_t TaskSynchronize = resolve(0x1FAA430);
    inline const uintptr_t TaskDesynchronize = resolve(0x1FA9A10);

    namespace DataModel {
        inline const uintptr_t Primitive = 0x128;
        inline const uintptr_t Overlap = 0x1F0;
        inline const uintptr_t WriteLock = 0x658;
        inline const uintptr_t ScriptableFlags = 0x10;
        inline const uintptr_t PlaceId = 0x190;
        inline const uintptr_t GameLoaded = 0x578;
        inline const uintptr_t RequireBypass = 0x919;
        inline const uintptr_t ResumeFacet = 0x7E8;
        inline const uintptr_t IsParallel = 0x100;
        inline const uintptr_t WaitingHybridScriptsJobScriptContext = 0x1B0;
    }

    namespace Instance {
        inline const uintptr_t PushInstance = resolve(0x1E8D180);
        inline const uintptr_t GetProperty = resolve(0x1E81E80);

        inline const uintptr_t FireLeftMouseClick = resolve(0x4EA6720);
        inline const uintptr_t FireRightMouseClick = resolve(0x4EA6D90);
        inline const uintptr_t FireMouseHoverEnter = resolve(0x4EA6930);
        inline const uintptr_t FireMouseHoverLeave = resolve(0x4EA6B20);
        inline const uintptr_t FireTouchInterest = resolve(0x1B5B600);
        inline const uintptr_t FireProximityPrompt = resolve(0x4B79320);

        inline const uintptr_t Name = 0x98;
        inline const uintptr_t Parent = 0x68;
        inline const uintptr_t Children = 0x70;
        inline const uintptr_t Scriptable = 0x8C;
        inline const uintptr_t ClassDescriptor = 0x18;
        inline const uintptr_t DescriptorName = 0x8;
        inline const uintptr_t PropertyDescriptors = 0x250;
        inline const uintptr_t ClassName = 0x8;
    }

    namespace Signals {
        inline const uintptr_t DisconnectConnection = resolve(0x27C95B0);
        inline const uintptr_t IsLegalSendEvent = resolve(0x23F0AE0);
        inline const uintptr_t GetValues = resolve(0x1E6EF60);

        inline const uintptr_t eventName = 0x8;
        inline const uintptr_t eventOwner = 0x30;
        inline const uintptr_t eventWhitelist = 0x38;
        inline const uintptr_t strictFilter = 0x30B8;
        inline const uintptr_t Signature = 0x48;

        inline const uintptr_t whitelistBuckets = 0x18;
        inline const uintptr_t whitelistMask = 0x30;
        inline const uintptr_t whitelistBucketSize = 0x10;
        inline const uintptr_t whitelistNodeNext = 0x8;
        inline const uintptr_t whitelistNodeKey = 0x10;

        inline const uintptr_t next = 0x10;
        inline const uintptr_t enabled = 0x20;
        inline const uintptr_t signalSlot = 0x30;
        inline const uintptr_t signalSlotWrapper = 0x38;

        namespace SignalSlotWrapper {
            inline const uintptr_t selfWrapperStatic = 0x10;
            inline const uintptr_t selfWrapperParallel = 0x18;
            inline const uintptr_t selfWrapperC = 0x38;
        }

        namespace SignalSlot {
            inline const uintptr_t isOnce = 0x95;
            inline const uintptr_t weakObjectRef = 0x60;

            namespace Refs {
                inline const uintptr_t thread = 0x28;
                inline const uintptr_t luaThreadRefId = 0x30;
                inline const uintptr_t functionRefId = 0x34;
            }
        }

        namespace WaitSlot {
            inline const uintptr_t checkPointer = 0x10;
            inline const uintptr_t weakThreadRef = 0x38;
            inline const uintptr_t connectionRefs = 0x38;
        }
    }

    namespace TLS {
        inline const uintptr_t GetTLSPointer = resolve(0x7EB0);

        namespace IdentityStructure {
            // Failed to resolve Pointer
            inline const uintptr_t Capabilities = 0x28;
        }
    }

    namespace LuaU {
        inline const uintptr_t luaH_dummynode = resolve(0x5F1A830);
        inline const uintptr_t luaO_nilobject = resolve(0x5F1A9C0);
        inline const uintptr_t luaV_settable = resolve(0x800BD0);
        inline const uintptr_t luau_execute = resolve(0x7E68B0);
        inline const uintptr_t luaD_throw = resolve(0x7EB990);
        inline const uintptr_t luaVM_load = resolve(0x1E97B30);
        inline const uintptr_t luaC_step = resolve(0x7F90F0);
    }

    namespace RunService {
        inline const uintptr_t renderStepBindings = 0x128;

        namespace RenderStepMapNode {
            inline const uintptr_t left = 0x0;
            inline const uintptr_t parent = 0x8;
            inline const uintptr_t right = 0x10;
            inline const uintptr_t isnil = 0x19;
            inline const uintptr_t priority = 0x20;
            inline const uintptr_t vectorBegin = 0x28;
            inline const uintptr_t vectorEnd = 0x30;
        }

        namespace RenderStepBinding {
            inline const uintptr_t entrySize = 0x50;
            inline const uintptr_t weakFunctionRef = 0x20;
        }
    }
}
