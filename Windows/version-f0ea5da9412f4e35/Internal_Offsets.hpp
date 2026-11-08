#pragma once
#include <cstdint>
#include <cstddef>
#include <Windows.h>
#include <memory>
#include <string>

struct lua_State;

#define REBASE(Address) ((Address) == 0 ? uintptr_t{0} : ((Address) + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr))))

typedef enum { SUCCESS, YIELD, ERR } CoroutineResult;

namespace RBX
{
    struct LiveThreadRef {
        int _Refs;
        char Pad0[0x24];
        lua_State* thread;
        int32_t    thread_ref;
        int32_t    objectId;
    };

    struct debugger_result_t {
        std::int32_t result;
        std::int32_t unk[0x4];
    };
}

namespace Offsets
{
    const uintptr_t Print                                = REBASE(0x1CA9A30);
    const uintptr_t RawScheduler                         = REBASE(0x8E4D7B8);
    const uintptr_t OpcodeLookupTable                    = REBASE(0x735B280);
    const uintptr_t AppdataInfoState                     = 0x360;
    const uintptr_t AppdataInfo                          = REBASE(0x147B4B0);
    const uintptr_t SingleSurfaceApp                     = REBASE(0x8263530);
    const uintptr_t SingleSurfaceAppVft                  = REBASE(0x70A1EB0);
    const uintptr_t LuaVMLoad                            = REBASE(0x426A570);
    const uintptr_t FireMouseClick                       = REBASE(0x3C6DAF0);
    const uintptr_t FireRightMouseClick                  = REBASE(0x3C6DC90);

    const uintptr_t FireMouseHoverEnter                  = REBASE(0x3C6F060);
    const uintptr_t FireMouseHoverLeave                  = REBASE(0x3C6F200);
    const uintptr_t IsLegalSendEvent                     = REBASE(0x47FBFE0);

    const uintptr_t FireTouchInterest                    = REBASE(0x14B6AE0);
    const uintptr_t FireProximityPrompt                  = REBASE(0x30FD840);

    const uintptr_t TaskTable                            = REBASE(0x8D878E0);
    const uintptr_t TaskSynchronize                      = REBASE(0x435B180);
    const uintptr_t TaskDesynchronize                    = REBASE(0x435B700);
    const uintptr_t TaskDefer                            = REBASE(0x435C440);
    const uintptr_t TaskSpawn                            = REBASE(0x435C920);
    const uintptr_t TaskDelay                            = REBASE(0x435CCB0);
    const uintptr_t TaskWait                             = REBASE(0x435CFB0);
    const uintptr_t TaskCancel                           = REBASE(0x435D290);

    const uintptr_t ScriptContextResume                  = REBASE(0x431B1F0);
    const uintptr_t GetScriptVMState                     = REBASE(0x4274C30);
    const uintptr_t CastArgs                             = REBASE(0x41CB820);
    const uintptr_t ConnectionDisconnect                 = REBASE(0x4239210);

    namespace InstanceBridge {
        const uintptr_t Push                             = REBASE(0x42594C0);
    }

    namespace RobloxProperty {
        const uintptr_t GetProperty                      = REBASE(0x1CE8360);
        const uintptr_t KTable                           = REBASE(0x8530CF0);
        const uintptr_t NameManagerPtr                   = REBASE(0x858AC58);
        const uintptr_t InternPropertyName               = REBASE(0x2A7BA40);
        const uintptr_t LookupPropertyName               = REBASE(0x2A7BE50);
        constexpr uintptr_t PropertyMapOffset            = 0x1E0;
        constexpr uintptr_t NameId                       = 0x20;
        constexpr uint32_t MaxNameId                     = 0x4000;
    }

    namespace MemberKind {
        constexpr uint32_t Property                      = 0;
        constexpr uint32_t Event                         = 1;
        constexpr uint32_t Function                      = 2;
        constexpr uint32_t Callback                      = 4;
    }

    namespace MemberMap {
        constexpr uintptr_t Capacity                     = 0x1E4;
        constexpr uintptr_t Mask                         = 0x1F8;
    }

    namespace CallbackDesc {
        constexpr uintptr_t IsAsync                      = 0x80;
        constexpr uintptr_t InstanceOffset               = 0x88;
    }

    namespace CallbackChain {
        constexpr uintptr_t HolderObject                 = 0x0;
        constexpr uintptr_t FunctionImpl                 = 0x18;
        constexpr uintptr_t LambdaLiveRef                = 0x10;
        constexpr uintptr_t LiveRefAlive                 = 0x10;
        constexpr uintptr_t LiveRefThread                = 0x28;
        constexpr uintptr_t LiveRefValueRef              = 0x34;
        const uintptr_t BinderVftable                    = REBASE(0x0);
        const uintptr_t AsyncTrampoline                  = REBASE(0xB82730);
        const uintptr_t LambdaVftable                    = REBASE(0x0);
    }

    namespace RobloxThread {
        const uintptr_t IdentityPtr                          = REBASE(0x855CF68);
        const uintptr_t Impersonator                         = REBASE(0x1CEA200);
        const uintptr_t GetTlsPointer                        = REBASE(0xC700);
        constexpr uintptr_t IdentityStructIdentity           = 0x0;
        constexpr uintptr_t IdentityStructCapabilities       = 0x30;
        constexpr uintptr_t IdentityStructCapabilityResolver = 0x38;
    }

    namespace Flags {
        const uintptr_t LockViolationInstanceCrash       = REBASE(0x81AACB8);
        const uintptr_t LockViolationScriptCrash         = REBASE(0x8195AE0);
        const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x8196468);
        const uintptr_t TaskSchedulerTargetFps           = REBASE(0x81715B0);
    }

    namespace Bytecode {
        constexpr unsigned OpcodeWireMultiplier          = 227;
    }

    namespace Luau {
        const uintptr_t Luau_Execute                     = REBASE(0x26789E0);
        const uintptr_t LuaO_NilObject                   = REBASE(0x68BA8E8);
        const uintptr_t LuaH_DummyNode                   = REBASE(0x68B9F58);
        const uintptr_t LuaC_Step                        = REBASE(0x265D640);
        const uintptr_t GcStep                           = REBASE(0x265D2F0);
        const uintptr_t Freeobj                          = REBASE(0x265BD90);
        const uintptr_t Luau_Load                        = REBASE(0x265F9D0);
        const uintptr_t LuaT_Eventnames                  = REBASE(0x68DC080);
        const uintptr_t LuaT_Typenames                   = REBASE(0x68DC010);
    }

    const uintptr_t LuaD_throw                           = REBASE(0x26360E0);
    const uintptr_t luaF_freeproto                       = REBASE(0x2672800);
    const uintptr_t luaF_newproto                        = REBASE(0x2671850);
    const uintptr_t luaL_argerrorL                       = REBASE(0x263F620);
    const uintptr_t currfuncname                         = REBASE(0x263F5A0);
    const uintptr_t luaG_runerrorL                       = REBASE(0x2671020); 
    const uintptr_t luaO_pushvfstring                    = REBASE(0x266EEC0);
    const uintptr_t luaD_rawrunprotected                 = REBASE(0x26360B0);
    const uintptr_t luaA_toobject                        = REBASE(0x262FCD0);
    const uintptr_t lua_pushvfstring                     = REBASE(0x26311D0);
    const uintptr_t pseudo2addr                          = REBASE(0x262FC10);
    const uintptr_t get_capabilites                      = REBASE(0x1CEA140);
    const uintptr_t lua_clock                            = REBASE(0x26A0F50);

    namespace LuaError {
        const uintptr_t readonlyerror                    = REBASE(0x26704B0);
        const uintptr_t methoderror                      = REBASE(0x2670470);
        const uintptr_t indexerror                       = REBASE(0x2670370);
        const uintptr_t ordererror                       = REBASE(0x26702F0);
        const uintptr_t forerrorL                        = REBASE(0x26701C0);
    }

    const uintptr_t newpage                              = REBASE(0x269FDB0);
    const uintptr_t newclasspage                         = REBASE(0x26A0640); 
    const uintptr_t freeclasspage                        = REBASE(0x269FBD0);
    const uintptr_t freeblock                            = REBASE(0x269F700);
    const uintptr_t luaM_free                            = REBASE(0x269F7C0);
    const uintptr_t luaM_freegco                         = REBASE(0x269F870);
    const uintptr_t luaM_visitgco                        = REBASE(0x269FA70);
    const uintptr_t luaM_toobig                          = REBASE(0x269F6D0);

    namespace Signal {
        constexpr uintptr_t next              = 0x10;
        constexpr uintptr_t enabled           = 0x20;
        constexpr uintptr_t ListHead          = 0x8;

        const uintptr_t ConnectionDisconnectRaw = REBASE(0x4AF09E0);
        const uintptr_t ConnectionUnlink        = REBASE(0x4AF0E30);
        const uintptr_t ConnectionPushFront     = REBASE(0x4AF11D0);
        const uintptr_t ConnectionConnected     = REBASE(0x4AF0B70);

        namespace SignalSlotWrapper {
            constexpr uintptr_t Ptr       = 0x10;
        }

        namespace SignalSlot {
            constexpr uintptr_t disconnected     = 0x20;
            constexpr uintptr_t engineDisconnect = 0x20;
            constexpr uintptr_t isSubmitTask     = 0xB4;
            constexpr uintptr_t isOnce           = 0xB5;
            constexpr uintptr_t onceFired        = 0xB6;
            constexpr uintptr_t connection       = 0x8;
            namespace Refs {
                constexpr uintptr_t luaThreadRefId = 0x30;
                constexpr uintptr_t functionRefId  = 0x34;
            }
        }

    }

    namespace Slot_wrapper {
        constexpr uintptr_t weak_object_ref   = 0x68;
        constexpr uintptr_t thread            = 0x28;
    }

    namespace Connection {
        constexpr uintptr_t next                   = 0x10;
        constexpr uintptr_t enabled                = 0x20;
        constexpr uintptr_t slot_wrapper           = 0x30;
    }

    namespace jobs_offsets {
        const uintptr_t start         = 0xC8;
        const uintptr_t end           = 0xD0;
        const uintptr_t scriptContext = 0x1C0;
        const uintptr_t job_name      = 0x18;
    }

    namespace RunService {
        constexpr uintptr_t RenderStepBindings = 0x110;

        namespace BindingTree {
            constexpr uintptr_t left     = 0x0;
            constexpr uintptr_t parent   = 0x8;
            constexpr uintptr_t right    = 0x10;
            constexpr uintptr_t isNil    = 0x19;
            constexpr uintptr_t priority = 0x20;
            constexpr uintptr_t vecFirst = 0x28;
            constexpr uintptr_t vecLast  = 0x30;
        }

        namespace Binding {
            constexpr uintptr_t stride         = 0x50;
            constexpr uintptr_t name           = 0x0;
            constexpr uintptr_t nameSize       = 0x10;
            constexpr uintptr_t nameCaps       = 0x18;
            constexpr uintptr_t callback       = 0x20;
            constexpr uintptr_t callbackObject = 0x30;
        }

        namespace CallbackRef {
            constexpr uintptr_t owner         = 0x10;
            constexpr uintptr_t thread        = 0x28;
            constexpr uintptr_t threadRefId   = 0x30;
            constexpr uintptr_t functionRefId = 0x34;
        }

        constexpr uintptr_t MaxNameLength      = 0x400;
        constexpr int       MaxPriorityBuckets = 4096;
        constexpr int       MaxBindingsPerNode = 4096;
        constexpr uint32_t  MaxRefId           = 0x00FFFFFF;
    }

    namespace DataModel {
        const uintptr_t Children                         = 0x70;
        const uintptr_t PlaceId                          = 0x180;
        const uintptr_t FakeDataModelToDataModel         = 0x1F8;
        const uintptr_t FakeDataModelPointer             = REBASE(0x8EB6960);
        const uintptr_t InParallelPhase                  = 0x53D;
    }

    namespace ScriptContext {
        const uintptr_t Face                             = 0xA28;
        const uintptr_t RequireBypass                    = 0xB71;
        const uintptr_t DataModel                        = 0x100;
    }

    namespace BasePart {
        const uintptr_t Primitive                        = 0x178;
        namespace PrimitiveStructure {
            const uintptr_t Overlap                      = 0x200;
        }
    }

    namespace Instance {
        const uintptr_t ClassDescriptor                  = 0x18;
        const uintptr_t SharedRefControl                 = 0x10;
        const uintptr_t SharedRefUseCount                = 0x8;
    }

    namespace ClassDescriptor {
        const uintptr_t Name                             = 0x8;
    }

    namespace Property {
        const uintptr_t Name                             = 0x8;
        const uintptr_t LockSlot                         = 0x44;
        const uintptr_t TypeInfo                         = 0x70;
        const uintptr_t InstanceOffset                   = 0x80;  
        const uintptr_t Flags                            = 0xAC;
        const uintptr_t GetSet                           = 0xB0;
        const uintptr_t GetSetRef                        = 0xB8;
        const uintptr_t GetSetVftGetter                  = 0x18;
        const uintptr_t GetSetVftSetter                  = 0x20;
        const uintptr_t RefDescriptorVftGetValue         = 0x100;
        const uintptr_t ValueGetUnavailable              = REBASE(0xA7BDD0);
        const uintptr_t ValueSetUnavailable              = REBASE(0x7BB160);
        const uintptr_t OptionalCoordinateFrameDtor      = REBASE(0x1CCA4A0);
        const uintptr_t IdentityCoordinateFrame          = REBASE(0x67B2FA8);
        const uintptr_t OptionalCoordinateFrameEngaged   = 0x2;
        const uintptr_t OptionalCoordinateFrameTagMask   = 0x3;
        const uintptr_t NetAssetRefRelease               = REBASE(0x1CDC080);
        const uintptr_t NetAssetRefOwnerRep              = 0x8;
        const uintptr_t NetAssetRefHandleGuid            = 0x10;
        const uintptr_t NetAssetRefHandleVersion         = 0x18;
        const uintptr_t NetAssetRefHandleType            = 0x20;
        const uintptr_t NetAssetManagerGet               = REBASE(0x1CDC9A0);
        const uintptr_t NetAssetProxyHolder              = 0x8;
        const uintptr_t NetAssetProxyVftSolidMesh        = REBASE(0x7048AA0);
        const uintptr_t SolidMeshSize                    = REBASE(0x2C06C10);
        const uintptr_t SolidMeshWrite                   = REBASE(0x2C06CF0);
        const uintptr_t SharedRepWeakCount               = 0xC;
        const uintptr_t SharedRepDeleteThisVftSlot       = 0x8;
        const uintptr_t PushContent                      = REBASE(0x4228E50);
        constexpr uint32_t ContentSourceTypeMax          = 4;
        const uintptr_t ReadCapabilities                 = 0x38;
        constexpr uint64_t SecurityLevelCapabilities     = 0x3FULL;
        constexpr uint32_t FlagScriptable                = 0x10;
    }

    namespace TypeInfo {
        const uintptr_t Name                             = 0x8;
        const uintptr_t TypeNum                          = 0x30;
    }

    namespace EnumItem {
        const uintptr_t Name                             = 0x8;
        const uintptr_t Value                            = 0x30;
    }

    namespace AssetContentMap {
        const uintptr_t Size                             = 0x0;
        const uintptr_t Capacity                         = 0x4;
        const uintptr_t Control                          = 0x8;
        const uintptr_t Slots                            = 0x10;
        const uintptr_t BucketShift                      = 0x1C;
        const uintptr_t HeaderHighWater                  = 0x4;
        const uintptr_t HeaderLeafWordBase               = 0x10;
        const uintptr_t HeaderBitmap                     = 0x18;
        const uintptr_t SlotStride                       = 0x50;
        const uintptr_t SlotKey                          = 0x0;
        const uintptr_t SlotValue                        = 0x20;
        const uintptr_t Destroy                          = REBASE(0xA8DBE0);
    }

    namespace RemoteEvent {
        const uintptr_t OwningInstance                   = 0x18;
        const uintptr_t SignatureFromDescriptor          = 0x60;
        const uintptr_t SignatureTypesStart              = 0x8;
        const uintptr_t SignatureTypeStride              = 0x70;
        const uintptr_t RaiseEventVftSlot                = 0x18;
    }

    namespace LocalScript {
        const uintptr_t Actor                            = 0x60;
        const uintptr_t ProtectedString                  = 0x178;
    }

    namespace ModuleScript {
        const uintptr_t ProtectedString                  = 0x120;
    }

    namespace ProtectedString {
        const uintptr_t Data                             = 0x10;
        const uintptr_t Size                             = 0x20;
    }

    namespace RenderView {
        const uintptr_t RenderJobToView                  = 0x1E0;
        const uintptr_t ViewToDevice                     = 0x10;
        const uintptr_t DeviceToSwapChain                = 0x80;
    }

    namespace RakNet {
        const uintptr_t       PeerVTable        = REBASE(0x70E84B8);
        const int             VTableSlotCount   = 124;
        const int             SendSlot          = 20;
        const uint32_t        JobToPeerOff      = 0x1E0;
        constexpr const char* JobNameSend       = "Net Peer Send";
        constexpr const char* JobNameRecv       = "Net PacketReceive";
    }

    namespace RbxTransport {
        const uintptr_t       ConnVTable          = REBASE(0x714D5B0);
        const int             VTableSlotCount     = 27;

        const int             SendSlot            = 7;
        const int             SendRawSlot         = 6;

        const uintptr_t       Send                = REBASE(0x3B02C20);
        const uintptr_t       SendRaw             = REBASE(0x3B02970);

        const int             ConnShadowSlots     = 29;

        namespace RakNetConn {
            const uintptr_t   VTable              = REBASE(0x71DA4C0);
            const int         VTableSlotCount     = 28;
            const uintptr_t   Send                = REBASE(0x49D4290);
            const uintptr_t   SendRaw             = REBASE(0x3B02100);
        }
        const uintptr_t       Disconnect          = REBASE(0x3B03CC0);
        const uintptr_t       Flush               = REBASE(0x3B04150);


        const int             PayloadDataSlot     = 1;
        const uint32_t        PayloadLenOff       = 0x030;
        const uint32_t        RawPayloadDataOff   = 0x010;
        const uint32_t        RawPayloadLenOff    = 0x030;

        namespace Client {
            const uintptr_t   MainVTable           = REBASE(0x71D5D50);
            const uintptr_t   InterfaceVTable      = REBASE(0x71D5FD8);
            const uint32_t    InterfaceVPtrOff     = 0x98;
            const int         InterfaceSlotCount   = 10;
            const int         OnReceiveSlot        = 2;
            const uintptr_t   OnReceive            = REBASE(0x48CE190);
            const uint32_t    OwnerConnOff         = 0xF28;
            const uint32_t    OwnerConnScanLimit   = 0x1188;
        }

        namespace Channel {
            const uintptr_t   InterfaceVTable      = REBASE(0x70DB250);
        }

        namespace AppConnection {
            const int         VTableSlotCount      = 29;
        }
    }

    namespace RobloxThread {
        const uintptr_t GetDataModelLockOwner = REBASE(0xC8A0);
        const uintptr_t GetCapabilities       = REBASE(0x1CEA140);
    }

    namespace Scheduler {
        const uintptr_t StepWaitingHybridScripts = REBASE(0x4351C40);
    }

    namespace FakeDataModel {
        const uintptr_t     DataModelDeleterPointer = REBASE(0x8EB6958);
        const uintptr_t     Pointer                 = REBASE(0x8EB6960);
    }

    namespace Signal {
        const uintptr_t WeakThreadRefVftable         = REBASE(0x6F8CD10);
        const uintptr_t FunctionSlotVftable          = REBASE(0x71AFEB0);
        const uintptr_t FunctionSlotAlternateVftable = REBASE(0x71AFDB8);
        const uintptr_t WaitSlotVftable              = REBASE(0x71AFCF8);
        const uintptr_t WeakObjectRefVftable         = REBASE(0x6F84458);
        const uintptr_t SignalType                   = REBASE(0x8E8C600);
        const uintptr_t ConnectionType               = REBASE(0x8D97604);
        const uintptr_t GetArguments                 = REBASE(0x42E2F60);
        const uintptr_t RaiseEventInvocation         = REBASE(0x1CFE4D0);
        const uintptr_t Once                         = REBASE(0x4237AE0);
        const uintptr_t Wait                         = REBASE(0x4237C80);
        const uintptr_t AsyncCallbackVftable         = REBASE(0x0);
        const uintptr_t SyncCallbackVftable          = REBASE(0x0);
        const uintptr_t CallbackBinderVftable        = REBASE(0x0);
    }

    namespace SharedString {
        const uintptr_t Create  = REBASE(0x4AFC3A0);
        const uintptr_t Release = REBASE(0x7EB520);
        const uintptr_t NodeString = 0x10;
        const uintptr_t NodeRefCount = 0x38;
    }

    namespace Flags {
        const uintptr_t Registry                           = REBASE(0x858F8E8);
        const uintptr_t ValueGetSetIntVftable              = REBASE(0x71DE6C0);
        const uintptr_t ValueGetSetDynamicIntVftable       = REBASE(0x71DE8F0);
        const uintptr_t ValueGetSetStringVftable           = REBASE(0x71DE378);
        const uintptr_t ValueGetSetBoolVftable             = REBASE(0x71DE5A8);
        const uintptr_t ValueGetSetDynamicBoolVftable      = REBASE(0x71DE7D8);
        const uintptr_t ValueGetSetChannelVftable          = REBASE(0x71DE490);
        const uintptr_t LuauCIProto                        = REBASE(0x0);
        const uintptr_t LuauCallFeedback                   = REBASE(0x0);
        const uintptr_t LuauBackedgeHeapCheck              = REBASE(0x0);
        const uintptr_t LuauPromoteProto                   = REBASE(0x81E60A0);
        const uintptr_t DebugLuauUserDefinedClassesRuntime = REBASE(0x81E6080);
        const uintptr_t LuauFastpcall                      = REBASE(0x81E60C0);
        const uintptr_t UseRbxTransportClient              = REBASE(0x8189A60);
        const uintptr_t RakNetFallbackToRbxTransport       = REBASE(0x81A1EC8);
        const uintptr_t SendsGoThroughConnection           = REBASE(0x81616B8);
        const uintptr_t RefactorIngressFlow                = REBASE(0x8189A90);
        namespace Reg {
            constexpr uintptr_t ListHead      = 0x8;
            constexpr uintptr_t Buckets       = 0x18;
            constexpr uintptr_t Mask          = 0x30;
            constexpr uintptr_t NodePrevLink  = 0x8;
            constexpr uintptr_t NodeNext      = 0x0;
            constexpr uintptr_t NodeKey       = 0x10;
            constexpr uintptr_t NodeEntry     = 0x30;
            constexpr uintptr_t EntryStorage  = 0x20;
            constexpr uintptr_t EntrySnapshot = 0x28;
            constexpr size_t    MaxFlags      = 65536;
        }
    }

    namespace InstanceBridge {
        const uintptr_t UserdataIndex    = REBASE(0x4256F50);
        const uintptr_t UserdataNewIndex = REBASE(0x4258150);
        const uintptr_t Index            = REBASE(0x42550A0);
        const uintptr_t NewIndex         = REBASE(0x42548F0);
        const uintptr_t UserdataNamecall = REBASE(0x4258820);
        const uintptr_t RegisterUserdata = REBASE(0x2634D20);
        const uintptr_t UserdataTag      = REBASE(0x8E8D040);
    }

    namespace Luau {
        const uintptr_t NewUserdataTagged       = REBASE(0x2634170);
        const uintptr_t Throw                   = REBASE(0x26360E0);
        const uintptr_t CallInternal            = REBASE(0x2632230);
        const uintptr_t CallYieldable           = REBASE(0x26361C0);
        const uintptr_t Execute                 = REBASE(0x26862E0);
        const uintptr_t ExecuteSingleStep       = REBASE(0x26791E0);
        const uintptr_t GetTypeName             = REBASE(0x26308F0);
        const uintptr_t GetObjectTypeName       = REBASE(0x26741C0);
        const uintptr_t GetObjectTypeNameString = REBASE(0x2674030);
        const uintptr_t GetLine                 = REBASE(0x266FE90);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(__fastcall*)(int, const char*, ...))Offsets::Print;
    inline auto LuaD_throw = (void(__fastcall*)(lua_State * L, int errcode))Offsets::LuaD_throw;

    inline auto TaskDefer = (int(__fastcall*)(lua_State*))Offsets::TaskDefer;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetTlsPointer = (void*(__fastcall*)(uintptr_t identityData, uint32_t ensure))Offsets::RobloxThread::GetTlsPointer;
    inline auto GetScriptVMState = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetScriptVMState;

    inline auto GetProperty = (uintptr_t(__fastcall*)(uintptr_t, uintptr_t*, uintptr_t*, int))Offsets::RobloxProperty::GetProperty;

    inline auto KTable = reinterpret_cast<uintptr_t*>(Offsets::RobloxProperty::KTable);

    inline auto InternPropertyName = (uintptr_t(__fastcall*)(uintptr_t, const char*))Offsets::RobloxProperty::InternPropertyName;
    inline auto LookupPropertyName = (uintptr_t(__fastcall*)(const char*, size_t))Offsets::RobloxProperty::LookupPropertyName;
    inline auto NameManager = reinterpret_cast<uintptr_t*>(Offsets::RobloxProperty::NameManagerPtr);

    namespace InstanceBridge {
        inline auto UintPtr = (void(__fastcall*)(lua_State*, std::uintptr_t))Offsets::InstanceBridge::Push;
        inline auto Shared  = (void(__fastcall*)(lua_State*, std::shared_ptr<std::uintptr_t*>))Offsets::InstanceBridge::Push;
        inline auto Void    = (void(__fastcall*)(lua_State*, void**))Offsets::InstanceBridge::Push;
        inline auto Void2   = (void(__fastcall*)(lua_State*, void*))Offsets::InstanceBridge::Push;
        inline auto Weak    = (void(__fastcall*)(lua_State*, std::weak_ptr<std::uintptr_t>))Offsets::InstanceBridge::Push;
    }

    inline auto LuaVM_Load  = (int32_t(__fastcall*)(lua_State*, std::string*, const char*, int32_t))Offsets::LuaVMLoad;
    inline auto CastArgs    = (uintptr_t(__fastcall*)(lua_State*, int, void*, bool, int))Offsets::CastArgs;
    inline auto isLegalSendEvent = (bool(__fastcall*)(uintptr_t*, uintptr_t*, uintptr_t))Offsets::IsLegalSendEvent;
    inline auto DisconnectConnection = (void(__fastcall*)(uintptr_t*))Offsets::ConnectionDisconnect;

    namespace Signals {
        inline auto FireProximityPrompt  = (uintptr_t*(__thiscall*)(uintptr_t))Offsets::FireProximityPrompt;
        inline auto FireMouseClick       = (void(__fastcall*)(__int64, float, __int64))Offsets::FireMouseClick;
        inline auto FireRightMouseClick  = (void(__fastcall*)(__int64, float, __int64))Offsets::FireRightMouseClick;
        inline auto FireMouseHoverEnter  = (void(__fastcall*)(__int64, __int64))Offsets::FireMouseHoverEnter;
        inline auto FireMouseHoverLeave  = (void(__fastcall*)(__int64, __int64))Offsets::FireMouseHoverLeave;
        inline auto FireTouchInterest    = (void(__fastcall*)(uintptr_t, uintptr_t, uintptr_t, bool, bool))Offsets::FireTouchInterest;
    }

    inline auto SCResume = (int(__fastcall*)(uintptr_t scriptContext, RBX::debugger_result_t*,
        RBX::LiveThreadRef**, int32_t nRet, bool isError,
        const std::string * errorMessage))Offsets::ScriptContextResume;
}
