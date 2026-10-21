#pragma once
#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-9ac8595712b447a7";

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x18;
         inline constexpr uintptr_t GlobalWind = 0x3c;
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xa0;
         inline constexpr uintptr_t Animator = 0xf8;
         inline constexpr uintptr_t IsPlaying = 0xa10;
         inline constexpr uintptr_t Looped = 0xcd;
         inline constexpr uintptr_t Speed = 0xbc;
         inline constexpr uintptr_t TimePosition = 0xc0;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0x900;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xa0;
         inline constexpr uintptr_t Decay = 0xac;
         inline constexpr uintptr_t Density = 0xb8;
         inline constexpr uintptr_t Glare = 0xbc;
         inline constexpr uintptr_t Haze = 0xc0;
         inline constexpr uintptr_t Offset = 0xc4;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0xac;
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0x120;
         inline constexpr uintptr_t Color3 = 0x12;
         inline constexpr uintptr_t Locked = 0x121;
         inline constexpr uintptr_t Massless = 0x122;
         inline constexpr uintptr_t Primitive = 0x178;
         inline constexpr uintptr_t Reflectance = 0xf4;
         inline constexpr uintptr_t Shape = 0x1a0;
         inline constexpr uintptr_t Transparency = 0x118;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x148;
         inline constexpr uintptr_t Attachment1 = 0x158;
         inline constexpr uintptr_t Brightness = 0x168;
         inline constexpr uintptr_t CurveSize0 = 0x16c;
         inline constexpr uintptr_t CurveSize1 = 0x170;
         inline constexpr uintptr_t LightEmission = 0x174;
         inline constexpr uintptr_t LightInfluence = 0x178;
         inline constexpr uintptr_t Texture = 0x128;
         inline constexpr uintptr_t TextureLength = 0x184;
         inline constexpr uintptr_t TextureSpeed = 0x18c;
         inline constexpr uintptr_t Width0 = 0x190;
         inline constexpr uintptr_t Width1 = 0x194;
         inline constexpr uintptr_t ZOffset = 0x198;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0x98;
         inline constexpr uintptr_t Intensity = 0xa0;
         inline constexpr uintptr_t Size = 0xa4;
         inline constexpr uintptr_t Threshold = 0xa8;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0x98;
         inline constexpr uintptr_t Size = 0xa0;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x10;
         inline constexpr uintptr_t Size = 0x28;
    }

    namespace CachedItem {
         inline constexpr uintptr_t FileMeshData = 0x40;
    }

    namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0xb0;
         inline constexpr uintptr_t CameraType = 0x120;
         inline constexpr uintptr_t FieldOfView = 0x128;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2cc;
         inline constexpr uintptr_t Position = 0xe4;
         inline constexpr uintptr_t Rotation = 0xc0;
         inline constexpr uintptr_t Viewport = 0x284;
         inline constexpr uintptr_t ViewportSize = 0x2c4;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xb0;
         inline constexpr uintptr_t BodyPart = 0x130;
         inline constexpr uintptr_t MeshId = 0xe0;
         inline constexpr uintptr_t OverlayTextureId = 0x110;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0xd0;
         inline constexpr uintptr_t MouseIcon = 0xb0;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x108;
         inline constexpr uintptr_t Template = 0xe8;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xac;
         inline constexpr uintptr_t Contrast = 0xb0;
         inline constexpr uintptr_t Enabled = 0x98;
         inline constexpr uintptr_t TintColor = 0xa0;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0x98;
         inline constexpr uintptr_t TonemapperPreset = 0xa0;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x170;
         inline constexpr uintptr_t GameId = 0x178;
         inline constexpr uintptr_t GameLoaded = 0x5c8;
         inline constexpr uintptr_t JobId = 0x108;
         inline constexpr uintptr_t PlaceId = 0x180;
         inline constexpr uintptr_t PlaceVersion = 0x19c;
         inline constexpr uintptr_t PrimitiveCount = 0x410;
         inline constexpr uintptr_t ScriptContext = 0x440;
         inline constexpr uintptr_t ServerIP = 0x5b0;
         inline constexpr uintptr_t ToRenderView1 = 0x1b8;
         inline constexpr uintptr_t ToRenderView2 = 0x8;
         inline constexpr uintptr_t ToRenderView3 = 0x28;
         inline constexpr uintptr_t Workspace = 0x148;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0x98;
         inline constexpr uintptr_t FarIntensity = 0xa0;
         inline constexpr uintptr_t FocusDistance = 0xa4;
         inline constexpr uintptr_t InFocusRadius = 0xa8;
         inline constexpr uintptr_t NearIntensity = 0xac;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x1a8;
         inline constexpr uintptr_t CursorIcon = 0xb0;
         inline constexpr uintptr_t MaxActivationDistance = 0xd0;
         inline constexpr uintptr_t MaxDragAngle = 0x290;
         inline constexpr uintptr_t MaxDragTranslation = 0x254;
         inline constexpr uintptr_t MaxForce = 0x294;
         inline constexpr uintptr_t MaxTorque = 0x298;
         inline constexpr uintptr_t MinDragAngle = 0x29c;
         inline constexpr uintptr_t MinDragTranslation = 0x260;
         inline constexpr uintptr_t ReferenceInstance = 0x1d8;
         inline constexpr uintptr_t Responsiveness = 0x2a8;
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x8f59810;
         inline constexpr uintptr_t RealDataModel = 0x1f8;
    }

    namespace FileMeshData {
         inline constexpr uintptr_t AABBMax = 0x18c;
         inline constexpr uintptr_t AABBMin = 0x180;
         inline constexpr uintptr_t Faces = 0x30;
         inline constexpr uintptr_t FacesEnd = 0x38;
         inline constexpr uintptr_t Vertices = 0x0;
         inline constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0xf4;
         inline constexpr uintptr_t AbsoluteRotation = 0xd0;
         inline constexpr uintptr_t AbsoluteSize = 0x0;
    }

    namespace GuiObject {
         inline constexpr uintptr_t BackgroundColor3 = 0x528;
         inline constexpr uintptr_t BackgroundTransparency = 0x534;
         inline constexpr uintptr_t BorderColor3 = 0x534;
         inline constexpr uintptr_t Image = 0x9d8;
         inline constexpr uintptr_t LayoutOrder = 0x564;
         inline constexpr uintptr_t Position = 0x4f8;
         inline constexpr uintptr_t RichText = 0xbd0;
         inline constexpr uintptr_t Rotation = 0xd0;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x4ac;
         inline constexpr uintptr_t Size = 0x518;
         inline constexpr uintptr_t Text = 0xe38;
         inline constexpr uintptr_t TextColor3 = 0xee8;
         inline constexpr uintptr_t Visible = 0x595;
         inline constexpr uintptr_t ZIndex = 0x58c;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1c8;
         inline constexpr uintptr_t AutoRotate = 0x1c9;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1ca;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1cb;
         inline constexpr uintptr_t CameraOffset = 0x110;
         inline constexpr uintptr_t DisplayDistanceType = 0x174;
         inline constexpr uintptr_t DisplayName = 0xa0;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1cc;
         inline constexpr uintptr_t FloorMaterial = 0x178;
         inline constexpr uintptr_t Health = 0x184;
         inline constexpr uintptr_t HealthDisplayDistance = 0x17c;
         inline constexpr uintptr_t HealthDisplayType = 0x180;
         inline constexpr uintptr_t HipHeight = 0x188;
         inline constexpr uintptr_t HumanoidRootPart = 0x460;
         inline constexpr uintptr_t HumanoidState = 0x8a8;
         inline constexpr uintptr_t HumanoidStateID = 0x20;
         inline constexpr uintptr_t IsWalking = 0xa27;
         inline constexpr uintptr_t Jump = 0x1cf;
         inline constexpr uintptr_t JumpHeight = 0x194;
         inline constexpr uintptr_t JumpPower = 0x198;
         inline constexpr uintptr_t MaxHealth = 0x19c;
         inline constexpr uintptr_t MaxSlopeAngle = 0x1a0;
         inline constexpr uintptr_t MoveDirection = 0x134;
         inline constexpr uintptr_t MoveToPart = 0x100;
         inline constexpr uintptr_t MoveToPoint = 0x158;
         inline constexpr uintptr_t NameDisplayDistance = 0x1a4;
         inline constexpr uintptr_t NameOcclusion = 0x1a8;
         inline constexpr uintptr_t PlatformStand = 0x1d1;
         inline constexpr uintptr_t PlatformStatePointer = 0x5b7b9a3d;
         inline constexpr uintptr_t RequiresNeck = 0x1d2;
         inline constexpr uintptr_t RigType = 0x1b4;
         inline constexpr uintptr_t SeatPart = 0xf0;
         inline constexpr uintptr_t Sit = 0x1d2;
         inline constexpr uintptr_t TargetPoint = 0x140;
         inline constexpr uintptr_t UseJumpPower = 0x1d5;
         inline constexpr uintptr_t WalkTimer = 0x0;
         inline constexpr uintptr_t Walkspeed = 0x1c4;
         inline constexpr uintptr_t WalkspeedCheck = 0x39c;
    }

    namespace Instance {
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenStart = 0x70;
         inline constexpr uintptr_t ClassBase = 0x1b0;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Name = 0x0;
         inline constexpr uintptr_t NameContainer = 0x68;
         inline constexpr uintptr_t Parent = 0x60;
         inline constexpr uintptr_t This = 0x8;
    }

    namespace LRUHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t CachedItem = 0x40;
         inline constexpr uintptr_t Next = 0x0;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xb8;
         inline constexpr uintptr_t Brightness = 0x100;
         inline constexpr uintptr_t ClockTime = 0xb0;
         inline constexpr uintptr_t ColorShift_Bottom = 0xd0;
         inline constexpr uintptr_t ColorShift_Top = 0xc4;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x104;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x108;
         inline constexpr uintptr_t ExposureCompensation = 0x10c;
         inline constexpr uintptr_t FogColor = 0xdc;
         inline constexpr uintptr_t FogEnd = 0x114;
         inline constexpr uintptr_t FogStart = 0x118;
         inline constexpr uintptr_t GeographicLatitude = 0x11c;
         inline constexpr uintptr_t GlobalShadows = 0x12c;
         inline constexpr uintptr_t GradientBottom = 0x178;
         inline constexpr uintptr_t GradientTop = 0x138;
         inline constexpr uintptr_t LightColor = 0x144;
         inline constexpr uintptr_t LightDirection = 0x150;
         inline constexpr uintptr_t MoonPosition = 0x16c;
         inline constexpr uintptr_t OutdoorAmbient = 0xe8;
         inline constexpr uintptr_t Sky = 0x1b0;
         inline constexpr uintptr_t Source = 0x15c;
         inline constexpr uintptr_t SunPosition = 0x160;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xb8;
         inline constexpr uintptr_t Hash = 0x188;
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

    namespace MemEnforcedLRUCache {
         inline constexpr uintptr_t Head = 0x8;
    }

    namespace MeshContentProvider {
         inline constexpr uintptr_t LRUHolder = 0xc0;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x2f8;
         inline constexpr uintptr_t Texture = 0x328;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0xd8;
         inline constexpr uintptr_t AnimationId = 0xa8;
         inline constexpr uintptr_t StringLength = 0x10;
         inline constexpr uintptr_t Value = 0xa0;
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x240;
         inline constexpr uintptr_t Scale = 0x12c;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xb8;
         inline constexpr uintptr_t Hash = 0x348;
         inline constexpr uintptr_t IsCoreScript = 0x0;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0xe8;
         inline constexpr uintptr_t InputObject2 = 0xf8;
         inline constexpr uintptr_t MousePosition = 0xbc;
         inline constexpr uintptr_t SensitivityPointer = 0x0;
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1c8;
         inline constexpr uintptr_t Brightness = 0x204;
         inline constexpr uintptr_t Drag = 0x208;
         inline constexpr uintptr_t Lifetime = 0x1dc;
         inline constexpr uintptr_t LightEmission = 0x220;
         inline constexpr uintptr_t LightInfluence = 0x224;
         inline constexpr uintptr_t Rate = 0x230;
         inline constexpr uintptr_t RotSpeed = 0x1e4;
         inline constexpr uintptr_t Rotation = 0x1ec;
         inline constexpr uintptr_t Speed = 0x1f4;
         inline constexpr uintptr_t SpreadAngle = 0x1fc;
         inline constexpr uintptr_t Texture = 0x1a8;
         inline constexpr uintptr_t TimeScale = 0x244;
         inline constexpr uintptr_t VelocityInheritance = 0x248;
         inline constexpr uintptr_t ZOffset = 0x24c;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x354;
         inline constexpr uintptr_t CameraMode = 0x368;
         inline constexpr uintptr_t DisplayName = 0x120;
         inline constexpr uintptr_t HealthDisplayDistance = 0x38c;
         inline constexpr uintptr_t LocalPlayer = 0x118;
         inline constexpr uintptr_t LocaleId = 0x100;
         inline constexpr uintptr_t MaxZoomDistance = 0x360;
         inline constexpr uintptr_t MinZoomDistance = 0x364;
         inline constexpr uintptr_t ModelInstance = 0x290;
         inline constexpr uintptr_t Mouse = 0x1210;
         inline constexpr uintptr_t NameDisplayDistance = 0x39c;
         inline constexpr uintptr_t Team = 0x2d0;
         inline constexpr uintptr_t TeamColor = 0x3a8;
         inline constexpr uintptr_t UserId = 0xb8;
    }

    namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x0;
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xb0;
         inline constexpr uintptr_t Workspace = 0x138;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
         inline constexpr uintptr_t Flags = 0x1be;
         inline constexpr uintptr_t Material = 0x0;
         inline constexpr uintptr_t Owner = 0x218;
         inline constexpr uintptr_t Position = 0xd4;
         inline constexpr uintptr_t Rotation = 0xb0;
         inline constexpr uintptr_t Size = 0x1c4;
         inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0x98;
         inline constexpr uintptr_t Enabled = 0x11e;
         inline constexpr uintptr_t GamepadKeyCode = 0x104;
         inline constexpr uintptr_t HoldDuration = 0x108;
         inline constexpr uintptr_t KeyCode = 0x10c;
         inline constexpr uintptr_t MaxActivationDistance = 0x110;
         inline constexpr uintptr_t ObjectText = 0xb8;
         inline constexpr uintptr_t RequiresLineOfSight = 0x11f;
    }

    namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x38;
         inline constexpr uintptr_t RealDataModel = 0x1f0;
         inline constexpr uintptr_t RenderView = 0x1e0;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x0;
         inline constexpr uintptr_t LightingValid = 0x0;
         inline constexpr uintptr_t SkyValid = 0x0;
         inline constexpr uintptr_t VisualEngine = 0x0;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xc0;
         inline constexpr uintptr_t HeartbeatTask = 0x8a08;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xb8;
         inline constexpr uintptr_t Hash = 0x188;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x0;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x200;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x22c;
         inline constexpr uintptr_t MoonTextureId = 0xb0;
         inline constexpr uintptr_t SkyboxBk = 0xe0;
         inline constexpr uintptr_t SkyboxDn = 0x110;
         inline constexpr uintptr_t SkyboxFt = 0x140;
         inline constexpr uintptr_t SkyboxLf = 0x170;
         inline constexpr uintptr_t SkyboxOrientation = 0x220;
         inline constexpr uintptr_t SkyboxRt = 0x1a0;
         inline constexpr uintptr_t SkyboxUp = 0x1d0;
         inline constexpr uintptr_t StarCount = 0x230;
         inline constexpr uintptr_t SunAngularSize = 0x224;
         inline constexpr uintptr_t SunTextureId = 0x200;
    }

    namespace Sound {
         inline constexpr uintptr_t IsPlaying = 0x128;
         inline constexpr uintptr_t Looped = 0x125;
         inline constexpr uintptr_t PlaybackSpeed = 0x104;
         inline constexpr uintptr_t RollOffMaxDistance = 0x108;
         inline constexpr uintptr_t RollOffMinDistance = 0x10c;
         inline constexpr uintptr_t SoundGroup = 0xd0;
         inline constexpr uintptr_t SoundId = 0xb0;
         inline constexpr uintptr_t Volume = 0x118;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1d8;
         inline constexpr uintptr_t Enabled = 0x1d9;
         inline constexpr uintptr_t ForcefieldDuration = 0x1d0;
         inline constexpr uintptr_t Neutral = 0x1da;
         inline constexpr uintptr_t TeamColor = 0x1d4;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0xe0;
         inline constexpr uintptr_t Scale = 0xac;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0xccd2;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0x98;
         inline constexpr uintptr_t Intensity = 0xa0;
         inline constexpr uintptr_t Spread = 0xa4;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x1d8;
         inline constexpr uintptr_t Color = 0x1c0;
         inline constexpr uintptr_t ColorMap = 0xb0;
         inline constexpr uintptr_t EmissiveMaskContent = 0xe0;
         inline constexpr uintptr_t EmissiveStrength = 0x1dc;
         inline constexpr uintptr_t EmissiveTint = 0x1cc;
         inline constexpr uintptr_t MetalnessMap = 0x110;
         inline constexpr uintptr_t NormalMap = 0x140;
         inline constexpr uintptr_t RoughnessMap = 0x170;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t MaxFPS = 0xb0;
         inline constexpr uintptr_t Pointer = 0x8f026a8;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xa0;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1d8;
         inline constexpr uintptr_t MaterialColors = 0x4a0;
         inline constexpr uintptr_t WaterColor = 0x1c8;
         inline constexpr uintptr_t WaterReflectance = 0x1e0;
         inline constexpr uintptr_t WaterTransparency = 0x1e4;
         inline constexpr uintptr_t WaterWaveSize = 0x1e8;
         inline constexpr uintptr_t WaterWaveSpeed = 0x1ec;
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x1c8;
         inline constexpr uintptr_t Texture_Texture = 0x1c8;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4a0;
         inline constexpr uintptr_t Enabled = 0x4a1;
         inline constexpr uintptr_t Grip = 0x494;
         inline constexpr uintptr_t ManualActivationOnly = 0x4a2;
         inline constexpr uintptr_t RequiresHandle = 0x4a3;
         inline constexpr uintptr_t TextureId = 0x348;
         inline constexpr uintptr_t Tooltip = 0x450;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x2f8;
    }

    namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x2a8;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x210;
         inline constexpr uintptr_t SteerFloat = 0x214;
         inline constexpr uintptr_t ThrottleFloat = 0x218;
         inline constexpr uintptr_t Torque = 0x21c;
         inline constexpr uintptr_t TurnSpeed = 0x220;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xb10;
         inline constexpr uintptr_t FakeDataModel = 0xaf0;
         inline constexpr uintptr_t Pointer = 0x89dc1a0;
         inline constexpr uintptr_t RenderView = 0xc40;
         inline constexpr uintptr_t ViewMatrix = 0x1b0;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x100;
         inline constexpr uintptr_t Part1 = 0x110;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0xa0;
         inline constexpr uintptr_t Part1 = 0xb0;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x40;
         inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x4a0;
         inline constexpr uintptr_t DistributedGameTime = 0x4c0;
         inline constexpr uintptr_t ReadOnlyGravity = 0x9c8;
         inline constexpr uintptr_t World = 0x3f8;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x238;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x214;
         inline constexpr uintptr_t Gravity = 0x220;
         inline constexpr uintptr_t Primitives = 0x2a8;
         inline constexpr uintptr_t worldStepsPerSec = 0x860;
    }

}
