#pragma once
#include <cstdint>
#include <Windows.h>

//dumped by phantomteam

struct lua_State;
struct YieldState;
struct YieldingLuaThread;

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1dea8d0);
    const uintptr_t OpcodeLookupTable = REBASE(0x63fb7f0);
    const uintptr_t ScriptContextResume = REBASE(0x1d64240);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1c33f90);

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x18;
         inline constexpr uintptr_t GlobalWind = 0x3c;
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xd0;
         inline constexpr uintptr_t Animator = 0x118;
         inline constexpr uintptr_t IsPlaying = 0xa18;
         inline constexpr uintptr_t Looped = 0xf5;
         inline constexpr uintptr_t Speed = 0xe4;
         inline constexpr uintptr_t TimePosition = 0xe8;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0x868;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xd0;
         inline constexpr uintptr_t Decay = 0xdc;
         inline constexpr uintptr_t Density = 0xe8;
         inline constexpr uintptr_t Glare = 0xec;
         inline constexpr uintptr_t Haze = 0xf0;
         inline constexpr uintptr_t Offset = 0xf4;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0xdc;
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0xf5;
         inline constexpr uintptr_t Color3 = 0x194;
         inline constexpr uintptr_t Locked = 0xf6;
         inline constexpr uintptr_t Massless = 0xf7;
         inline constexpr uintptr_t Primitive = 0x148;
         inline constexpr uintptr_t Reflectance = 0xec;
         inline constexpr uintptr_t Shape = 0x1b1;
         inline constexpr uintptr_t Transparency = 0xf0;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x170;
         inline constexpr uintptr_t Attachment1 = 0x180;
         inline constexpr uintptr_t Brightness = 0x190;
         inline constexpr uintptr_t CurveSize0 = 0x194;
         inline constexpr uintptr_t CurveSize1 = 0x198;
         inline constexpr uintptr_t LightEmission = 0x19c;
         inline constexpr uintptr_t LightInfluence = 0x1a0;
         inline constexpr uintptr_t Texture = 0x150;
         inline constexpr uintptr_t TextureLength = 0x1ac;
         inline constexpr uintptr_t TextureSpeed = 0x1b4;
         inline constexpr uintptr_t Width0 = 0x1b8;
         inline constexpr uintptr_t Width1 = 0x1bc;
         inline constexpr uintptr_t ZOffset = 0x1c0;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t Intensity = 0xd0;
         inline constexpr uintptr_t Size = 0xd4;
         inline constexpr uintptr_t Threshold = 0xd8;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t Size = 0xd0;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x10;
         inline constexpr uintptr_t Size = 0x20;
    }

    namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0xe8;
         inline constexpr uintptr_t CameraType = 0x158;
         inline constexpr uintptr_t FieldOfView = 0x160;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2f0;
         inline constexpr uintptr_t Position = 0x11c;
         inline constexpr uintptr_t Rotation = 0xf8;
         inline constexpr uintptr_t Viewport = 0x2ac;
         inline constexpr uintptr_t ViewportSize = 0x2e8;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xe0;
         inline constexpr uintptr_t BodyPart = 0x160;
         inline constexpr uintptr_t MeshId = 0x110;
         inline constexpr uintptr_t OverlayTextureId = 0x140;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0x100;
         inline constexpr uintptr_t MouseIcon = 0xe0;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x128;
         inline constexpr uintptr_t Template = 0x108;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xdc;
         inline constexpr uintptr_t Contrast = 0xe0;
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t TintColor = 0xd0;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t TonemapperPreset = 0xd0;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x188;
         inline constexpr uintptr_t GameId = 0x190;
         inline constexpr uintptr_t GameLoaded = 0x5f8;
         inline constexpr uintptr_t JobId = 0x138;
         inline constexpr uintptr_t PlaceId = 0x198;
         inline constexpr uintptr_t PlaceVersion = 0x1b4;
         inline constexpr uintptr_t PrimitiveCount = 0x440;
         inline constexpr uintptr_t ScriptContext = 0x3f0;
         inline constexpr uintptr_t ServerIP = 0x5e0;
         inline constexpr uintptr_t ToRenderView1 = 0x1d0;
         inline constexpr uintptr_t ToRenderView2 = 0x8;
         inline constexpr uintptr_t ToRenderView3 = 0x28;
         inline constexpr uintptr_t Workspace = 0x178;
         inline constexpr uintptr_t IsLoaded = 0x3b8;
         inline constexpr uintptr_t GameSessionId = 0x1b8;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t FarIntensity = 0xd0;
         inline constexpr uintptr_t FocusDistance = 0xd4;
         inline constexpr uintptr_t InFocusRadius = 0xd8;
         inline constexpr uintptr_t NearIntensity = 0xdc;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x1d8;
         inline constexpr uintptr_t CursorIcon = 0xe0;
         inline constexpr uintptr_t MaxActivationDistance = 0x100;
         inline constexpr uintptr_t MaxDragAngle = 0x2c0;
         inline constexpr uintptr_t MaxDragTranslation = 0x284;
         inline constexpr uintptr_t MaxForce = 0x2c4;
         inline constexpr uintptr_t MaxTorque = 0x2c8;
         inline constexpr uintptr_t MinDragAngle = 0x2cc;
         inline constexpr uintptr_t MinDragTranslation = 0x290;
         inline constexpr uintptr_t ReferenceInstance = 0x208;
         inline constexpr uintptr_t Responsiveness = 0x2d8;
    }

    namespace FakeDataModel {
         const uintptr_t Pointer = REBASE(0x7c1a148);
         inline constexpr uintptr_t RealDataModel = 0x1d0;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0x110;
         inline constexpr uintptr_t AbsoluteRotation = 0x188;
         inline constexpr uintptr_t AbsoluteSize = 0x118;
    }

    namespace GuiObject {
         inline constexpr uintptr_t BackgroundColor3 = 0x548;
         inline constexpr uintptr_t BackgroundTransparency = 0x554;
         inline constexpr uintptr_t BorderColor3 = 0x554;
         inline constexpr uintptr_t Image = 0x990;
         inline constexpr uintptr_t LayoutOrder = 0x588;
         inline constexpr uintptr_t Position = 0x518;
         inline constexpr uintptr_t RichText = 0xa60;
         inline constexpr uintptr_t Rotation = 0x188;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x4cc;
         inline constexpr uintptr_t Size = 0x538;
         inline constexpr uintptr_t Text = 0xdc0;
         inline constexpr uintptr_t TextColor3 = 0xe70;
         inline constexpr uintptr_t Visible = 0x5b5;
         inline constexpr uintptr_t ZIndex = 0x19b;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1e0;
         inline constexpr uintptr_t AutoRotate = 0x1e1;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1e2;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1e3;
         inline constexpr uintptr_t CameraOffset = 0x140;
         inline constexpr uintptr_t DisplayDistanceType = 0x18c;
         inline constexpr uintptr_t DisplayName = 0xd0;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1e4;
         inline constexpr uintptr_t FloorMaterial = 0x190;
         inline constexpr uintptr_t Health = 0x194;
         inline constexpr uintptr_t HealthDisplayDistance = 0x198;
         inline constexpr uintptr_t HealthDisplayType = 0x19c;
         inline constexpr uintptr_t HipHeight = 0x1a0;
         inline constexpr uintptr_t HumanoidRootPart = 0x480;
         inline constexpr uintptr_t HumanoidState = 0x8a0;
         inline constexpr uintptr_t HumanoidStateID = 0x20;
         inline constexpr uintptr_t IsWalking = 0x91f;
         inline constexpr uintptr_t Jump = 0x1e6;
         inline constexpr uintptr_t JumpHeight = 0x1ac;
         inline constexpr uintptr_t JumpPower = 0x1b0;
         inline constexpr uintptr_t MaxHealth = 0x1b4;
         inline constexpr uintptr_t MaxSlopeAngle = 0x1b8;
         inline constexpr uintptr_t MoveDirection = 0x158;
         inline constexpr uintptr_t MoveToPart = 0x130;
         inline constexpr uintptr_t MoveToPoint = 0x17c;
         inline constexpr uintptr_t NameDisplayDistance = 0x1bc;
         inline constexpr uintptr_t NameOcclusion = 0x1c0;
         inline constexpr uintptr_t PlatformStand = 0x1e8;
         inline constexpr uintptr_t RequiresNeck = 0x1e9;
         inline constexpr uintptr_t RigType = 0x1cc;
         inline constexpr uintptr_t SeatPart = 0x120;
         inline constexpr uintptr_t Sit = 0x1e9;
         inline constexpr uintptr_t TargetPoint = 0x164;
         inline constexpr uintptr_t UseJumpPower = 0x1ec;
         inline constexpr uintptr_t WalkTimer = 0x418;
         inline constexpr uintptr_t Walkspeed = 0x1dc;
         inline constexpr uintptr_t WalkspeedCheck = 0x3c4;
         inline constexpr uintptr_t State = 0x8b0;
    }

    namespace Instance {
         inline constexpr uintptr_t AttributeContainer = 0x48;
         inline constexpr uintptr_t AttributeList = 0x18;
         inline constexpr uintptr_t AttributeToNext = 0x58;
         inline constexpr uintptr_t AttributeToValue = 0x18;
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenStart = 0x78;
         inline constexpr uintptr_t ClassBase = 0xe48;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Name = 0xb0;
         inline constexpr uintptr_t Parent = 0x70;
         inline constexpr uintptr_t This = 0x8;
         inline constexpr uintptr_t Archivable = 0x50;
         inline constexpr uintptr_t UniqueId = 0x1c;
         inline constexpr uintptr_t ReceiveAge = 0x60;
         inline constexpr uintptr_t IsParentLocked = 0x54;
         inline constexpr uintptr_t Guid = 0x1c0;
         namespace VTable {
             inline constexpr uintptr_t GetService = 0x18;
             inline constexpr uintptr_t FindFirstChild = 0x20;
             inline constexpr uintptr_t GetChildren = 0x28;
             inline constexpr uintptr_t Clone = 0x30;
             inline constexpr uintptr_t Destroy = 0x38;
             inline constexpr uintptr_t FireClickDetector = 0x40;
         }
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xd8;
         inline constexpr uintptr_t Brightness = 0x120;
         inline constexpr uintptr_t ClockTime = 0x1b8;
         inline constexpr uintptr_t ColorShift_Bottom = 0xf0;
         inline constexpr uintptr_t ColorShift_Top = 0xe4;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x124;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x128;
         inline constexpr uintptr_t ExposureCompensation = 0x12c;
         inline constexpr uintptr_t FogColor = 0xfc;
         inline constexpr uintptr_t FogEnd = 0x134;
         inline constexpr uintptr_t FogStart = 0x138;
         inline constexpr uintptr_t GeographicLatitude = 0x190;
         inline constexpr uintptr_t GlobalShadows = 0x148;
         inline constexpr uintptr_t GradientBottom = 0x194;
         inline constexpr uintptr_t GradientTop = 0x150;
         inline constexpr uintptr_t LightColor = 0x15c;
         inline constexpr uintptr_t LightDirection = 0x168;
         inline constexpr uintptr_t MoonPosition = 0x184;
         inline constexpr uintptr_t OutdoorAmbient = 0x108;
         inline constexpr uintptr_t Sky = 0x1d8;
         inline constexpr uintptr_t Source = 0x174;
         inline constexpr uintptr_t SunPosition = 0x178;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xe8;
         inline constexpr uintptr_t Hash = 0x1b8;
    }

    namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;
         inline constexpr uintptr_t Basalt = 0x27;
         inline constexpr uintptr_t Brick = 0xf;
         inline constexpr uintptr_t Cobblestone = 0x33;
         inline constexpr uintptr_t Concrete = 0xc;
         inline constexpr uintptr_t CrackedLava = 0x2d;
         inline constexpr uintptr_t Glacier = 0x1b;
         inline constexpr uintptr_t Grass = 0x6;
         inline constexpr uintptr_t Ground = 0x2a;
         inline constexpr uintptr_t Ice = 0x36;
         inline constexpr uintptr_t LeafyGrass = 0x39;
         inline constexpr uintptr_t Limestone = 0x3f;
         inline constexpr uintptr_t Mud = 0x24;
         inline constexpr uintptr_t Pavement = 0x42;
         inline constexpr uintptr_t Rock = 0x18;
         inline constexpr uintptr_t Salt = 0x3c;
         inline constexpr uintptr_t Sand = 0x12;
         inline constexpr uintptr_t Sandstone = 0x21;
         inline constexpr uintptr_t Slate = 0x9;
         inline constexpr uintptr_t Snow = 0x1e;
         inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MeshContentProvider {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t Cache = 0xe8;
         inline constexpr uintptr_t LRUCache = 0x20;
         inline constexpr uintptr_t MeshData = 0x40;
         inline constexpr uintptr_t ToMeshData = 0x40;
    }

    namespace MeshData {
         inline constexpr uintptr_t FaceEnd = 0x38;
         inline constexpr uintptr_t FaceStart = 0x30;
         inline constexpr uintptr_t VertexEnd = 0x8;
         inline constexpr uintptr_t VertexStart = 0x0;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x2f8;
         inline constexpr uintptr_t Texture = 0x328;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0x108;
         inline constexpr uintptr_t AnimationId = 0xd0;
         inline constexpr uintptr_t StringLength = 0x10;
         inline constexpr uintptr_t Value = 0xd0;
         const uintptr_t FireTouchInterest = REBASE(0x83c610);
         const uintptr_t pushInstance = REBASE(0x0);
         const uintptr_t luaf_newproto = REBASE(0x43993d0);
         const uintptr_t IdentityPtr = REBASE(0x62d1088);
         const uintptr_t EnableLoadModule = REBASE(0x75200a8);
         const uintptr_t LockViolationInstanceCrash = REBASE(0x7517558);
         const uintptr_t CapabilitiesBypass = REBASE(0x75200a8);
    }

    namespace Network {
         inline constexpr uintptr_t NetworkClient = 0x10;
         inline constexpr uintptr_t NetworkServer = 0x18;
         inline constexpr uintptr_t ServerReplicator = 0x20;
         inline constexpr uintptr_t ClientReplicator = 0x28;
         inline constexpr uintptr_t RakPeer = 0x8;
         inline constexpr uintptr_t RakNetGUID = 0x10;
         inline constexpr uintptr_t PeerId = 0x18;
         inline constexpr uintptr_t RemoteEvent = 0x30;
         inline constexpr uintptr_t RemoteFunction = 0x38;
         inline constexpr uintptr_t UnreliableRemoteEvent = 0x40;
    }

    namespace Player {
         inline constexpr uintptr_t Character = 0x128;
         inline constexpr uintptr_t UserId = 0x130;
         inline constexpr uintptr_t Name = 0x138;
         inline constexpr uintptr_t Team = 0x140;
         inline constexpr uintptr_t Leaderstats = 0x148;
         inline constexpr uintptr_t PlayerGui = 0x150;
         inline constexpr uintptr_t Backpack = 0x158;
         inline constexpr uintptr_t Chat = 0x160;
         inline constexpr uintptr_t LoadCharacter = 0x168;
         inline constexpr uintptr_t AccountAge = 0x170;
         inline constexpr uintptr_t MembershipType = 0x178;
         inline constexpr uintptr_t ConnectionId = 0x180;
         inline constexpr uintptr_t Ping = 0x188;
         inline constexpr uintptr_t CharacterAppearance = 0x190;
         inline constexpr uintptr_t Neutral = 0x198;
    }

    namespace Players {
         inline constexpr uintptr_t LocalPlayer = 0x110;
         inline constexpr uintptr_t MaxPlayers = 0x118;
         inline constexpr uintptr_t PreferredPlayers = 0x120;
         inline constexpr uintptr_t CharacterAutoLoads = 0x128;
         inline constexpr uintptr_t PlayersList = 0x130;
         inline constexpr uintptr_t NumPlayers = 0x138;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x110;
         inline constexpr uintptr_t DistributedGameTime = 0x118;
         inline constexpr uintptr_t FallingParts = 0x120;
         inline constexpr uintptr_t Gravity = 0x128;
         inline constexpr uintptr_t GameId = 0x130;
         inline constexpr uintptr_t PlaceId = 0x138;
         inline constexpr uintptr_t SpawnLocation = 0x140;
         inline constexpr uintptr_t Terrain = 0x148;
         inline constexpr uintptr_t ModelList = 0x150;
         inline constexpr uintptr_t PartList = 0x158;
         inline constexpr uintptr_t StreamRadius = 0x160;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t Jobs = 0x10;
         inline constexpr uintptr_t JobCount = 0x18;
         inline constexpr uintptr_t SleepTime = 0x20;
         inline constexpr uintptr_t FPS = 0x28;
         inline constexpr uintptr_t Heartbeat = 0x30;
         inline constexpr uintptr_t Render = 0x38;
         inline constexpr uintptr_t Physics = 0x40;
         inline constexpr uintptr_t Network = 0x48;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t VM = 0x10;
         inline constexpr uintptr_t State = 0x18;
         inline constexpr uintptr_t Scripts = 0x20;
         inline constexpr uintptr_t ScriptCount = 0x28;
         inline constexpr uintptr_t Identity = 0x30;
         inline constexpr uintptr_t Capabilities = 0x38;
         inline constexpr uintptr_t Scheduler = 0x40;
         inline constexpr uintptr_t TopState = 0x48;
         inline constexpr uintptr_t Registry = 0x50;
    }

    namespace ExtraSpace {
         inline constexpr uintptr_t Identity = 0x18;
         inline constexpr uintptr_t Capabilities = 0x30;
         inline constexpr uintptr_t RequireBypass = 0x824;
         inline constexpr uintptr_t IsCoreScript = 0x180;
         inline constexpr uintptr_t Sandbox = 0x188;
         inline constexpr uintptr_t Whitelist = 0x190;
    }

    namespace Globals {
         inline constexpr uintptr_t KTable = 0x10;
         inline constexpr uintptr_t Table = 0x18;
         inline constexpr uintptr_t Metatable = 0x20;
         inline constexpr uintptr_t Registry = 0x28;
         inline constexpr uintptr_t MainThread = 0x30;
         inline constexpr uintptr_t StringTable = 0x38;
         inline constexpr uintptr_t UpvalueTable = 0x40;
    }

    namespace TextLabel {
         inline constexpr uintptr_t Text = 0xdc0;
         inline constexpr uintptr_t TextColor3 = 0xe70;
         inline constexpr uintptr_t TextSize = 0xe78;
         inline constexpr uintptr_t Font = 0xe80;
         inline constexpr uintptr_t TextScaled = 0xe88;
         inline constexpr uintptr_t TextWrapped = 0xe89;
         inline constexpr uintptr_t TextStrokeColor3 = 0xe90;
         inline constexpr uintptr_t TextStrokeTransparency = 0xe98;
         inline constexpr uintptr_t TextTransparency = 0xea0;
         inline constexpr uintptr_t TextTruncate = 0xea8;
         inline constexpr uintptr_t TextXAlignment = 0xeb0;
         inline constexpr uintptr_t TextYAlignment = 0xeb1;
    }

    namespace TextButton {
         inline constexpr uintptr_t Text = 0xdc0;
         inline constexpr uintptr_t TextColor3 = 0xe70;
         inline constexpr uintptr_t TextSize = 0xe78;
         inline constexpr uintptr_t Font = 0xe80;
         inline constexpr uintptr_t AutoButtonColor = 0xe88;
         inline constexpr uintptr_t Modal = 0xe89;
         inline constexpr uintptr_t HoverColor3 = 0xe90;
         inline constexpr uintptr_t PressColor3 = 0xe98;
    }

    namespace TextBox {
         inline constexpr uintptr_t Text = 0xdc0;
         inline constexpr uintptr_t TextColor3 = 0xe70;
         inline constexpr uintptr_t TextSize = 0xe78;
         inline constexpr uintptr_t Font = 0xe80;
         inline constexpr uintptr_t PlaceholderText = 0xe88;
         inline constexpr uintptr_t PlaceholderColor3 = 0xe90;
         inline constexpr uintptr_t ClearTextOnFocus = 0xe98;
         inline constexpr uintptr_t MaxVisibleGraphemes = 0xea0;
         inline constexpr uintptr_t ShowNativeInput = 0xea8;
    }

    namespace ImageLabel {
         inline constexpr uintptr_t Image = 0x990;
         inline constexpr uintptr_t ImageColor3 = 0x998;
         inline constexpr uintptr_t ImageRectOffset = 0x9a0;
         inline constexpr uintptr_t ImageRectSize = 0x9a8;
         inline constexpr uintptr_t ImageTransparency = 0x9b0;
         inline constexpr uintptr_t ScaleType = 0x9b8;
         inline constexpr uintptr_t TileSize = 0x9c0;
    }

    namespace ImageButton {
         inline constexpr uintptr_t Image = 0x990;
         inline constexpr uintptr_t ImageColor3 = 0x998;
         inline constexpr uintptr_t HoverImage = 0x9a0;
         inline constexpr uintptr_t PressImage = 0x9a8;
         inline constexpr uintptr_t AutoButtonColor = 0x9b0;
    }

    namespace Frame {
         inline constexpr uintptr_t Style = 0x590;
         inline constexpr uintptr_t Active = 0x591;
         inline constexpr uintptr_t BorderSizePixel = 0x592;
         inline constexpr uintptr_t BackgroundColor3 = 0x548;
         inline constexpr uintptr_t BackgroundTransparency = 0x554;
    }

    namespace ScrollingFrame {
         inline constexpr uintptr_t ScrollBarThickness = 0x590;
         inline constexpr uintptr_t ScrollBarImage = 0x598;
         inline constexpr uintptr_t CanvasPosition = 0x5a0;
         inline constexpr uintptr_t CanvasSize = 0x5a8;
         inline constexpr uintptr_t ScrollingDirection = 0x5b0;
         inline constexpr uintptr_t ElasticBehavior = 0x5b1;
    }

    namespace UIListLayout {
         inline constexpr uintptr_t Padding = 0x590;
         inline constexpr uintptr_t FillDirection = 0x598;
         inline constexpr uintptr_t HorizontalAlignment = 0x599;
         inline constexpr uintptr_t VerticalAlignment = 0x59a;
         inline constexpr uintptr_t SortOrder = 0x59b;
    }

    namespace UIGridLayout {
         inline constexpr uintptr_t CellSize = 0x590;
         inline constexpr uintptr_t CellPadding = 0x598;
         inline constexpr uintptr_t StartOffset = 0x5a0;
         inline constexpr uintptr_t FillDirection = 0x5a8;
         inline constexpr uintptr_t FillDirectionMaxCells = 0x5a9;
    }

    namespace UITableLayout {
         inline constexpr uintptr_t MajorAxisCells = 0x590;
         inline constexpr uintptr_t MajorAxisSizing = 0x598;
         inline constexpr uintptr_t MinorAxisSizing = 0x599;
    }

    namespace UICorner {
         inline constexpr uintptr_t CornerRadius = 0x590;
    }

    namespace UIStroke {
         inline constexpr uintptr_t Color = 0x590;
         inline constexpr uintptr_t Thickness = 0x598;
         inline constexpr uintptr_t Transparency = 0x59a;
         inline constexpr uintptr_t Join = 0x59b;
    }

    namespace UIGradient {
         inline constexpr uintptr_t Color = 0x590;
         inline constexpr uintptr_t Offset = 0x598;
         inline constexpr uintptr_t Rotation = 0x5a0;
         inline constexpr uintptr_t Enabled = 0x5a8;
    }

    namespace UIScale {
         inline constexpr uintptr_t Scale = 0x590;
    }

    namespace UIPadding {
         inline constexpr uintptr_t PaddingTop = 0x590;
         inline constexpr uintptr_t PaddingBottom = 0x598;
         inline constexpr uintptr_t PaddingLeft = 0x5a0;
         inline constexpr uintptr_t PaddingRight = 0x5a8;
    }

    namespace RemoteEvent {
         inline constexpr uintptr_t Name = 0xb0;
         inline constexpr uintptr_t Parent = 0x70;
         inline constexpr uintptr_t OnClientEvent = 0xc0;
         inline constexpr uintptr_t OnServerEvent = 0xc8;
    }

    namespace RemoteFunction {
         inline constexpr uintptr_t Name = 0xb0;
         inline constexpr uintptr_t Parent = 0x70;
         inline constexpr uintptr_t OnClientInvoke = 0xc0;
         inline constexpr uintptr_t OnServerInvoke = 0xc8;
    }

    namespace Sound {
         inline constexpr uintptr_t SoundId = 0xd0;
         inline constexpr uintptr_t Volume = 0xd8;
         inline constexpr uintptr_t Pitch = 0xdc;
         inline constexpr uintptr_t Looped = 0xe0;
         inline constexpr uintptr_t Playing = 0xe1;
         inline constexpr uintptr_t TimePosition = 0xe8;
         inline constexpr uintptr_t Duration = 0xf0;
         inline constexpr uintptr_t IsPlaying = 0xf8;
    }

    namespace SoundGroup {
         inline constexpr uintptr_t Volume = 0xd0;
         inline constexpr uintptr_t Reverb = 0xd8;
         inline constexpr uintptr_t DistanceFactor = 0xdc;
         inline constexpr uintptr_t DopplerScale = 0xe0;
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Rate = 0xd0;
         inline constexpr uintptr_t Lifetime = 0xd8;
         inline constexpr uintptr_t Speed = 0xdc;
         inline constexpr uintptr_t SpreadAngle = 0xe0;
         inline constexpr uintptr_t Texture = 0xe8;
         inline constexpr uintptr_t Size = 0xf0;
         inline constexpr uintptr_t Color = 0xf8;
         inline constexpr uintptr_t Enabled = 0x100;
    }

    namespace Trail {
         inline constexpr uintptr_t Attachment0 = 0x170;
         inline constexpr uintptr_t Attachment1 = 0x180;
         inline constexpr uintptr_t Lifetime = 0x190;
         inline constexpr uintptr_t MinLength = 0x198;
         inline constexpr uintptr_t Texture = 0x1a0;
         inline constexpr uintptr_t TextureLength = 0x1a8;
         inline constexpr uintptr_t TextureMode = 0x1b0;
         inline constexpr uintptr_t LightEmission = 0x1b8;
         inline constexpr uintptr_t LightInfluence = 0x1c0;
         inline constexpr uintptr_t FaceCamera = 0x1c8;
    }

    namespace Fire {
         inline constexpr uintptr_t Color = 0xd0;
         inline constexpr uintptr_t SecondaryColor = 0xd8;
         inline constexpr uintptr_t Size = 0xe0;
         inline constexpr uintptr_t Heat = 0xe8;
         inline constexpr uintptr_t Enabled = 0xf0;
    }

    namespace Smoke {
         inline constexpr uintptr_t Color = 0xd0;
         inline constexpr uintptr_t Size = 0xd8;
         inline constexpr uintptr_t Opacity = 0xe0;
         inline constexpr uintptr_t RiseVelocity = 0xe8;
         inline constexpr uintptr_t Enabled = 0xf0;
    }

    namespace SpotLight {
         inline constexpr uintptr_t Angle = 0xd0;
         inline constexpr uintptr_t Brightness = 0xd8;
         inline constexpr uintptr_t Color = 0xe0;
         inline constexpr uintptr_t Face = 0xe8;
         inline constexpr uintptr_t Range = 0xf0;
         inline constexpr uintptr_t Shadows = 0xf8;
    }

    namespace PointLight {
         inline constexpr uintptr_t Brightness = 0xd0;
         inline constexpr uintptr_t Color = 0xd8;
         inline constexpr uintptr_t Range = 0xe0;
         inline constexpr uintptr_t Shadows = 0xe8;
    }

    namespace SurfaceLight {
         inline constexpr uintptr_t Brightness = 0xd0;
         inline constexpr uintptr_t Color = 0xd8;
         inline constexpr uintptr_t Range = 0xe0;
         inline constexpr uintptr_t Face = 0xe8;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x110;
         inline constexpr uintptr_t Part1 = 0x118;
         inline constexpr uintptr_t C0 = 0x120;
         inline constexpr uintptr_t C1 = 0x130;
    }

    namespace Motor6D {
         inline constexpr uintptr_t Part0 = 0x110;
         inline constexpr uintptr_t Part1 = 0x118;
         inline constexpr uintptr_t C0 = 0x120;
         inline constexpr uintptr_t C1 = 0x130;
         inline constexpr uintptr_t MaxVelocity = 0x140;
         inline constexpr uintptr_t CurrentAngle = 0x148;
         inline constexpr uintptr_t DesiredAngle = 0x150;
    }

    namespace Constraint {
         inline constexpr uintptr_t Enabled = 0xd0;
         inline constexpr uintptr_t LimitsEnabled = 0xd8;
         inline constexpr uintptr_t Visible = 0xe0;
    }

    namespace BallSocketConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t LimitsEnabled = 0x120;
         inline constexpr uintptr_t Radius = 0x128;
    }

    namespace HingeConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t LimitsEnabled = 0x120;
         inline constexpr uintptr_t AngularSpeed = 0x128;
         inline constexpr uintptr_t AngularVelocity = 0x130;
         inline constexpr uintptr_t TargetAngle = 0x138;
    }

    namespace PrismaticConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t LimitsEnabled = 0x120;
         inline constexpr uintptr_t Velocity = 0x128;
         inline constexpr uintptr_t CurrentPosition = 0x130;
         inline constexpr uintptr_t TargetPosition = 0x138;
    }

    namespace RopeConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t Length = 0x120;
         inline constexpr uintptr_t Restitution = 0x128;
         inline constexpr uintptr_t Thickness = 0x130;
    }

    namespace SpringConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t Stiffness = 0x120;
         inline constexpr uintptr_t Damping = 0x128;
         inline constexpr uintptr_t Length = 0x130;
         inline constexpr uintptr_t FreeLength = 0x138;
    }

    namespace UniversalConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t LimitsEnabled = 0x120;
    }

    namespace CylindricalConstraint {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t LimitsEnabled = 0x120;
    }

    namespace AlignOrientation {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t Mode = 0x120;
         inline constexpr uintptr_t CFrame = 0x128;
         inline constexpr uintptr_t MaxAngularVelocity = 0x138;
         inline constexpr uintptr_t Responsiveness = 0x140;
         inline constexpr uintptr_t Rigid = 0x148;
    }

    namespace AlignPosition {
         inline constexpr uintptr_t Attachment0 = 0x110;
         inline constexpr uintptr_t Attachment1 = 0x118;
         inline constexpr uintptr_t Mode = 0x120;
         inline constexpr uintptr_t Position = 0x128;
         inline constexpr uintptr_t MaxVelocity = 0x130;
         inline constexpr uintptr_t Responsiveness = 0x138;
         inline constexpr uintptr_t Rigid = 0x140;
    }

    namespace BodyVelocity {
         inline constexpr uintptr_t Velocity = 0x110;
         inline constexpr uintptr_t MaxForce = 0x120;
         inline constexpr uintptr_t P = 0x130;
    }

    namespace BodyAngularVelocity {
         inline constexpr uintptr_t AngularVelocity = 0x110;
         inline constexpr uintptr_t MaxTorque = 0x120;
         inline constexpr uintptr_t P = 0x130;
    }

    namespace BodyPosition {
         inline constexpr uintptr_t Position = 0x110;
         inline constexpr uintptr_t MaxForce = 0x120;
         inline constexpr uintptr_t P = 0x130;
         inline constexpr uintptr_t D = 0x138;
    }

    namespace BodyGyro {
         inline constexpr uintptr_t CFrame = 0x110;
         inline constexpr uintptr_t MaxTorque = 0x120;
         inline constexpr uintptr_t P = 0x130;
         inline constexpr uintptr_t D = 0x138;
    }

    namespace BodyForce {
         inline constexpr uintptr_t Force = 0x110;
    }

    namespace BodyThrust {
         inline constexpr uintptr_t Force = 0x110;
         inline constexpr uintptr_t Location = 0x120;
    }

    namespace BodyAngularVelocity {
         inline constexpr uintptr_t AngularVelocity = 0x110;
         inline constexpr uintptr_t MaxTorque = 0x120;
    }

    namespace Torque {
         inline constexpr uintptr_t Torque = 0x110;
    }

    namespace VectorForce {
         inline constexpr uintptr_t Force = 0x110;
         inline constexpr uintptr_t ApplyAtCenterOfMass = 0x120;
    }

    namespace Luau {
         inline constexpr uintptr_t ExtraSpace = 0x48;
         inline constexpr uintptr_t Top = 0x8;
         inline constexpr uintptr_t Base = 0x10;
         inline constexpr uintptr_t GlobalState = 0x18;
         inline constexpr uintptr_t CallInfo = 0x20;
         inline constexpr uintptr_t StackEnd = 0x28;
         inline constexpr uintptr_t Identity = 0x18;
         inline constexpr uintptr_t Capabilities = 0x30;
         inline constexpr uintptr_t Next = 0x18;
         inline constexpr uintptr_t Prev = 0x20;
         inline constexpr uintptr_t LClosure_Proto = 0x20;
         inline constexpr uintptr_t LClosure_Upvals = 0x28;
         inline constexpr uintptr_t CClosure_Func = 0x18;
         inline constexpr uintptr_t Proto_Code = 0x10;
         inline constexpr uintptr_t Proto_K = 0x18;
         inline constexpr uintptr_t Proto_P = 0x20;
         inline constexpr uintptr_t Proto_SizeCode = 0x48;
         inline constexpr uintptr_t Proto_NumParams = 0x4c;
         inline constexpr uintptr_t Proto_MaxStackSize = 0x4d;
         inline constexpr uintptr_t Proto_IsVarArg = 0x4e;
         inline constexpr uintptr_t Table_Array = 0x10;
         inline constexpr uintptr_t Table_Node = 0x18;
         inline constexpr uintptr_t Table_LSizenode = 0x20;
         inline constexpr uintptr_t Table_Metatable = 0x28;
         inline constexpr uintptr_t TValue_Value = 0x0;
         inline constexpr uintptr_t TValue_Tag = 0x8;
         inline constexpr uintptr_t GlobalState_Registry = 0x8;
         inline constexpr uintptr_t GlobalState_MainThread = 0x10;
         inline constexpr uintptr_t GlobalState_TMName = 0x20;
         inline constexpr uintptr_t GlobalState_Strt = 0x30;
         namespace TValueTags {
             inline constexpr int Nil = 0;
             inline constexpr int Boolean = 1;
             inline constexpr int LightUserdata = 2;
             inline constexpr int Number = 3;
             inline constexpr int Vector = 4;
             inline constexpr int String = 5;
             inline constexpr int Table = 6;
             inline constexpr int LClosure = 7;
             inline constexpr int CClosure = 8;
             inline constexpr int Userdata = 9;
             inline constexpr int Thread = 10;
         }
    }

    namespace FLog {
         
         
         inline constexpr uintptr_t Value = 0x8;
    }

    namespace SystemAddress {
         inline constexpr uintptr_t BinaryAddress = 0x0;
         inline constexpr uintptr_t Port = 0x4;
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x278;
         inline constexpr uintptr_t Scale = 0x164;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xe8;
         inline constexpr uintptr_t Hash = 0x160;
         inline constexpr uintptr_t IsCoreScript = 0x0;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0x100;
         inline constexpr uintptr_t InputObject2 = 0x110;
         inline constexpr uintptr_t MousePosition = 0xec;
         const uintptr_t SensitivityPointer = REBASE(0x7cb9ad0);
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1f0;
         inline constexpr uintptr_t Brightness = 0x22c;
         inline constexpr uintptr_t Drag = 0x230;
         inline constexpr uintptr_t Lifetime = 0x204;
         inline constexpr uintptr_t LightEmission = 0x248;
         inline constexpr uintptr_t LightInfluence = 0x24c;
         inline constexpr uintptr_t Rate = 0x258;
         inline constexpr uintptr_t RotSpeed = 0x20c;
         inline constexpr uintptr_t Rotation = 0x214;
         inline constexpr uintptr_t Speed = 0x21c;
         inline constexpr uintptr_t SpreadAngle = 0x224;
         inline constexpr uintptr_t Texture = 0x1d0;
         inline constexpr uintptr_t TimeScale = 0x26c;
         inline constexpr uintptr_t VelocityInheritance = 0x270;
         inline constexpr uintptr_t ZOffset = 0x274;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x31c;
         inline constexpr uintptr_t CameraMode = 0x328;
         inline constexpr uintptr_t DisplayName = 0x130;
         inline constexpr uintptr_t HealthDisplayDistance = 0x348;
         inline constexpr uintptr_t LocalPlayer = 0x130;
         inline constexpr uintptr_t LocaleId = 0x110;
         inline constexpr uintptr_t MaxZoomDistance = 0x320;
         inline constexpr uintptr_t MinZoomDistance = 0x324;
         inline constexpr uintptr_t ModelInstance = 0x398;
         inline constexpr uintptr_t Mouse = 0x1168;
         inline constexpr uintptr_t NameDisplayDistance = 0x358;
         inline constexpr uintptr_t Team = 0x2a0;
         inline constexpr uintptr_t TeamColor = 0x364;
         inline constexpr uintptr_t UserId = 0x2c8;
         inline constexpr uintptr_t Character = 0x318;
         inline constexpr uintptr_t Backpack = 0x320;
         inline constexpr uintptr_t PlayerGui = 0x328;
         inline constexpr uintptr_t PlayerScripts = 0x330;
    }

    namespace PlayerConfigurer {
         const uintptr_t Pointer = REBASE(0x7bee8e8);
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xe0;
         inline constexpr uintptr_t Workspace = 0x168;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xfc;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xf0;
         inline constexpr uintptr_t Flags = 0x1ae;
         inline constexpr uintptr_t Material = 0x0;
         inline constexpr uintptr_t Owner = 0x1f8;
         inline constexpr uintptr_t Position = 0xe4;
         inline constexpr uintptr_t Rotation = 0xc0;
         inline constexpr uintptr_t Size = 0x1b0;
         inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0xc8;
         inline constexpr uintptr_t Enabled = 0x14e;
         inline constexpr uintptr_t GamepadKeyCode = 0x134;
         inline constexpr uintptr_t HoldDuration = 0x138;
         inline constexpr uintptr_t KeyCode = 0x13c;
         inline constexpr uintptr_t MaxActivationDistance = 0x140;
         inline constexpr uintptr_t ObjectText = 0xe8;
         inline constexpr uintptr_t RequiresLineOfSight = 0x14f;
    }

    namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x38;
         inline constexpr uintptr_t RealDataModel = 0x1c0;
         inline constexpr uintptr_t RenderView = 0x1d0;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x8;
         inline constexpr uintptr_t LightingValid = 0x148;
         inline constexpr uintptr_t SkyValid = 0x28d;
         inline constexpr uintptr_t VisualEngine = 0x10;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xb4;
         inline constexpr uintptr_t HeartbeatTask = 0x138;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xe8;
         inline constexpr uintptr_t Hash = 0x1b8;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x0;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x220;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x25c;
         inline constexpr uintptr_t MoonTextureId = 0xe0;
         inline constexpr uintptr_t SkyboxBk = 0x110;
         inline constexpr uintptr_t SkyboxDn = 0x140;
         inline constexpr uintptr_t SkyboxFt = 0x170;
         inline constexpr uintptr_t SkyboxLf = 0x1a0;
         inline constexpr uintptr_t SkyboxOrientation = 0x250;
         inline constexpr uintptr_t SkyboxRt = 0x1d0;
         inline constexpr uintptr_t SkyboxUp = 0x200;
         inline constexpr uintptr_t StarCount = 0x260;
         inline constexpr uintptr_t SunAngularSize = 0x254;
         inline constexpr uintptr_t SunTextureId = 0x230;
    }

    namespace Sound {
         inline constexpr uintptr_t Looped = 0x151;
         inline constexpr uintptr_t PlaybackSpeed = 0x130;
         inline constexpr uintptr_t Playing = 0x154;
         inline constexpr uintptr_t RollOffMaxDistance = 0x134;
         inline constexpr uintptr_t RollOffMinDistance = 0x138;
         inline constexpr uintptr_t SoundGroup = 0x100;
         inline constexpr uintptr_t SoundId = 0xe0;
         inline constexpr uintptr_t Volume = 0x144;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x45;
         inline constexpr uintptr_t Enabled = 0x1f9;
         inline constexpr uintptr_t ForcefieldDuration = 0x1f0;
         inline constexpr uintptr_t Neutral = 0x1fa;
         inline constexpr uintptr_t TeamColor = 0x1f4;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0x108;
         inline constexpr uintptr_t Scale = 0xdc;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0xc8;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t Intensity = 0xd0;
         inline constexpr uintptr_t Spread = 0xd4;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x2a0;
         inline constexpr uintptr_t Color = 0x288;
         inline constexpr uintptr_t ColorMap = 0xe0;
         inline constexpr uintptr_t EmissiveMaskContent = 0x110;
         inline constexpr uintptr_t EmissiveStrength = 0x2a4;
         inline constexpr uintptr_t EmissiveTint = 0x294;
         inline constexpr uintptr_t MetalnessMap = 0x140;
         inline constexpr uintptr_t NormalMap = 0x170;
         inline constexpr uintptr_t RoughnessMap = 0x1a0;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t MaxFPS = 0xb0;
         const uintptr_t Pointer = REBASE(0x7cf5400);
         inline constexpr uintptr_t TaskSchedulerTargetFps = 0x118;
         inline constexpr uintptr_t RenderJob = 0x10;
         inline constexpr uintptr_t PhysicsJob = 0x18;
         inline constexpr uintptr_t HeartbeatJob = 0x20;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xd0;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1f8;
         inline constexpr uintptr_t MaterialColors = 0x2a8;
         inline constexpr uintptr_t WaterColor = 0x1e8;
         inline constexpr uintptr_t WaterReflectance = 0x200;
         inline constexpr uintptr_t WaterTransparency = 0x204;
         inline constexpr uintptr_t WaterWaveSize = 0x208;
         inline constexpr uintptr_t WaterWaveSpeed = 0x20c;
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x198;
         inline constexpr uintptr_t Texture_Texture = 0x198;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4c8;
         inline constexpr uintptr_t Enabled = 0x4c9;
         inline constexpr uintptr_t Grip = 0x4bc;
         inline constexpr uintptr_t ManualActivationOnly = 0x4ca;
         inline constexpr uintptr_t RequiresHandle = 0x4cb;
         inline constexpr uintptr_t TextureId = 0x370;
         inline constexpr uintptr_t Tooltip = 0x478;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x2f0;
    }

    namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x290;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x238;
         inline constexpr uintptr_t SteerFloat = 0x240;
         inline constexpr uintptr_t ThrottleFloat = 0x248;
         inline constexpr uintptr_t Torque = 0x24c;
         inline constexpr uintptr_t TurnSpeed = 0x250;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xa90;
         inline constexpr uintptr_t FakeDataModel = 0xa70;
         const uintptr_t Pointer = REBASE(0x77c6670);
         inline constexpr uintptr_t RenderView = 0xb70;
         inline constexpr uintptr_t ViewMatrix = 0x130;
         inline constexpr uintptr_t ProjectionMatrix = 0x170;
         inline constexpr uintptr_t ViewportWidth = 0x2ac;
         inline constexpr uintptr_t ViewportHeight = 0x2b0;
         inline constexpr uintptr_t FarPlane = 0x2c0;
         inline constexpr uintptr_t NearPlane = 0x2bc;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x130;
         inline constexpr uintptr_t Part1 = 0x140;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0xd0;
         inline constexpr uintptr_t Part1 = 0xe0;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x40;
         inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x490;
         inline constexpr uintptr_t DistributedGameTime = 0x4b0;
         inline constexpr uintptr_t ReadOnlyGravity = 0x9b8;
         inline constexpr uintptr_t World = 0x408;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x218;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x208;
         inline constexpr uintptr_t Gravity = 0x210;
         inline constexpr uintptr_t Primitives = 0x280;
         inline constexpr uintptr_t worldStepsPerSec = 0x6b8;
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
