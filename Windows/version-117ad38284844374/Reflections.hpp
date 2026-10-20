/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-117ad38284844374
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 106         𝓕𝓪𝓲𝓵𝓮𝓭: 0
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 52.26s

			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once

#include <cstdint>
#include <cstring>

namespace Reflections
{
    constexpr uintptr_t typeRegistration = 0x1A82EDF;
    constexpr uint32_t typeCount = 106;
    constexpr uint32_t typeMax = 0x69;
}
enum ReflectionType : uint32_t
{
    ReflectionType_Invalid = 0xFFFFFFFF,
    ReflectionType_Void = 0x0,
    ReflectionType_Bool = 0x1,
    ReflectionType_Int = 0x2,
    ReflectionType_Int64 = 0x3,
    ReflectionType_Float = 0x4,
    ReflectionType_Double = 0x5,
    ReflectionType_String = 0x6,
    ReflectionType_ProtectedString = 0x7,
    ReflectionType_Instance = 0x8,
    ReflectionType_Instances = 0x9,
    ReflectionType_Ray = 0xA,
    ReflectionType_Vector2 = 0xB,
    ReflectionType_Vector3 = 0xC,
    ReflectionType_Vector2Int16 = 0xD,
    ReflectionType_Vector3Int16 = 0xE,
    ReflectionType_Rect2d = 0xF,
    ReflectionType_CoordinateFrame = 0x10,
    ReflectionType_Color3 = 0x11,
    ReflectionType_Color3uint8 = 0x12,
    ReflectionType_UDim = 0x13,
    ReflectionType_UDim2 = 0x14,
    ReflectionType_Faces = 0x15,
    ReflectionType_Axes = 0x16,
    ReflectionType_Region3 = 0x17,
    ReflectionType_Region3Int16 = 0x18,
    ReflectionType_CellId = 0x19,
    ReflectionType_GuidData = 0x1A,
    ReflectionType_PhysicalProperties = 0x1B,
    ReflectionType_BrickColor = 0x1C,
    ReflectionType_SystemAddress = 0x1D,
    ReflectionType_BinaryString = 0x1E,
    ReflectionType_Surface = 0x1F,
    ReflectionType_CollectionHandle = 0x20,
    ReflectionType_Enum = 0x21,
    ReflectionType_Property = 0x22,
    ReflectionType_Tuple = 0x23,
    ReflectionType_ValueArray = 0x24,
    ReflectionType_ValueTable = 0x25,
    ReflectionType_ValueMap = 0x26,
    ReflectionType_Variant = 0x27,
    ReflectionType_GenericFunction = 0x28,
    ReflectionType_WeakFunctionRef = 0x29,
    ReflectionType_ColorSequence = 0x2A,
    ReflectionType_ColorSequenceKeypoint = 0x2B,
    ReflectionType_NumberRange = 0x2C,
    ReflectionType_NumberSequence = 0x2D,
    ReflectionType_NumberSequenceKeypoint = 0x2E,
    ReflectionType_InputObject = 0x2F,
    ReflectionType_Connection = 0x30,
    ReflectionType_ContentId = 0x31,
    ReflectionType_DescribedBase = 0x32,
    ReflectionType_RefType = 0x33,
    ReflectionType_QFont = 0x34,
    ReflectionType_QDir = 0x35,
    ReflectionType_EventInstance = 0x36,
    ReflectionType_TweenInfo = 0x37,
    ReflectionType_DockWidgetPluginGuiInfo = 0x38,
    ReflectionType_PluginDrag = 0x39,
    ReflectionType_Random = 0x3A,
    ReflectionType_PathWaypoint = 0x3B,
    ReflectionType_FloatCurveKey = 0x3C,
    ReflectionType_RotationCurveKey = 0x3D,
    ReflectionType_ValueCurveKey = 0x3E,
    ReflectionType_SharedString = 0x3F,
    ReflectionType_DateTime = 0x40,
    ReflectionType_RaycastParams = 0x41,
    ReflectionType_RaycastResult = 0x42,
    ReflectionType_OverlapParams = 0x43,
    ReflectionType_LazyTable = 0x44,
    ReflectionType_DebugTable = 0x45,
    ReflectionType_CatalogSearchParams = 0x46,
    ReflectionType_OptionalCoordinateFrame = 0x47,
    ReflectionType_CSGPropertyData = 0x48,
    ReflectionType_UniqueId = 0x49,
    ReflectionType_Font = 0x4A,
    ReflectionType_SharedTable = 0x4B,
    ReflectionType_SharedTableIterator = 0x4C,
    ReflectionType_AnimationMask = 0x4D,
    ReflectionType_AnimationPose = 0x4E,
    ReflectionType_ClipEvaluator = 0x4F,
    ReflectionType_OpenCloudModel = 0x50,
    ReflectionType_InstanceRef = 0x51,
    ReflectionType_SecurityCapabilities = 0x52,
    ReflectionType_ArticulatedJoint = 0x53,
    ReflectionType_AnimationContext = 0x54,
    ReflectionType_Secret = 0x55,
    ReflectionType_Buffer = 0x56,
    ReflectionType_Integer = 0x57,
    ReflectionType_Path2DControlPoint = 0x58,
    ReflectionType_ReplicationPV = 0x59,
    ReflectionType_FacsReplicationData = 0x5A,
    ReflectionType_AnimationMaskModifier = 0x5B,
    ReflectionType_Content = 0x5C,
    ReflectionType_NetAssetHandle = 0x5D,
    ReflectionType_NetAssetRef = 0x5E,
    ReflectionType_Object = 0x5F,
    ReflectionType_AdReward = 0x60,
    ReflectionType_AssetContentMap = 0x61,
    ReflectionType_SlimReplicationData = 0x62,
    ReflectionType_User = 0x63,
    ReflectionType_WebViewParams = 0x64,
    ReflectionType_AnimTrackPlayState = 0x65,
    ReflectionType_AnimTrackMetadata = 0x66,
    ReflectionType_AnimTrackWeight = 0x67,
    ReflectionType_ScopedInstanceIdentity = 0x68,
    ReflectionType_Max = 0x69,
};
inline const char* ReflectionTypeName(uint32_t id) noexcept
{
    switch (id)
    {
        case 0x0: return "Void";
        case 0x1: return "Bool";
        case 0x2: return "Int";
        case 0x3: return "Int64";
        case 0x4: return "Float";
        case 0x5: return "Double";
        case 0x6: return "String";
        case 0x7: return "ProtectedString";
        case 0x8: return "Instance";
        case 0x9: return "Instances";
        case 0xA: return "Ray";
        case 0xB: return "Vector2";
        case 0xC: return "Vector3";
        case 0xD: return "Vector2Int16";
        case 0xE: return "Vector3Int16";
        case 0xF: return "Rect2d";
        case 0x10: return "CoordinateFrame";
        case 0x11: return "Color3";
        case 0x12: return "Color3uint8";
        case 0x13: return "UDim";
        case 0x14: return "UDim2";
        case 0x15: return "Faces";
        case 0x16: return "Axes";
        case 0x17: return "Region3";
        case 0x18: return "Region3Int16";
        case 0x19: return "CellId";
        case 0x1A: return "GuidData";
        case 0x1B: return "PhysicalProperties";
        case 0x1C: return "BrickColor";
        case 0x1D: return "SystemAddress";
        case 0x1E: return "BinaryString";
        case 0x1F: return "Surface";
        case 0x20: return "CollectionHandle";
        case 0x21: return "Enum";
        case 0x22: return "Property";
        case 0x23: return "Tuple";
        case 0x24: return "ValueArray";
        case 0x25: return "ValueTable";
        case 0x26: return "ValueMap";
        case 0x27: return "Variant";
        case 0x28: return "GenericFunction";
        case 0x29: return "WeakFunctionRef";
        case 0x2A: return "ColorSequence";
        case 0x2B: return "ColorSequenceKeypoint";
        case 0x2C: return "NumberRange";
        case 0x2D: return "NumberSequence";
        case 0x2E: return "NumberSequenceKeypoint";
        case 0x2F: return "InputObject";
        case 0x30: return "Connection";
        case 0x31: return "ContentId";
        case 0x32: return "DescribedBase";
        case 0x33: return "RefType";
        case 0x34: return "QFont";
        case 0x35: return "QDir";
        case 0x36: return "EventInstance";
        case 0x37: return "TweenInfo";
        case 0x38: return "DockWidgetPluginGuiInfo";
        case 0x39: return "PluginDrag";
        case 0x3A: return "Random";
        case 0x3B: return "PathWaypoint";
        case 0x3C: return "FloatCurveKey";
        case 0x3D: return "RotationCurveKey";
        case 0x3E: return "ValueCurveKey";
        case 0x3F: return "SharedString";
        case 0x40: return "DateTime";
        case 0x41: return "RaycastParams";
        case 0x42: return "RaycastResult";
        case 0x43: return "OverlapParams";
        case 0x44: return "LazyTable";
        case 0x45: return "DebugTable";
        case 0x46: return "CatalogSearchParams";
        case 0x47: return "OptionalCoordinateFrame";
        case 0x48: return "CSGPropertyData";
        case 0x49: return "UniqueId";
        case 0x4A: return "Font";
        case 0x4B: return "SharedTable";
        case 0x4C: return "SharedTableIterator";
        case 0x4D: return "AnimationMask";
        case 0x4E: return "AnimationPose";
        case 0x4F: return "ClipEvaluator";
        case 0x50: return "OpenCloudModel";
        case 0x51: return "InstanceRef";
        case 0x52: return "SecurityCapabilities";
        case 0x53: return "ArticulatedJoint";
        case 0x54: return "AnimationContext";
        case 0x55: return "Secret";
        case 0x56: return "Buffer";
        case 0x57: return "Integer";
        case 0x58: return "Path2DControlPoint";
        case 0x59: return "ReplicationPV";
        case 0x5A: return "FacsReplicationData";
        case 0x5B: return "AnimationMaskModifier";
        case 0x5C: return "Content";
        case 0x5D: return "NetAssetHandle";
        case 0x5E: return "NetAssetRef";
        case 0x5F: return "Object";
        case 0x60: return "AdReward";
        case 0x61: return "AssetContentMap";
        case 0x62: return "SlimReplicationData";
        case 0x63: return "User";
        case 0x64: return "WebViewParams";
        case 0x65: return "AnimTrackPlayState";
        case 0x66: return "AnimTrackMetadata";
        case 0x67: return "AnimTrackWeight";
        case 0x68: return "ScopedInstanceIdentity";
        case 0x69: return "Max";
        default: return "Unknown";
    }
}
inline ReflectionType ReflectionTypeFromName(const char* name) noexcept
{
    if (!name) return ReflectionType_Invalid;
    if (!strcmp(name, "Void")) return ReflectionType_Void;
    if (!strcmp(name, "Bool")) return ReflectionType_Bool;
    if (!strcmp(name, "Int")) return ReflectionType_Int;
    if (!strcmp(name, "Int64")) return ReflectionType_Int64;
    if (!strcmp(name, "Float")) return ReflectionType_Float;
    if (!strcmp(name, "Double")) return ReflectionType_Double;
    if (!strcmp(name, "String")) return ReflectionType_String;
    if (!strcmp(name, "ProtectedString")) return ReflectionType_ProtectedString;
    if (!strcmp(name, "Instance")) return ReflectionType_Instance;
    if (!strcmp(name, "Instances")) return ReflectionType_Instances;
    if (!strcmp(name, "Ray")) return ReflectionType_Ray;
    if (!strcmp(name, "Vector2")) return ReflectionType_Vector2;
    if (!strcmp(name, "Vector3")) return ReflectionType_Vector3;
    if (!strcmp(name, "Vector2Int16")) return ReflectionType_Vector2Int16;
    if (!strcmp(name, "Vector3Int16")) return ReflectionType_Vector3Int16;
    if (!strcmp(name, "Rect2d")) return ReflectionType_Rect2d;
    if (!strcmp(name, "CoordinateFrame")) return ReflectionType_CoordinateFrame;
    if (!strcmp(name, "Color3")) return ReflectionType_Color3;
    if (!strcmp(name, "Color3uint8")) return ReflectionType_Color3uint8;
    if (!strcmp(name, "UDim")) return ReflectionType_UDim;
    if (!strcmp(name, "UDim2")) return ReflectionType_UDim2;
    if (!strcmp(name, "Faces")) return ReflectionType_Faces;
    if (!strcmp(name, "Axes")) return ReflectionType_Axes;
    if (!strcmp(name, "Region3")) return ReflectionType_Region3;
    if (!strcmp(name, "Region3Int16")) return ReflectionType_Region3Int16;
    if (!strcmp(name, "CellId")) return ReflectionType_CellId;
    if (!strcmp(name, "GuidData")) return ReflectionType_GuidData;
    if (!strcmp(name, "PhysicalProperties")) return ReflectionType_PhysicalProperties;
    if (!strcmp(name, "BrickColor")) return ReflectionType_BrickColor;
    if (!strcmp(name, "SystemAddress")) return ReflectionType_SystemAddress;
    if (!strcmp(name, "BinaryString")) return ReflectionType_BinaryString;
    if (!strcmp(name, "Surface")) return ReflectionType_Surface;
    if (!strcmp(name, "CollectionHandle")) return ReflectionType_CollectionHandle;
    if (!strcmp(name, "Enum")) return ReflectionType_Enum;
    if (!strcmp(name, "Property")) return ReflectionType_Property;
    if (!strcmp(name, "Tuple")) return ReflectionType_Tuple;
    if (!strcmp(name, "ValueArray")) return ReflectionType_ValueArray;
    if (!strcmp(name, "ValueTable")) return ReflectionType_ValueTable;
    if (!strcmp(name, "ValueMap")) return ReflectionType_ValueMap;
    if (!strcmp(name, "Variant")) return ReflectionType_Variant;
    if (!strcmp(name, "GenericFunction")) return ReflectionType_GenericFunction;
    if (!strcmp(name, "WeakFunctionRef")) return ReflectionType_WeakFunctionRef;
    if (!strcmp(name, "ColorSequence")) return ReflectionType_ColorSequence;
    if (!strcmp(name, "ColorSequenceKeypoint")) return ReflectionType_ColorSequenceKeypoint;
    if (!strcmp(name, "NumberRange")) return ReflectionType_NumberRange;
    if (!strcmp(name, "NumberSequence")) return ReflectionType_NumberSequence;
    if (!strcmp(name, "NumberSequenceKeypoint")) return ReflectionType_NumberSequenceKeypoint;
    if (!strcmp(name, "InputObject")) return ReflectionType_InputObject;
    if (!strcmp(name, "Connection")) return ReflectionType_Connection;
    if (!strcmp(name, "ContentId")) return ReflectionType_ContentId;
    if (!strcmp(name, "DescribedBase")) return ReflectionType_DescribedBase;
    if (!strcmp(name, "RefType")) return ReflectionType_RefType;
    if (!strcmp(name, "QFont")) return ReflectionType_QFont;
    if (!strcmp(name, "QDir")) return ReflectionType_QDir;
    if (!strcmp(name, "EventInstance")) return ReflectionType_EventInstance;
    if (!strcmp(name, "TweenInfo")) return ReflectionType_TweenInfo;
    if (!strcmp(name, "DockWidgetPluginGuiInfo")) return ReflectionType_DockWidgetPluginGuiInfo;
    if (!strcmp(name, "PluginDrag")) return ReflectionType_PluginDrag;
    if (!strcmp(name, "Random")) return ReflectionType_Random;
    if (!strcmp(name, "PathWaypoint")) return ReflectionType_PathWaypoint;
    if (!strcmp(name, "FloatCurveKey")) return ReflectionType_FloatCurveKey;
    if (!strcmp(name, "RotationCurveKey")) return ReflectionType_RotationCurveKey;
    if (!strcmp(name, "ValueCurveKey")) return ReflectionType_ValueCurveKey;
    if (!strcmp(name, "SharedString")) return ReflectionType_SharedString;
    if (!strcmp(name, "DateTime")) return ReflectionType_DateTime;
    if (!strcmp(name, "RaycastParams")) return ReflectionType_RaycastParams;
    if (!strcmp(name, "RaycastResult")) return ReflectionType_RaycastResult;
    if (!strcmp(name, "OverlapParams")) return ReflectionType_OverlapParams;
    if (!strcmp(name, "LazyTable")) return ReflectionType_LazyTable;
    if (!strcmp(name, "DebugTable")) return ReflectionType_DebugTable;
    if (!strcmp(name, "CatalogSearchParams")) return ReflectionType_CatalogSearchParams;
    if (!strcmp(name, "OptionalCoordinateFrame")) return ReflectionType_OptionalCoordinateFrame;
    if (!strcmp(name, "CSGPropertyData")) return ReflectionType_CSGPropertyData;
    if (!strcmp(name, "UniqueId")) return ReflectionType_UniqueId;
    if (!strcmp(name, "Font")) return ReflectionType_Font;
    if (!strcmp(name, "SharedTable")) return ReflectionType_SharedTable;
    if (!strcmp(name, "SharedTableIterator")) return ReflectionType_SharedTableIterator;
    if (!strcmp(name, "AnimationMask")) return ReflectionType_AnimationMask;
    if (!strcmp(name, "AnimationPose")) return ReflectionType_AnimationPose;
    if (!strcmp(name, "ClipEvaluator")) return ReflectionType_ClipEvaluator;
    if (!strcmp(name, "OpenCloudModel")) return ReflectionType_OpenCloudModel;
    if (!strcmp(name, "InstanceRef")) return ReflectionType_InstanceRef;
    if (!strcmp(name, "SecurityCapabilities")) return ReflectionType_SecurityCapabilities;
    if (!strcmp(name, "ArticulatedJoint")) return ReflectionType_ArticulatedJoint;
    if (!strcmp(name, "AnimationContext")) return ReflectionType_AnimationContext;
    if (!strcmp(name, "Secret")) return ReflectionType_Secret;
    if (!strcmp(name, "Buffer")) return ReflectionType_Buffer;
    if (!strcmp(name, "Integer")) return ReflectionType_Integer;
    if (!strcmp(name, "Path2DControlPoint")) return ReflectionType_Path2DControlPoint;
    if (!strcmp(name, "ReplicationPV")) return ReflectionType_ReplicationPV;
    if (!strcmp(name, "FacsReplicationData")) return ReflectionType_FacsReplicationData;
    if (!strcmp(name, "AnimationMaskModifier")) return ReflectionType_AnimationMaskModifier;
    if (!strcmp(name, "Content")) return ReflectionType_Content;
    if (!strcmp(name, "NetAssetHandle")) return ReflectionType_NetAssetHandle;
    if (!strcmp(name, "NetAssetRef")) return ReflectionType_NetAssetRef;
    if (!strcmp(name, "Object")) return ReflectionType_Object;
    if (!strcmp(name, "AdReward")) return ReflectionType_AdReward;
    if (!strcmp(name, "AssetContentMap")) return ReflectionType_AssetContentMap;
    if (!strcmp(name, "SlimReplicationData")) return ReflectionType_SlimReplicationData;
    if (!strcmp(name, "User")) return ReflectionType_User;
    if (!strcmp(name, "WebViewParams")) return ReflectionType_WebViewParams;
    if (!strcmp(name, "AnimTrackPlayState")) return ReflectionType_AnimTrackPlayState;
    if (!strcmp(name, "AnimTrackMetadata")) return ReflectionType_AnimTrackMetadata;
    if (!strcmp(name, "AnimTrackWeight")) return ReflectionType_AnimTrackWeight;
    if (!strcmp(name, "ScopedInstanceIdentity")) return ReflectionType_ScopedInstanceIdentity;
    if (!strcmp(name, "Max")) return ReflectionType_Max;
    return ReflectionType_Invalid;
}
