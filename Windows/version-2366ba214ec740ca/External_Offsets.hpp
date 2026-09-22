#pragma once
#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-2366ba214ec740ca";

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x18;
         inline constexpr uintptr_t GlobalWind = 0x3c;
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xa8;
         inline constexpr uintptr_t Animator = 0x100;
         inline constexpr uintptr_t IsPlaying = 0xa48;
         inline constexpr uintptr_t Looped = 0xd5;
         inline constexpr uintptr_t Speed = 0xc4;
         inline constexpr uintptr_t TimePosition = 0xc8;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0xa80;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xa8;
         inline constexpr uintptr_t Decay = 0xb4;
         inline constexpr uintptr_t Density = 0xc0;
         inline constexpr uintptr_t Glare = 0xc4;
         inline constexpr uintptr_t Haze = 0xc8;
         inline constexpr uintptr_t Offset = 0xcc;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0xb4;
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0x125;
         inline constexpr uintptr_t Color3 = 0x198;
         inline constexpr uintptr_t Locked = 0x126;
         inline constexpr uintptr_t Massless = 0x127;
         inline constexpr uintptr_t Primitive = 0x178;
         inline constexpr uintptr_t Reflectance = 0xfc;
         inline constexpr uintptr_t Shape = 0x1a8;
         inline constexpr uintptr_t Transparency = 0x120;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x150;
         inline constexpr uintptr_t Attachment1 = 0x160;
         inline constexpr uintptr_t Brightness = 0x170;
         inline constexpr uintptr_t CurveSize0 = 0x174;
         inline constexpr uintptr_t CurveSize1 = 0x178;
         inline constexpr uintptr_t LightEmission = 0x17c;
         inline constexpr uintptr_t LightInfluence = 0x180;
         inline constexpr uintptr_t Texture = 0x130;
         inline constexpr uintptr_t TextureLength = 0x18c;
         inline constexpr uintptr_t TextureSpeed = 0x194;
         inline constexpr uintptr_t Width0 = 0x198;
         inline constexpr uintptr_t Width1 = 0x19c;
         inline constexpr uintptr_t ZOffset = 0x1a0;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t Intensity = 0xa8;
         inline constexpr uintptr_t Size = 0xac;
         inline constexpr uintptr_t Threshold = 0xb0;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t Size = 0xa8;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x10;
         inline constexpr uintptr_t Size = 0x28;
    }

    namespace CachedItem {
         inline constexpr uintptr_t FileMeshData = 0x28;
    }

    namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0xb8;
         inline constexpr uintptr_t CameraType = 0x128;
         inline constexpr uintptr_t FieldOfView = 0x130;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2c4;
         inline constexpr uintptr_t Position = 0xec;
         inline constexpr uintptr_t Rotation = 0xc8;
         inline constexpr uintptr_t Viewport = 0x0;
         inline constexpr uintptr_t ViewportSize = 0x0;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xb8;
         inline constexpr uintptr_t BodyPart = 0x138;
         inline constexpr uintptr_t MeshId = 0xe8;
         inline constexpr uintptr_t OverlayTextureId = 0x118;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0xd8;
         inline constexpr uintptr_t MouseIcon = 0xb8;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x110;
         inline constexpr uintptr_t Template = 0xf0;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xb4;
         inline constexpr uintptr_t Contrast = 0xb8;
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t TintColor = 0xa8;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t TonemapperPreset = 0xa8;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x178;
         inline constexpr uintptr_t GameId = 0x180;
         inline constexpr uintptr_t GameLoaded = 0x5d0;
         inline constexpr uintptr_t JobId = 0x110;
         inline constexpr uintptr_t PlaceId = 0x188;
         inline constexpr uintptr_t PlaceVersion = 0x1a4;
         inline constexpr uintptr_t PrimitiveCount = 0x418;
         inline constexpr uintptr_t ScriptContext = 0x440;
         inline constexpr uintptr_t ServerIP = 0x5b8;
         inline constexpr uintptr_t ToRenderView1 = 0x1c0;
         inline constexpr uintptr_t ToRenderView2 = 0x8;
         inline constexpr uintptr_t ToRenderView3 = 0x28;
         inline constexpr uintptr_t Workspace = 0x150;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t FarIntensity = 0xa8;
         inline constexpr uintptr_t FocusDistance = 0xac;
         inline constexpr uintptr_t InFocusRadius = 0xb0;
         inline constexpr uintptr_t NearIntensity = 0xb4;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x1b0;
         inline constexpr uintptr_t CursorIcon = 0xb8;
         inline constexpr uintptr_t MaxActivationDistance = 0xd8;
         inline constexpr uintptr_t MaxDragAngle = 0x298;
         inline constexpr uintptr_t MaxDragTranslation = 0x25c;
         inline constexpr uintptr_t MaxForce = 0x29c;
         inline constexpr uintptr_t MaxTorque = 0x2a0;
         inline constexpr uintptr_t MinDragAngle = 0x2a4;
         inline constexpr uintptr_t MinDragTranslation = 0x268;
         inline constexpr uintptr_t ReferenceInstance = 0x1e0;
         inline constexpr uintptr_t Responsiveness = 0x2b0;
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x8ee1728;
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
         inline constexpr uintptr_t AbsolutePosition = 0x0;
         inline constexpr uintptr_t AbsoluteRotation = 0xd8;
         inline constexpr uintptr_t AbsoluteSize = 0x0;
    }

    namespace GuiObject {
         inline constexpr uintptr_t BackgroundColor3 = 0x530;
         inline constexpr uintptr_t BackgroundTransparency = 0x53c;
         inline constexpr uintptr_t BorderColor3 = 0x53c;
         inline constexpr uintptr_t Image = 0x990;
         inline constexpr uintptr_t LayoutOrder = 0x56c;
         inline constexpr uintptr_t Position = 0x500;
         inline constexpr uintptr_t RichText = 0xb88;
         inline constexpr uintptr_t Rotation = 0xd8;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x0;
         inline constexpr uintptr_t Size = 0x520;
         inline constexpr uintptr_t Text = 0xdf0;
         inline constexpr uintptr_t TextColor3 = 0xea0;
         inline constexpr uintptr_t Visible = 0x59d;
         inline constexpr uintptr_t ZIndex = 0x594;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1c4;
         inline constexpr uintptr_t AutoRotate = 0x1c5;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1c6;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1c7;
         inline constexpr uintptr_t CameraOffset = 0x118;
         inline constexpr uintptr_t DisplayDistanceType = 0x170;
         inline constexpr uintptr_t DisplayName = 0xa8;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1c8;
         inline constexpr uintptr_t FloorMaterial = 0x174;
         inline constexpr uintptr_t Health = 0x180;
         inline constexpr uintptr_t HealthDisplayDistance = 0x178;
         inline constexpr uintptr_t HealthDisplayType = 0x17c;
         inline constexpr uintptr_t HipHeight = 0x184;
         inline constexpr uintptr_t HumanoidRootPart = 0x458;
         inline constexpr uintptr_t HumanoidState = 0x8a0;
         inline constexpr uintptr_t HumanoidStateID = 0x20;
         inline constexpr uintptr_t IsWalking = 0xa1f;
         inline constexpr uintptr_t Jump = 0x1ca;
         inline constexpr uintptr_t JumpHeight = 0x190;
         inline constexpr uintptr_t JumpPower = 0x194;
         inline constexpr uintptr_t MaxHealth = 0x198;
         inline constexpr uintptr_t MaxSlopeAngle = 0x19c;
         inline constexpr uintptr_t MoveDirection = 0x130;
         inline constexpr uintptr_t MoveToPart = 0x108;
         inline constexpr uintptr_t MoveToPoint = 0x154;
         inline constexpr uintptr_t NameDisplayDistance = 0x1a0;
         inline constexpr uintptr_t NameOcclusion = 0x1a4;
         inline constexpr uintptr_t PlatformStand = 0x1cc;
         inline constexpr uintptr_t RequiresNeck = 0x1cd;
         inline constexpr uintptr_t RigType = 0x1b0;
         inline constexpr uintptr_t SeatPart = 0xf8;
         inline constexpr uintptr_t Sit = 0x1cd;
         inline constexpr uintptr_t TargetPoint = 0x13c;
         inline constexpr uintptr_t UseJumpPower = 0x1d0;
         inline constexpr uintptr_t WalkTimer = 0x0;
         inline constexpr uintptr_t Walkspeed = 0x1c0;
         inline constexpr uintptr_t WalkspeedCheck = 0x39c;
    }

    namespace Instance {
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenStart = 0x78;
         inline constexpr uintptr_t ClassBase = 0x1b0;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Name = 0x8;
         inline constexpr uintptr_t NameContainer = 0x70;
         inline constexpr uintptr_t Parent = 0x68;
         inline constexpr uintptr_t This = 0x8;
    }

    namespace LRUHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t CachedItem = 0x38;
         inline constexpr uintptr_t Next = 0x0;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xc0;
         inline constexpr uintptr_t Brightness = 0x108;
         inline constexpr uintptr_t ClockTime = 0xb8;
         inline constexpr uintptr_t ColorShift_Bottom = 0xd8;
         inline constexpr uintptr_t ColorShift_Top = 0xcc;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x10c;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x110;
         inline constexpr uintptr_t ExposureCompensation = 0x114;
         inline constexpr uintptr_t FogColor = 0xe4;
         inline constexpr uintptr_t FogEnd = 0x11c;
         inline constexpr uintptr_t FogStart = 0x120;
         inline constexpr uintptr_t GeographicLatitude = 0x124;
         inline constexpr uintptr_t GlobalShadows = 0x134;
         inline constexpr uintptr_t GradientBottom = 0x180;
         inline constexpr uintptr_t GradientTop = 0x140;
         inline constexpr uintptr_t LightColor = 0x14c;
         inline constexpr uintptr_t LightDirection = 0x158;
         inline constexpr uintptr_t MoonPosition = 0x174;
         inline constexpr uintptr_t OutdoorAmbient = 0xf0;
         inline constexpr uintptr_t Sky = 0x1b8;
         inline constexpr uintptr_t Source = 0x164;
         inline constexpr uintptr_t SunPosition = 0x168;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x190;
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
         inline constexpr uintptr_t LRUHolder = 0xc8;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x300;
         inline constexpr uintptr_t Texture = 0x330;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0xe0;
         inline constexpr uintptr_t AnimationId = 0xb0;
         inline constexpr uintptr_t StringLength = 0x10;
         inline constexpr uintptr_t Value = 0xa8;
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x248;
         inline constexpr uintptr_t Scale = 0x134;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x350;
         inline constexpr uintptr_t IsCoreScript = 0x0;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0xe0;
         inline constexpr uintptr_t InputObject2 = 0xf0;
         inline constexpr uintptr_t MousePosition = 0xc4;
         inline constexpr uintptr_t SensitivityPointer = 0x0;
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1d0;
         inline constexpr uintptr_t Brightness = 0x20c;
         inline constexpr uintptr_t Drag = 0x210;
         inline constexpr uintptr_t Lifetime = 0x1e4;
         inline constexpr uintptr_t LightEmission = 0x228;
         inline constexpr uintptr_t LightInfluence = 0x22c;
         inline constexpr uintptr_t Rate = 0x238;
         inline constexpr uintptr_t RotSpeed = 0x1ec;
         inline constexpr uintptr_t Rotation = 0x1f4;
         inline constexpr uintptr_t Speed = 0x1fc;
         inline constexpr uintptr_t SpreadAngle = 0x204;
         inline constexpr uintptr_t Texture = 0x1b0;
         inline constexpr uintptr_t TimeScale = 0x24c;
         inline constexpr uintptr_t VelocityInheritance = 0x250;
         inline constexpr uintptr_t ZOffset = 0x254;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x34c;
         inline constexpr uintptr_t CameraMode = 0x360;
         inline constexpr uintptr_t DisplayName = 0x128;
         inline constexpr uintptr_t HealthDisplayDistance = 0x384;
         inline constexpr uintptr_t LocalPlayer = 0x120;
         inline constexpr uintptr_t LocaleId = 0x0;
         inline constexpr uintptr_t MaxZoomDistance = 0x358;
         inline constexpr uintptr_t MinZoomDistance = 0x35c;
         inline constexpr uintptr_t ModelInstance = 0x288;
         inline constexpr uintptr_t Mouse = 0x1200;
         inline constexpr uintptr_t NameDisplayDistance = 0x394;
         inline constexpr uintptr_t Team = 0x2c8;
         inline constexpr uintptr_t TeamColor = 0x3a0;
         inline constexpr uintptr_t UserId = 0xc0;
    }

    namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x0;
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xb8;
         inline constexpr uintptr_t Workspace = 0x140;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
         inline constexpr uintptr_t Flags = 0x1b6;
         inline constexpr uintptr_t Material = 0x0;
         inline constexpr uintptr_t Owner = 0x210;
         inline constexpr uintptr_t Position = 0xd4;
         inline constexpr uintptr_t Rotation = 0xb0;
         inline constexpr uintptr_t Size = 0x1bc;
         inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0xa0;
         inline constexpr uintptr_t Enabled = 0x126;
         inline constexpr uintptr_t GamepadKeyCode = 0x10c;
         inline constexpr uintptr_t HoldDuration = 0x17;
         inline constexpr uintptr_t KeyCode = 0x114;
         inline constexpr uintptr_t MaxActivationDistance = 0x118;
         inline constexpr uintptr_t ObjectText = 0xc0;
         inline constexpr uintptr_t RequiresLineOfSight = 0x127;
    }

    namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x38;
         inline constexpr uintptr_t RealDataModel = 0x1f0;
         inline constexpr uintptr_t RenderView = 0x1d8;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x0;
         inline constexpr uintptr_t LightingValid = 0x0;
         inline constexpr uintptr_t SkyValid = 0x0;
         inline constexpr uintptr_t VisualEngine = 0x0;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xf4;
         inline constexpr uintptr_t HeartbeatTask = 0x3b8;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x0;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x190;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x0;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x208;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x234;
         inline constexpr uintptr_t MoonTextureId = 0xb8;
         inline constexpr uintptr_t SkyboxBk = 0xe8;
         inline constexpr uintptr_t SkyboxDn = 0x118;
         inline constexpr uintptr_t SkyboxFt = 0x148;
         inline constexpr uintptr_t SkyboxLf = 0x178;
         inline constexpr uintptr_t SkyboxOrientation = 0x228;
         inline constexpr uintptr_t SkyboxRt = 0x1a8;
         inline constexpr uintptr_t SkyboxUp = 0x1d8;
         inline constexpr uintptr_t StarCount = 0x238;
         inline constexpr uintptr_t SunAngularSize = 0x22c;
         inline constexpr uintptr_t SunTextureId = 0x208;
    }

    namespace Sound {
         inline constexpr uintptr_t IsPlaying = 0x130;
         inline constexpr uintptr_t Looped = 0x12d;
         inline constexpr uintptr_t PlaybackSpeed = 0x10c;
         inline constexpr uintptr_t RollOffMaxDistance = 0x110;
         inline constexpr uintptr_t RollOffMinDistance = 0x114;
         inline constexpr uintptr_t SoundGroup = 0xd8;
         inline constexpr uintptr_t SoundId = 0xb8;
         inline constexpr uintptr_t Volume = 0x120;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1e0;
         inline constexpr uintptr_t Enabled = 0x1e1;
         inline constexpr uintptr_t ForcefieldDuration = 0x1d8;
         inline constexpr uintptr_t Neutral = 0x1e2;
         inline constexpr uintptr_t TeamColor = 0x1dc;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0xe8;
         inline constexpr uintptr_t Scale = 0xb4;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0xa0;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t Intensity = 0xa8;
         inline constexpr uintptr_t Spread = 0xac;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x1e0;
         inline constexpr uintptr_t Color = 0x1c8;
         inline constexpr uintptr_t ColorMap = 0xb8;
         inline constexpr uintptr_t EmissiveMaskContent = 0xe8;
         inline constexpr uintptr_t EmissiveStrength = 0x1e4;
         inline constexpr uintptr_t EmissiveTint = 0x1d4;
         inline constexpr uintptr_t MetalnessMap = 0x118;
         inline constexpr uintptr_t NormalMap = 0x148;
         inline constexpr uintptr_t RoughnessMap = 0x178;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t MaxFPS = 0x1000;
         inline constexpr uintptr_t Pointer = 0x8c8d108;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xa8;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1e0;
         inline constexpr uintptr_t MaterialColors = 0x4a8;
         inline constexpr uintptr_t WaterColor = 0x1d0;
         inline constexpr uintptr_t WaterReflectance = 0x1e8;
         inline constexpr uintptr_t WaterTransparency = 0x1ec;
         inline constexpr uintptr_t WaterWaveSize = 0x1f0;
         inline constexpr uintptr_t WaterWaveSpeed = 0x1f4;
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x1d0;
         inline constexpr uintptr_t Texture_Texture = 0x1d0;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4a8;
         inline constexpr uintptr_t Enabled = 0x4a9;
         inline constexpr uintptr_t Grip = 0x49c;
         inline constexpr uintptr_t ManualActivationOnly = 0x4aa;
         inline constexpr uintptr_t RequiresHandle = 0x4ab;
         inline constexpr uintptr_t TextureId = 0x350;
         inline constexpr uintptr_t Tooltip = 0x458;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x300;
    }

    namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x2b0;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x218;
         inline constexpr uintptr_t SteerFloat = 0x21c;
         inline constexpr uintptr_t ThrottleFloat = 0x220;
         inline constexpr uintptr_t Torque = 0x224;
         inline constexpr uintptr_t TurnSpeed = 0x228;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0x0;
         inline constexpr uintptr_t FakeDataModel = 0xaf0;
         inline constexpr uintptr_t Pointer = 0x851bf08;
         inline constexpr uintptr_t RenderView = 0xc30;
         inline constexpr uintptr_t ViewMatrix = 0x1b0;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x108;
         inline constexpr uintptr_t Part1 = 0x118;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0xa8;
         inline constexpr uintptr_t Part1 = 0xb8;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x40;
         inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x4a8;
         inline constexpr uintptr_t DistributedGameTime = 0x4c8;
         inline constexpr uintptr_t ReadOnlyGravity = 0x9f0;
         inline constexpr uintptr_t World = 0x400;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x240;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x220;
         inline constexpr uintptr_t Gravity = 0x22c;
         inline constexpr uintptr_t Primitives = 0x2b0;
         inline constexpr uintptr_t worldStepsPerSec = 0x728;
    }

}
