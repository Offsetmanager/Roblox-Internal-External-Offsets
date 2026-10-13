#pragma once
#include <cstdint>

namespace offsets {
    inline constexpr const char* roblox_version = "0.743.0.7431129";
    inline constexpr const char* architecture = "arm64";

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xA8;
        inline constexpr uintptr_t Decay = 0xB4;
        inline constexpr uintptr_t Density = 0xC0;
        inline constexpr uintptr_t Glare = 0xC4;
        inline constexpr uintptr_t Haze = 0xC8;
        inline constexpr uintptr_t Offset = 0xCC;
    }

    namespace BasePart {
        inline constexpr uintptr_t CastShadow = 0x120;
        inline constexpr uintptr_t Color3 = 0x19C;
        inline constexpr uintptr_t Locked = 0x121;
        inline constexpr uintptr_t Massless = 0x122;
        inline constexpr uintptr_t Primitive = 0x170;
        inline constexpr uintptr_t Reflectance = 0xF4;
        inline constexpr uintptr_t Shape = 0x198;
        inline constexpr uintptr_t Transparency = 0x118;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Intensity = 0xA0;
        inline constexpr uintptr_t Size = 0xA4;
        inline constexpr uintptr_t Threshold = 0xA8;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x20;
    }

    namespace Camera {
        inline constexpr uintptr_t CFrame = 0xC0;
        inline constexpr uintptr_t CameraSubject = 0xB0;
        inline constexpr uintptr_t FieldOfView = 0x128;
        inline constexpr uintptr_t Position = 0xE4;
        inline constexpr uintptr_t Rotation = 0xC0;
        inline constexpr uintptr_t ViewportInt16 = 0x284;
        inline constexpr uintptr_t ViewportSize = 0x2C4;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0xB8;
        inline constexpr uintptr_t BodyPart = 0x120;
        inline constexpr uintptr_t MeshId = 0xE0;
        inline constexpr uintptr_t OverlayTextureId = 0x108;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x168;
        inline constexpr uintptr_t GameId = 0x170;
        inline constexpr uintptr_t GameLoaded = 0x4;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t PlaceId = 0x178;
        inline constexpr uintptr_t ServerIP = 0x528;
        inline constexpr uintptr_t Workspace = 0x140;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t RealDataModel = 0x1F8;
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0xF8;
        inline constexpr uintptr_t AbsoluteRotation = 0xD8;
        inline constexpr uintptr_t AbsoluteSize = 0x104;
    }

    namespace GuiObject {
        inline constexpr uintptr_t Active = 0x580;
        inline constexpr uintptr_t AnchorPoint = 0x530;
        inline constexpr uintptr_t AutomaticSize = 0x538;
        inline constexpr uintptr_t BackgroundColor3 = 0x518;
        inline constexpr uintptr_t BackgroundTransparency = 0x53C;
        inline constexpr uintptr_t BorderColor3 = 0x524;
        inline constexpr uintptr_t BorderMode = 0x540;
        inline constexpr uintptr_t BorderSizePixel = 0x544;
        inline constexpr uintptr_t ClipsDescendants = 0x581;
        inline constexpr uintptr_t GuiState = 0x550;
        inline constexpr uintptr_t Interactable = 0x583;
        inline constexpr uintptr_t LayoutOrder = 0x554;
        inline constexpr uintptr_t Position = 0x4E8;
        inline constexpr uintptr_t Rotation = 0xD8;
        inline constexpr uintptr_t Selectable = 0x584;
        inline constexpr uintptr_t SelectionOrder = 0x570;
        inline constexpr uintptr_t Size = 0x508;
        inline constexpr uintptr_t SizeConstraint = 0x578;
        inline constexpr uintptr_t Visible = 0x585;
        inline constexpr uintptr_t ZIndex = 0x57C;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1C0;
        inline constexpr uintptr_t AutoRotate = 0x1C1;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1C2;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1C3;
        inline constexpr uintptr_t CameraOffset = 0x108;
        inline constexpr uintptr_t DisplayDistanceType = 0x16C;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1C4;
        inline constexpr uintptr_t Health = 0x17C;
        inline constexpr uintptr_t HealthDisplayDistance = 0x174;
        inline constexpr uintptr_t HealthDisplayType = 0x178;
        inline constexpr uintptr_t HipHeight = 0x180;
        inline constexpr uintptr_t Jump = 0x5;
        inline constexpr uintptr_t JumpHeight = 0x18C;
        inline constexpr uintptr_t JumpPower = 0x190;
        inline constexpr uintptr_t MaxHealth = 0x194;
        inline constexpr uintptr_t MaxSlopeAngle = 0x198;
        inline constexpr uintptr_t NameDisplayDistance = 0x19C;
        inline constexpr uintptr_t NameOcclusion = 0x1A0;
        inline constexpr uintptr_t RequiresNeck = 0x1CA;
        inline constexpr uintptr_t RigType = 0x1AC;
        inline constexpr uintptr_t SeatPart = 0xE8;
        inline constexpr uintptr_t Sit = 0x1CB;
        inline constexpr uintptr_t TargetPoint = 0x138;
        inline constexpr uintptr_t UseJumpPower = 0x1CD;
        inline constexpr uintptr_t WalkSpeed = 0x1BC;
        inline constexpr uintptr_t WalkSpeedCheck = 0x394;
        inline constexpr uintptr_t WalkToPoint = 0x150;
    }

    namespace InputObject {
        inline constexpr uintptr_t MousePosition = 0xD4;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t ComponentMap = 0x38;
        inline constexpr uintptr_t Name = 0x8;
        inline constexpr uintptr_t NameContainer = 0x70;
        inline constexpr uintptr_t Parent = 0x68;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xC0;
        inline constexpr uintptr_t Atmosphere = 0x1C8;
        inline constexpr uintptr_t Brightness = 0x108;
        inline constexpr uintptr_t ClockTime = 0xB8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xCC;
        inline constexpr uintptr_t ColorShift_Top = 0xD8;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x10C;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x110;
        inline constexpr uintptr_t ExposureCompensation = 0x114;
        inline constexpr uintptr_t FogColor = 0xE4;
        inline constexpr uintptr_t FogEnd = 0x11C;
        inline constexpr uintptr_t FogStart = 0x120;
        inline constexpr uintptr_t OutdoorAmbient = 0xF0;
        inline constexpr uintptr_t ShadowSoftness = 0x12C;
        inline constexpr uintptr_t Sky = 0x1B8;
    }

    namespace LightingParameters {
        inline constexpr uintptr_t GeographicLatitude = 0x124;
        inline constexpr uintptr_t LightColor = 0x14C;
        inline constexpr uintptr_t LightDirection = 0x158;
        inline constexpr uintptr_t SkyAmbient = 0x140;
        inline constexpr uintptr_t SkyAmbient2 = 0x128;
        inline constexpr uintptr_t Source = 0x164;
        inline constexpr uintptr_t TrueMoonPosition = 0x174;
        inline constexpr uintptr_t TrueSunPosition = 0x168;
    }

    namespace LocalScript {
        inline constexpr uintptr_t Bytecode = 0x18;
        inline constexpr uintptr_t Hash = 0x180;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x90;
        inline constexpr uintptr_t Basalt = 0x87;
        inline constexpr uintptr_t Brick = 0x6F;
        inline constexpr uintptr_t Cobblestone = 0x93;
        inline constexpr uintptr_t Concrete = 0x6C;
        inline constexpr uintptr_t CrackedLava = 0x8D;
        inline constexpr uintptr_t Glacier = 0x7B;
        inline constexpr uintptr_t Grass = 0x66;
        inline constexpr uintptr_t Ground = 0x8A;
        inline constexpr uintptr_t Ice = 0x96;
        inline constexpr uintptr_t LeafyGrass = 0x99;
        inline constexpr uintptr_t Limestone = 0x9F;
        inline constexpr uintptr_t Mud = 0x84;
        inline constexpr uintptr_t Pavement = 0xA2;
        inline constexpr uintptr_t Rock = 0x78;
        inline constexpr uintptr_t Salt = 0x9C;
        inline constexpr uintptr_t Sand = 0x72;
        inline constexpr uintptr_t Sandstone = 0x81;
        inline constexpr uintptr_t Slate = 0x69;
        inline constexpr uintptr_t Snow = 0x7E;
        inline constexpr uintptr_t WoodPlanks = 0x75;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x2E8;
        inline constexpr uintptr_t TextureId = 0x310;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x208;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t Bytecode = 0x118;
        inline constexpr uintptr_t Hash = 0xA0;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0xF0;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x314;
        inline constexpr uintptr_t DisplayName = 0x110;
        inline constexpr uintptr_t HealthDisplayDistance = 0x34C;
        inline constexpr uintptr_t LocaleId = 0x670;
        inline constexpr uintptr_t ModelInstance = 0x250;
        inline constexpr uintptr_t NameDisplayDistance = 0x35C;
        inline constexpr uintptr_t Team = 0x290;
        inline constexpr uintptr_t TeamColor = 0x368;
        inline constexpr uintptr_t UserId = 0xC0;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x110;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xEC;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xE0;
        inline constexpr uintptr_t CFrame = 0xB0;
        inline constexpr uintptr_t Material = 0x24E;
        inline constexpr uintptr_t Orientation = 0xB0;
        inline constexpr uintptr_t Position = 0xD4;
        inline constexpr uintptr_t PrimitiveFlags = 0x1BE;
        inline constexpr uintptr_t Rotation = 0xB0;
        inline constexpr uintptr_t Size = 0x1C4;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanQuery = 0x20;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xA0;
        inline constexpr uintptr_t Enabled = 0x116;
        inline constexpr uintptr_t HoldDuration = 0x100;
        inline constexpr uintptr_t KeyboardKeyCode = 0x104;
        inline constexpr uintptr_t MaxActivationDistance = 0x108;
        inline constexpr uintptr_t ObjectText = 0xB8;
        inline constexpr uintptr_t RequiresLineOfSight = 0x117;
    }

    namespace RenderView {
        inline constexpr uintptr_t LightingValid = 0x278;
        inline constexpr uintptr_t SkyboxValid = 0x28D;
    }

    namespace Seat {
        inline constexpr uintptr_t Occupant = 0x1F8;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x1F4;
        inline constexpr uintptr_t MoonTextureId = 0xB8;
        inline constexpr uintptr_t SkyboxBk = 0xE0;
        inline constexpr uintptr_t SkyboxDn = 0x108;
        inline constexpr uintptr_t SkyboxFt = 0x130;
        inline constexpr uintptr_t SkyboxLf = 0x158;
        inline constexpr uintptr_t SkyboxOrientation = 0x1E8;
        inline constexpr uintptr_t SkyboxRt = 0x180;
        inline constexpr uintptr_t SkyboxUp = 0x1A8;
        inline constexpr uintptr_t StarCount = 0x1F8;
        inline constexpr uintptr_t SunAngularSize = 0x1FC;
        inline constexpr uintptr_t SunTextureId = 0x1D0;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0xE8;
        inline constexpr uintptr_t Offset = 0xA8;
        inline constexpr uintptr_t Scale = 0xB4;
        inline constexpr uintptr_t TextureId = 0x110;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xA8;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1D0;
        inline constexpr uintptr_t MaterialColors = 0x270;
        inline constexpr uintptr_t WaterColor = 0x1C0;
        inline constexpr uintptr_t WaterReflectance = 0x1D8;
        inline constexpr uintptr_t WaterTransparency = 0x1DC;
        inline constexpr uintptr_t WaterWaveSize = 0x1E0;
        inline constexpr uintptr_t WaterWaveSpeed = 0x1E4;
    }

    namespace Tool {
        inline constexpr uintptr_t CanBeDropped = 0x438;
        inline constexpr uintptr_t Enabled = 0x439;
        inline constexpr uintptr_t Grip = 0x408;
        inline constexpr uintptr_t GripForward = 0x420;
        inline constexpr uintptr_t GripPos = 0x42C;
        inline constexpr uintptr_t GripRight = 0x408;
        inline constexpr uintptr_t GripUp = 0x414;
        inline constexpr uintptr_t ManualActivationOnly = 0x43A;
        inline constexpr uintptr_t RequiresHandle = 0x43B;
        inline constexpr uintptr_t Tooltip = 0x3F0;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xA8;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x208;
        inline constexpr uintptr_t Occupant = 0x1E8;
        inline constexpr uintptr_t SteerFloat = 0x20C;
        inline constexpr uintptr_t ThrottleFloat = 0x210;
        inline constexpr uintptr_t Torque = 0x214;
        inline constexpr uintptr_t TurnSpeed = 0x218;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t FakeDataModel = 0xB20;
        inline constexpr uintptr_t Pointer = 0x71B7D80;
        inline constexpr uintptr_t RenderView = 0xC68;
        inline constexpr uintptr_t ViewMatrix = 0x1E0;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x460;
        inline constexpr uintptr_t ReadOnlyGravity = 0x950;
        inline constexpr uintptr_t World = 0x3C0;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x218;
        inline constexpr uintptr_t Primitives = 0x2A0;
        inline constexpr uintptr_t WorldSteps = 0x818;
    }

}
