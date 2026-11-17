#pragma once
#define NOMINMAX
#include <Windows.h>

#define REBASE_RBX(x) ((ULONGLONG)GetModuleHandle(0) + x)
#define REBASE_HYPERION(x) ((ULONGLONG)GetModuleHandle("RobloxPlayerBeta.dll") + x)
struct lua_State;

namespace RBX {
    const ULONGLONG Print = REBASE_RBX(0x1bf4f90);
    const ULONGLONG LuaVM_Load = REBASE_RBX(0x4123ab0);
    const ULONGLONG gContext = REBASE_RBX(0x84aed78);
    const ULONGLONG TLS_Slot_get_offset = REBASE_RBX(0xc700);
    const ULONGLONG LuaD_ThrowOffset = REBASE_RBX(0x2551bb0);
    const ULONGLONG GetCapabilitiesOffset = REBASE_RBX(0x1c31460);
    const ULONGLONG TaskSynchronize = REBASE_RBX(0x4210b70);
    const ULONGLONG TaskDesynchronize = REBASE_RBX(0x42110d0);
    const ULONGLONG TaskDefer = REBASE_RBX(0x4211e10);
    const ULONGLONG TaskSpawn = REBASE_RBX(0x42122e0);
    const ULONGLONG TaskDelay = REBASE_RBX(0x42127e0);
    const ULONGLONG TaskWait = REBASE_RBX(0x4212ad0);
    const ULONGLONG TaskCancel = REBASE_RBX(0x4212da0);
    const ULONGLONG Luau_ExecuteOffset = REBASE_RBX(0x258e0c0);
    const ULONGLONG OpCodeLookupTable = REBASE_RBX(0x72c97b0);
    const ULONGLONG OpCodeDecodeTable = REBASE_RBX(0x72c98b0);
    const ULONGLONG EnableLoadModule = REBASE_RBX(0x6a368c8);
    const ULONGLONG LockViolationInstanceCrash = REBASE_RBX(0x6a5c308);
    const ULONGLONG LockViolationScriptCrash = REBASE_RBX(0x6a35f28);
    const ULONGLONG TaskSchedulerTargetFps = REBASE_RBX(0x8104130);
    const ULONGLONG pTaskScheduler = REBASE_RBX(0x8da5d98);
    const ULONGLONG KTable = REBASE_RBX(0x8483460);
    const ULONGLONG GetPropertyDescriptorOffset = REBASE_RBX(0x1c2f7d0);
    const ULONGLONG vftNetworkStream = REBASE_RBX(0x7036b08);
    const ULONGLONG SCResumeOffset = REBASE_RBX(0x41d21d0);
    const ULONGLONG RBXCrashPtr = REBASE_RBX(0x84e44b8);
    const ULONGLONG CrashPadPtr = REBASE_RBX(0x84a68f0);
    const ULONGLONG FLogHookPtr = REBASE_RBX(0x84e4658);
    const ULONGLONG PushInstanceOffset = REBASE_RBX(0x41140d0);
    const ULONGLONG FireTouchInterestOffset = REBASE_RBX(0x13ede10);
    const ULONGLONG FireProximityPromptOffset = REBASE_RBX(0x2fc3d70);
    const ULONGLONG FireRightMouseClick = REBASE_RBX(0x3b3cc60);
    const ULONGLONG FireMouseClick = REBASE_RBX(0x3b3cac0);
    const ULONGLONG FireMouseHover = REBASE_RBX(0x3b3e030);
    const ULONGLONG FireMouseHoverLeave = REBASE_RBX(0x3b3e1d0);
    const ULONGLONG vftFuncScriptSlot0 = REBASE_RBX(0x7117c68);
    const ULONGLONG vftFuncScriptSlot1 = REBASE_RBX(0x7117df0);
    const ULONGLONG vftMessageScriptSlot = REBASE_RBX(0x7117b80);
    const ULONGLONG vftWaitScriptSlot = REBASE_RBX(0x7117bd8);
    const ULONGLONG CastArgsOffset = REBASE_RBX(0x408a130);
    const ULONGLONG LuaT_typenames = REBASE_RBX(0x67dbcd0);
    const ULONGLONG LuaT_eventname = REBASE_RBX(0x67dbd40);
    const ULONGLONG LuaH_dummynode = REBASE_RBX(0x67c4778);
    const ULONGLONG luaB_assert = REBASE_RBX(0x58c7e80);
    const ULONGLONG luaB_error = REBASE_RBX(0x58c2f50);
    const ULONGLONG luaB_gcinfo = REBASE_RBX(0x58c5c90);
    const ULONGLONG luaB_getfenv = REBASE_RBX(0x58c4a80);
    const ULONGLONG luaB_getmetatable = REBASE_RBX(0x58c3ea0);
    const ULONGLONG luaB_next = REBASE_RBX(0x58c7380);
    const ULONGLONG luaB_newproxy = REBASE_RBX(0x58c8ad0);
    const ULONGLONG luaB_print = REBASE_RBX(0x58c2af0);
    const ULONGLONG luaB_rawequal = REBASE_RBX(0x58c4d90);
    const ULONGLONG luaB_rawget = REBASE_RBX(0x58c4eb0);
    const ULONGLONG luaB_rawset = REBASE_RBX(0x58c5440);
    const ULONGLONG luaB_rawlen = REBASE_RBX(0x58c5bf0);
    const ULONGLONG luaB_select = REBASE_RBX(0x58c7f30);
    const ULONGLONG luaB_setfenv = REBASE_RBX(0x58c4b50);
    const ULONGLONG luaB_setmetatable = REBASE_RBX(0x58c4040);
    const ULONGLONG luaB_tonumber = REBASE_RBX(0x58c2bb0);
    const ULONGLONG luaB_tostring = REBASE_RBX(0x58c8a70);
    const ULONGLONG luaB_type = REBASE_RBX(0x58c5cb0);
    const ULONGLONG luaB_typeof = REBASE_RBX(0x58c6820);
    const ULONGLONG LuaO_nilobject = REBASE_RBX(0x67dbca8);
    const ULONGLONG luaC_step = REBASE_RBX(0x2575e10);
    constexpr ULONGLONG RequireBypass = 0xbc4;
    constexpr ULONGLONG IsCoreScript = 0x130;
    constexpr ULONGLONG ModuleScriptBytecode = 0x100;
    constexpr ULONGLONG LocalScriptBytecode = 0x158;
    constexpr ULONGLONG SC2LS = 0x418;
    constexpr ULONGLONG SC2LSA = 0x708;
    constexpr ULONGLONG SC2Resume = 0x9e8;
    namespace Property {
        constexpr ULONG typeNum = 0x30;
        constexpr ULONG typeInfo = 0x70;
        constexpr ULONG isScriptable = 0xac;
        constexpr ULONG getSet = 0xb0;
        constexpr ULONG CDesc2PDesc = 0x1e8;
    };
    namespace Instances {
        constexpr ULONG Self = 0x8;
        constexpr ULONG Class = 0x18;
        constexpr ULONG Parent = 0x60;
        constexpr ULONG Name = 0x68;
        constexpr ULONG Children = 0x70;
    };
    namespace TaskScheduler {
        constexpr ULONG JobsStart = 0xc8;
        constexpr ULONG JobsEnd = 0xd0;
        constexpr ULONG ScriptContext = 0x1c0;
    };
    namespace TaskSchedulerJob {
        constexpr ULONG JobName = 0x18;
        constexpr ULONG JobTypeName = 0xf8;
    };
    namespace BasePart {
        constexpr ULONG Primitive = 0x178;
        constexpr ULONG Overlap = 0x200;
    };
    enum ItemType : int {
        End = 0x0,
        Delete = 0x1,
        New = 0x2,
        ChangeProperty = 0x3,
        Marker = 0x4,
        Other1 = 0x5,
        Other2 = 0x6,
        EventInvocation = 0x7,
        RequestCharacter = 0x8,
        Other3 = 0x9,
        CFrameAck = 0xa,
        JoinData = 0xb,
        DeletePureObject = 0xc,
        StreamData = 0xd,
        RegionRemoval = 0xe,
        InstanceRemoval = 0xf,
        Tag = 0x10,
        Stats = 0x11,
        Other4 = 0x12,
        ResolveAtomicTree = 0x13,
        StreamingInfo = 0x14,
        ChangeAttribute = 0x15,
        JoinDataV2 = 0x16,
        StreamTerrain = 0x17,
        StreamPrefetchInfo = 0x18,
        StreamPrefetchRequest = 0x19,
        StreamReplicationFocus = 0x1a,
        Destroy = 0x1b,
        ClientQuotaStreamUpdate = 0x1c,
        StreamModelPersistentPlayerAdd = 0x1d,
        StreamModelPersistentPlayerRemove = 0x1e,
        ClientQoS = 0x1f,
        ChangeInst = 0x20,
        ChangeObjProp = 0x21,
        DeferredSharedString = 0x22,
        ISRTimestamp = 0x23,
        StreamReplicationFocusRemove = 0x24,
        StreamPinData = 0x25,
        Unknown1 = 0x26,
        Unknown2 = 0x27,
        Unknown3 = 0x28,
        InstanceIntent = 0x29,
        StreamExcludedInstances = 0x2a,
        RegionTerrainLODRemoval = 0x2b,
        Unknown4 = 0x2c,
    };
    enum ReflectionType : int {
        Type_Void = 0x0,
        Type_Bool = 0x1,
        Type_Int = 0x2,
        Type_Int64 = 0x3,
        Type_Float = 0x4,
        Type_Double = 0x5,
        Type_String = 0x6,
        Type_ProtectedString = 0x7,
        Type_Instance = 0x8,
        Type_Instances = 0x9,
        Type_Ray = 0xa,
        Type_Vector2 = 0xb,
        Type_Vector3 = 0xc,
        Type_Vector2Int16 = 0xd,
        Type_Vector3Int16 = 0xe,
        Type_Rect2d = 0xf,
        Type_CoordinateFrame = 0x10,
        Type_Color3 = 0x11,
        Type_Color3uint8 = 0x12,
        Type_UDim = 0x13,
        Type_UDim2 = 0x14,
        Type_Faces = 0x15,
        Type_Axes = 0x16,
        Type_Region3 = 0x17,
        Type_Region3Int16 = 0x18,
        Type_CellId = 0x19,
        Type_GuidData = 0x1a,
        Type_PhysicalProperties = 0x1b,
        Type_BrickColor = 0x1c,
        Type_SystemAddress = 0x1d,
        Type_BinaryString = 0x1e,
        Type_Surface = 0x1f,
        Type_CollectionHandle = 0x20,
        Type_Enum = 0x21,
        Type_Property = 0x22,
        Type_Tuple = 0x23,
        Type_ValueArray = 0x24,
        Type_ValueTable = 0x25,
        Type_ValueMap = 0x26,
        Type_Variant = 0x27,
        Type_GenericFunction = 0x28,
        Type_WeakFunctionRef = 0x29,
        Type_ColorSequence = 0x2a,
        Type_ColorSequenceKeypoint = 0x2b,
        Type_NumberRange = 0x2c,
        Type_NumberSequence = 0x2d,
        Type_NumberSequenceKeypoint = 0x2e,
        Type_InputObject = 0x2f,
        Type_Connection = 0x30,
        Type_ContentId = 0x31,
        Type_DescribedBase = 0x32,
        Type_RefType = 0x33,
        Type_QFont = 0x34,
        Type_QDir = 0x35,
        Type_EventInstance = 0x36,
        Type_TweenInfo = 0x37,
        Type_DockWidgetPluginGuiInfo = 0x38,
        Type_PluginDrag = 0x39,
        Type_Random = 0x3a,
        Type_PathWaypoint = 0x3b,
        Type_FloatCurveKey = 0x3c,
        Type_RotationCurveKey = 0x3d,
        Type_ValueCurveKey = 0x3e,
        Type_SharedString = 0x3f,
        Type_DateTime = 0x40,
        Type_RaycastParams = 0x41,
        Type_RaycastResult = 0x42,
        Type_OverlapParams = 0x43,
        Type_LazyTable = 0x44,
        Type_DebugTable = 0x45,
        Type_CatalogSearchParams = 0x46,
        Type_OptionalCoordinateFrame = 0x47,
        Type_CSGPropertyData = 0x48,
        Type_UniqueId = 0x49,
        Type_Font = 0x4a,
        Type_SharedTable = 0x4b,
        Type_SharedTableIterator = 0x4c,
        Type_AnimationMask = 0x4d,
        Type_AnimationPose = 0x4e,
        Type_ClipEvaluator = 0x4f,
        Type_OpenCloudModel = 0x50,
        Type_InstanceRef = 0x51,
        Type_SecurityCapabilities = 0x52,
        Type_ArticulatedJoint = 0x53,
        Type_AnimationContext = 0x54,
        Type_Secret = 0x55,
        Type_Buffer = 0x56,
        Type_Path2DControlPoint = 0x57,
        Type_ReplicationPV = 0x58,
        Type_FacsReplicationData = 0x59,
        Type_AnimationMaskModifier = 0x5a,
        Type_Content = 0x5b,
        Type_NetAssetHandle = 0x5c,
        Type_NetAssetRef = 0x5d,
        Type_Object = 0x5e,
        Type_AdReward = 0x5f,
        Type_AssetContentMap = 0x60,
        Type_SlimReplicationData = 0x61,
        Type_User = 0x62,
        Type_WebViewParams = 0x63,
        Type_AnimTrackPlayState = 0x64,
        Type_AnimTrackMetadata = 0x65,
        Type_AnimTrackWeight = 0x66,
        Type_ScopedInstanceIdentity = 0x67,
        Type_ReplicatingVectorView = 0x68,
    };
    inline auto TLS_Slot_get = (ULONGLONG(__fastcall*)(ULONGLONG TLS))TLS_Slot_get_offset;
    inline auto LuaDThrow = (void(__fastcall*)(lua_State*, int))LuaD_ThrowOffset;
    inline auto GetCapabilities = (ULONGLONG(__fastcall*)(int*))GetCapabilitiesOffset;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Luau_ExecuteOffset;
    inline auto GetPropertyDescriptorIndex = (ULONG * (__fastcall*)(ULONGLONG, ULONGLONG * empty, ULONGLONG*))GetPropertyDescriptorOffset;
    inline auto ScriptContextResume = (ULONGLONG (__fastcall*)(ULONGLONG, void*, void*, int, char, ULONGLONG))SCResumeOffset; //(ScriptContext+SC2LS, pDebuggerResult (20 byte struct of 0's), LiveThreadRef, Return, zero?, zero?)
    inline auto PushInstance = (ULONGLONG*(__fastcall*)(lua_State*, ULONGLONG))PushInstanceOffset;
    inline auto FireTouchInterest = (void(__fastcall*)(ULONGLONG, ULONGLONG, ULONGLONG, bool, bool))FireTouchInterestOffset;
    inline auto FireProximityPrompt = (ULONGLONG*(__thiscall*)(ULONGLONG))FireProximityPromptOffset;
    inline auto CastArgs = (ULONGLONG(__fastcall*)(lua_State*,int,void*,bool,int))CastArgsOffset;
    inline auto LuaC_step = (ULONGLONG(__fastcall*)(lua_State*, bool))luaC_step;
    typedef ULONGLONG(__fastcall* RBXCrash_t)(const char*, ULONGLONG);
    typedef ULONGLONG(__fastcall* CrashPadPtr_t)(struct _EXCEPTION_POINTERS *);
    typedef ULONGLONG(__fastcall* FLogHookPtr_t)(void* thing1, BYTE level, const char* message);
}

namespace Hyperion {
    const ULONGLONG __guard_dispatcher_icall_fptr = REBASE_HYPERION(0xce3990);
    const ULONGLONG bitmap = REBASE_HYPERION(0x4f1c8);
}
