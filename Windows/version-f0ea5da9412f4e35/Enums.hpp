#pragma once
#include <cstdint>

/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

			                𝒱𝑒𝓇𝓲𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝔱𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/

/// Determines whether an `Class.AudioDeviceInput` user ID access list acts as an
/// allow-list or a deny-list.
/// Determines whether the user IDs supplied to
/// `Class.AudioDeviceInput:SetUserIdAccessList()|SetUserIdAccessList()` are
/// treated as an allow-list or a deny-list for hearing a particular
/// `Class.AudioDeviceInput`.
/// 
/// The default `Class.AudioDeviceInput.AccessType|AccessType` is
/// `Enum.AccessModifierType.Deny`, meaning all users can hear the device unless
/// explicitly excluded.
enum class AccessModifierType : uint32_t {
	/// User IDs in the access list are permitted to hear the
	/// `Class.AudioDeviceInput` - all other users are blocked.
	Allow = 0,
	/// User IDs in the access list are blocked from hearing the
	/// `Class.AudioDeviceInput` - all other users are permitted.
	Deny = 1
};

/// A subset of AssetTypes which are relevant to only accessories.
/// AccessoryType is a subset of AssetTypes which are relevant to only
/// accessories.
/// 
/// To get the AccessoryType of an accessory, see the Type on the accessory's web
/// page. For example, see
/// [Yi the Art Teacher - Hair](https://www.roblox.com/catalog/5911063681/Yi-the-Art-Teacher-Hair).
/// 
/// AccessoryTypes are mainly used in the AccessoryBlob of HumanoidDescription,
/// and to specify the type in Accessory.
enum class AccessoryType : uint32_t {
	/// If the accessory type is not known.
	Unknown = 0,
	/// A hat accessory (may be a rigid or layered accessory).
	Hat = 1,
	/// A hair accessory (may be a rigid or layered accessory).
	Hair = 2,
	/// A face accessory (may be a rigid or layered accessory).
	Face = 3,
	/// A neck Accessory (may be a rigid or layered accessory).
	Neck = 4,
	/// A shoulder accessory (may be a rigid or layered accessory).
	Shoulder = 5,
	/// A front accessory (may be a rigid or layered accessory).
	Front = 6,
	/// A back accessory (may be a rigid or layered accessory).
	Back = 7,
	/// A waist accessory (may be a rigid or layered accessory).
	Waist = 8,
	/// A layered clothing T-Shirt accessory.
	TShirt = 9,
	/// A layered clothing shirt accessory.
	Shirt = 10,
	/// A layered clothing pants accessory.
	Pants = 11,
	/// A layered clothing jacket accessory.
	Jacket = 12,
	/// A layered clothing sweater accessory.
	Sweater = 13,
	/// A layered clothing shorts accessory.
	Shorts = 14,
	/// A layered clothing left shoe accessory.
	LeftShoe = 15,
	/// A layered clothing right shoe accessory.
	RightShoe = 16,
	/// A layered clothing dress or skirt accessory.
	DressSkirt = 17,
	/// A layered accessory for avatar eyebrows.
	Eyebrow = 18,
	/// A layered accessory for avatar eyelashes.
	Eyelash = 19
};

/// Specifies how Roblox Studio handles local files when file sync stops.
/// Controls the behavior selected by the
/// `Class.Studio.ActionOnStopSync|ActionOnStopSync` setting.
enum class ActionOnStopSync : uint32_t {
	/// Prompts before deleting local files when file sync stops.
	AlwaysAsk = 0,
	/// Keeps local files when file sync stops.
	KeepLocalFiles = 1,
	/// Deletes local files when file sync stops.
	DeleteLocalFiles = 2
};

/// Describes the outcome of a game action, such as winning, losing, or drawing.
/// Legacy enum historically used with the player-points and badge-award system to
/// classify game results. No current engine API property or method accepts or
/// returns this enum; it remains in the Luau reflection system for backward
/// compatibility.
enum class ActionType : uint32_t {
	/// No specific game action occurred.
	Nothing = 0,
	/// The game or round was paused.
	Pause = 1,
	/// The player lost the game or round.
	Lose = 2,
	/// The game or round ended in a draw with no winner.
	Draw = 3,
	/// The player won the game or round.
	Win = 4
};

/// Describes a player's payer status bucket for the current experience.
/// The `ActivePayerStatus` enum describes a player's payer status bucket for the
/// current experience.
enum class ActivePayerStatus : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player has not made a qualifying purchase in the experience.
	Never = 1,
	/// The player has previously spent in the experience but is not currently an
	/// active payer.
	Lapsed = 2,
	/// The player is in the casual payer bucket for the experience.
	Casual50Percent = 3,
	/// The player is in the intermediate payer bucket for the experience.
	Intermediate35Percent = 4,
	/// The player is in the top payer bucket for the experience.
	Top15Percent = 5
};

/// Determines the coordinate frame in which a mover constraint's directional
/// properties are expressed.
/// Determines the coordinate frame in which a mover constraint's directional
/// properties — such as force, velocity, or torque vectors — are interpreted.
/// Used by the `Class.VectorForce.RelativeTo`, `Class.LinearVelocity.RelativeTo`,
/// `Class.Torque.RelativeTo`, and `Class.AngularVelocity.RelativeTo` properties,
/// as well as `Class.AlignPosition.ForceRelativeTo`. When set to
/// `Enum.ActuatorRelativeTo|Attachment0` or
/// `Enum.ActuatorRelativeTo|Attachment1`, the direction rotates with the
/// referenced attachment's orientation; when set to
/// `Enum.ActuatorRelativeTo|World`, it remains fixed in world space.
enum class ActuatorRelativeTo : uint32_t {
	/// The directional property is interpreted in the local coordinate frame of
	/// `Class.Constraint.Attachment0|Attachment0`, rotating with its parent part.
	Attachment0 = 0,
	/// The directional property is interpreted in the local coordinate frame of
	/// `Class.Constraint.Attachment1|Attachment1`, rotating with its parent part.
	Attachment1 = 1,
	/// The directional property is interpreted in world-space coordinates,
	/// remaining constant regardless of part orientation.
	World = 2
};

/// The active physics component of the constraint.
enum class ActuatorType : uint32_t {
	/// The motor and servo components are both disabled.
	None = 0,
	/// The motor component is enabled. Motor properties are active and the
	/// actuator will apply continuous force.
	Motor = 1,
	/// The servo component is enabled. Servo properties are active and the
	/// actuator will apply force to approach the servo's target.
	Servo = 2
};

/// Indicates whether an ad is available or the reason it cannot be shown.
enum class AdAvailabilityResult : uint32_t {
	/// An ad is available to show the user.
	IsAvailable = 1,
	/// The device is ineligible to receive ads.
	DeviceIneligible = 2,
	/// The experience is ineligible to receive ads. Check if its eligibility has
	/// been revoked.
	ExperienceIneligible = 3,
	/// An unspecified internal error occurred. Try fetching the ad again.
	InternalError = 4,
	/// There are no ads available to fill your ad request. You might have hit the
	/// ad frequency limit.
	NoFill = 5,
	/// The user is ineligible to receive ads during this session. The user might
	/// be under 13 or located in a blocked region.
	PlayerIneligible = 6,
	/// The publisher is ineligible to receive ads because they have not met the
	/// publisher eligibility requirements.
	PublisherIneligible = 7
};

/// Specifies the format of an ad used with `Class.AdService` methods.
/// Specifies the format of an ad passed to `Class.AdService` methods such as
/// `Class.AdService:GetAdAvailabilityNowAsync()`.
enum class AdFormat : uint32_t {
	/// A full-screen video ad that plays to completion and rewards the viewer,
	/// used as the `adFormat` argument for `Class.AdService` methods.
	RewardedVideo = 0
};

/// Describes the form factor of an ad in an `Class.AdGui`. There is currently
/// only one available size.
enum class AdShape : uint32_t {
	/// The ad has an aspect ratio of 16:9 and a minimum size of 8 by 4.5 studs.
	HorizontalRectangle = 1
};

/// Describes the method by which a player teleports during an immersive ad portal
/// flow.
/// Describes the user-initiated method by which a player teleports during an
/// immersive ad portal flow, distinguishing forward travel to the advertiser's
/// experience from a return to the publisher's experience.
enum class AdTeleportMethod : uint32_t {
	/// Default uninitialized sentinel value indicating that no teleport method
	/// has been determined yet.
	Undefined = 0,
	/// The player teleported forward to the advertiser's destination experience
	/// by walking into an `Class.AdPortal`.
	PortalForward = 1,
	/// The player initiated a return teleport to the publisher's experience by
	/// pressing the back button in the in-game menu.
	InGameMenuBackButton = 2,
	/// The player initiated a return teleport to the publisher's experience by
	/// pressing a back button rendered in the ad destination's UI overlay.
	UIBackButton = 3
};

/// Describes the type of user-interaction or system event that occurred on the
/// immersive ad UI overlay of an `Class.AdGui`.
enum class AdUIEventType : uint32_t {
	/// The player clicked the "Sponsored" label on the ad overlay, which opens
	/// the ad disclosure prompt showing advertiser and payer information.
	AdLabelClicked = 0,
	/// The player clicked the volume toggle button on the ad overlay, which mutes
	/// or unmutes the video ad audio.
	VolumeButtonClicked = 1,
	/// The player clicked the fullscreen toggle button, which smoothly zooms the
	/// camera to a centered view of the ad surface and enables audio.
	FullscreenButtonClicked = 2,
	/// The player clicked the play button on the ad overlay. If the ad is already
	/// in fullscreen, playback resumes; otherwise it enters fullscreen mode which
	/// also starts (or resumes) the video.
	PlayButtonClicked = 3,
	/// The player clicked the pause button while a video ad is playing in
	/// fullscreen mode, which pauses video playback.
	PauseButtonClicked = 4,
	/// The player clicked the close button on the fullscreen video ad view, which
	/// exits fullscreen mode and returns to the normal camera position.
	CloseButtonClicked = 5,
	/// The player clicked the "Why this ad?" link, which displays the EUDSA
	/// (European Digital Services Act) disclosure prompt showing the advertiser
	/// and payer names for the current ad creative.
	WhyThisAdClicked = 6,
	/// A system-initiated play/resume event that clears the force-pause state and
	/// resumes video playback if the stream is open.
	PlayEventTriggered = 7,
	/// A system-initiated pause event, used when the engine needs to force-pause
	/// the video (for example, when a dropdown menu opens over the ad). Prevents
	/// viewability-based auto-play from resuming playback until a corresponding
	/// system event clears that pause.
	PauseEventTriggered = 8
};

/// Describes the type of ad creative currently rendered by an `Class.AdGui`.
/// Describes the type of ad creative that an `Class.AdGui` is currently rendering
/// on its surface. Managed by the engine based on the creative asset served to
/// the ad slot.
enum class AdUIType : uint32_t {
	/// The `Class.AdGui` has no ad creative loaded and is not rendering ad
	/// content.
	None = 0,
	/// The `Class.AdGui` is rendering a static image ad creative.
	Image = 1,
	/// The `Class.AdGui` is rendering a video ad creative.
	Video = 2
};

/// Exposes the status of an immersive ad.
enum class AdUnitStatus : uint32_t {
	/// The ad unit isn't currently serving an ad and it may be configured
	/// incorrectly. An `Class.AdGui` with this status will display its fallback
	/// image.
	Inactive = 0,
	/// The ad unit is currently serving an ad. Players will observe sponsored
	/// content in an `Class.AdGui` and an `Class.AdPortal` will teleport users
	/// that walk through.
	Active = 1
};

/// Culling method used for adornments.
/// Used by `Class.HandleAdornment` to determine how it is culled.
enum class AdornCullingMode : uint32_t {
	/// Automatically culls adornment based on distance.
	Automatic = 0,
	/// Never culls adornment. Adornment is always visible.
	Never = 1
};

/// Determines the shading material and render pass used to draw a handle
/// adornment.
/// Used by the `Shading` property on handle adornments
/// (`Class.BoxHandleAdornment`, `Class.SphereHandleAdornment`,
/// `Class.CylinderHandleAdornment`, `Class.ConeHandleAdornment`,
/// `Class.PyramidHandleAdornment`) to control whether the adornment is drawn
/// unlit or lit by the scene, and whether it renders through occluding geometry
/// or on top of everything.
enum class AdornShading : uint32_t {
	/// Draws the adornment unlit and occluded by scene geometry like an ordinary
	/// world object.
	Default = 0,
	/// Draws the adornment lit by scene lighting and occluded by scene geometry.
	Shaded = 1,
	/// Draws the adornment unlit and visible through geometry that would
	/// otherwise occlude it.
	XRay = 2,
	/// Draws the adornment lit by scene lighting and visible through geometry
	/// that would otherwise occlude it.
	XRayShaded = 3,
	/// Draws the adornment unlit on top of all other geometry with no depth
	/// testing.
	AlwaysOnTop = 4
};

/// Indicates whether a player has completed age verification.
/// Result of a player's age verification check. Used by
/// `Class.Player.AgeChecked`, which defaults to `Enum.AgeCheckStatus.Unchecked`
/// and transitions to `Enum.AgeCheckStatus.Checked` when the player completes the
/// age verification flow from `Class.Player:PromptAgeCheck()`.
enum class AgeCheckStatus : uint32_t {
	/// The player has not yet completed age verification.
	Unchecked = 0,
	/// The player has successfully completed age verification.
	Checked = 1
};

/// An enum that specifies how the constraint will attempt to align the body
/// associated with the constraint.
/// An enum that specifies how the constraint will attempt to align the body
/// associated with the constraint and attachment. Depending on the configuration,
/// it can be used to align specific axes to be parallel, perpendicular, or to
/// look at a specific point.
enum class AlignType : uint32_t {
	/// @deprecated Use **PrimaryAxisParallel** instead.
	Parallel = 0,
	/// @deprecated Use **PrimaryAxisPerpendicular** instead.
	Perpendicular = 1,
	/// Aligns the primary axis to be parallel to the axis given by
	/// `Class.Constraint.Attachment1`.
	PrimaryAxisParallel = 2,
	/// Aligns the primary axis to be perpendicular to the axis given by
	/// `Class.Constraint.Attachment1`.
	PrimaryAxisPerpendicular = 3,
	/// Aligns the primary axis to look at the point given by
	/// `Class.Constraint.Attachment1` or the
	/// `Class.AlignOrientation.LookAtPosition`.
	PrimaryAxisLookAt = 4,
	/// Aligns all of the axes of `Class.Constraint.Attachment0` to the axes given
	/// by `Class.Constraint.Attachment1` or to the target orientation provided by
	/// `Class.AlignOrientation.PrimaryAxis` and
	/// `Class.AlignOrientation.SecondaryAxis`.
	AllAxes = 5
};

/// Used by `Class.SurfaceAppearance.AlphaMode` to determine how the alpha channel
/// of the `Class.SurfaceAppearance.ColorMap` of a `Class.SurfaceAppearance` is
/// used.
enum class AlphaMode : uint32_t {
	/// Overlays the `Class.SurfaceAppearance.ColorMap|ColorMap` on top of the
	/// underlying part color based on the map's alpha channel.
	Overlay = 0,
	/// Uses the `Class.SurfaceAppearance.ColorMap|ColorMap` alpha channel to
	/// control the transparency of the surface.
	Transparency = 1,
	/// Uses the `Class.SurfaceAppearance.ColorMap|ColorMap` alpha channel to
	/// control the amount of `Class.SurfaceAppearance.Color` tinting.
	TintMask = 2,
	/// Ignores the `Class.SurfaceAppearance.ColorMap|ColorMap` alpha channel and
	/// assumes an opacity value of 1 everywhere.
	Opaque = 3
};

/// Used to form a dictionary of custom fields to provide breakdowns in
/// Roblox-provided charts.
/// Used to form a dictionary of custom fields to provide breakdowns in
/// Roblox-provided charts. For example:
/// 
/// ```lua
/// local customFields = {
/// 	[Enum.AnalyticsCustomFieldKeys.CustomField01.Name] = "value1",
/// 	[Enum.AnalyticsCustomFieldKeys.CustomField02.Name] = "value2",
/// 	[Enum.AnalyticsCustomFieldKeys.CustomField03.Name] = "value3",
/// }
/// ```
enum class AnalyticsCustomFieldKeys : uint32_t {
	/// The first custom field key, used to provide a breakdown dimension in
	/// Roblox-provided analytics charts.
	CustomField01 = 0,
	/// The second custom field key, used to provide a breakdown dimension in
	/// Roblox-provided analytics charts.
	CustomField02 = 1,
	/// The third custom field key, used to provide a breakdown dimension in
	/// Roblox-provided analytics charts.
	CustomField03 = 2
};

/// Describes the type of economic transaction in
/// `Class.AnalyticsService:FireInGameEconomyEvent()`.
/// This enum is used as an argument in
/// `Class.AnalyticsService:FireInGameEconomyEvent()`.
enum class AnalyticsEconomyAction : uint32_t {
	/// Default action. Used for an undefined Action.
	Default = 0,
	/// Indicates the acquisition of an in game resource. For example, a player
	/// acquires virtual currency by completing a specific in game task.
	Acquire = 1,
	/// Indicates the spending or loss of an in game resource. For example, a
	/// player spends virtual currency to acquire a new item.
	Spend = 2
};

/// Specifies the direction of currency flow in an economy event logged by
/// `Class.AnalyticsService:LogEconomyEvent()`.
/// Passed as the `flowType` argument to
/// `Class.AnalyticsService:LogEconomyEvent()` to indicate whether an
/// in-experience currency transaction is adding currency to or removing currency
/// from a player's balance. Use `Enum.AnalyticsEconomyFlowType.Source|Source`
/// when the player gains currency (for example, purchasing coins with Robux or
/// earning gold from gameplay) and `Enum.AnalyticsEconomyFlowType.Sink|Sink` when
/// the player spends currency (for example, buying an item from a shop).
enum class AnalyticsEconomyFlowType : uint32_t {
	/// Currency is being removed from the player's account.
	Sink = 0,
	/// Currency is being added to the player's account.
	Source = 1
};

/// Categorizes the context of an in-experience economic transaction for use with
/// `Class.AnalyticsService:LogEconomyEvent()`.
/// This enum provides recommended values for the `transactionType` parameter of
/// `Class.AnalyticsService:LogEconomyEvent()`. Because `transactionType` is typed
/// as a string, pass the `Name` property of the enum item (for example,
/// `Enum.AnalyticsEconomyTransactionType.IAP.Name`). Using these standard values
/// enables Roblox-provided analytics charts to break down economy data by
/// transaction context. Custom strings are also accepted; the experience is
/// limited to 20 unique transaction types total.
enum class AnalyticsEconomyTransactionType : uint32_t {
	/// Represents a source of currency purchased via Robux, for example
	/// in-experience "gold" purchased for Robux.
	IAP = 0,
	/// Purchases within a shop, for example in-experience "coins" used to buy an
	/// item within the experience.
	Shop = 1,
	/// Currency earned or paid through gameplay, for example in-experience "gold"
	/// earned from winning a match.
	Gameplay = 2,
	/// Purchase with direct context to a reward, for example in-experience "gold"
	/// used to purchase an extra life.
	ContextualPurchase = 3,
	/// Time-based reward, for example in-experience "gold" rewarded for logging
	/// in daily.
	TimedReward = 4,
	/// Transaction related to onboarding, for example in-experience "gold"
	/// rewarded for completing the tutorial.
	Onboarding = 5
};

/// Specifies the severity level of an analytics log event passed to
/// `Class.AnalyticsService:FireLogEvent()`.
/// This enum is used as an argument in `Class.AnalyticsService:FireLogEvent()` to
/// describe the error severity level.
enum class AnalyticsLogLevel : uint32_t {
	/// Trace is the noisiest level, rarely (if ever) enabled for a production
	/// app.
	Trace = 0,
	/// Used for debugging.
	Debug = 1,
	/// Used for general informational messages that highlight progress or state
	/// changes during normal operation.
	Information = 2,
	/// Used for warning.
	Warning = 3,
	/// When functionality is unavailable or expectations broken.
	Error = 4,
	/// The most critical level, Fatal events demand immediate attention.
	Fatal = 5
};

/// This enum is used as an argument in
/// `Class.AnalyticsService:FirePlayerProgressionEvent()` to describe the status
/// of progression.
enum class AnalyticsProgressionStatus : uint32_t {
	/// Default status. Used for an undefined status.
	Default = 0,
	/// Indicates the beginning of progression.
	Begin = 1,
	/// Indicates the progression completed.
	Complete = 2,
	/// Indicates the progression abandoned.
	Abandon = 3,
	/// Indicates the progression failed.
	Fail = 4
};

/// Specifies the player's progression status in a level-progression event logged
/// by `Class.AnalyticsService:LogProgressionEvent()`.
/// Passed as the `status` argument to
/// `Class.AnalyticsService:LogProgressionEvent()` to indicate whether a player is
/// starting, completing, or failing a level attempt. The convenience methods
/// `Class.AnalyticsService:LogProgressionStartEvent()`,
/// `Class.AnalyticsService:LogProgressionCompleteEvent()`, and
/// `Class.AnalyticsService:LogProgressionFailEvent()` set this value
/// automatically; use `Enum.AnalyticsProgressionType.Custom|Custom` for
/// progression events that fall outside the standard lifecycle.
enum class AnalyticsProgressionType : uint32_t {
	/// A custom progression status for events outside the standard
	/// start/fail/complete lifecycle.
	Custom = 0,
	/// The player started the level attempt.
	Start = 1,
	/// The player failed the level attempt.
	Fail = 2,
	/// The player completed the level successfully.
	Complete = 3
};

/// Indicates the current status or final outcome of a video-to-animation
/// conversion started by
/// `Class.AssetService:PromptImportAnimationClipFromVideoAsync()`.
/// Describes the status of a video-to-animation conversion initiated by
/// `Class.AssetService:PromptImportAnimationClipFromVideoAsync()`. Values in this
/// enum are reported both as progress updates through the method's
/// `progressCallback` and as the final outcome in the returned tuple.
enum class AnimationClipFromVideoStatus : uint32_t {
	/// The video-to-animation job is being set up on the server.
	Initializing = 0,
	/// The job has been queued on the server and is waiting for processing
	/// resources to become available.
	Pending = 1,
	/// The server is actively analyzing the video and extracting motion-capture
	/// data to generate the animation clip.
	Processing = 2,
	/// The server-side video processing encountered an unspecified error.
	ErrorGeneric = 4,
	/// The video was successfully converted into an `Class.AnimationClip`, which
	/// is returned as the second element of the result tuple.
	Success = 6,
	/// Processing failed because the uploaded video exceeds the maximum allowed
	/// duration (15 seconds).
	ErrorVideoTooLong = 7,
	/// Processing failed because no person could be detected in the video; the
	/// video must show a person fully in frame, facing the camera.
	ErrorNoPersonDetected = 8,
	/// Processing failed because the video is too shaky for reliable motion
	/// capture; a more stable recording is required.
	ErrorVideoUnstable = 9,
	/// Processing could not be completed in time, typically due to high request
	/// volume on the video processing backend.
	Timeout = 10,
	/// The player declined the consent prompt or provided no input, so the video
	/// upload was not started.
	Cancelled = 11,
	/// Processing failed because more than one person was detected in the video;
	/// the video must contain a single person fully in frame.
	ErrorMultiplePeople = 12,
	/// The client-side video upload failed before the video reached the
	/// processing backend.
	ErrorUploadingVideo = 2001
};

/// Specifies how an `Enum.AnimationNodeType.OneShotNode` combines its one-shot
/// pose with its base pose.
/// Used by the `Enum.AnimationNodeType.OneShotNode` to choose the blend operation
/// applied to its one-shot input as it layers over the base input. Mirrors the
/// behavior of the `Enum.AnimationNodeType.OverNode`,
/// `Enum.AnimationNodeType.AddNode`, and `Enum.AnimationNodeType.SubtractNode`
/// nodes.
enum class AnimationNodeBlendMode : uint32_t {
	/// Composites the one-shot pose on top of the base pose, replacing it by the
	/// current blend weight.
	Over = 0,
	/// Adds the one-shot pose to the base pose as an additive layer scaled by the
	/// current blend weight.
	Add = 1,
	/// Subtracts the one-shot pose from the base pose scaled by the current blend
	/// weight.
	Subtract = 2
};

/// Specifies the type of an animation graph node, determining how it processes or
/// combines animation data.
/// Used by `Class.AnimationNodeDefinition.NodeType` to define how a node in an
/// animation graph processes animation. Setting a node's type resets its input
/// pins to the default set for that type.
/// 
/// For nodes that switch between inputs, see
/// [transitions](https://create.roblox.com/docs/animation/graph-editor#transitions) for transition
/// configuration and behavior.
/// 
/// #### ClipNode
/// 
/// <img src="/assets/animation/graph-editor/Clip-Node.png" width="30%" alt="Clip node" />
/// 
/// A reference to an `Class.AnimationClip` asset. This serves as a leaf node in
/// the graph, generating the raw animation data that feeds into other nodes for
/// blending, selection, or modification.
/// 
/// ##### Inputs
/// 
/// - None
/// 
/// ##### Properties
/// 
/// | Property        | Type                    | Description                                                                                                   |
/// | --------------- | ----------------------- | ------------------------------------------------------------------------------------------------------------- |
/// | **AnimationId** | String                  | The animation asset to play (for example, `rbxassetid://12345`).                                              |
/// | **PlayMode**    | `AnimationNodePlayMode` | Defines the behavior of the clip once it reaches the end of its duration.                                     |
/// | **Reverse**     | Boolean                 | Controls the direction of playback.                                                                           |
/// | **Speed**       | Number                  | A multiplier for the playback rate. `0.0` pauses the graph, `1.0` is normal speed, and `2.0` is double speed. |
/// | **Trim**        | Boolean                 | Toggles whether the clip's duration should be truncated.                                                      |
/// | **TrimStart**   | Number                  | The absolute timestamp (in seconds) where playback should begin.                                              |
/// | **TrimEnd**     | Number                  | The absolute timestamp (in seconds) where playback should terminate.                                          |
/// 
/// **PlayMode** accepts the following values:
/// 
/// - **Loop (default)**: Automatically restarts from the beginning once the clip
///   finishes.
/// - **PingPong**: Plays from start to end, then immediately plays in reverse
///   from end to start.
/// - **OnceAndHold**: Plays once and maintains the final pose upon completion.
/// - **OnceAndReset**: Plays once and snaps back to the initial start pose upon
///   completion.
/// 
/// ##### Event data
/// 
/// - **Event Handling:** None. This is a leaf node with no children.
/// - **Event Emission:** Reads custom markers embedded in the animation clip
///   (e.g., "Footstep", "WeaponSwing") and emits them as named events at the
///   precise frame they occur. If the clip is trimmed, only markers within the
///   defined `[TrimStart, TrimEnd]` interval (inclusive) are emitted.
/// 
/// <br /><br />
/// 
/// #### SelectNode
/// 
/// <img src="/assets/animation/graph-editor/Select-Node.png" width="30%" alt="Select node" />
/// 
/// Selects between any number of inputs via the Selection property. Whenever the
/// current selection changes, it triggers a new
/// [transition](https://create.roblox.com/docs/animation/graph-editor#transitions).
/// 
/// ##### Inputs
/// 
/// - **Input1...InputN**
/// 
/// ##### Properties
/// 
/// | Property      | Type   | Description                                                                                     |
/// | ------------- | ------ | ----------------------------------------------------------------------------------------------- |
/// | **Selection** | String | The unique ID of the input to select, matching the input connection name (for example, "Walk"). |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** Events from the currently selected input pass through
///   with their weight unchanged.
/// - **Event Emission:** Passes through all events from the currently selected
///   input only. During a transition, event emission follows
///   [global event rules](https://create.roblox.com/docs/animation/graph-editor#global-event-rules).
/// 
/// <br /><br />
/// 
/// #### PrioritySelectNode
/// 
/// <img src="/assets/animation/graph-editor/Priority-Select-Node.png" width="30%" alt="Priority Select node" />
/// 
/// Evaluates a list of connected inputs from top to bottom and plays the first
/// one whose condition evaluates to true. This allows for hierarchical animation
/// selection based on specific logic. Whenever the current selection changes, it
/// triggers a new [transition](https://create.roblox.com/docs/animation/graph-editor#transitions).
/// 
/// ##### Inputs
/// 
/// - **Input1...InputN**
///   - **Trigger** (Boolean): A logical condition that must be true for this
///     input to activate. This is wired to a boolean parameter.
///   - **TransitionOverrideInterruptible** (`AnimationNodeInterruptible`):
///     Defines the rule for when this active animation can be interrupted by a
///     higher-priority input. Overrides the node-level **DefaultInterruptible**
///     setting.
///     - **Always (default)**: The input can be interrupted at any time by a
///       higher-priority condition.
///     - **Finished**: The current animation must complete its playback before a
///       higher-priority input can take over.
///     - **Trigger**: The input is only interruptible when the
///       `InterruptibleTrigger` is set to true.
///   - **InterruptibleTrigger** (Boolean): Only available if
///     **TransitionOverrideInterruptible** is set to **Trigger**. The input can
///     be interrupted when this specific expression is true.
/// 
/// ##### Properties
/// 
/// | Property                 | Type                         | Description                                                                                                                                     |
/// | ------------------------ | ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- |
/// | **DefaultInterruptible** | `AnimationNodeInterruptible` | The baseline interruption rule applied to all inputs. Each input can override this with its **TransitionOverrideInterruptible** input property. |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** Events from the currently selected input pass through
///   with their weight unchanged.
/// - **Event Emission:** Passes through all events from the currently selected
///   input only. During a transition, event emission follows
///   [global event rules](https://create.roblox.com/docs/animation/graph-editor#global-event-rules).
/// 
/// <br /><br />
/// 
/// #### SequenceNode
/// 
/// <img src="/assets/animation/graph-editor/Sequence-Node.png" width="30%" alt="Sequence node" />
/// 
/// Activates connected inputs in a specific sequential order based on defined
/// wait conditions. Whenever the current selection changes, it triggers a new
/// [transition](https://create.roblox.com/docs/animation/graph-editor#transitions).
/// 
/// ##### Inputs
/// 
/// - **Input1...InputN**
///   - **TransitionOverrideWaitFor** (`AnimationNodeWaitFor`): Specifies the
///     condition that must be met before the sequence advances to the next input.
///     Overrides the node-level **DefaultWaitFor** setting.
///     - **Finished (default)**: Advances to the next input when the current
///       input completes a cycle. The advancement behavior depends on the
///       connected input:
///       - **Play-once clip**: Advances when the clip finishes.
///       - **Looping clip**: Advances after one full loop completes.
///       - **Sequence with infinite loops**: Advances after one full cycle
///         through all inputs.
///       - **Sequence with finite loops**: Advances after all loops complete.
///     - **Trigger**: Activates the next input when a custom logical expression
///       evaluates to true.
///   - **WaitForTrigger** (Boolean): Only available when
///     `TransitionOverrideWaitFor` is set to `Trigger`.
/// 
/// ##### Properties
/// 
/// | Property           | Type                   | Description                                                                                                                                                                                    |
/// | ------------------ | ---------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | **LoopCount**      | Number                 | The number of times to cycle through the entire sequence. A value of `0` (default) indicates an infinite loop. Once reached, the node respects the looping or hold setting of the final input. |
/// | **DefaultWaitFor** | `AnimationNodeWaitFor` | The baseline wait condition applied to all inputs. Each input can override this with its **TransitionOverrideWaitFor** input property.                                                         |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** Events from the currently active input pass through with
///   their weight unchanged.
/// - **Event Emission:** Passes through all events from the currently active
///   input in the sequence only. During a transition, event emission follows
///   [global event rules](https://create.roblox.com/docs/animation/graph-editor#global-event-rules).
/// 
/// <br /><br />
/// 
/// #### RandomSequenceNode
/// 
/// <img src="/assets/animation/graph-editor/Random-Sequence-Node.png" width="30%" alt="Random Sequence node" />
/// 
/// Selects and plays one of its connected inputs at random. When the currently
/// selected animation completes, the node randomly picks another input to play.
/// Assign each input a specific weight to influence the probability of it being
/// chosen. Whenever the current selection changes, it triggers a new
/// [transition](https://create.roblox.com/docs/animation/graph-editor#transitions).
/// 
/// ##### Inputs
/// 
/// - **Input1...InputN**
///   - **Weight** (Number): Determines the probability of this input being
///     selected; higher weights increase the chance of selection.
/// 
/// ##### Properties
/// 
/// | Property      | Type   | Description                                                                                                                                                                       |
/// | ------------- | ------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | **PlayCount** | Number | The number of inputs the node plays before stopping. Once reached, the node respects the looping or hold setting of the final input. Defaults to `0`, which repeats indefinitely. |
/// | **Seed**      | Number | A value used to initialize the random number generator, ensuring the sequence remains consistent across clients. Defaults to `-1`, which uses a random seed.                      |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** Events from the currently active input pass through with
///   their weight unchanged.
/// - **Event Emission:** Passes through all events from the currently active
///   input in the sequence only. During a transition, event emission follows
///   [global event rules](https://create.roblox.com/docs/animation/graph-editor#global-event-rules).
/// 
/// <br /><br />
/// 
/// #### OverNode
/// 
/// <img src="/assets/animation/graph-editor/Over-Node.png" width="30%" alt="Over node" />
/// 
/// Layers the **Over** pose on top of the Base pose. When combined with a Mask
/// node, masked-out joints in the **Over** pose reveal the **Base** pose
/// entirely, creating a transparent overlay effect.
/// 
/// ##### Inputs
/// 
/// - **Base**: The background or bottom layer, typically a full-body animation
///   like locomotion or an idle state.
/// - **Over**: The foreground or top layer to be applied over the base, such as a
///   hand gesture or tool-use animation.
/// 
/// ##### Properties
/// 
/// | Property   | Type   | Description                                                                                               |
/// | ---------- | ------ | --------------------------------------------------------------------------------------------------------- |
/// | **Weight** | Number | The blend weight used to attenuate the **Over** pose. Defaults to `1.0` (full override) and is unclamped. |
/// 
/// ##### Event data
/// 
/// - **Event Handling:**
///   - The node listens for events from both the **Base** and **Over** inputs.
/// - **Event Emission:**
///   - **Base Events**: All events from the Base input are passed through
///     unmodified.
///   - **Over Events**: Events from the Over input are scaled by the Weight
///     property.
///     - At Weight `0.5`, **Over** events propagate at half weight
///     - At Weight `0`, they are silenced.
/// 
/// <br /><br />
/// 
/// #### AddNode
/// 
/// <img src="/assets/animation/graph-editor/Add-Node.png" width="30%" alt="Add node" />
/// 
/// Adds the **Additive** pose to the **Base** pose, attenuated by a specific
/// **Weight** (unclamped).
/// 
/// ##### Inputs
/// 
/// - **Base**: The primary animation pose.
/// - **Additive**: The pose to be layered onto the base.
/// 
/// ##### Properties
/// 
/// | Property   | Type   | Description                                                       |
/// | ---------- | ------ | ----------------------------------------------------------------- |
/// | **Weight** | Number | Determines the strength of the additive pose applied to the base. |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for events from both the **Base** and
///   **Additive** inputs.
/// - **Event Emission:** All events from both the Base and Additive inputs are
///   passed through unmodified.
/// 
/// <br /><br />
/// 
/// #### SubtractNode
/// 
/// <img src="/assets/animation/graph-editor/Subtract-Node.png" width="30%" alt="Subtract node" />
/// 
/// Converts an animation into an additive pose by subtracting a relative base
/// pose from the target pose (`A - Weight * B`). The **Weight** scales the **B**
/// pose before subtraction (unclamped).
/// 
/// ##### Inputs
/// 
/// - **A**: The target animation pose.
/// - **B**: The relative base pose to be subtracted.
/// 
/// ##### Properties
/// 
/// | Property   | Type   | Description                                                                                                                               |
/// | ---------- | ------ | ----------------------------------------------------------------------------------------------------------------------------------------- |
/// | **Weight** | Number | Scales the **B** pose before it is subtracted from **A**. At `1.0` (default), **B** is fully subtracted; at `0.0`, no subtraction occurs. |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for events from both **Input A** and
///   **Input B**.
/// - **Event Emission:** All events from both **Input A** and **Input B** are
///   passed through unmodified.
/// 
/// <br /><br />
/// 
/// #### OneShotNode
/// 
/// <img src="/assets/animation/graph-editor/OneShot-Node.png" width="30%" alt="OneShot node" />
/// 
/// Layers a **OneShot** pose over a looping **Base** pose whenever **Trigger**
/// transitions from `false` to `true`, blending it in, holding it while it plays,
/// then blending back out. This covers the common "fire an animation on an event"
/// case (waves, punches, emotes, additive flourishes) in a single node, in place
/// of composing an `OverNode`/`AddNode`/`SubtractNode` with a
/// `PrioritySelectNode` and manually resetting a trigger every frame.
/// 
/// ##### Inputs
/// 
/// - **Base**: The looping or continuous pose played when no shot is active.
/// - **OneShot**: The pose played once, layered over **Base**, each time
///   **Trigger** fires.
/// 
/// ##### Properties
/// 
/// | Property                  | Type                          | Description                                                                                                                                                                   |
/// | ------------------------- | ----------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | **Trigger**               | Boolean                       | Starts a shot on the frame this transitions from `false` to `true`. Defaults to `false`.                                                                                      |
/// | **Cancel**                | Boolean                       | Ramps the active shot back out to **Base** on the frame this is `true`, ending it early. Defaults to `false`.                                                                 |
/// | **Interruptible**         | Boolean                       | When `true` (default), a new **Trigger** edge while a shot is already playing restarts it from the top. When `false`, **Trigger** is ignored until the current shot finishes. |
/// | **BlendMode**             | `AnimationNodeBlendMode`      | The blend operation used to combine **OneShot** with **Base**. Defaults to `Over`.                                                                                            |
/// | **TransitionInDuration**  | Number                        | Seconds spent blending **OneShot** in when a shot starts. Negative values are treated as `0`. Defaults to `0.15`.                                                             |
/// | **TransitionInCurve**     | `PoseEasingStyle`             | The easing curve used for the blend-in. Only `Linear` and `CubicV2` take effect; any other value falls back to `Linear`. Defaults to `Linear`.                                |
/// | **TransitionOutDuration** | Number                        | Seconds spent blending **OneShot** back out to **Base** when the shot ends. Negative values are treated as `0`. Defaults to `0.15`.                                           |
/// | **TransitionOutCurve**    | `PoseEasingStyle`             | The easing curve used for the blend-out. Only `Linear` and `CubicV2` take effect; any other value falls back to `Linear`. Defaults to `Linear`.                               |
/// | **TransitionOutWhen**     | `AnimationNodeTransitionWhen` | When the blend-out starts. Defaults to `Finished`.                                                                                                                            |
/// 
/// **BlendMode** accepts the following values:
/// 
/// - **Over (default)**: Layers **OneShot** on top of **Base**, matching
///   `Enum.AnimationNodeType.OverNode`.
/// - **Add**: Adds **OneShot** to **Base**, matching
///   `Enum.AnimationNodeType.AddNode`.
/// - **Subtract**: Subtracts **OneShot** from **Base**, matching
///   `Enum.AnimationNodeType.SubtractNode`.
/// 
/// **TransitionOutWhen** accepts the following values:
/// 
/// - **Finished (default)**: Starts the blend-out once the shot completes.
/// - **BeforeFinished**: Starts the blend-out one **TransitionOutDuration**
///   earlier, so it lands on the shot's final frame.
/// 
/// ##### Usage
/// 
/// In the graph editor, bind **Trigger** to a Trigger parameter rather than a
/// boolean parameter (right-click and select **Insert Parameter**. Chose
/// **Trigger** from the list). A Trigger parameter evaluates like a boolean, but
/// it automatically resets to `false` one frame after being set to `true`. This
/// lets you set it `true` repeatedly — for example while spamming a button —
/// without re-firing the shot every frame or needing to manually reset it from a
/// script; the shot still only starts on a `false`-to-`true` edge of **Trigger**.
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for events from both **Base** and
///   **OneShot**.
/// - **Event Emission:** **Base** events pass through unmodified. **OneShot**
///   events are scaled by the node's current blend weight — silent while
///   inactive, at full weight during the hold phase.
/// 
/// <br /><br />
/// 
/// #### Blend1DNode
/// 
/// <img src="/assets/animation/graph-editor/Blend1D-Node.png" width="30%" alt="Blend1D node" />
/// 
/// Linearly interpolates between the two animation poses closest to the current
/// input position on a single axis.
/// 
/// ##### Inputs
/// 
/// - **Input1...InputN**
///   - **Position** (Number): The specific coordinate for each subsequent input
///     on the blend axis.
/// 
/// ##### Properties
/// 
/// | Property      | Type                     | Description                                                                                                                                                                                    |
/// | ------------- | ------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | **Position**  | Number                   | The current active value on the blend axis used to sample the animations. If **Position** is outside the range of defined input positions, the node extrapolates using the two nearest inputs. |
/// | **PhaseSync** | `AnimationNodePhaseSync` | Configures whether the timing of child inputs should synchronize.                                                                                                                              |
/// 
/// **PhaseSync** accepts the following values:
/// 
/// - **Synced (default)**: Uses normalized synchronization. The node calculates a
///   "virtual duration" from the weighted average of active inputs. Each input
///   node's time step adjusts so all children converge on the same phase, keeping
///   animations of different lengths in lockstep.
/// - **Unsynced**: Clips advance independently at their own playback rates.
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for events from all currently active
///   child nodes.
/// - **Event Emission:** Only events from the highest-weight active input
///   propagate, scaled by its blend weight. Events from the secondary input are
///   silenced.
/// 
/// <br /><br />
/// 
/// #### Blend2DNode
/// 
/// <img src="/assets/animation/graph-editor/Blend2D-Node.png" width="30%" alt="Blend2D node" />
/// 
/// Blends multiple animation poses together based on two input parameters within
/// a 2D coordinate space. This generalizes the Blend1D node to handle complex
/// scenarios, such as blending based on both movement direction and speed
/// simultaneously.
/// 
/// ##### Inputs
/// 
/// - **Input1...InputN**
///   - **X** (Number): The X-coordinate for each subsequent input.
///   - **Y** (Number): The Y-coordinate for each subsequent input.
/// 
/// ##### Properties
/// 
/// | Property      | Type                            | Description                                                                       |
/// | ------------- | ------------------------------- | --------------------------------------------------------------------------------- |
/// | **InputMode** | `AnimationNodeBlend2DInputMode` | Defines the coordinate system used to evaluate the blendspace.                    |
/// | **X**         | Number                          | The current X-coordinate in Cartesian mode or direction in radians in Polar mode. |
/// | **Y**         | Number                          | The current Y-coordinate in Cartesian mode or magnitude in Polar mode.            |
/// | **PhaseSync** | `AnimationNodePhaseSync`        | Configures whether the timing of child inputs should synchronize.                 |
/// 
/// **InputMode** accepts the following values:
/// 
/// - **Cartesian (default)**: Uses standard 2D grid coordinates. X and Y
///   represent the current position within the blendspace.
/// - **Polar**: Uses angular and magnitude values. X represents direction in
///   radians, while Y represents movement magnitude or strength. Direction is
///   weighted more heavily, so inputs at similar angles but different magnitudes
///   blend more smoothly than inputs at different angles.
/// 
/// **PhaseSync** accepts the following values:
/// 
/// - **Synced (default)**: Uses normalized synchronization. The node calculates a
///   "virtual duration" from the weighted average of active inputs. Each input
///   node's time step adjusts so all children converge on the same phase, keeping
///   animations of different lengths in lockstep.
/// - **Unsynced**: Clips advance independently at their own playback rates.
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for events from all currently active
///   child nodes.
/// - **Event Emission:** Only events from the highest-weight active input
///   propagate, scaled by its blend weight. Events from the secondary input are
///   silenced.
/// 
/// <br /><br />
/// 
/// #### MaskNode
/// 
/// <img src="/assets/animation/graph-editor/Mask-Node.png" width="30%" alt="Mask node" />
/// 
/// Applies a predefined mask to the input Pose. A mask is defined by a weight per
/// object (e.g. joint) in the rig hierarchy, allowing for precise control or
/// "feathering" of the animation.
/// 
/// ##### Inputs
/// 
/// - **Pose**: The animation pose to be masked.
/// 
/// ##### Properties
/// 
/// | Property   | Type                | Description                                                                                                            |
/// | ---------- | ------------------- | ---------------------------------------------------------------------------------------------------------------------- |
/// | **Mask**   | `Class.ObjectValue` | A direct child of the Mask `AnimationNodeDefinition` that defines mask weights.                                        |
/// | **Invert** | Boolean             | When true, applies each weight as `1 - weight`, allowing the mask to be reused inversely without creating a new asset. |
/// 
/// **Mask** can define weights in either of the following ways:
/// 
/// - **Directly**: The `Class.ObjectValue` contains attributes that map rig
///   object names to weight values.
/// - **By Reference**: The `Class.ObjectValue` references another
///   `Class.Instance` with the mapping attributes, enabling shared masks across
///   graph nodes.
/// 
/// To populate the mask hierarchy, choose a rig schema:
/// 
/// - `Class.HumanoidRigDescription`: Standardizes the mask for humanoid
///   characters.
/// - **Picker**: Lets you select any rig in the workspace to populate the mask
///   hierarchy.
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for all events from the input **Pose**.
/// - **Event Emission:** All events from the input **Pose** are passed through
///   unmodified.
/// 
/// <br /><br />
/// 
/// #### SpeedNode
/// 
/// <img src="/assets/animation/graph-editor/Speed-Node.png" width="30%" alt="Speed node" />
/// 
/// Modifies the playback rate of an incoming animation pose.
/// 
/// ##### Inputs
/// 
/// - **Pose**: The animation pose or subgraph whose playback speed will be
///   modified.
/// 
/// ##### Properties
/// 
/// | Property  | Type   | Description                                                                                                              |
/// | --------- | ------ | ------------------------------------------------------------------------------------------------------------------------ |
/// | **Speed** | Number | A multiplier applied to the time delta ($dt$). `0.0` pauses the graph, `1.0` is normal speed, and `2.0` is double speed. |
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for events from the input **Pose**.
/// - **Event Emission:** All events from the input **Pose** are passed through
///   unmodified. Note that while the visual playback speed changes, the timing of
///   emitted events (such as markers) will scale accordingly with the modified
///   playback rate.
/// 
/// <br /><br />
/// 
/// #### GraphOutput
/// 
/// <img src="/assets/animation/graph-editor/Graph-Output-Node.png" width="30%" alt="GraphOutput node" />
/// 
/// Represents the final evaluated pose of the graph. This node is automatically
/// included in all new graphs in the Animation Graph Editor. Its presence ensures
/// that the graph is always valid and consistently produces an animation pose.
/// 
/// ##### Inputs
/// 
/// - **Pose**: The final processed animation data to be applied to the rig.
/// 
/// ##### Properties
/// 
/// - None
/// 
/// ##### Event data
/// 
/// - **Event Handling:** The node listens for all events passed through the final
///   connected input.
/// - **Event Emission:** This node serves as the exit point for the animation
///   pipeline and does not emit signals back into the graph.
enum class AnimationNodeType : uint32_t {
	/// The default unassigned type indicating a node has not been configured.
	InvalidNode = 0,
	/// An additive blend node that layers an additive pose on top of a base pose.
	AddNode = 1,
	/// A layering node that composites an overlay pose on top of a base pose
	/// using per-joint masking.
	OverNode = 2,
	/// A blend node that interpolates between multiple inputs along a single
	/// numeric axis.
	Blend1DNode = 3,
	/// A blend node that interpolates between multiple inputs using a
	/// two-dimensional position.
	Blend2DNode = 4,
	/// A leaf node that plays back an animation clip asset.
	ClipNode = 5,
	/// The terminal output node of an animation graph that receives the final
	/// pose.
	GraphOutput = 6,
	/// A node that filters its input pose through a per-joint weight mask.
	MaskNode = 7,
	/// A state node that plays the highest-priority input whose trigger condition
	/// is true.
	PrioritySelectNode = 8,
	/// A sequence node that plays its inputs in a weighted random order.
	RandomSequenceNode = 9,
	/// A state node that plays whichever input is chosen by a string selection
	/// parameter.
	SelectNode = 10,
	/// A node that plays its inputs one after another in order, optionally
	/// looping.
	SequenceNode = 11,
	/// A node that scales the playback speed of its input.
	SpeedNode = 12,
	/// A blend node that subtracts one pose from another to produce a difference
	/// pose.
	SubtractNode = 13,
	/// A layering node that plays a one-shot pose over a looping base pose on
	/// trigger, blending it in and back out.
	OneShotNode = 14,
	/// A node that selects and transitions between animation states according to
	/// a state machine definition.
	StateMachineNode = 16
};

/// The AnimationPriority Enum determines how concurrently-playing AnimationTracks
/// contribute to the final animation.
/// When multiple `Class.AnimationTrack|AnimationTracks` are played concurrently
/// by the same `Class.Animator` and affect the same animated joints, the tracks
/// are evaluated in order from high to low priority, per joint, while the total
/// track weight sum remains less than 1.0. When the track weight sum reaches or
/// exceeds 1.0 for a joint, evaluation stops and no lower-priority tracks will be
/// evaluated for that joint. `Class.AnimationTrack|AnimationTracks` with the same
/// priority that are playing concurrently will blend proportional to their track
/// weights (normalized if the sum exceeds 1).
/// 
/// Higher priority animation will override lower priority ones per joint. The
/// priority order is:
/// 
/// 1. **Action4**
/// 2. **Action3**
/// 3. **Action2**
/// 4. **Action**
/// 5. **Movement**
/// 6. **Idle**
/// 7. **Core**
/// 
/// Roblox's default character animations, including catalog animation bundles,
/// play at **Core** priority. **Idle** through **Action4** priority are for
/// developer use.
enum class AnimationPriority : uint32_t {
	/// (6) - Recommended priority for character idle animations.
	Idle = 0,
	/// (5) - Recommended priority for walk, run, swim, climb, and other
	/// locomotion animations.
	Movement = 1,
	/// (4) - Recommended priority for character actions that must override idle
	/// and locomotion animations.
	Action = 2,
	/// (3) - Action2 will override Action.
	Action2 = 3,
	/// (2) - Action3 will override Action2.
	Action3 = 4,
	/// (1) - Action4 is the highest priority available, overriding all other
	/// priority values.
	Action4 = 5,
	/// (7) - Lowest priority, intended for use by Roblox default animations and
	/// catalog animation bundles.
	Core = 1000
};

/// Specifies the type of an animation graph value node, determining how it
/// computes the value it publishes.
/// Used by `Class.AnimationValueNodeDefinition.NodeType` to define how a node in
/// an animation graph computes a value. Unlike an `Enum.AnimationNodeType` node,
/// a value node has no pose output: it publishes a single value that other nodes
/// read by wiring one of their properties to it.
/// 
/// #### ExpressionNode
/// 
/// <img src="/assets/animation/graph-editor/Expression-Node.png" width="30%" alt="Expression node" />
/// 
/// Evaluates a single authored Luau expression and publishes its result as the
/// node's output.
/// 
/// ##### Inputs
/// 
/// - None. An expression reads graph parameters by name instead of through fixed
///   input pins.
/// 
/// ##### Properties
/// 
/// | Property       | Type   | Description                                                          |
/// | -------------- | ------ | -------------------------------------------------------------------- |
/// | **Expression** | String | The Luau expression source to evaluate. Defaults to an empty string. |
/// 
/// See [Graph Editor expressions](https://create.roblox.com/docs/animation/expressions) for
/// expression syntax and authoring.
/// 
/// #### InvalidNode
/// 
/// The default unassigned type indicating a value node has not been configured.
enum class AnimationValueNodeType : uint32_t {
	/// The default unassigned type indicating a value node has not been
	/// configured.
	Invalid = 0,
	/// A value node that evaluates a
	/// [Luau expression](https://create.roblox.com/docs/animation/expressions) and publishes its
	/// result.
	Expression = 1
};

/// Animation Retargeting setting.
/// The AnimatorRetargetingMode Enum describes the setting for Animation
/// Retargeting. Retargeting adapts animations to various character rigs based on
/// their proportions.
enum class AnimatorRetargetingMode : uint32_t {
	/// Retargeting in default state, opt-in initially but subject to change.
	Default = 0,
	/// Animation retargeting is off; animations play exactly as authored without
	/// adapting joint transforms to the character's body proportions.
	Disabled = 1,
	/// Animation retargeting is always active; the Animator adapts animations to
	/// the character's body proportions regardless of the platform default.
	Enabled = 2
};

/// Determines whether anti-aliasing is applied when drawing on the instance.
enum class AntiAliasing : uint32_t {
	/// Disables anti-aliasing, resulting in hard edges.
	Disabled = 0,
	/// Enables anti-aliasing, resulting in soft edges.
	Enabled = 1
};

/// Describes the current lifecycle state of the Roblox application as reported by
/// `AppLifecycleObserverService:GetCurrentState()`.
/// Reports the application lifecycle state returned by
/// `AppLifecycleObserverService:GetCurrentState()` and related events.
/// Transitions follow `Enum.AppLifecycleManagerState.Detached` →
/// `Enum.AppLifecycleManagerState.Active` →
/// `Enum.AppLifecycleManagerState.Inactive` →
/// `Enum.AppLifecycleManagerState.Hidden` →
/// `Enum.AppLifecycleManagerState.Detached`; intermediate states are traversed
/// automatically when the application jumps between non-adjacent states.
enum class AppLifecycleManagerState : uint32_t {
	/// The application has not yet started or is shutting down. This is the
	/// initial state before the lifecycle manager is created and the final state
	/// entered during application termination.
	Detached = 0,
	/// The application is in the foreground and has input focus. This is the
	/// normal running state where the user is actively interacting with the
	/// experience.
	Active = 1,
	/// The application is visible but does not have input focus. On iOS this
	/// occurs during transitions such as incoming calls or notification center
	/// pull-down; on macOS it corresponds to the application resigning active
	/// status.
	Inactive = 2,
	/// The application is fully in the background and not visible to the user. On
	/// mobile platforms this corresponds to the app being backgrounded; on
	/// desktop it corresponds to the window being minimized or fully occluded.
	Hidden = 3
};

/// Indicates the result of an application update check performed by
/// `AppUpdateService`.
/// Indicates the result of an application update check performed by
/// `CheckForUpdate()`. The returned status tells the Lua app layer whether an
/// update is available, what kind of channel assignment produced it, or whether
/// the check was unsupported or failed.
enum class AppUpdateStatus : uint32_t {
	/// The default state before any update check has been performed.
	Unknown = 0,
	/// The platform does not support application updates.
	NotSupported = 1,
	/// The update check failed due to an error such as a network failure or
	/// missing initialization.
	Failed = 2,
	/// No update is currently required; the client is already running the latest
	/// version for its channel.
	NotAvailable = 3,
	/// An update is available through a public channel or production deployment.
	Available = 4,
	/// An update is available because the user is explicitly bound to a private
	/// or public channel.
	AvailableBoundChannel = 5,
	/// An update is available because the user opted into a beta program backed
	/// by a channel.
	AvailableBetaProgram = 6
};

/// Controls which part of a parent UI element a `Class.UIShadow` applies its drop
/// shadow to.
/// Controls which part of a parent UI element a `Class.UIShadow` applies its drop
/// shadow to. The default value is `Enum.ApplyShadowMode.Shape`, which casts a
/// shadow from the element's bounding frame. Set the value to
/// `Enum.ApplyShadowMode.Text` to cast the shadow from rendered glyphs instead;
/// this has no effect if the parent element is not a text-rendering object such
/// as `Class.TextLabel` or `Class.TextButton`.
enum class ApplyShadowMode : uint32_t {
	/// The shadow is applied to the parent element's frame.
	Shape = 0,
	/// The shadow is applied to the parent element's text; no-op if the parent is
	/// not a text element.
	Text = 1
};

/// Used by `Class.UIStroke.ApplyStrokeMode` to determine where to apply the
/// stroke.
/// This enum is used by `Class.UIStroke.ApplyStrokeMode` to determine whether to
/// apply the stroke to the object's border or of the text itself. For a more
/// detailed walkthrough of the UIStroke object, see Applying Strokes.
enum class ApplyStrokeMode : uint32_t {
	/// The stroke is applied to the parent UI element's text.
	Contextual = 0,
	/// The stroke is applied to the parent UI element's border.
	Border = 1
};

/// Used by `Class.UIAspectRatioConstraint.AspectType` to control sizing behavior.
enum class AspectType : uint32_t {
	/// The object will be the maximum size possible within its own
	/// `Class.GuiBase2d.AbsoluteSize|AbsoluteSize`.
	FitWithinMaxSize = 0,
	/// The object's maximum size will be the size of the parent while still
	/// maintaining the aspect ratio.
	ScaleWithParentSize = 1
};

/// Indicates whether an asset is owned by an individual user or a group.
/// Indicates whether an asset is owned by an individual user or a group. Used as
/// the `CreatorType` field in the request parameters of
/// `Class.AssetService:CreateAssetAsync()` and
/// `Class.AssetService:CreateAssetVersionAsync()` to specify the type of entity
/// that will own the resulting asset. When set to `Enum.AssetCreatorType.User`,
/// the accompanying `CreatorId` is interpreted as a user ID; when set to
/// `Enum.AssetCreatorType.Group`, it is interpreted as a group ID.
enum class AssetCreatorType : uint32_t {
	/// The asset is owned by an individual user; the accompanying creator ID is a
	/// user ID.
	User = 0,
	/// The asset is owned by a group; the accompanying creator ID is a group ID.
	Group = 1
};

/// Describes the download state of an asset requested through
/// `Class.ContentProvider`.
/// Describes the download state of an asset requested through
/// `Class.ContentProvider`. Every content ID has exactly one status at any given
/// time, transitioning from `Enum.AssetFetchStatus.None` (never requested) to
/// `Enum.AssetFetchStatus.Loading` (fetch in progress) and finally to a terminal
/// state of `Enum.AssetFetchStatus.Success`, `Enum.AssetFetchStatus.Failure`, or
/// `Enum.AssetFetchStatus.TimedOut`.
/// 
/// Query the current status with `Class.ContentProvider:GetAssetFetchStatus()`
/// and listen for transitions with
/// `Class.ContentProvider:GetAssetFetchStatusChangedSignal()`.
enum class AssetFetchStatus : uint32_t {
	/// The asset loaded successfully.
	Success = 0,
	/// The asset failed to load successfully. Subsequent attempts are likely to
	/// fail; there may be something wrong with the `Datatype.Content|Content`
	/// string.
	Failure = 1,
	/// The engine has no information about this asset. The engine never tried to
	/// load it.
	None = 2,
	/// The engine is in the middle of trying to load this asset.
	Loading = 3,
	/// The engine tried to load this asset but timed out. Future attempts to load
	/// may succeed.
	TimedOut = 4
};

/// This Enum can be used to match the AssetTypeId from
/// `Class.MarketplaceService:GetProductInfoAsync()` to an asset type.
enum class AssetType : uint32_t {
	/// The asset is an image.
	Image = 1,
	/// The asset is a classic t-shirt (a flat image applied to the avatar's
	/// torso).
	TShirt = 2,
	/// The asset is an audio clip.
	Audio = 3,
	/// The asset is a mesh.
	Mesh = 4,
	/// The asset is Luau code, for example a `Class.ModuleScript`.
	Lua = 5,
	/// The asset is a hat.
	Hat = 8,
	/// The asset is a place.
	Place = 9,
	/// The asset is a model.
	Model = 10,
	/// The asset is a shirt.
	Shirt = 11,
	/// The asset is a pants item.
	Pants = 12,
	/// The asset is a decal (image).
	Decal = 13,
	/// The asset is a head.
	Head = 17,
	/// The asset is a face.
	Face = 18,
	/// The asset is a gear item.
	Gear = 19,
	/// The asset is a badge.
	Badge = 21,
	/// The asset is an animation; also see the more specific animation type enums
	/// below.
	Animation = 24,
	/// The asset is a torso.
	Torso = 27,
	/// The asset is a right arm.
	RightArm = 28,
	/// The asset is a left arm.
	LeftArm = 29,
	/// The asset is a left leg.
	LeftLeg = 30,
	/// The asset is a right leg.
	RightLeg = 31,
	/// The asset is a pack, for example an animation package.
	Package = 32,
	/// The asset is a GamePass.
	GamePass = 34,
	/// The asset is a plugin.
	Plugin = 38,
	/// The asset is a mesh part.
	MeshPart = 40,
	/// The asset is a hair accessory.
	HairAccessory = 41,
	/// The asset is a face accessory.
	FaceAccessory = 42,
	/// The asset is a neck accessory.
	NeckAccessory = 43,
	/// The asset is a shoulder accessory.
	ShoulderAccessory = 44,
	/// The asset is a front accessory.
	FrontAccessory = 45,
	/// The asset is a back accessory.
	BackAccessory = 46,
	/// The asset is a waist accessory.
	WaistAccessory = 47,
	/// The asset is a climb animation.
	ClimbAnimation = 48,
	/// The asset is a death animation.
	DeathAnimation = 49,
	/// The asset is a fall animation.
	FallAnimation = 50,
	/// The asset is an idle animation.
	IdleAnimation = 51,
	/// The asset is a jump animation.
	JumpAnimation = 52,
	/// The asset is a run animation.
	RunAnimation = 53,
	/// The asset is a swim animation.
	SwimAnimation = 54,
	/// The asset is a walk animation.
	WalkAnimation = 55,
	/// The asset is a pose animation.
	PoseAnimation = 56,
	/// The asset is an ear accessory.
	EarAccessory = 57,
	/// The asset is an eye accessory.
	EyeAccessory = 58,
	/// The asset is an emote animation.
	EmoteAnimation = 61,
	/// The asset is a video.
	Video = 62,
	/// The asset is a layered clothing accessory representing a t-shirt.
	TShirtAccessory = 64,
	/// The asset is a layered clothing accessory representing a shirt.
	ShirtAccessory = 65,
	/// The asset is a layered clothing accessory representing pants.
	PantsAccessory = 66,
	/// The asset is a layered clothing accessory representing a jacket.
	JacketAccessory = 67,
	/// The asset is a layered clothing accessory representing a sweater.
	SweaterAccessory = 68,
	/// The asset is a layered clothing accessory representing shorts.
	ShortsAccessory = 69,
	/// The asset is a layered clothing accessory representing a left shoe.
	LeftShoeAccessory = 70,
	/// The asset is a layered clothing accessory representing a right shoe.
	RightShoeAccessory = 71,
	/// The asset is a layered clothing accessory representing a dress or skirt.
	DressSkirtAccessory = 72,
	/// The asset is a font family used for text rendering.
	FontFamily = 73,
	/// The asset is a layered eyebrow accessory.
	EyebrowAccessory = 76,
	/// The asset is a layered eyelash accessory.
	EyelashAccessory = 77,
	/// The asset is a mood animation that defines a static facial expression for
	/// a character.
	MoodAnimation = 78,
	/// The asset is a head with facial animation support.
	DynamicHead = 79,
	/// The asset is face makeup applied to a character's head via texture
	/// transfer.
	FaceMakeup = 88,
	/// The asset is lip makeup applied to a character's face via texture
	/// transfer.
	LipMakeup = 89,
	/// The asset is eye makeup applied to a character's face via texture
	/// transfer.
	EyeMakeup = 90,
	/// The asset is an avatar background used as a scene backdrop in avatar
	/// previews.
	AvatarBackground = 92,
	/// The asset is a text document.
	TextDocument = 93
};

/// Determines the asset type verification mode.
/// Determines the asset type verification mode used when calling
/// `Class.Humanoid:ApplyDescriptionAsync()` or
/// `Class.Players:CreateHumanoidModelFromDescriptionAsync()`. This verification
/// mode determines if the method will load models or not. Loading models can be
/// insecure if it's possible for malicious users to trick your game into loading
/// unexpected models that you own which may include malicious scripts. You should
/// set this to `Always` unless you want to load non-catalog assets.
enum class AssetTypeVerification : uint32_t {
	/// Use the default behavior for asset type verification.
	Default = 1,
	/// Only verify asset types on the client. Asset type verification can not be
	/// turned off on the client.
	ClientOnly = 2,
	/// Always verify the asset types to be loaded and disallow loading models.
	Always = 3
};

/// Used to determine whether voice chat is represented and controlled by
/// `Class.AudioDeviceInput` objects.
enum class AudioApiRollout : uint32_t {
	/// Voice chat will use an internal voice chat implementation that is
	/// automatic and hidden.
	Disabled = 0,
	/// Currently means the same thing as `Disabled`, but will be updated to mean
	/// `Enabled` in the future.
	Automatic = 1,
	/// Voice chat can be customized or controlled via
	/// `Class.AudioDeviceInput|AudioDeviceInputs`.
	Enabled = 2
};

/// Describes the channel layout of an audio stream.
/// The `AudioChannelLayout` enum describes the channel layout of an audio stream.
/// Audio streams contain one or more channels that are intended to be rendered
/// simultaneously with a particular arrangement of speakers. In general, more
/// channels impact performance but provide higher spatial quality.
enum class AudioChannelLayout : uint32_t {
	/// Monaural audio streams contain only one **Center** channel.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Mono.jpg" width="810" alt="Diagram showing position of channels for Mono layout." />
	Mono = 0,
	/// Stereophonic audio streams consist of two channels: **Left** and
	/// **Right**.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Stereo.jpg" width="810" alt="Diagram showing position of channels for Stereo layout." />
	Stereo = 1,
	/// Quadrophonic audio streams consist of four channels: **Left**, **Right**,
	/// **BackLeft**, and **BackRight**. Quadrophonic streams can encode
	/// forward/backward spatial information that stereo streams might struggle
	/// with.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Quad.jpg" width="810" alt="Diagram showing position of channels for Quad layout." />
	Quad = 2,
	/// Surround sound audio streams consist of five channels: **Left**,
	/// **Right**, **Center**, **BackLeft**, and **BackRight**. Surround sound
	/// streams encode spatial information with better resolution front and
	/// center.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Surround_5.jpg" width="810" alt="Diagram showing position of channels for Surround 5 layout." />
	Surround_5 = 3,
	/// 5.1 surround sound consists of six channels: **Left**, **Right**,
	/// **Center**, **BackLeft**, **BackRight**, and a **Sub** (subsonic)
	/// low‑frequency channel. 5.1 surround sound benefits from low frequencies
	/// being less directional in order to encode higher resolution spatial
	/// information versus simple 5‑channel surround sound.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Surround_5_1.jpg" width="810" alt="Diagram showing position of channels for Surround 5.1 layout." />
	Surround_5_1 = 4,
	/// 7.1 surround sound consists of eight channels: **Left**, **Right**,
	/// **Center**, **SurroundLeft**, **SurroundRight**, **BackLeft**,
	/// **BackRight**, and a **Sub** (subsonic) low‑frequency channel. 7.1
	/// surround sound is an improvement over 5.1 surround sound, offering better
	/// spatial resolution directly to the left and right as well.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Surround_7_1.jpg" width="810" alt="Diagram showing position of channels for Surround 7.1 layout." />
	Surround_7_1 = 5,
	/// 7.1.4 surround sound consists of twelve channels: **Left**, **Right**,
	/// **Center**, **SurroundLeft**, **SurroundRight**, **BackLeft**,
	/// **BackRight**, **Sub**, **TopLeft**, **TopRight**, **TopBackLeft**, and
	/// **TopBackRight**. 7.1.4 is the only currently supported channel layout
	/// that encodes height information.
	/// 
	/// <img src="/assets/engine-api/enums/AudioChannelLayout/Surround_7_1_4.jpg" width="810" alt="Diagram showing position of channels for Surround 7.1.4 layout." />
	Surround_7_1_4 = 6
};

/// Filter types used for `Class.AudioFilter` instances.
/// Families of curves that `Class.AudioFilter` can use to process incoming audio.
/// Each filter type is applied at a specified
/// `Class.AudioFilter.Frequency|Frequency` and may be shaped by additional
/// `Class.AudioFilter.Gain|Gain` or `Class.AudioFilter.Q|Q` parameters.
enum class AudioFilterType : uint32_t {
	/// Filter that boosts or reduces sound near a specified
	/// `Class.AudioFilter.Frequency|Frequency`.
	Peak = 0,
	/// Filter that boosts or reduces sound below a specified
	/// `Class.AudioFilter.Frequency|Frequency`.
	LowShelf = 1,
	/// Filter that boosts or reduces sound above a specified
	/// `Class.AudioFilter.Frequency|Frequency`.
	HighShelf = 2,
	/// Filter that cuts sound above a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -12dB/octave.
	Lowpass12dB = 3,
	/// Filter that cuts sound above a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -24dB/octave.
	Lowpass24dB = 4,
	/// Filter that cuts sound above a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -48dB/octave.
	Lowpass48dB = 5,
	/// Filter that cuts sound below a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -12dB/octave.
	Highpass12dB = 6,
	/// Filter that cuts sound below a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -24dB/octave.
	Highpass24dB = 7,
	/// Filter that cuts sound below a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -48dB/octave.
	Highpass48dB = 8,
	/// Filter that only allows sound near a specified
	/// `Class.AudioFilter.Frequency|Frequency` to be heard.
	Bandpass = 9,
	/// Filter that cuts sound near a specified
	/// `Class.AudioFilter.Frequency|Frequency`.
	Notch = 10,
	/// Filter that cuts sound above a specified
	/// `Class.AudioFilter.Frequency|Frequency`, at a slope of -6dB/octave.
	Lowpass6dB = 11
};

/// Describes the numeric format used to represent individual audio samples.
/// The `AudioSampleFormat` enum describes the numeric format used to represent
/// individual audio samples in an audio stream buffer.
enum class AudioSampleFormat : uint32_t {
	/// Samples are represented as 16-bit signed integers, ranging from `-32768`
	/// to `32767`.
	Int16 = 0,
	/// Samples are represented as 32-bit floating-point numbers, typically
	/// ranging from `-1.0` to `1.0`.
	Float32 = 1
};

/// Enum which determines how detailed audio simulation should be for
/// `Class.AudioEmitter|AudioEmitters` and `Class.AudioListener|AudioListeners`.
/// This enum, used with `Class.AudioEmitter.SimulationFidelity` and
/// `Class.AudioListener.SimulationFidelity`, determines how detailed audio
/// simulation should be.
enum class AudioSimulationFidelity : uint32_t {
	/// No acoustic simulation occurs; only direction and distance are taken into
	/// account.
	None = 0,
	/// The audio engine simulates transmission, diffraction, and reflections at a
	/// level of detail suitable to most devices.
	Automatic = 1
};

/// The ordering of audio search results.
/// The ordering of audio search results, used by
/// `Class.AudioSearchParams.SortType`.
enum class AudioSortType : uint32_t {
	/// Orders results by relevance to the search keyword.
	Relevance = 1,
	/// Orders results from most used to least used.
	MostUsed = 2,
	/// Orders results from most trending to least trending.
	Trending = 3,
	/// Orders results from newest to oldest.
	RecentlyCreated = 4,
	/// Orders results by duration, from shortest to longest.
	ShortestToLongest = 5,
	/// Orders results by duration, from longest to shortest.
	LongestToShortest = 6
};

/// The categorization of an audio asset.
/// The categorization of an audio asset between music and sound effects. This
/// categorization is used for filtering audio in `Class.AudioSearchParams`.
enum class AudioSubType : uint32_t {
	/// Represents an asset which contains music.
	Music = 1,
	/// Represents an asset which is a sound effect.
	SoundEffect = 2
};

/// For audio effects that use some internal buffering, determines the window-size
/// used.
enum class AudioWindowSize : uint32_t {
	/// The smallest buffer size, providing the lowest latency at the cost of
	/// frequency resolution.
	Small = 0,
	/// A mid-sized buffer that balances frequency resolution and latency.
	Medium = 1,
	/// The largest buffer size, providing higher frequency resolution at the cost
	/// of more latency.
	Large = 2
};

/// Enum used with `Class.Workspace.AuthorityMode`.
enum class AuthorityMode : uint32_t {
	/// Server authority with client side prediction and rollback enabled.
	Server = 0,
	/// Traditional distributed authority model where, for each instance, the
	/// engine decides whether the server or a client should be the authority;
	/// `Class.BasePart:SetNetworkOwner()` can be used to influence the decision.
	Automatic = 1
};

/// Specifies how Roblox Studio automatically indents lines in the script editor.
/// Controls the behavior selected by the **Auto Indent Rule** Studio setting.
enum class AutoIndentRule : uint32_t {
	/// Disables automatic indentation.
	Off = 0,
	/// Indents new lines according to the script's block structure.
	Absolute = 1,
	/// Indents new lines according to the script's block structure and the
	/// indentation of the reference line.
	Relative = 2
};

/// UI objects with `Class.GuiObject.AutomaticSize|AutomaticSize` enabled will
/// increase in size up to maximum size allowed by the parent (if there is one)
/// and no smaller than the `Class.GuiObject.Size|Size` property bounds.
/// UI objects with `Class.GuiObject.AutomaticSize|AutomaticSize` enabled will
/// increase in size up to maximum size allowed by the parent (if there is one)
/// and no smaller than the `Class.GuiObject.Size|Size` property bounds. To enable
/// `Enum.AutomaticSize`, set the value to an enum value other than `None`.
/// 
/// This enum is used by `Class.GuiObject.AutomaticSize` and
/// `Class.ScrollingFrame.AutomaticCanvasSize` to determine whether and how
/// resizing occurs based on child content.
/// 
/// For more information, see
/// [Automatic Sizing](https://create.roblox.com/docs/ui/size-modifiers#automatic-sizing).
enum class AutomaticSize : uint32_t {
	/// Default sizing behavior.
	None = 0,
	/// Automatically resize element along the **X** axis to fit child contents.
	X = 1,
	/// Automatically resize element along the **Y** axis to fit child contents.
	/// Text objects will only resize along the **Y** axis if their `TextWrapped`
	/// property is enabled.
	Y = 2,
	/// Automatically resize element along the **X** and **Y** axes to fit child
	/// contents.
	XY = 3
};

/// Describes the asset types that an avatar can equip.
/// Describes the asset types that an avatar can equip. See `Enum.AssetType` for
/// all asset types.
enum class AvatarAssetType : uint32_t {
	/// A classic 2D TShirt.
	TShirt = 2,
	/// A hat.
	Hat = 8,
	/// A classic 2D shirt.
	Shirt = 11,
	/// A classic 2D pants.
	Pants = 12,
	/// A head.
	Head = 17,
	/// A face.
	Face = 18,
	/// A gear.
	Gear = 19,
	/// A torso.
	Torso = 27,
	/// A right arm.
	RightArm = 28,
	/// A left arm.
	LeftArm = 29,
	/// A left leg.
	LeftLeg = 30,
	/// A right leg.
	RightLeg = 31,
	/// A hair accessory.
	HairAccessory = 41,
	/// A face accessory.
	FaceAccessory = 42,
	/// A neck accessory.
	NeckAccessory = 43,
	/// A shoulder accessory.
	ShoulderAccessory = 44,
	/// A front accessory.
	FrontAccessory = 45,
	/// A back accessory.
	BackAccessory = 46,
	/// A waist accessory.
	WaistAccessory = 47,
	/// A climb animation.
	ClimbAnimation = 48,
	/// A fall animation.
	FallAnimation = 50,
	/// An idle animation.
	IdleAnimation = 51,
	/// A jump animation.
	JumpAnimation = 52,
	/// A run animation.
	RunAnimation = 53,
	/// A swim animation.
	SwimAnimation = 54,
	/// A walk animation.
	WalkAnimation = 55,
	/// An emote animation.
	EmoteAnimation = 61,
	/// A layered clothing TShirt.
	TShirtAccessory = 64,
	/// A layered clothing shirt.
	ShirtAccessory = 65,
	/// A layered clothing pants.
	PantsAccessory = 66,
	/// A layered clothing jacket.
	JacketAccessory = 67,
	/// A layered clothing sweater.
	SweaterAccessory = 68,
	/// A layered clothing shorts.
	ShortsAccessory = 69,
	/// A layered clothing left shoe.
	LeftShoeAccessory = 70,
	/// A layered clothing right shoe.
	RightShoeAccessory = 71,
	/// A layered clothing dress or skirt.
	DressSkirtAccessory = 72,
	/// A layered eyebrow accessory.
	EyebrowAccessory = 76,
	/// A layered eyelash accessory.
	EyelashAccessory = 77,
	/// A mood animation that drives a character's facial expression.
	MoodAnimation = 78,
	/// A head with facial animation support.
	DynamicHead = 79,
	/// Face makeup applied to a character's head.
	FaceMakeup = 88,
	/// Lip makeup applied to a character's face.
	LipMakeup = 89,
	/// Eye makeup applied to a character's face.
	EyeMakeup = 90,
	/// A 2D image background displayed behind a user's avatar on their profile
	/// and thumbnail surfaces.
	AvatarBackground = 92
};

/// A bitmask enum whose items represent individual avatar chat capabilities for
/// voice and video communication within an experience.
/// A bitmask enum whose items represent individual avatar chat capabilities for
/// voice and video communication within an experience. Each item is a single bit
/// flag; multiple flags are combined with bitwise-OR to form a feature mask that
/// `IsEnabled()` can test. Flags fall into three categories: universe/place
/// settings (set by the server based on creator configuration), user eligibility
/// and opt-in state (resolved per-player from backend permissions), and
/// moderation status.
enum class AvatarChatServiceFeature : uint32_t {
	/// No avatar chat features are enabled. This is the default value of the
	/// bitmask before any capabilities are resolved.
	None = 0,
	/// Voice chat audio is enabled at the universe level. This is a server-side
	/// setting configured by the experience creator; it must be combined with
	/// `Enum.AvatarChatServiceFeature.PlaceAudio` for audio to be active in a
	/// given place.
	UniverseAudio = 1,
	/// Avatar video (camera-based facial animation) is enabled at the universe
	/// level. This is a server-side setting configured by the experience creator;
	/// it must be combined with `Enum.AvatarChatServiceFeature.PlaceVideo` for
	/// video to be active in a given place.
	UniverseVideo = 2,
	/// Voice chat audio is enabled for the current place. Both this flag and
	/// `Enum.AvatarChatServiceFeature.UniverseAudio` must be set for audio to be
	/// active in the place.
	PlaceAudio = 4,
	/// Avatar video (camera-based facial animation) is enabled for the current
	/// place. Both this flag and `Enum.AvatarChatServiceFeature.UniverseVideo`
	/// must be set for video to be active in the place.
	PlaceVideo = 8,
	/// The user meets the requirements to use voice chat audio (age-verified, not
	/// banned, etc.). Eligibility is resolved per-player from backend
	/// permissions; it does not imply the user has opted in (see
	/// `Enum.AvatarChatServiceFeature.UserAudio`).
	UserAudioEligible = 16,
	/// The user has opted in to voice chat audio. This flag is only meaningful
	/// when `Enum.AvatarChatServiceFeature.UserAudioEligible` is also set;
	/// together they indicate the user both can and has chosen to use voice.
	UserAudio = 32,
	/// The user meets the requirements to use avatar video (camera-based facial
	/// animation). Eligibility is resolved per-player from backend permissions;
	/// it does not imply the user has opted in (see
	/// `Enum.AvatarChatServiceFeature.UserVideo`).
	UserVideoEligible = 64,
	/// The user has opted in to avatar video (camera-based facial animation).
	/// This flag is only meaningful when
	/// `Enum.AvatarChatServiceFeature.UserVideoEligible` is also set; together
	/// they indicate the user both can and has chosen to use video.
	UserVideo = 128,
	/// The user is currently banned from avatar chat features. When this flag is
	/// present in the client features mask, voice and video capabilities are
	/// unavailable to the player regardless of other eligibility flags.
	UserBanned = 256,
	/// The user has completed voice verification.
	UserVerifiedForVoice = 512
};

/// Options for the Avatar Context Menu, a menu that allows users to interact with
/// other players' characters in an experience.
/// Options for the [Avatar Context Menu](https://create.roblox.com/docs/players/avatar-context-menu)
/// (ACM), a menu that allows users to interact with other players' characters in
/// an experience. Pass these values to `Class.StarterGui:SetCore()` with the
/// `"AddAvatarContextMenuOption"` or `"RemoveAvatarContextMenuOption"` options to
/// add or remove default actions from the menu.
enum class AvatarContextMenuOption : uint32_t {
	/// Sends a friend request to the selected user.
	Friend = 0,
	/// Opens a private conversation with the selected user in the in-game chat.
	Chat = 1,
	/// Plays a wave emote animation directed at the selected user.
	Emote = 2,
	/// Opens the Avatar Inspect Menu to view the selected user's avatar and
	/// equipped items.
	InspectMenu = 3
};

/// The type (Asset or Bundle) of avatar items.
enum class AvatarItemType : uint32_t {
	/// An individual avatar catalog item such as a hat, shirt, or accessory,
	/// identified by an asset ID.
	Asset = 1,
	/// A collection of related avatar items sold together as a group, identified
	/// by a bundle ID.
	Bundle = 2
};

/// The result of prompt operations of `Class.AvatarEditorService`.
/// Indicates the outcome of a prompt operation initiated by
/// `Class.AvatarEditorService`. Each `Prompt` method on the service (such as
/// `Class.AvatarEditorService:PromptSaveAvatar()`,
/// `Class.AvatarEditorService:PromptSetFavorite()`, and
/// `Class.AvatarEditorService:PromptCreateOutfit()`) displays a native dialog to
/// the user and fires a corresponding `Completed` event that passes this enum as
/// its `result` parameter.
/// 
/// - **Success** — the user confirmed the prompt and the back-end request
///   completed without error.
/// - **PermissionDenied** — the user dismissed the prompt or otherwise declined
///   to grant the requested permission.
/// - **Failed** — an error occurred while processing the request (for example, a
///   network failure or an invalid response from the server).
enum class AvatarPromptResult : uint32_t {
	/// The prompted action was completed.
	Success = 1,
	/// Denied permission to take the prompted action.
	PermissionDenied = 2,
	/// Failure while trying to take the prompted action.
	Failed = 3
};

/// Determines how `AvatarAccessoryRules` enforces accessory size limits when an
/// accessory exceeds the configured bounds.
/// Determines how `AvatarAccessoryRules` enforces accessory size limits when an
/// accessory exceeds `LimitBounds`. Used by `LimitMethod`, which defaults to
/// `Enum.AvatarSettingsAccessoryLimitMethod.Remove`. Only takes effect when
/// `AccessoryMode` is `Enum.AvatarSettingsAccessoryMode.CustomLimit`.
enum class AvatarSettingsAccessoryLimitMethod : uint32_t {
	/// Scales down rigid accessories that exceed the configured bounds, or
	/// removes them if scaling would reduce them below minimum size thresholds.
	Scale = 0,
	/// Destroys any rigid accessory whose bounding box exceeds the configured
	/// bounds.
	Remove = 1,
	/// Reports whether an accessory would be scaled or removed for exceeding the
	/// configured bounds without actually modifying it.
	PreviewScale = 2,
	/// Reports whether an accessory would be removed for exceeding the configured
	/// bounds without actually destroying it.
	PreviewRemove = 3
};

/// Determines whether `AvatarAccessoryRules` enforces custom size limits on rigid
/// accessories worn by player avatars.
/// Determines whether `AvatarAccessoryRules` enforces custom size limits on rigid
/// (non-layered) accessories worn by player avatars in the experience. Used by
/// `AccessoryMode`, which defaults to
/// `Enum.AvatarSettingsAccessoryMode.PlayerChoice`. When set to
/// `Enum.AvatarSettingsAccessoryMode.CustomLimit`, the engine evaluates each
/// rigid accessory against `LimitBounds` and applies the enforcement strategy in
/// `LimitMethod`.
enum class AvatarSettingsAccessoryMode : uint32_t {
	/// No custom size limits are applied to rigid accessories; the player's own
	/// accessory choices are displayed without modification.
	PlayerChoice = 0,
	/// The experience enforces custom size limits on rigid accessories using the
	/// LimitBounds and LimitMethod properties of `AvatarAccessoryRules`.
	CustomLimit = 1
};

/// Determines whether avatar animation clips are defined by the experience or if
/// they are determined by `AnimationPacksMode`.
/// Determines whether custom experience-defined avatar animation clips override
/// the clips determined by the `AnimationPacksMode` setting. This enum is the
/// type of `AnimationClipsMode`, which defaults to
/// `Enum.AvatarSettingsAnimationClipsMode.PlayerChoice`.
enum class AvatarSettingsAnimationClipsMode : uint32_t {
	/// The clips determined by the `AnimationPacksMode` are used, without
	/// experience-level overrides.
	PlayerChoice = 0,
	/// The experience overrides individual animation clips using the per-clip
	/// enabled and ID properties on `AvatarAnimationRules` (for example,
	/// `CustomRunAnimationEnabled` and `CustomRunAnimationId`). Only clips whose
	/// enabled flag is true are replaced.
	CustomClips = 1
};

/// Determines which base animation pack is applied to avatar characters,
/// controlling whether players use their own equipped animations or the
/// experience forces a standard R15 or R6 animation set.
/// Determines which base animation pack (locomotion assets such as run, walk,
/// fall, jump, idle, swim, swim idle, and climb) is applied to avatar characters.
/// This is the type of `AvatarAnimationRules.AnimationPacksMode`, which defaults
/// to `Enum.AvatarSettingsAnimationPacksMode.PlayerChoice`.
enum class AvatarSettingsAnimationPacksMode : uint32_t {
	/// The player's own equipped animation pack is used. The character's Animate
	/// script supplies the animations without experience-level overrides.
	PlayerChoice = 0,
	/// The experience forces the standard R15 animation pack on all characters,
	/// overriding player-equipped animations with a fixed set of R15 locomotion
	/// clips.
	StandardR15 = 1,
	/// The experience forces the standard R6 animation pack on all (R15)
	/// characters, overriding player-equipped animations with a fixed set of
	/// R6-style locomotion clips plus additional R6-style emote and tool
	/// animations.
	StandardR6 = 2
};

/// Determines how the avatar's body-part appearance is sourced in an experience
/// that uses `AvatarBodyRules`.
/// Used by `AppearanceMode` to control whether players retain their own avatar
/// body parts or the experience overrides them with custom assets. Defaults to
/// `Enum.AvatarSettingsAppearanceMode.PlayerChoice`.
/// 
/// When set to `Enum.AvatarSettingsAppearanceMode.CustomParts`, individual body
/// parts (head, face, torso, arms, legs, eyebrows, eyelashes, mood) can each be
/// independently enabled and assigned a custom asset ID. When set to
/// `Enum.AvatarSettingsAppearanceMode.CustomBody`, the entire body is replaced as
/// a single unit using `CustomBodyType` and `CustomBodyBundleId`.
enum class AvatarSettingsAppearanceMode : uint32_t {
	/// Players keep their own avatar body parts; the experience does not override
	/// any body-part assets.
	PlayerChoice = 0,
	/// The experience overrides individual body parts (head, face, torso, arms,
	/// legs) using per-part asset IDs and enablement settings on
	/// `AvatarBodyRules`.
	CustomParts = 1,
	/// The experience replaces the avatar's entire body as a single unit, using
	/// `CustomBodyType` and `CustomBodyBundleId`.
	CustomBody = 2
};

/// Determines whether players can freely scale their avatar body or whether the
/// experience enforces custom scale ranges.
/// Determines whether avatar body scaling in an experience uses full
/// platform-wide limits (player's choice) or creator-defined custom ranges. This
/// enum is used by the `BuildMode` property to control how avatar height, width,
/// head, body type, and proportions scales are constrained when a player joins
/// the experience.
enum class AvatarSettingsBuildMode : uint32_t {
	/// Players can scale their avatar body freely within the full platform-wide
	/// limits. This is the default value.
	PlayerChoice = 0,
	/// The experience enforces creator-defined min/max ranges for avatar body
	/// scales (height, width, head, body type, and proportions), overriding the
	/// platform defaults.
	CustomBuild = 1
};

/// Determines whether the experience applies a spatial bounding limit to layered
/// clothing on player characters.
/// Determines whether the experience applies a spatial bounding limit to layered
/// clothing on player characters. Used by `ClothingMode` to control how far
/// layered clothing accessories can extend from the character body. When set to
/// `Enum.AvatarSettingsClothingMode.CustomLimit`, the engine reads `LimitBounds`
/// and clips layered clothing deformation to those bounds. Defaults to
/// `Enum.AvatarSettingsClothingMode.PlayerChoice`.
enum class AvatarSettingsClothingMode : uint32_t {
	/// No spatial limit is applied to layered clothing; the player's layered
	/// clothing accessories deform without a bounding constraint.
	PlayerChoice = 0,
	/// Applies a custom spatial limit to layered clothing based on `LimitBounds`.
	CustomLimit = 1
};

/// Determines the collision geometry mode for avatars managed by
/// `AvatarCollisionRules`.
/// Determines the collision geometry mode for avatars managed by
/// `AvatarCollisionRules`. `Enum.AvatarSettingsCollisionMode.Default` uses each
/// body part's native collision geometry.
/// `Enum.AvatarSettingsCollisionMode.SingleCollider` replaces per-part collision
/// with a single box collider welded to the HumanoidRootPart.
/// `Enum.AvatarSettingsCollisionMode.Legacy` delegates to the
/// `LegacyCollisionMode` setting.
enum class AvatarSettingsCollisionMode : uint32_t {
	/// Each body part uses its native collision geometry. The HumanoidRootPart,
	/// UpperTorso, and LowerTorso collide while other parts do not. This is the
	/// default value for `CollisionMode`.
	Default = 0,
	/// A single box-shaped collider part replaces all per-part collision. The
	/// collider is welded to the HumanoidRootPart and sized by
	/// `SingleColliderSize` (default 2, 3, 1). All other parts become
	/// non-collidable and massless.
	SingleCollider = 1,
	/// Collision geometry is determined by `LegacyCollisionMode`, which selects
	/// either inner-box colliders or R6-style colliders.
	Legacy = 2
};

/// Determines whether `AvatarAccessoryRules` replaces player accessories with
/// experience-defined custom accessories.
/// Determines whether `AvatarAccessoryRules` replaces the player's rigid
/// accessories with experience-defined custom accessories. Used by
/// `CustomAccessoryMode`, which defaults to
/// `Enum.AvatarSettingsCustomAccessoryMode.PlayerChoice`. When set to
/// `Enum.AvatarSettingsCustomAccessoryMode.CustomAccessories`, the engine removes
/// existing player accessories in each enabled slot and replaces them with the
/// asset IDs specified by the per-slot `Custom*AccessoryEnabled` and
/// `Custom*AccessoryId` properties on `AvatarAccessoryRules`.
enum class AvatarSettingsCustomAccessoryMode : uint32_t {
	/// No custom accessory replacement is applied; the player's own accessory
	/// choices are displayed without modification.
	PlayerChoice = 0,
	/// The experience replaces player accessories with custom accessories defined
	/// by the per-slot properties on `AvatarAccessoryRules`.
	CustomAccessories = 1
};

/// Determines whether an experience's custom body override is identified by
/// individual asset references or by a single bundle ID.
/// This enum is used by the `CustomBodyType` property to control how a custom
/// avatar body is specified when `AppearanceMode` is set to `CustomBody`. The
/// default value is `Enum.AvatarSettingsCustomBodyType.AvatarReference`.
/// 
/// When set to `Enum.AvatarSettingsCustomBodyType.AvatarReference`, the avatar
/// body is assembled from per-part asset IDs configured on `AvatarBodyRules`
/// (head, torso, arms, legs, etc.). When set to
/// `Enum.AvatarSettingsCustomBodyType.BundleId`, the entire body is sourced from
/// the bundle specified in `CustomBodyBundleId`.
enum class AvatarSettingsCustomBodyType : uint32_t {
	/// The custom body is assembled from individual per-part asset references on
	/// `AvatarBodyRules`. This is the default value.
	AvatarReference = 0,
	/// The custom body is sourced from a single avatar bundle, identified by the
	/// `CustomBodyBundleId` property.
	BundleId = 1
};

/// Determines whether an experience overrides a player's classic 2D or layered 3D
/// clothing with creator-specified assets or preserves the player's own clothing
/// choices.
/// Determines whether the classic 2D clothing or layered 3D clothing worn by
/// player avatars in an experience is controlled by the creator or left to each
/// player's own selection. Used by `AvatarClothingRules.CustomClothingMode`
/// within `AvatarSettings`.
/// 
/// When set to `Enum.AvatarSettingsCustomClothingMode.CustomClothing`, the engine
/// applies the asset IDs from the `AvatarClothingRules` custom clothing
/// properties to each player's `Class.HumanoidDescription` on join, replacing the
/// player's equipped clothing.
enum class AvatarSettingsCustomClothingMode : uint32_t {
	/// Players keep their own clothing selections. The experience does not
	/// override clothing assets. This is the default value.
	PlayerChoice = 0,
	/// The experience enforces creator-specified clothing assets from
	/// `AvatarClothingRules`, overriding each player's own equipped clothing.
	CustomClothing = 1
};

/// Determines whether hit detection and spatial queries use the individual body
/// parts, the single collider, or a separate hitbox when
/// `AvatarCollisionRules.CollisionMode` is
/// `Enum.AvatarSettingsCollisionMode.SingleCollider`.
/// Determines whether `Class.BasePart.CanTouch` (hit detection) and
/// `Class.BasePart.CanQuery` (spatial queries) are routed to the individual
/// avatar body parts, to the single collider part, or to a separate hitbox part.
/// Only takes effect when `AvatarCollisionRules.CollisionMode` is
/// `Enum.AvatarSettingsCollisionMode.SingleCollider`; in other collision modes it
/// is ignored.
enum class AvatarSettingsHitAndTouchDetectionMode : uint32_t {
	/// Individual avatar body parts handle `Touched` events and spatial queries
	/// (`CanTouch` and `CanQuery` enabled on body parts) while the single
	/// collider part has `CanTouch` and `CanQuery` disabled. This is the default
	/// value for `AvatarCollisionRules.HitAndTouchDetectionMode`.
	UseParts = 0,
	/// The single collider part handles `Touched` events and spatial queries
	/// (`CanTouch` and `CanQuery` enabled on the collider) while all individual
	/// body parts have `CanTouch` and `CanQuery` disabled.
	UseCollider = 1,
	/// A separate, noncolliding, massless hitbox part sized by
	/// `AvatarCollisionRules.HitboxSize` handles `Touched` events and spatial
	/// queries (`CanTouch` and `CanQuery` enabled on the hitbox) while the single
	/// collider and all individual body parts have `CanTouch` and `CanQuery`
	/// disabled. Like the collider, the hitbox hangs from the top of the body and
	/// rests on the floor when it is taller than the body, so it can reach the
	/// floor without changing what the character stands on or steps over. The
	/// hitbox is removed when the character dies.
	UseHitbox = 2
};

/// Determines whether the avatar jump setting for an experience is configured
/// using jump height (studs) or jump power (force).
/// Determines whether the avatar jump setting for an experience is configured
/// using jump height (in studs) or jump power (as an upward force). Maps to
/// `Class.Humanoid.UseJumpPower`: `Enum.AvatarSettingsJumpMode.JumpHeight` sets
/// `UseJumpPower` to false so that `Class.Humanoid.JumpHeight` is used, while
/// `Enum.AvatarSettingsJumpMode.JumpPower` sets `UseJumpPower` to true so that
/// `Class.Humanoid.JumpPower` is used.
enum class AvatarSettingsJumpMode : uint32_t {
	/// The avatar jump is configured using `Class.Humanoid.JumpHeight`, which
	/// specifies the target jump height in studs. Corresponds to
	/// `Class.Humanoid.UseJumpPower` being false.
	JumpHeight = 0,
	/// The avatar jump is configured using `Class.Humanoid.JumpPower`, which
	/// applies an upward force to the character. Corresponds to
	/// `Class.Humanoid.UseJumpPower` being true.
	JumpPower = 1
};

/// Determines which legacy collision geometry is applied to R15 avatars when
/// `Enum.AvatarSettingsCollisionMode` is set to Legacy.
/// When the avatar collision rules' `CollisionMode` is set to
/// `Enum.AvatarSettingsCollisionMode|Legacy`, this enum selects which collision
/// strategy the engine uses for R15 characters. `InnerBoxColliders` replaces each
/// mesh part's physics data with inner-box geometry derived from the standard R15
/// scaling model, while `R6Colliders` creates six invisible box parts that
/// approximate the classic R6 body shape.
enum class AvatarSettingsLegacyCollisionMode : uint32_t {
	/// Creates six invisible box collider parts welded to R15 limbs to
	/// approximate classic R6 collision geometry. The engine spawns six invisible
	/// `Class.Part` instances (head, torso, left arm, right arm, left leg, right
	/// leg) parented to the character and welded to the corresponding R15 body
	/// parts. All original R15 mesh parts have their `Class.BasePart.CanCollide`,
	/// `Class.BasePart.CanTouch`, and `Class.BasePart.CanQuery` disabled and are
	/// made massless; only the HumanoidRootPart retains mass so it remains the
	/// physics assembly root.
	R6Colliders = 0,
	/// Overrides each R15 mesh part's collision physics with inner-box geometry
	/// derived from the standard R15 scaling model. The engine recalculates every
	/// `Class.MeshPart` in the character with collision data from the default R15
	/// model's bounding dimensions, producing tighter collision volumes that
	/// follow the avatar's proportions without adding extra parts. This is the
	/// default value of `LegacyCollisionMode`.
	InnerBoxColliders = 1
};

/// Determines whether the experience enforces a custom height range on player
/// characters or allows players to spawn at their natural avatar height.
/// Determines whether the experience overrides player character height with a
/// creator-defined range or leaves it at the player's own avatar height. Used by
/// `ScaleMode`. When set to `Enum.AvatarSettingsScaleMode.CustomScale`, the
/// engine clamps character height to `CustomHeight` and applies layered clothing
/// bounds from the resulting body extents. Defaults to
/// `Enum.AvatarSettingsScaleMode.PlayerChoice`.
enum class AvatarSettingsScaleMode : uint32_t {
	/// Characters spawn at their natural avatar height without any
	/// experience-level height override. This is the default value.
	PlayerChoice = 0,
	/// The experience clamps the character's height to the range specified by
	/// `CustomHeight`, overriding the player's natural avatar height.
	CustomScale = 1
};

/// Determines whether touch detection and spatial queries use the individual body
/// parts, the single collider, or a separate hitbox when
/// `AvatarCollisionRules.CollisionMode` is
/// `Enum.AvatarSettingsCollisionMode.SingleCollider`.
/// Determines whether `Class.BasePart.CanTouch` (touch detection) and
/// `Class.BasePart.CanQuery` (spatial queries) are routed to the individual
/// avatar body parts, to the single collider part, or to a separate hitbox part.
/// Only takes effect when `AvatarCollisionRules.CollisionMode` is
/// `Enum.AvatarSettingsCollisionMode.SingleCollider`; in other collision modes it
/// is ignored.
enum class AvatarSettingsTouchAndQueryDetectionMode : uint32_t {
	/// Individual avatar body parts handle `Touched` events and spatial queries
	/// (`CanTouch` and `CanQuery` enabled on body parts) while the single
	/// collider part has `CanTouch` and `CanQuery` disabled. This is the default
	/// value for `AvatarCollisionRules.TouchAndQueryDetectionMode`.
	UseParts = 0,
	/// The single collider part handles `Touched` events and spatial queries
	/// (`CanTouch` and `CanQuery` enabled on the collider) while all individual
	/// body parts have `CanTouch` and `CanQuery` disabled.
	UseCollider = 1,
	/// A separate, noncolliding, massless hitbox part sized by
	/// `AvatarCollisionRules.HitboxSize` handles `Touched` events and spatial
	/// queries (`CanTouch` and `CanQuery` enabled on the hitbox) while the single
	/// collider and all individual body parts have `CanTouch` and `CanQuery`
	/// disabled. Like the collider, the hitbox hangs from the top of the body and
	/// rests on the floor when it is taller than the body, so it can reach the
	/// floor without changing what the character stands on or steps over. The
	/// hitbox is removed when the character dies.
	UseHitbox = 2
};

/// Controls whether the R6 to R15 adapter is active, allowing R15 avatars to join
/// R6 experiences.
/// When enabled, R15 avatars joining an R6 experience receive adapter parts,
/// invisible `Class.MeshPart|MeshParts` with R6-compatible names welded to their
/// corresponding R15 parts. The adapter preserves R6-like scale and movement
/// while enabling R15 features such as layered clothing and animatable heads.
/// Used by `Class.Workspace.AvatarUnificationMode`.
enum class AvatarUnificationMode : uint32_t {
	/// Resolves to the engine's current built-in default for avatar unification,
	/// which currently behaves the same as `Disabled`.
	/// @deprecated `Class.Workspace.AvatarUnificationMode` no longer has an effect; R6 avatars always load as R6 rigs.
	Default = 0,
	/// Disables the R6-to-R15 adapter; R6 avatars in an R6 experience load using
	/// the standard R6 rig with no adapter parts applied.
	/// @deprecated `Class.Workspace.AvatarUnificationMode` no longer has an effect; R6 avatars always load as R6 rigs.
	Disabled = 1,
	/// Enables the R6-to-R15 adapter; R6 avatars joining an R6 experience receive
	/// invisible R15 adapter `Class.MeshPart|MeshParts` welded to their R6-named
	/// joints, preserving R6 scale while enabling R15 features such as layered
	/// clothing and animatable heads.
	/// @deprecated `Class.Workspace.AvatarUnificationMode` no longer has an effect; R6 avatars always load as R6 rigs.
	Enabled = 2
};

/// One of the 3D axes.
/// The Axis Enum represents the X, Y and Z axes. Primarily this Enum is used with
/// `Class.ArcHandles` and `Class.Handles`.
enum class Axis : uint32_t {
	/// The X axis.
	X = 0,
	/// The Y axis.
	Y = 1,
	/// The Z axis.
	Z = 2
};

/// Indicates the type of virtual benefit granted to a user when they purchase a
/// commerce product through `Class.CommerceService`.
/// The `BenefitType` enum classifies the virtual items that a user receives as
/// part of a `Class.CommerceService` commerce product purchase. Each benefit
/// entry returned by `Class.CommerceService:GetCommerceProductInfoAsync()`
/// includes a `BenefitType` field that identifies whether the granted item is a
/// developer product, an individual avatar asset, or an avatar bundle.
enum class BenefitType : uint32_t {
	/// The benefit is a developer product whose receipt is delivered through
	/// `Class.MarketplaceService:BindReceiptHandler()` upon purchase of a
	/// commerce product.
	DeveloperProduct = 0,
	/// The benefit is a single avatar asset granted to the user's inventory upon
	/// purchase of a commerce product.
	AvatarAsset = 1,
	/// The benefit is an avatar bundle granted to the user's inventory upon
	/// purchase of a commerce product.
	AvatarBundle = 2
};

/// @deprecated This deprecated Enum is used by `Class.HopperBin` which has also been deprecated. Neither should be used in new work.
enum class BinType : uint32_t {
	Script = 0,
	GameTool = 1,
	Grab = 2,
	Clone = 3,
	Hammer = 4
};

/// The BodyPart Enum determines which BodyPart a `Class.CharacterMesh` affects.
/// The BodyPart Enum determines which BodyPart a `Class.CharacterMesh` affects.
/// (the `Class.CharacterMesh` is used with R6 characters)
enum class BodyPart : uint32_t {
	/// The head BodyPart.
	Head = 0,
	/// The torso BodyPart.
	Torso = 1,
	/// The left arm BodyPart.
	LeftArm = 2,
	/// The right arm BodyPart.
	RightArm = 3,
	/// The left leg BodyPart.
	LeftLeg = 4,
	/// The right leg BodyPart.
	RightLeg = 5
};

/// BodyPartR15 is an enum with entries for each of the 15 body parts of an R15
/// character (plus an entry for the HumanoidRootPart).
/// BodyPartR15 is an Enum used with both `Class.Humanoid:GetBodyPartR15()` and
/// `Class.Humanoid:ReplaceBodyPartR15()` to find and replace specific body parts
/// of R15 characters.
enum class BodyPartR15 : uint32_t {
	/// Reference to a Humanoid's Head.
	Head = 0,
	/// Reference to a Humanoid's UpperTorso.
	UpperTorso = 1,
	/// Reference to a Humanoid's LowerTorso.
	LowerTorso = 2,
	/// Reference to a Humanoid's LeftFoot.
	LeftFoot = 3,
	/// Reference to a Humanoid's LeftLowerLeg.
	LeftLowerLeg = 4,
	/// Reference to a Humanoid's LeftUpperLeg.
	LeftUpperLeg = 5,
	/// Reference to a Humanoid's RightFoot.
	RightFoot = 6,
	/// Reference to a Humanoid's RightLowerLeg.
	RightLowerLeg = 7,
	/// Reference to a Humanoid's RightUpperLeg.
	RightUpperLeg = 8,
	/// Reference to a Humanoid's LeftHand.
	LeftHand = 9,
	/// Reference to a Humanoid's LeftLowerArm.
	LeftLowerArm = 10,
	/// Reference to a Humanoid's LeftUpperArm.
	LeftUpperArm = 11,
	/// Reference to a Humanoid's RightHand.
	RightHand = 12,
	/// Reference to a Humanoid's RightLowerArm.
	RightLowerArm = 13,
	/// Reference to a Humanoid's RightUpperArm.
	RightUpperArm = 14,
	/// Reference to a Humanoid's HumanoidRootPart.
	RootPart = 15,
	/// Unknown R15 Humanoid body part.
	Unknown = 17
};

/// Used by `Class.GuiObject.BorderMode` to determine where borders are placed.
/// Determines in what matter the border of a `Class.GuiObject` is laid out
/// relative to its actual dimensions. It is used by the property of the same
/// name, `Class.GuiObject.BorderMode`.
enum class BorderMode : uint32_t {
	/// As `Class.GuiObject.BorderSizePixel` increases, the border grows outward.
	/// The dimensions of the GuiObject's contents do not change.
	Outline = 0,
	/// As `Class.GuiObject.BorderSizePixel` increases, the border grows evenly
	/// inward and outward. The dimensions of the GuiObject's contents are reduced
	/// at a 1:1 ratio.
	Middle = 1,
	/// As `Class.GuiObject.BorderSizePixel` increases, the border grows evenly
	/// inward only. The dimensions of the GuiObject's contents are reduced at a
	/// 1:2 ratio.
	Inset = 2
};

/// Used by `Class.UIStroke.BorderStrokePosition` to determine the stroke's
/// position on its parent's border.
enum class BorderStrokePosition : uint32_t {
	/// The stroke renders on the outer border of the parent UI
	/// element.<br /><br /><img src="../../../assets/ui/ui-objects/UIStroke-BorderStrokePosition-Outer.png" width="312" />
	Outer = 0,
	/// The stroke renders on the center border of the parent UI
	/// element.<br /><br /><img src="../../../assets/ui/ui-objects/UIStroke-BorderStrokePosition-Center.png" width="312" />
	Center = 1,
	/// The stroke renders on the inner border of the parent UI
	/// element.<br /><br /><img src="../../../assets/ui/ui-objects/UIStroke-BorderStrokePosition-Inner.png" width="312" />
	Inner = 2
};

/// Reason for the breakpoint hit.
/// Value for the reason the `Class.ScriptDebugger.EncounteredBreak` signal fired.
enum class BreakReason : uint32_t {
	/// Pausing for a reason not covered by other values, for example if the user
	/// hit "Pause" button.
	Other = 0,
	/// Pausing on error hit in the code.
	Error = 1,
	/// Pausing on an internal breakpoint set by debugger command: e.g. step over,
	/// step into, step out of.
	SpecialBreakpoint = 2,
	/// Pausing on a user breakpoint.
	UserBreakpoint = 3
};

/// Reason that a breakpoint was removed.
enum class BreakpointRemoveReason : uint32_t {
	/// Breakpoint removal was requested by user or a command.
	Requested = 0,
	/// Script that contained the breakpoint has changed.
	ScriptChanged = 1,
	/// Script that contained the breakpoint was removed.
	ScriptRemoved = 2
};

/// Determines the set of property changed events that fire when parts are moved
/// by `Class.WorldRoot:BulkMoveTo()`.
/// Determines which property `Class.Object.Changed|Changed` events fire when
/// `Class.WorldRoot:BulkMoveTo()` repositions parts. Passing
/// `Enum.BulkMoveMode.FireCFrameChanged` instead of
/// `Enum.BulkMoveMode.FireAllEvents` reduces per-part event overhead by
/// suppressing `Class.BasePart.Position|Position`,
/// `Class.BasePart.Orientation|Orientation`, and
/// `Class.BasePart.Rotation|Rotation` changed signals while still firing the
/// `Class.BasePart.CFrame|CFrame` changed signal. The default value of the
/// `eventMode` parameter in `Class.WorldRoot:BulkMoveTo()` is
/// `Enum.BulkMoveMode.FireAllEvents`.
enum class BulkMoveMode : uint32_t {
	/// Every property changed event fires for each moved part, including
	/// `Class.BasePart.CFrame|CFrame`, `Class.BasePart.Position|Position`,
	/// `Class.BasePart.Orientation|Orientation`, and
	/// `Class.BasePart.Rotation|Rotation`.
	FireAllEvents = 0,
	/// Only the `Class.BasePart.CFrame|CFrame` property changed event fires for
	/// each moved part; `Class.BasePart.Position|Position`,
	/// `Class.BasePart.Orientation|Orientation`, and
	/// `Class.BasePart.Rotation|Rotation` changed events are suppressed.
	FireCFrameChanged = 1
};

/// The type of a bundle of assets.
enum class BundleType : uint32_t {
	/// A bundle of body parts and accessories.
	BodyParts = 1,
	/// A bundle of just animations.
	Animations = 2,
	/// A bundle of left shoe and right shoe.
	Shoes = 3,
	/// A bundle consisting of dynamicHead and moodAnimation assets, optionally
	/// with eyebrowAccessory and eyelashAccessory.
	DynamicHead = 4,
	/// A bundle containing full body parts and a dynamic head with facial
	/// animation support.
	DynamicHeadAvatar = 5
};

/// One of the buttons used by `Class.Controller`.
/// Used for accessing buttons for use by the `Class.Controller`.
enum class Button : uint32_t {
	/// Represents the dismount action that can be bound on a `Class.Controller`
	/// to detect when a player triggers the dismount input.
	Dismount = 8,
	/// Represents the jump action that can be bound on a `Class.Controller` to
	/// detect when a player triggers the jump input.
	Jump = 32
};

/// Used by `Class.GuiButton.Style` to set a special hardcoded appearance.
/// Used by `Class.GuiButton.Style` to set a special hardcoded appearance.
/// 
/// These should generally be avoided in favor of setting other appearance
/// properties, but they can be useful for wireframing.
/// 
/// Despite the Roblox naming, these are not used by any official Roblox UI.
enum class ButtonStyle : uint32_t {
	/// The button will respect the `Class.GuiObject.BorderColor3` and
	/// `Class.GuiObject.BackgroundColor3` properties.
	Custom = 0,
	/// A black background with a red border, and rounded corners.
	RobloxButtonDefault = 1,
	/// A black background with a grey border, and rounded corners.
	RobloxButton = 2,
	/// A grey background with rounded corners, and a slight drop shadow.
	RobloxRoundButton = 3,
	/// A blue background with rounded corners, and a slight drop shadow.
	RobloxRoundDefaultButton = 4,
	/// A white background with a thin grey border, rounded corners, and a slight
	/// drop shadow.
	RobloxRoundDropdownButton = 5
};

/// Specifies which cage surface — inner or outer — to read or write on a
/// `Class.BaseWrap` object.
/// Specifies which cage surface to target when calling cage-mesh methods on a
/// `Class.BaseWrap` object such as `GetVertices()`, `GetFaces()`, `GetUVs()`, and
/// `ModifyVertices()`.
/// 
/// A `Class.WrapLayer` carries two cage meshes: an inner cage that fits against
/// the surface beneath it (the avatar body or an underlying accessory) and an
/// outer cage that defines the surface the next clothing layer conforms to.
/// `CageType` selects which of those two meshes the called method operates on.
enum class CageType : uint32_t {
	/// Selects the inner cage mesh, which defines the surface that conforms to
	/// the body or underlying layer beneath the accessory.
	Inner = 0,
	/// Selects the outer cage mesh, which defines the surface that the next
	/// clothing layer above this accessory conforms to.
	Outer = 1
};

/// Used to set `Class.Player.CameraMode` to determine when first person and third
/// person cameras should be used.
/// The **CameraMode** enum is used to set `Class.Player.CameraMode` to determine
/// when first person and third person cameras should be used.
/// 
/// #### Third Person
/// 
/// In the default third person mode (`Enum.CameraMode|Classic`), the character
/// can be seen in the camera. While in this mode, the default behavior is:
/// 
/// - Players can right-click and drag (mouse), tap and drag (mobile), use the
///   secondary thumbstick (gamepad), or press the left/right arrows (keyboard) to
///   rotate the camera around their character.
/// - When a player moves their character, it faces in the corresponding movement
///   direction.
/// - Players can zoom in and out freely, even to first person on full zoom in.
/// 
/// #### First Person
/// 
/// In first person mode (`Enum.CameraMode|LockFirstPerson`), the player's camera
/// is zoomed all the way in. Unless there is a visible GUI present with the
/// `Class.GuiButton.Modal` property set to `true`, moving the mouse, tap-dragging
/// on mobile, or using the secondary thumbstick on a gamepad will rotate the
/// camera around the character.
enum class CameraMode : uint32_t {
	/// Third person camera which can be zoomed into first person.
	Classic = 0,
	/// Exclusively first person camera.
	LockFirstPerson = 1
};

/// Determines the camera navigation paradigm used in the Roblox Studio editor
/// viewport.
/// The **CameraNavigationModel** enum selects the camera navigation paradigm for
/// the Roblox Studio editor viewport. It is used by the
/// `Class.Studio.CameraNavigationModel` property to choose between the classic
/// Roblox navigation model (`Enum.CameraNavigationModel.Roblox`) and an
/// industry-standard model (`Enum.CameraNavigationModel.IndustryCompatible`) that
/// matches conventions found in other professional 3D applications.
/// 
/// `Class.Studio.CameraNavigationModel` defaults to
/// `Enum.CameraNavigationModel.Roblox`.
enum class CameraNavigationModel : uint32_t {
	/// Classic Roblox Studio camera navigation model with linear zoom and
	/// focus-locked orbiting; the default value.
	Roblox = 0,
	/// Camera navigation model that follows industry-standard 3D application
	/// conventions, with non-linear zoom and simultaneous WASD-plus-orbit
	/// movement.
	IndustryCompatible = 1
};

/// The CameraPanMode Enum represents the available pan modes for
/// `Class.Camera:SetCameraPanMode()`.
enum class CameraPanMode : uint32_t {
	/// Enables swipe and pan on mobile devices, and disables edge bump camera
	/// controls. Default.
	Classic = 0,
	/// Disables swipe to pan on mobile devices, and enables edge bump camera
	/// controls. It does not affect Windows or Mac users.
	EdgeBump = 1
};

/// Controls which input gesture adjusts the Studio camera's fly speed while
/// navigating.
/// Controls which mouse-and-keyboard gesture is used to adjust the Studio
/// camera's fly speed while navigating in the 3D viewport. The selected binding
/// intercepts the mouse scroll wheel (or touchpad pan gesture) when the
/// designated modifier is active, changing camera speed instead of zooming. This
/// setting is exposed in Studio's **Camera** preferences as
/// `Camera Speed Adjust Binding` and defaults to
/// `Enum.CameraSpeedAdjustBinding.RmbScroll`.
enum class CameraSpeedAdjustBinding : uint32_t {
	/// No input gesture is bound to camera speed adjustment; the scroll wheel
	/// always zooms.
	None = 0,
	/// Scrolling while holding the right mouse button adjusts the camera fly
	/// speed instead of zooming.
	RmbScroll = 1,
	/// Scrolling while holding Alt adjusts the camera fly speed instead of
	/// zooming.
	AltScroll = 2
};

/// Describes the camera behavior mode if using the default PlayerScripts.
/// The CameraType Enum is used in `Class.Camera.CameraType` to set the behavior
/// of the Camera object.
/// 
/// Attach, Watch, Track, and Follow all require a valid
/// `Class.Camera.CameraSubject` to work properly.
enum class CameraType : uint32_t {
	/// Camera is stationary.
	Fixed = 0,
	/// Camera moves with the subject at a fixed offset and will rotate as the
	/// subject rotates.
	Attach = 1,
	/// Camera is stationary but will rotate to keep the subject in the center of
	/// the screen.
	Watch = 2,
	/// Camera moves with the subject but does not rotate automatically.
	Track = 3,
	/// Camera moves with the subject and rotates to keep the subject in the
	/// center.
	Follow = 4,
	/// Default mode used by Roblox core scripts.
	Custom = 5,
	/// No default behavior. Used when developers need to script custom behavior.
	Scriptable = 6,
	/// The camera has a fixed Y position, but can be rotated around the player.
	Orbital = 7
};

/// Specifies the scope of permissions an experience requests for accessing the
/// device's capture gallery.
/// Used to specify the scope of permissions for accessing the user's capture
/// gallery.
enum class CaptureGalleryPermission : uint32_t {
	/// Requests permission to read captures from and upload captures to the
	/// device's gallery.
	ReadAndUpload = 0
};

/// Indicates whether a capture is a screenshot or a video recording.
/// Indicates whether a capture is a screenshot or a video recording.
/// `Class.CaptureService` passes this value in
/// `Class.CaptureService.CaptureBegan` and `Class.CaptureService.CaptureEnded`,
/// and accepts an array of `Enum.CaptureType` values as the `captureTypeFilters`
/// argument of `Class.CaptureService:ReadCapturesFromGalleryAsync()`.
enum class CaptureType : uint32_t {
	/// The capture is a screenshot image.
	Screenshot = 1,
	/// The capture is a video recording.
	Video = 2
};

/// Filters Avatar Shop catalog search results by a predefined category such as
/// Featured, Premium, or Recommended.
/// Used with `Datatype.CatalogSearchParams.CategoryFilter` to narrow Avatar Shop
/// catalog search results by category when calling
/// `Class.AvatarEditorService:SearchCatalogAsync()`. Defaults to
/// `Enum.CatalogCategoryFilter.None`, which applies no category filter and
/// returns items from all categories.
/// 
/// To filter by collectible items (Limited and Limited Unique), use
/// `Enum.SalesTypeFilter.Collectibles` via
/// `Datatype.CatalogSearchParams.SalesTypeFilter` instead of the deprecated
/// `Enum.CatalogCategoryFilter.Collectibles` value.
enum class CatalogCategoryFilter : uint32_t {
	/// No category filter is applied; returns items from all categories. This is
	/// the default value of `Datatype.CatalogSearchParams.CategoryFilter`.
	None = 1,
	/// Returns only items editorially featured in the Avatar Shop catalog.
	Featured = 2,
	/// Deprecated. Previously filtered for collectible items; use
	/// `Enum.SalesTypeFilter.Collectibles` via
	/// `Datatype.CatalogSearchParams.SalesTypeFilter` instead.
	Collectibles = 3,
	/// Returns only items created by community developers.
	CommunityCreations = 4,
	/// Returns only items available to Roblox Premium subscribers.
	Premium = 5,
	/// Returns only items recommended by the catalog for the current user.
	Recommended = 6
};

/// Specifies the time window over which catalog items are aggregated when sorting
/// `Datatype.CatalogSearchParams` results.
/// Specifies the time window used to aggregate catalog item data when sorting
/// search results via `Datatype.CatalogSearchParams.SortAggregation`. The
/// selected period determines which sales, popularity, or relevance signals are
/// counted toward the sort order. `Enum.CatalogSortAggregation.AllTime` is the
/// default.
enum class CatalogSortAggregation : uint32_t {
	/// Aggregates catalog data from the past 12 hours when sorting search
	/// results.
	Past12Hours = 1,
	/// Aggregates catalog data from the past day when sorting search results.
	PastDay = 2,
	/// Aggregates catalog data from the past 3 days when sorting search results.
	Past3Days = 3,
	/// Aggregates catalog data from the past week when sorting search results.
	PastWeek = 4,
	/// Aggregates catalog data from the past month when sorting search results.
	PastMonth = 5,
	/// Aggregates catalog data across all time when sorting search results.
	AllTime = 6
};

/// Specifies the sort order for catalog search results returned by
/// `Class.AvatarEditorService:SearchCatalogAsync()`.
/// `Enum.CatalogSortType` specifies how catalog search results are ordered when
/// using `Class.AvatarEditorService:SearchCatalogAsync()`. Set this on a
/// `Datatype.CatalogSearchParams` object via its `SortType` property, which
/// defaults to `Enum.CatalogSortType.Relevance`.
/// 
/// For `Enum.CatalogSortType.Bestselling` and
/// `Enum.CatalogSortType.MostFavorited`, the time window used to aggregate the
/// sort metric is controlled by `Datatype.CatalogSearchParams.SortAggregation`.
enum class CatalogSortType : uint32_t {
	/// Sorts catalog results by relevance to the search keyword or other query
	/// parameters.
	Relevance = 1,
	/// Sorts catalog results from the highest price to the lowest price.
	PriceHighToLow = 2,
	/// Sorts catalog results from the lowest price to the highest price.
	PriceLowToHigh = 3,
	/// Sorts catalog results by the number of times items have been favorited,
	/// with most-favorited items listed first.
	MostFavorited = 5,
	/// Sorts catalog results by creation date, with the most recently created
	/// items listed first.
	RecentlyCreated = 6,
	/// Sorts catalog results by total sales, with best-selling items listed
	/// first.
	Bestselling = 7
};

/// Deprecated enum specifying the geometric block shape of a legacy voxel terrain
/// cell, used with the removed `Class.Terrain:SetCell()` method.
/// Specifies the geometric shape of a legacy voxel terrain cell, used with the
/// deprecated `Class.Terrain:SetCell()` and `Class.Terrain:SetCells()` methods.
/// Each value corresponds to one of the five reflected block shapes in the old
/// voxel terrain system. This enum and the methods that consume it are
/// deprecated; use smooth terrain APIs instead.
/// @deprecated This enum is deprecated. It used to work with `Class.Terrain:SetCell()` - a function that is no longer supported by the `Class.Terrain` engine.
enum class CellBlock : uint32_t {
	/// A legacy voxel cell that is completely filled, occupying the full cell
	/// volume.
	Solid = 0,
	/// A legacy voxel cell shaped as a vertical wedge, occupying half of a full
	/// cell's volume.
	VerticalWedge = 1,
	/// A legacy voxel cell shaped as a corner wedge, occupying approximately
	/// one-third of a full cell's volume.
	CornerWedge = 2,
	/// A legacy voxel cell shaped as an inverse corner wedge, occupying
	/// approximately two-thirds of a full cell's volume.
	InverseCornerWedge = 3,
	/// A legacy voxel cell shaped as a horizontal wedge, occupying half of a full
	/// cell's volume.
	HorizontalWedge = 4
};

/// Material values for individual cells in the deprecated legacy voxel-based
/// `Class.Terrain` engine.
/// Deprecated. Material values for individual cells in the legacy voxel-based
/// `Class.Terrain` engine. These values were passed to the deprecated
/// `Class.Terrain:SetCell()` and `Class.Terrain:SetCells()` methods. When a
/// legacy place is loaded, the engine converts these cell materials to their
/// closest equivalents in the modern smooth terrain system. Use `Enum.Material`
/// with the current terrain APIs instead.
/// @deprecated This enum is deprecated. It used to work with the legacy `Class.Terrain` engine to set the material of terrain cells.
enum class CellMaterial : uint32_t {
	/// Represents an air (unfilled) cell in the legacy voxel terrain; converted
	/// to air in the modern terrain system.
	Empty = 0,
	/// A green grassy cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Grass` in the modern terrain system.
	Grass = 1,
	/// A sandy cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Sand` in the modern terrain system.
	Sand = 2,
	/// A red brick cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Brick` in the modern terrain system.
	Brick = 3,
	/// A speckled stone cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Slate` in the modern terrain system.
	Granite = 4,
	/// A dark paved road cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Asphalt` in the modern terrain system.
	Asphalt = 5,
	/// A dark metallic cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Concrete` in the modern terrain system.
	Iron = 6,
	/// A metallic silver cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Concrete` in the modern terrain system.
	Aluminum = 7,
	/// A golden metallic cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Concrete` in the modern terrain system.
	Gold = 8,
	/// A flat wooden plank cell material in the legacy voxel terrain, converted
	/// to `Enum.Material.WoodPlanks` in the modern terrain system.
	WoodPlank = 9,
	/// A round wooden log cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.WoodPlanks` in the modern terrain system.
	WoodLog = 10,
	/// A loose-stone cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Asphalt` in the modern terrain system.
	Gravel = 11,
	/// A rough masonry cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Concrete` in the modern terrain system.
	CinderBlock = 12,
	/// A weathered stone cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Pavement` in the modern terrain system.
	MossyStone = 13,
	/// A gray cement cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Concrete` in the modern terrain system.
	Cement = 14,
	/// A red-tinted cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Sandstone` in the modern terrain system.
	RedPlastic = 15,
	/// A blue-tinted cell material in the legacy voxel terrain, converted to
	/// `Enum.Material.Ice` in the modern terrain system.
	BluePlastic = 16,
	/// A water-filled cell in the legacy voxel terrain, converted to
	/// `Enum.Material.Water` in the modern terrain system.
	Water = 17
};

/// Specifies the corner orientation of a legacy terrain cell, used with the
/// deprecated `Class.Terrain:SetCell()` method.
/// Deprecated. Specifies the corner from which a legacy terrain cell's block
/// begins, used with the deprecated `Class.Terrain:SetCell()` and
/// `Class.Terrain:SetCells()` methods. When viewed from directly above (downward
/// vertical perspective), the value identifies which corner of the cell the block
/// occupies, ordered clockwise starting from the upper-left.
/// @deprecated This enum is deprecated. It used to work with the legacy `Class.Terrain` engine to set the orientation of terrain cells.
enum class CellOrientation : uint32_t {
	/// Upper-left corner orientation when the cell is viewed from directly above.
	NegZ = 0,
	/// Upper-right corner orientation when the cell is viewed from directly
	/// above.
	X = 1,
	/// Lower-right corner orientation when the cell is viewed from directly
	/// above.
	Z = 2,
	/// Lower-left corner orientation when the cell is viewed from directly above.
	NegX = 3
};

/// Specifies which character controller implementation an experience uses.
/// Controls the character controller selected by
/// `Class.StarterPlayer.LuaCharacterController`.
enum class CharacterControlMode : uint32_t {
	/// Uses Roblox's default character controller selection.
	Default = 0,
	/// Uses the legacy character controller.
	Legacy = 1,
	/// Does not load a character controller.
	NoCharacterController = 2,
	/// Uses the Luau character controller.
	LuaCharacterController = 3
};

/// Identifies a hook point in the legacy Luau chat pipeline for use with
/// `Class.Chat:RegisterChatCallback()` and `Class.Chat:InvokeChatCallback()`.
/// Enumerates the callback hook points available in the legacy Luau chat system.
/// Pass a value to `Class.Chat:RegisterChatCallback()` to bind a function to the
/// corresponding event, and to `Class.Chat:InvokeChatCallback()` to invoke the
/// registered function for that event. Each value targets either the client or
/// the server; attempting to register a server-only callback on the client (or
/// vice versa) raises an error.
enum class ChatCallbackType : uint32_t {
	/// Client-only callback invoked before the chat window is constructed,
	/// allowing custom settings to be supplied.
	OnCreatingChatWindow = 1,
	/// Client-only callback reserved for when the client sends a message; not
	/// currently invoked.
	OnClientSendingMessage = 2,
	/// Client-only callback invoked before a message is displayed, allowing its
	/// display data to be modified.
	OnClientFormattingMessage = 3,
	/// Server-only callback invoked when the server receives a message from a
	/// speaker, allowing the message to be modified or suppressed.
	OnServerReceivingMessage = 17
};

/// Describes the chat color.
/// The **ChatColor** enum is used to change the color of a chat using
/// `Class.Chat`.
enum class ChatColor : uint32_t {
	/// The blue chat color; the default value passed to
	/// `Class.Chat:Chat()|Chat()` and `ChatLocal()`.
	Blue = 0,
	/// The green chat color, passed as the `color` argument to
	/// `Class.Chat:Chat()|Chat()` or `ChatLocal()`.
	Green = 1,
	/// The red chat color, passed as the `color` argument to
	/// `Class.Chat:Chat()|Chat()` or `ChatLocal()`.
	Red = 2,
	/// The white chat color, passed as the `color` argument to
	/// `Class.Chat:Chat()|Chat()` or `ChatLocal()`.
	White = 3
};

/// Describes the methods of communication available to a player.
enum class ChatMode : uint32_t {
	/// The player is restricted to chatting via a menu of chat messages.
	Menu = 0,
	/// A player can chat via custom text messages and a menu of chat messages.
	TextAndMenu = 1
};

/// Describes which other users a player is permitted to exchange in-game chat
/// messages with.
/// Internally controls the user's chat privacy settings.
enum class ChatPrivacyMode : uint32_t {
	/// A player can chat with all users in a game.
	AllUsers = 0,
	/// A player cannot chat with any other users in a game.
	NoOne = 1,
	/// A player can only chat with users in a game that are on their friends
	/// list.
	Friends = 2
};

/// Describes the chat restriction status that a third-party platform reports for
/// a user.
/// The `ChatRestrictionStatus` enum represents whether a user is permitted to
/// participate in text or voice chat as determined by a third-party platform such
/// as Xbox or PlayStation. Platform-level restrictions reflect parental controls,
/// age restrictions, or account-level communication settings that the platform
/// enforces independently of Roblox. This status is surfaced through properties
/// such as `Class.Player.ThirdPartyTextChatRestrictionStatus`,
/// `FriendCommunicationRestrictionStatus`, and `VoiceChatRestrictionStatus`, all
/// of which default to `Enum.ChatRestrictionStatus.Unknown` until the platform
/// reports a definitive value.
enum class ChatRestrictionStatus : uint32_t {
	/// The platform's chat restriction status for the user has not yet been
	/// determined; this is the default value for all ChatRestrictionStatus
	/// properties.
	Unknown = 0,
	/// The third-party platform has confirmed the user has no chat restrictions
	/// in effect.
	NotRestricted = 1,
	/// The third-party platform has reported the user is restricted from chat,
	/// typically due to parental controls or platform communication settings.
	Restricted = 2
};

/// The ChatStyle Enum is used to set the style of `Class.Chat` used in a game via
/// the `Class.Players:SetChatStyle()` method.
enum class ChatStyle : uint32_t {
	/// Displays chats in the chat user interface at the top-left corner of the
	/// screen.
	Classic = 0,
	/// Displays chats in a bubble above the sender's head.
	Bubble = 1,
	/// Has the effects of Classic and Bubble combined.
	ClassicAndBubble = 2
};

/// Determines whether `Class.TextChatService` should be fully enabled or to allow
/// the legacy system.
/// Determines whether `Class.TextChatService` should be fully enabled or to allow
/// the legacy system.
/// 
/// `Class.TextChatService.ChatVersion` is not scriptable and must be set in
/// Studio.
enum class ChatVersion : uint32_t {
	/// Enables the legacy chat system.
	LegacyChatService = 0,
	/// Enables `Class.TextChatService` chat and prevents legacy chat system
	/// behavior.
	TextChatService = 1
};

/// An Enum describing various animation throttling modes on clients.
enum class ClientAnimatorThrottlingMode : uint32_t {
	/// The default animation throttling mode defined by Roblox.
	Default = 0,
	/// Disables animation throttling.
	Disabled = 1,
	/// Enables animation throttling.
	Enabled = 2
};

/// Specifies the reason for the experience server shutdown.
/// Specifies the reason for the experience server shutdown. This enum value is
/// the first parameter passed to functions bound by
/// `Class.DataModel:BindToClose()|BindToClose()`.
/// 
/// The **DeveloperShutdown** value must always be passed to functions bound by
/// `Class.DataModel:BindToClose()|BindToClose()` when they're called in Studio.
enum class CloseReason : uint32_t {
	/// The server shut down for an unknown reason.
	Unknown = 0,
	/// The server shut down for maintenance.
	RobloxMaintenance = 1,
	/// The experience developer has shut down the server, or functions bound by
	/// `Class.DataModel:BindToClose()|BindToClose()` have been called inside
	/// Studio.
	DeveloperShutdown = 2,
	/// The experience developer has migrated the server to a new place version.
	DeveloperUpdate = 3,
	/// The last player has left and the experience is empty.
	ServerEmpty = 4,
	/// The experience has hit the memory limit for the game server.
	OutOfMemory = 5,
	/// The server was shut down because the experience or place was taken down
	/// for moderation.
	Moderation = 6
};

/// Describes the current editing activity of a collaborator in a Team Create
/// session.
/// Describes the current editing activity of a collaborator in a Team Create
/// session. Stored on `Collaborator.Status` (defaults to
/// `Enum.CollaboratorStatus.None`) and updated server-side via
/// `CollaboratorsService`. Do not set `Collaborator.Status` from client code;
/// call through `CollaboratorsService` so server-side access checks apply.
enum class CollaboratorStatus : uint32_t {
	/// The collaborator has no active editing context; this is the default
	/// status.
	None = 0,
	/// The collaborator is actively working in the 3D viewport.
	Editing3D = 1,
	/// The collaborator is editing a script that is replicated to the server.
	Scripting = 2,
	/// The collaborator is editing a script that is not replicated to the server
	/// (a local or module script not visible server-side).
	PrivateScripting = 3
};

/// Determines behavior of the collision hitbox for `Class.MeshPart` and
/// `Class.PartOperation` instances.
/// Determines behavior of the collision hitbox for `Class.MeshPart` and
/// `Class.PartOperation` instances. See
/// [here](https://create.roblox.com/docs/workspace/collisions#collision-fidelity) for a visual
/// representation of the various options.
enum class CollisionFidelity : uint32_t {
	/// Collision model uses a voxel-based convex-hull decomposition that is
	/// relatively fast but may not be highly accurate, especially for holes,
	/// doorways, and cavities in general.
	Default = 0,
	/// Collision model uses the convex hull of the visual mesh.
	Hull = 1,
	/// Collision model uses a bounding box that encompasses the visual mesh.
	Box = 2,
	/// Collison model uses a convex-hull decomposition of the visual mesh which
	/// is computed by a variation of an algorithm called HACD. This option is the
	/// most accurate representation of collision geometry for complex objects
	/// with built-in tolerances to reduce the total number of convex-hulls by
	/// compromising on accuracy when justified.
	PreciseConvexDecomposition = 3,
	/// Collision model that supports precision tuning of convex decomposition
	/// fidelity.
	Tunable = 4
};

/// Specifies the minimum security permission level required to invoke a Studio
/// command.
/// Specifies the minimum security permission level a Lua execution context must
/// hold to invoke a Studio command registered through the plugin command system.
/// `Enum.CommandPermission.Plugin` is the standard permission for plugin scripts;
/// `Enum.CommandPermission.LocalUser` is the higher-privilege level reserved for
/// IDE-only APIs.
enum class CommandPermission : uint32_t {
	/// The command is accessible to scripts running at the standard Plugin
	/// security level.
	Plugin = 0,
	/// The command requires the LocalUser security level, granting access to
	/// IDE-only APIs.
	LocalUser = 1
};

/// Controls how the Script Editor inserts or replaces text when an autocomplete
/// suggestion is accepted with Enter or Tab.
/// Controls how the Script Editor treats existing text **after** the cursor when
/// you accept an autocomplete suggestion with Enter or Tab. Accepting a
/// completion always replaces the typed prefix **before** the cursor. The active
/// value is stored in `Class.Studio.AutocompleteAcceptanceBehavior`, which
/// defaults to `Enum.CompletionAcceptanceBehavior.InsertOnEnterReplaceOnTab`.
enum class CompletionAcceptanceBehavior : uint32_t {
	/// Accepting a completion with either Enter or Tab inserts the suggestion
	/// without replacing existing text after the cursor.
	Insert = 0,
	/// Accepting a completion with either Enter or Tab replaces existing text
	/// after the cursor with the full suggestion text.
	Replace = 1,
	/// Pressing Enter replaces existing text after the cursor; pressing Tab
	/// inserts without replacing text after the cursor.
	ReplaceOnEnterInsertOnTab = 2,
	/// Pressing Enter inserts without replacing text after the cursor; pressing
	/// Tab replaces text after the cursor. This is the default of
	/// `Class.Studio.AutocompleteAcceptanceBehavior`.
	InsertOnEnterReplaceOnTab = 3
};

/// Indicates the category of a script editor autocomplete suggestion, controlling
/// its icon and display in the completion list.
/// Describes the semantic category of an item returned by the Luau Language
/// Server Protocol (LSP) autocomplete provider. Roblox Studio's script editor
/// uses this value to select the icon shown next to each completion item and to
/// apply autocomplete scoring and filtering logic.
/// 
/// This enum mirrors the
/// [LSP CompletionItemKind specification](https://microsoft.github.io/language-server-protocol/specifications/lsp/3.17/specification/#completionItemKind)
/// (values 1–25). Plugins that register an autocomplete callback via
/// `Class.ScriptEditorService:RegisterAutocompleteCallback()` may set the `kind`
/// field on each `CompletionItem` to one of these values to hint how their
/// suggestion should be presented.
enum class CompletionItemKind : uint32_t {
	/// Indicates the completion item represents a plain text suggestion.
	Text = 1,
	/// Indicates the completion item represents a method on a class or object.
	Method = 2,
	/// Indicates the completion item represents a function.
	Function = 3,
	/// Indicates the completion item represents a constructor.
	Constructor = 4,
	/// Indicates the completion item represents a field within a record or
	/// struct.
	Field = 5,
	/// Indicates the completion item represents a variable binding.
	Variable = 6,
	/// Indicates the completion item represents a class or type definition.
	Class = 7,
	/// Indicates the completion item represents an interface type.
	Interface = 8,
	/// Indicates the completion item represents a module.
	Module = 9,
	/// Indicates the completion item represents a property on a class or object.
	Property = 10,
	/// Indicates the completion item represents a unit of measurement or a
	/// module-level value.
	Unit = 11,
	/// Indicates the completion item represents a value expression.
	Value = 12,
	/// Indicates the completion item represents an enum type.
	Enum = 13,
	/// Indicates the completion item represents a language keyword.
	Keyword = 14,
	/// Indicates the completion item represents an insertable code snippet with
	/// tab stops.
	Snippet = 15,
	/// Indicates the completion item represents a color value.
	Color = 16,
	/// Indicates the completion item represents a file reference.
	File = 17,
	/// Indicates the completion item represents a reference to another symbol.
	Reference = 18,
	/// Indicates the completion item represents a folder or directory.
	Folder = 19,
	/// Indicates the completion item represents an individual enum member value.
	EnumMember = 20,
	/// Indicates the completion item represents a constant value.
	Constant = 21,
	/// Indicates the completion item represents a struct or table type.
	Struct = 22,
	/// Indicates the completion item represents an event.
	Event = 23,
	/// Indicates the completion item represents an operator.
	Operator = 24,
	/// Indicates the completion item represents a generic type parameter.
	TypeParameter = 25
};

/// Determines the tags for completion items in
/// `Class.ScriptEditorService:RegisterAutocompleteCallback()`.
enum class CompletionItemTag : uint32_t {
	/// Indicates that the completion is deprecated, applying a penalty towards
	/// its score and crossing it out in the completion list.
	Deprecated = 1,
	/// Indicates that the completion is a member and being accessed with the
	/// wrong index type (e.g. using `:` to access a property), hiding it from the
	/// completion list.
	IncorrectIndexType = 2,
	/// Indicates that the completion requires Plugin security level to access,
	/// hiding it if the client lacks this level.
	PluginPermissions = 3,
	/// Indicates that the completion requires Command line security level to
	/// access, hiding it if the client lacks this level.
	CommandLinePermissions = 4,
	/// Indicates that the completion requires core script security level to
	/// access, hiding it if the client lacks this level.
	RobloxPermissions = 5,
	/// Instructs the editor to add parentheses before the cursor after inserting
	/// the given completion, if accepted.
	AddParens = 6,
	/// Instructs the editor to add parentheses before the cursor and move the
	/// cursor into the parentheses after inserting the given completion, if
	/// accepted.
	PutCursorInParens = 7,
	/// Indicates that the completion is type correct in the current context,
	/// granting a bonus to its score.
	TypeCorrect = 8,
	/// Indicates that the completion is being accessed from the wrong side of the
	/// client/server boundary (e.g. Players.LocalPlayer in a server script),
	/// hiding it from the completion list.
	ClientServerBoundaryViolation = 9,
	/// Indicates that the completion is stale because the cursor has moved
	/// outside the item's valid replacement range, hiding it from the completion
	/// list.
	Invalidated = 10,
	/// Instructs the editor to move the cursor to just before the nearest
	/// preceding `end` keyword after inserting the given completion, if accepted.
	PutCursorBeforeEnd = 11
};

/// Describes the type of value animated by a `Class.CompositeValueCurve`.
enum class CompositeValueCurveType : uint32_t {
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"R"`, `"G"`, and `"B"` to animate the
	/// corresponding components of the `Datatype.Color3` value returned by the
	/// method `Class.CompositeValueCurve:GetValueAtTime()`.
	ColorRGB = 0,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"H"`, `"S"`, and `"V"` to animate hue,
	/// saturation, and value of a color that will be converted to RGB before
	/// returning a `Datatype.Color3` value from the method
	/// `Class.CompositeValueCurve:GetValueAtTime()`.
	ColorHSV = 1,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"Min"` and `"Max"` to animate the corresponding
	/// components of the `Datatype.NumberRange` value returned by the method
	/// `Class.CompositeValueCurve:GetValueAtTime()`.
	NumberRange = 2,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"MinX"`, `"MaxX"`, `"MinY"`, and `"MaxY"` to
	/// animate the corresponding components of the `Datatype.Rect` value returned
	/// by the method `Class.CompositeValueCurve:GetValueAtTime()`.
	Rect = 3,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"Scale"` and `"Offset"` to animate the
	/// corresponding components of the `Datatype.UDim` value returned by the
	/// method `Class.CompositeValueCurve:GetValueAtTime()`.
	UDim = 4,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"ScaleX"`, `"OffsetX"`, `"ScaleY"`, and
	/// `"OffsetY"` to animate the corresponding components of the
	/// `Datatype.UDim2` value returned by the method
	/// `Class.CompositeValueCurve:GetValueAtTime()`.
	UDim2 = 5,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"X"` and `"Y"` to animate the corresponding
	/// components of the `Datatype.Vector2` value returned by the method
	/// `Class.CompositeValueCurve:GetValueAtTime()`.
	Vector2 = 6,
	/// The `Class.CompositeValueCurve` will animate children of type
	/// `Class.FloatCurve` named `"X"`, `"Y"`, and `"Z"` to animate the
	/// corresponding components of the `Datatype.Vector3` value returned by the
	/// method `Class.CompositeValueCurve:GetValueAtTime()`.
	Vector3 = 7
};

/// A compression algorithm to use in `Class.EncodingService` methods.
enum class CompressionAlgorithm : uint32_t {
	/// Used to perform compression using
	/// [Zstandard](https://en.wikipedia.org/wiki/Zstd) compression, also known as
	/// zstd.
	Zstd = 0
};

/// The camera movement mode currently in-use by the client.
enum class ComputerCameraMovementMode : uint32_t {
	/// The default camera movement mode is classic.
	Default = 0,
	/// Camera tracks the player but will not automatically rotate if the player
	/// walks left or right.
	Classic = 1,
	/// Camera tracks the player and automatically rotates if the player walks
	/// left or right.
	Follow = 2,
	/// The camera has a fixed Y position, but can be rotated around the player.
	Orbital = 3,
	/// The camera toggles between locked and free rotation with the right mouse
	/// button.
	CameraToggle = 4
};

/// The computer movement type in-use by the client.
/// Describes the movement control scheme currently active for the local player on
/// a computer. This value is read from
/// `Class.UserGameSettings.ComputerMovementMode` and reflects the scheme in use
/// at runtime, whether chosen by the player or enforced by the developer via
/// `Class.StarterPlayer.DevComputerMovementMode`.
enum class ComputerMovementMode : uint32_t {
	/// The movement mode has not been explicitly set and behaves identically to
	/// `KeyboardMouse`.
	Default = 0,
	/// The player moves their character using keyboard keys and steers the camera
	/// with the mouse.
	KeyboardMouse = 1,
	/// The player moves their character by clicking a destination in the game
	/// world; the character automatically navigates there and jumps over
	/// surmountable obstacles.
	ClickToMove = 2
};

/// Describes the error state of a `Class.ConfigSnapshot` object.
/// Indicates whether a `Class.ConfigSnapshot` loaded its configuration data
/// successfully. Read the `Class.ConfigSnapshot.Error` property (which defaults
/// to `Enum.ConfigSnapshotErrorState.None`) to check for errors before calling
/// `Class.ConfigSnapshot:GetValue()`.
enum class ConfigSnapshotErrorState : uint32_t {
	/// Indicates the snapshot loaded successfully with no error; this is the
	/// default state.
	None = 0,
	/// Indicates the snapshot failed to load because the underlying config
	/// service was unavailable at construction time.
	LoadFailed = 1
};

/// Used to determine the connection state of the client to the game server.
enum class ConnectionState : uint32_t {
	/// The client is connected.
	Connected = 0,
	/// The client is disconnected.
	Disconnected = 1
};

/// The source type of a `Datatype.Content` value.
/// The source type of `Datatype.Content` value. Indicates which properties of a
/// `Datatype.Content` contain the referenced content.
enum class ContentSourceType : uint32_t {
	/// Empty value with no source type. Does not reference any content or hold
	/// any non‑`nil` value.
	None = 0,
	/// An [asset URI](https://create.roblox.com/docs/projects/assets#asset-uris) `string`
	/// value contained in `Datatype.Content.Uri`.
	Uri = 1,
	/// A non-`nil` `Class.Object` reference contained in
	/// `Datatype.Content.Object`.
	Object = 2,
	/// A non-`nil` `Opaque` reference contained in `Datatype.Content.Opaque`.
	Opaque = 3
};

/// Describes the priority of a context action.
/// `ContextActionPriority` specifies the relative priority of an action bound via
/// `Class.ContextActionService:BindActionAtPriority()`. When multiple actions are
/// bound to the same input, `Class.ContextActionService` invokes them in
/// descending priority order — the action with the highest priority value runs
/// first and may sink the input before lower-priority actions receive it. The
/// three named levels map to the integer values `Low = 1000`, `Medium = 2000`,
/// and `High = 3000`; arbitrary integers are also accepted by
/// `BindActionAtPriority`. `Medium` is the default priority used by
/// `Class.ContextActionService:BindAction()`.
enum class ContextActionPriority : uint32_t {
	/// The lowest named priority level (value 1000); an action at this level is
	/// invoked after `High` and `Medium` actions bound to the same input.
	Low = 1000,
	/// The default priority level (value 2000); used automatically by
	/// `Class.ContextActionService:BindAction()` and falls between `High` and
	/// `Low` in processing order.
	Medium = 2000,
	/// The highest named priority level (value 3000); an action at this level is
	/// invoked before `Medium` and `Low` actions bound to the same input.
	High = 3000
};

/// Describes whether a contextual action should sink or pass input events.
/// `ContextActionResult` controls the behavior of multiple bound actions. It
/// gives the option of controlling whether or not a bound action should sink or
/// pass the input event, meaning other things (including other bound actions) can
/// process it.
enum class ContextActionResult : uint32_t {
	/// If `functionToBind` from `Class.ContextActionService:BindAction()` returns
	/// `Enum.ContextActionResult.Sink`, the input event will stop at that
	/// function and no other bound actions under it will be processed. This is
	/// the default behavior if `functionToBind` does not return anything or
	/// yields in any way.
	Sink = 0,
	/// If `functionToBind` from `Class.ContextActionService:BindAction()` returns
	/// `Enum.ContextActionResult.Pass`, the input event is considered to have not
	/// been handled by `functionToBind` and will continue being passed to actions
	/// bound to the same input type.
	Pass = 1
};

/// The ControlMode Enum sets how the player is controlled.
/// The ControlMode Enum sets how the player is controlled.
/// 
/// Note that shift-lock related APIs are in the process of being deprecated, so
/// it's recommended to use `Class.UserInputService.MouseBehavior` instead to lock
/// the mouse.
enum class ControlMode : uint32_t {
	/// Allows the camera to be moved by clicking and dragging with the right
	/// mouse button.
	Classic = 0,
	/// Similar to classic, but allows the player to toggle mouse locking, causing
	/// the camera to rotate as the player moves the mouse (without holding down a
	/// button).
	MouseLockSwitch = 1
};

/// Represents all available `Class.CoreGui` "types" such as the `Class.Backpack`
/// and text chat window.
/// This enum represents all available `Class.CoreGui` "types" such as the
/// `Class.Backpack` and text chat window.
enum class CoreGuiType : uint32_t {
	/// Dynamically updated `Class.Players` list, commonly used as a
	/// [leaderboard](https://create.roblox.com/docs/players/leaderboards).
	PlayerList = 0,
	/// The character's `Class.Humanoid.Health|Health` bar.
	Health = 1,
	/// The character's `Class.Backpack` which contains
	/// [in‑experience tools](https://create.roblox.com/docs/players/tools).
	Backpack = 2,
	/// The [text chat](https://create.roblox.com/docs/chat/in-experience-text-chat) window.
	Chat = 3,
	/// Refers to all available core UI.
	All = 4,
	/// Popup menu of character [emotes](https://create.roblox.com/docs/characters/emotes).
	EmotesMenu = 5,
	/// A player's perspective or view of their own character.
	SelfView = 6,
	/// A "capture" button along the right side of the screen.
	Captures = 7,
	/// The **Avatar Switcher** allows users to change their platform avatar.
	AvatarSwitcher = 8,
	/// The in-experience shop overlay that lets players browse and purchase items
	/// without leaving the experience.
	ExperienceShop = 9
};

/// Indicates the outcome of a call to `Class.AssetService:CreateAssetAsync()` or
/// `Class.AssetService:CreateAssetVersionAsync()`.
/// `Enum.CreateAssetResult` is returned as the first element of the tuple from
/// `Class.AssetService:CreateAssetAsync()` and
/// `Class.AssetService:CreateAssetVersionAsync()`. It indicates whether the asset
/// was created or updated successfully, or why the operation failed. On success,
/// the second tuple element is the new asset ID (for `CreateAssetAsync`) or the
/// new version number (for `CreateAssetVersionAsync`); on failure, the second
/// element is a string with additional diagnostic information.
enum class CreateAssetResult : uint32_t {
	/// The asset was created or updated successfully.
	Success = 1,
	/// The caller does not have permission to create or update an asset in the
	/// target inventory.
	PermissionDenied = 2,
	/// The upload request to the Roblox asset service failed for a reason other
	/// than a permission error.
	UploadFailed = 3,
	/// An unexpected error occurred and the operation could not complete.
	Unknown = 4
};

/// Indicates the result of a `Class.AssetService:CreateDataModelContentAsync()`
/// call.
/// Returned as the first value in the tuple from
/// `Class.AssetService:CreateDataModelContentAsync()`, which creates a
/// `DataModel`-scoped runtime content object at runtime. A value of
/// `Enum.CreateContentResult.Success|Success` means the content was created and
/// stored successfully; any other value describes why the operation failed.
enum class CreateContentResult : uint32_t {
	/// The content object was created and stored successfully.
	Success = 1,
	/// The user does not have the required permissions to perform this operation.
	PermissionDenied = 2,
	/// Asset failed to upload.
	UploadFailed = 3,
	/// The storage budget limit for `Class.DataModel`-scoped content was
	/// exceeded.
	StorageLimitExceeded = 4,
	/// An unknown error occurred.
	Unknown = 5
};

/// Indicates why a `Class.AvatarEditorService:PromptCreateOutfit()` call failed.
/// Indicates the reason a `Class.AvatarEditorService:PromptCreateOutfit()` call
/// did not successfully create an outfit. The failure code is surfaced through
/// the `Class.AvatarEditorService.PromptCreateOutfitCompleted` event alongside an
/// `Enum.AvatarPromptResult.Failed` result.
enum class CreateOutfitFailure : uint32_t {
	/// The outfit name provided by the player was rejected as invalid.
	InvalidName = 1,
	/// The player has reached the maximum number of saved outfits.
	OutfitLimitReached = 2,
	/// The outfit creation failed for an unspecified or unrecognized reason.
	Other = 3
};

/// Indicates whether the currently running place is owned by an individual user
/// or a group.
/// Indicates whether the currently running place is owned by an individual user
/// (`Enum.CreatorType.User`) or a group (`Enum.CreatorType.Group`). Read from
/// properties such as `Class.DataModel.CreatorType`.
enum class CreatorType : uint32_t {
	/// The place is owned by a single user.
	User = 0,
	/// The place is owned by a group.
	Group = 1
};

/// Specifies which creator type to include when filtering catalog search results
/// in `Datatype.CatalogSearchParams`.
/// Specifies which creator type to include when filtering catalog search results.
/// Used with the `Datatype.CatalogSearchParams.CreatorType` property to narrow
/// results to items made by individual users, groups, or any creator. The default
/// value of `Datatype.CatalogSearchParams.CreatorType` is
/// `Enum.CreatorTypeFilter.All`.
enum class CreatorTypeFilter : uint32_t {
	/// Limits catalog search results to items created by individual users.
	User = 0,
	/// Limits catalog search results to items created by groups.
	Group = 1,
	/// Includes items from all creator types; no filtering by creator is applied.
	All = 2
};

/// The CurrencyType Enum is used with `Class.MarketplaceService` to set the
/// currency used.
/// The CurrencyType Enum is used with `Class.MarketplaceService` to set the
/// currency used. As tickets no longer exist on the Roblox platform, this enum is
/// **ignored** in most API that previously used it, such as
/// `Class.MarketplaceService:PromptPurchase()|PromptPurchase`.
/// @deprecated Tickets have been removed, so this Enum shouldn't need to be used.
enum class CurrencyType : uint32_t {
	/// Use the default currency (Robux), equivalent to not specifying a currency.
	Default = 0,
	/// Use Robux.
	Robux = 1,
	/// Use Tickets.
	Tix = 2
};

/// Changes the player's camera mode.
enum class CustomCameraMode : uint32_t {
	/// The default camera mode is classic.
	Default = 0,
	/// Camera tracks the player but will not automatically rotate if the player
	/// walks left or right.
	Classic = 1,
	/// Camera tracks the player and automatically rotates if the player walks
	/// left or right.
	Follow = 2
};

/// Indicates the type of data store request being made.
/// Categorizes data store operations for use with
/// `Class.DataStoreService:GetRequestBudgetForRequestType()`, which returns the
/// remaining per-server request budget for a given category.
/// 
/// The enum contains two sets of values. The **legacy** values (`GetAsync`,
/// `SetIncrementAsync`, `UpdateAsync`, `GetSortedAsync`,
/// `SetIncrementSortedAsync`, `OnUpdate`, `ListAsync`, `GetVersionAsync`, and
/// `RemoveVersionAsync`) should not be used. The **modern** values
/// (`StandardRead`, `StandardWrite`, `StandardList`, `StandardRemove`,
/// `OrderedRead`, `OrderedWrite`, `OrderedList`, and `OrderedRemove`) correspond
/// to the newer `Class.DataStore` and `Class.OrderedDataStore` API families that
/// use universe-level and per-server limits.
enum class DataStoreRequestType : uint32_t {
	/// Refers to `Class.GlobalDataStore:GetAsync()|GetAsync()` and the read of
	/// `Class.GlobalDataStore:UpdateAsync()|UpdateAsync()`.
	GetAsync = 0,
	/// Refers to `Class.DataStore:SetAsync()|SetAsync()`,
	/// `Class.DataStore:IncrementAsync()|IncrementAsync()`,
	/// `Class.DataStore:RemoveAsync()|RemoveAsync()`, and the write of
	/// `Class.DataStore:UpdateAsync()|UpdateAsync()` when it returns a non-`nil`
	/// value.
	SetIncrementAsync = 1,
	/// Refers to `Class.GlobalDataStore:UpdateAsync()|UpdateAsync()`.
	UpdateAsync = 2,
	/// Refers to `Class.OrderedDataStore:GetSortedAsync()|GetSortedAsync()`.
	GetSortedAsync = 3,
	/// Refers to `Class.OrderedDataStore:SetAsync()|SetAsync()`
	/// `Class.OrderedDataStore:IncrementAsync()|IncrementAsync()`,
	/// `Class.OrderedDataStore:RemoveAsync()|RemoveAsync()`, and the write of
	/// `Class.OrderedDataStore:UpdateAsync()|UpdateAsync()` while using an
	/// `Class.OrderedDataStore`.
	SetIncrementSortedAsync = 4,
	/// Refers to `Class.GlobalDataStore:OnUpdate()|OnUpdate()`.
	OnUpdate = 5,
	/// Refers to `Class.DataStore:ListKeysAsync()|ListKeysAsync()` and
	/// `Class.DataStore:ListVersionsAsync()|ListVersionsAsync()`.
	ListAsync = 6,
	/// Refers to `Class.DataStore:GetVersionAsync()|GetVersionAsync()`.
	GetVersionAsync = 7,
	/// Refers to `Class.DataStore:RemoveVersionAsync()|RemoveVersionAsync()`.
	RemoveVersionAsync = 8,
	/// Refers to `Class.DataStore:GetAsync()|GetAsync()`,
	/// `Class.DataStore:GetVersionAsync()|GetVersionAsync()`,
	/// `Class.DataStore:GetVersionAtTimeAsync()|GetVersionAtTimeAsync()`, and the
	/// read of `Class.DataStore:UpdateAsync()|UpdateAsync()` for
	/// `Class.DataStore|DataStore`.
	StandardRead = 9,
	/// Refers to `Class.DataStore:SetAsync()|SetAsync()`,
	/// `Class.DataStore:IncrementAsync()|IncrementAsync()`, and the write of
	/// `Class.DataStore:UpdateAsync()|UpdateAsync()` for
	/// `Class.DataStore|DataStore`.
	StandardWrite = 10,
	/// Refers to
	/// `Class.DataStoreService:ListDataStoresAsync()|ListDataStoresAsync()`, and
	/// `Class.DataStore:ListKeysAsync()|ListKeysAsync()` and
	/// `Class.DataStore:ListVersionsAsync()|ListVersionsAsync()` for
	/// `Class.DataStore|DataStore`.
	StandardList = 11,
	/// Refers to `Class.DataStore:RemoveAsync()|RemoveAsync()` for
	/// `Class.DataStore|DataStore`.
	StandardRemove = 12,
	/// Refers to `Class.OrderedDataStore:GetAsync()|GetAsync()` and the read of
	/// `Class.OrderedDataStore:UpdateAsync()|UpdateAsync()` for
	/// `Class.OrderedDataStore|OrderedDataStore`.
	OrderedRead = 13,
	/// Refers to `Class.OrderedDataStore:SetAsync()|SetAsync()`,
	/// `Class.OrderedDataStore:IncrementAsync()|IncrementAsync()`, and the write
	/// of `Class.OrderedDataStore:UpdateAsync()|UpdateAsync()` for
	/// `Class.OrderedDataStore|OrderedDataStore`.
	OrderedWrite = 14,
	/// Refers to `Class.OrderedDataStore:GetSortedAsync()|GetSortedAsync()` for
	/// `Class.OrderedDataStore|OrderedDataStore`.
	/// GetRequestBudgetForRequestType()`with this enum will return`0`.
	OrderedList = 15,
	/// Refers to `Class.OrderedDataStore:RemoveAsync()|RemoveAsync()` for
	/// `Class.OrderedDataStore|OrderedDataStore`.
	OrderedRemove = 16
};

/// Controls when the debugger pauses on exceptions.
/// Used with `Class.ScriptDebuggerService:SetExceptionBreakMode()` to control
/// when the debugger pauses on exceptions. The mode applies to all
/// `Class.DataModel|DataModels`.
enum class DebugBreakModeType : uint32_t {
	/// Never break on exceptions.
	Never = 0,
	/// Break on all exceptions.
	Always = 1,
	/// Break only on unhandled exceptions.
	Unhandled = 2
};

/// Reason for the end of the debugger session.
/// Indicates why a `ConnectionEnded` event fired on a
/// `DebuggerConnectionManager`. Each value corresponds to a distinct termination
/// path in the Debugger V2 connection lifecycle.
enum class DebuggerEndReason : uint32_t {
	/// Client requested connection termination.
	ClientRequest = 0,
	/// Connection timed out.
	Timeout = 1,
	/// Invalid host:port combination.
	InvalidHost = 2,
	/// Connection was lost.
	Disconnected = 3,
	/// Server terminated the connection because it shut down.
	ServerShutdown = 4,
	/// Server has wrong version of protocol.
	ServerProtocolMismatch = 5,
	/// Got a failure response when trying to configure the server.
	ConfigurationFailed = 6,
	/// An error occurred in the RPC layer.
	RpcError = 7
};

/// Controls when the Luau debugger pauses script execution in response to a
/// runtime exception.
/// Controls when the Luau debugger pauses script execution in response to a
/// runtime exception. This enum is used as the `breakMode` argument to
/// `DebuggerConnection:SetExceptionBreakMode()`.
enum class DebuggerExceptionBreakMode : uint32_t {
	/// The debugger never pauses due to a runtime exception; execution continues
	/// normally regardless of whether the exception is caught or uncaught.
	Never = 0,
	/// The debugger pauses on every runtime exception, including those caught by
	/// `pcall` or `xpcall`.
	Always = 1,
	/// The debugger pauses only on runtime exceptions that propagate without
	/// being caught by `pcall` or `xpcall`.
	Unhandled = 2
};

/// Call stack frame type.
enum class DebuggerFrameType : uint32_t {
	/// Call stack frame belongs to a C (native) function.
	C = 0,
	/// Call stack frame belongs to a Luau function.
	Lua = 1
};

/// Reason that the DataModel was paused.
enum class DebuggerPauseReason : uint32_t {
	/// Pausing for a reason not covered by other values.
	Unknown = 0,
	/// Pause was requested by user.
	Requested = 1,
	/// Pausing on a user breakpoint.
	Breakpoint = 2,
	/// Pausing on error hit in the code.
	Exception = 3,
	/// Pausing on an internal breakpoint set by debugger command: e.g. step over,
	/// step into, step out of.
	SingleStep = 4,
	/// Pausing at the entry on the script.
	Entrypoint = 5
};

/// Specifies how the debugger should resume execution after a pause.
/// Returned from the `Class.ScriptDebuggerService.OnStopped` callback (via
/// `Datatype.ScriptResumeAction`) to control how execution resumes after a
/// debugger pause.
enum class DebuggerResumeType : uint32_t {
	/// Step into the next function call on the specified thread.
	StepInto = 0,
	/// Step out of the current function on the specified thread.
	StepOut = 1,
	/// Step over the current line on the specified thread.
	StepOver = 2,
	/// Resume execution normally without stepping.
	Resume = 3
};

/// Result of a debugger request.
/// `Status` on every `DebuggerLuaResponse`, indicating whether the corresponding
/// debugger request succeeded or failed. See individual items for timeout,
/// connection, and other failure modes.
enum class DebuggerStatus : uint32_t {
	/// Request has completed successfully.
	Success = 0,
	/// Timed out while waiting for response.
	Timeout = 1,
	/// Connection to the debugger was lost.
	ConnectionLost = 2,
	/// Failed to parse response.
	InvalidResponse = 3,
	/// Exception encountered while processing response.
	InternalError = 4,
	/// The request was not appropriate for the current debugger state.
	InvalidState = 5,
	/// Response was an error.
	RpcError = 6,
	/// One of the request arguments was invalid.
	InvalidArgument = 7,
	/// Connection closed while waiting for response.
	ConnectionClosed = 8
};

/// Controls the file extension used when Studio's script sync feature saves
/// script instances to the filesystem.
/// Specifies whether Studio writes synced script files with a `.lua` or `.luau`
/// extension when using the file sync (external editor) workflow. The active
/// value is read from `Class.Studio.DefaultScriptSyncFileType`. Defaults to
/// `Enum.DefaultScriptSyncFileType.Luau`.
enum class DefaultScriptSyncFileType : uint32_t {
	/// Script files are synced to the filesystem with a `.lua` extension.
	Lua = 0,
	/// Script files are synced to the filesystem with a `.luau` extension.
	Luau = 1
};

/// Determines how the default camera handles objects that are in-between the
/// camera and the camera subject.
enum class DevCameraOcclusionMode : uint32_t {
	/// The camera zooms in until there is nothing between it and its subject.
	Zoom = 0,
	/// Any objects between the camera and its subject become translucent locally.
	Invisicam = 1
};

/// Overwrites the player's camera movement mode setting on a computer.
enum class DevComputerCameraMovementMode : uint32_t {
	/// The camera will move based on the player's settings.
	UserChoice = 0,
	/// Camera tracks the player but will not automatically rotate if the player
	/// walks left or right.
	Classic = 1,
	/// Camera tracks the player and automatically rotates if the player walks
	/// left or right.
	Follow = 2,
	/// The camera has a fixed Y position, but can be rotated around the player.
	Orbital = 3,
	/// The camera toggles between locked and free rotation with the right mouse
	/// button.
	CameraToggle = 4
};

/// Sets the movement mode of players who are playing on computers.
enum class DevComputerMovementMode : uint32_t {
	/// Allows players to choose their desired control scheme from the
	/// in-experience menu. This is the default movement mode.
	UserChoice = 0,
	/// The player's character will be controlled using the keyboard and mouse.
	KeyboardMouse = 1,
	/// Players can only move through the experience by clicking a target
	/// location. The player's character will automatically jump when reaching a
	/// surmountable obstacle/gap while moving to the click destination.
	ClickToMove = 2,
	/// Disables all default controls and allows you to script your own control
	/// scheme.
	Scriptable = 3
};

/// Overwrites the camera mode if the player is on a touch device.
enum class DevTouchCameraMovementMode : uint32_t {
	/// The camera will move based on the player's settings.
	UserChoice = 0,
	/// Camera tracks the player but will not automatically rotate if the player
	/// walks left or right.
	Classic = 1,
	/// Camera tracks the player and automatically rotates if the player walks
	/// left or right.
	Follow = 2,
	/// The camera has a fixed Y position, but can be rotated around the player.
	Orbital = 3
};

/// Overrides the movement mode of players who are playing on touch-enabled
/// devices.
enum class DevTouchMovementMode : uint32_t {
	/// Allows players to choose their desired control scheme from the
	/// in-experience menu. This is the default movement mode.
	UserChoice = 0,
	/// @deprecated Use `DynamicThumbstick` instead.
	Thumbstick = 1,
	/// @deprecated Use `DynamicThumbstick` instead.
	DPad = 2,
	/// @deprecated Use `DynamicThumbstick` instead.
	Thumbpad = 3,
	/// The player's character will attempt to move to a location in the world
	/// when the player taps a location.
	ClickToMove = 4,
	/// The player's character will not respond to default controls; any character
	/// movement must be defined in custom scripts.
	Scriptable = 5,
	/// The player's character is controlled with a virtual thumbstick that
	/// appears when they touch the lower portion of the screen. Jumping is
	/// controlled with a separate button.
	DynamicThumbstick = 6
};

/// A memory tracking category.
/// A list of memory categories, and a description of what they are allocated to.
enum class DeveloperMemoryTag : uint32_t {
	/// General data that doesn't have any categorization. This could be due to
	/// either internal reasons, or because it simply isn't being tracked
	/// categorically.
	Internal = 0,
	/// A cache of HTTP responses.
	HttpCache = 1,
	/// All the Instances present in memory.
	Instances = 2,
	/// Events, signals, connections, etc.
	Signals = 3,
	/// All of the data in Luau, including everything happening in core scripts,
	/// built-in data types, etc.
	LuaHeap = 4,
	/// All memory being manipulated and referenced by scripts.
	Script = 5,
	/// Collision detection in the `Class.Workspace`.
	PhysicsCollision = 6,
	/// 3D parts used for simulation.
	BaseParts = 7,
	/// Rendering solid models (stuff made with Union, Negate, etc.).
	GraphicsSolidModels = 8,
	/// Rendering of mesh parts.
	GraphicsMeshParts = 10,
	/// Rendering of particles from ParticleEmitters.
	GraphicsParticles = 11,
	/// Rendering of regular parts.
	GraphicsParts = 12,
	/// Spatial hash lookup tables of the game world that are used for rendering.
	GraphicsSpatialHash = 13,
	/// Rendering of terrain geometry.
	GraphicsTerrain = 14,
	/// Rendering of textures in the game world.
	GraphicsTexture = 15,
	/// Rendering of texture composition maps that are generated for Humanoids.
	GraphicsTextureCharacter = 16,
	/// Data of sounds in-game.
	Sounds = 17,
	/// Playback of sounds in-game.
	StreamingSounds = 18,
	/// Occupancy/Material data of the Terrain.
	TerrainVoxels = 19,
	/// Gui element data and rendering.
	Gui = 21,
	/// Playback of Animations on Humanoids and AnimationControllers.
	Animation = 22,
	/// Pathfinding for Humanoids via the PathfindingService.
	Navigation = 23,
	/// Geometry mesh data for CSG objects such as `Class.UnionOperation` and
	/// `Class.PartOperation`.
	GeometryCSG = 24,
	/// Rendering memory for SLIM (streamed level-of-detail instance mesh) model
	/// data.
	GraphicsSlimModels = 25
};

/// Describes the physical form factor of a device used during Studio device
/// emulation.
/// Studio-only device form factor for device emulation. Passed as the
/// `DeviceForm` field of the device info table accepted by
/// `Class.StudioDeviceSimulatorService:CreateDeviceAsync()` and
/// `Class.StudioDeviceSimulatorService:UpdateDeviceAsync()`, and exposed on
/// device records returned by
/// `Class.StudioDeviceSimulatorService:GetDeviceListAsync()`.
enum class DeviceForm : uint32_t {
	/// Represents a gaming console device, such as an Xbox or PlayStation.
	Console = 0,
	/// Represents a mobile phone with a touchscreen.
	Phone = 1,
	/// Represents a tablet with a touchscreen.
	Tablet = 2,
	/// Represents a desktop or laptop computer.
	Desktop = 3,
	/// Represents a virtual reality headset.
	VR = 4
};

/// Classifies a device's hardware capability tier.
/// `DeviceLevel` is an enum that indicates the hardware capability tier of the
/// current device. Internal usage only.
enum class DeviceLevel : uint32_t {
	/// Indicates a low-end device that benefits from reduced graphics or
	/// simulation quality.
	Low = 0,
	/// Indicates a mid-range device that may benefit from moderate reductions in
	/// resource-intensive features.
	Medium = 1,
	/// Indicates a high-end device capable of running resource-intensive features
	/// at full fidelity.
	High = 2
};

/// Controls how the Device Simulator viewport scales the simulated device
/// resolution within the Studio window.
/// Controls how the Device Simulator viewport scales the simulated device
/// resolution within the Studio window. The active mode is read and written via
/// `Class.StudioDeviceSimulatorService:GetScalingModeAsync()` and
/// `Class.StudioDeviceSimulatorService:SetScalingModeAsync()`. The default mode
/// is `Enum.DeviceSimulatorScalingMode.ScaleToPhysicalSize`.
enum class DeviceSimulatorScalingMode : uint32_t {
	/// Scales the simulated viewport so that its pixels correspond to their
	/// physical size on the developer's monitor, computed from the screen DPI and
	/// an optional target DPI override.
	ScaleToPhysicalSize = 0,
	/// Renders the simulated viewport at a 1:1 pixel mapping with no scaling
	/// applied.
	ActualResolution = 1,
	/// Scales the simulated viewport uniformly to fill as much of the available
	/// Studio window as possible while preserving the device's aspect ratio.
	FitToWindow = 2
};

/// Device category of the client.
/// The **DeviceType** enum is used to determine the category of devices that a
/// client belongs to.
enum class DeviceType : uint32_t {
	/// The client is an unknown device.
	Unknown = 0,
	/// The client is a desktop device.
	Desktop = 1,
	/// The client is a tablet device.
	Tablet = 2,
	/// The client is a phone device.
	Phone = 3,
	/// The client is a TV device.
	TV = 4
};

/// Controls whether multiple people can use this dialog, or only one person at a
/// time can use it.
enum class DialogBehaviorType : uint32_t {
	/// Only one player can interact with this dialog at a time. The conversation
	/// between the player and dialog can be seen by all players.
	SinglePlayer = 0,
	/// Multiple players can simultaneously interact with this dialog. The
	/// conversation between the player and the dialog cannot be seen by other
	/// players.
	MultiplePlayers = 1
};

/// The DialogPurpose enum is used to set the icon of a `Class.Dialog`.
enum class DialogPurpose : uint32_t {
	/// Shows an exclamation point ('''!''').
	Quest = 0,
	/// Shows a question mark ('''?''').
	Help = 1,
	/// Shows a dollar sign ('''$''').
	Shop = 2
};

/// Sets the `Class.Dialog.Tone` of a `Class.Dialog` object, which influences how
/// the dialog appears.
enum class DialogTone : uint32_t {
	/// Causes the dialog to have a blue bar on its left-hand side.
	Neutral = 0,
	/// Causes the dialog to have a green bar on its left-hand side.
	Friendly = 1,
	/// Causes the dialog to have a red bar on its left-hand side.
	Enemy = 2
};

/// Specifies which hand side a `Class.DigitsRigDescription` instance is assigned
/// to.
/// Identifies the hand that a `Class.DigitsRigDescription` maps to within a
/// character rig. The animation system routes finger-joint data by this value; an
/// instance whose `Class.DigitsRigDescription.Side` is
/// `Enum.DigitsRigDescriptionSide.None` is skipped. Defaults to
/// `Enum.DigitsRigDescriptionSide.None`.
enum class DigitsRigDescriptionSide : uint32_t {
	/// The `Class.DigitsRigDescription` has not been assigned to a hand side and
	/// is skipped by the animation system.
	None = 0,
	/// The `Class.DigitsRigDescription` is assigned to the left hand.
	Left = 1,
	/// The `Class.DigitsRigDescription` is assigned to the right hand.
	Right = 2
};

/// This enum is used with `Class.GuiService.ViewportDisplaySize` to indicate the
/// internally-categorized rendering size of the viewport.
enum class DisplaySize : uint32_t {
	/// Viewport is categorized as small. Applies to most tablet/mobile/handheld
	/// devices.
	Small = 0,
	/// Viewport is categorized as medium. Applies to most laptops and monitors.
	Medium = 1,
	/// Viewport is categorized as large. Applies to most TVs or larger.
	Large = 2
};

/// Determines how an `Class.AudioEmitter` attenuates (fades out) as the distance
/// between the `Class.AudioEmitter` and an interacting `Class.AudioListener`
/// increases.
/// Determines how an `Class.AudioEmitter` attenuates (fades out) as the distance
/// between the `Class.AudioEmitter` and an interacting `Class.AudioListener`
/// increases. Most values refer to a preset rolloff curve that the
/// `Class.AudioEmitter` will apply over the range given by
/// `Class.AudioEmitter.DistanceAttenuationBounds|DistanceAttenuationBounds`. When
/// set to `Enum.DistanceAttenuationMode.Custom`, the emitter instead uses a
/// developer-supplied curve given by
/// `Class.AudioEmitter:SetDistanceAttenuation()`.
enum class DistanceAttenuationMode : uint32_t {
	/// Uses the developer-supplied
	/// `Class.AudioEmitter.DistanceAttenuation|DistanceAttenuation` curve for
	/// gain rolloff.
	Custom = 0,
	/// Volume attenuates according to a hybrid model which follows the
	/// `Enum.DistanceAttenuationMode.Inverse` model when close to the lower bound
	/// of `Class.AudioEmitter.DistanceAttenuationBounds` and the
	/// `Enum.DistanceAttenuationMode.LinearSquared` model when close to the upper
	/// bound of `Class.AudioEmitter.DistanceAttenuationBounds`. This is done by
	/// taking the lesser of these two curves, such that the curve mostly follows
	/// an inverse relationship but tapers to silence at the maximum distance.
	InverseTapered = 1,
	/// Volume attenuates between the bounds of
	/// `Class.AudioEmitter.DistanceAttenuationBounds` with a linear relationship.
	/// This is done by computing (`maxDistance` - `distance`) / (`maxDistance` -
	/// `minDistance`), where distance is the `Class.Vector3.Magnitude` between
	/// the `Class.AudioEmitter`'s position and the `Class.AudioListener`'s
	/// position.
	Linear = 2,
	/// Volume attenuates between the bounds of
	/// `Class.AudioEmitter.DistanceAttenuationBounds` with a linear-squared
	/// relationship. This is done by squaring the formula used to determine the
	/// volume when using `Enum.DistanceAttenuationMode.Linear`, which creates a
	/// parabolic curve with a steeper fade.
	LinearSquared = 3,
	/// Volume attenuates from the lower bound of
	/// `Class.AudioEmitter.DistanceAttenuationBounds` in an inverse manner,
	/// mirroring how sounds attenuate in the real world. This is done by
	/// computing (`minDistance`/`distance`), where `distance` is the
	/// `Class.Vector2.Magnitude` between the `Class.AudioEmitter`'s position and
	/// the `Class.AudioListener`'s position.
	Inverse = 4
};

/// Specifies the type of domain that a `Datatype.User` is scoped to.
/// The **DomainType** enum describes the kind of domain in which a domain user ID
/// is unique. It is used by the `Datatype.User` data type to identify whether the
/// user's ID belongs to an experience or an OAuth application.
enum class DomainType : uint32_t {
	/// The user ID is scoped to a specific experience (universe).
	EXPERIENCE = 1,
	/// The user ID is scoped to a specific OAuth application.
	OAUTH = 3
};

/// Used by `Class.UIAspectRatioConstraint.DominantAxis` for resizing the object
/// to maintain the aspect ratio.
/// Used by `Class.UIAspectRatioConstraint.DominantAxis` to specify which axis is
/// used when setting the new size of the GUI element.
enum class DominantAxis : uint32_t {
	/// The X axis.
	Width = 0,
	/// The Y axis.
	Height = 1
};

/// Describes the state of a script draft tracked by `Class.DraftsService`.
/// State of a script draft from `GetDraftStatus` and from `CommitStatusChanged` /
/// `UpdateStatusChanged`. See individual items for in-sync, outdated, committed,
/// and removed-script outcomes.
enum class DraftStatusCode : uint32_t {
	/// The draft is in sync with the server's base version and has no blocking
	/// conflicts.
	OK = 0,
	/// The server version of the script has advanced beyond the base version used
	/// when the draft was created, so the draft must be updated before it can be
	/// committed.
	DraftOutdated = 1,
	/// The script referenced by the draft no longer exists in the data model.
	ScriptRemoved = 2,
	/// The draft was successfully committed to the server and removed from the
	/// local sandbox.
	DraftCommitted = 3
};

/// Used with `Class.DragDetector` as the paradigm to generate proposed motion,
/// given a stream of cursor rays.
enum class DragDetectorDragStyle : uint32_t {
	/// 1D motion along the detector's `Class.DragDetector.Axis|Axis`, by default
	/// the world **Y** axis.
	TranslateLine = 0,
	/// 2D motion in the plane **perpendicular** to the detector's
	/// `Class.DragDetector.Axis|Axis`, by default the world **XZ** plane.
	TranslatePlane = 1,
	/// 2D motion in the plane **perpendicular** to the detector's
	/// `Class.DragDetector.Axis|Axis` and, when the modifier is active, 1D motion
	/// along the detector's `Class.DragDetector.Axis|Axis`.
	TranslatePlaneOrLine = 2,
	/// 1D motion along the detector's `Class.DragDetector.Axis|Axis` and, when
	/// the modifier is active, 2D motion in the plane **perpendicular** to the
	/// detector's `Class.DragDetector.Axis|Axis`.
	TranslateLineOrPlane = 3,
	/// 2D motion in the plane perpendicular to the camera's view. In this mode,
	/// the plane is constantly updated, even while dragging, and will always face
	/// the camera's current view.
	TranslateViewPlane = 4,
	/// Rotation about the detector's `Class.DragDetector.Axis|Axis`, by default
	/// the world **Y** axis.
	RotateAxis = 5,
	/// Trackball rotation, further customized through the
	/// `Class.DragDetector.TrackballRadialPullFactor|TrackballRadialPullFactor`
	/// and `Class.DragDetector.TrackballRollFactor|TrackballRollFactor`
	/// properties.
	RotateTrackball = 6,
	/// Calculates desired motion via a custom function provided through
	/// `Class.DragDetector:SetDragStyleFunction()|SetDragStyleFunction()`.
	Scriptable = 7,
	/// **TranslatePlaneOrLine** for mouse and gamepad; **TranslatePlane** for
	/// touch; **6DOF** for VR.
	BestForDevice = 8
};

/// Used to control the permission level for which players can interact with a
/// `Class.DragDetector`.
/// Used to control the permission level for which players can interact with a
/// `Class.DragDetector` through its
/// `Class.DragDetector.PermissionPolicy|PermissionPolicy` property.
enum class DragDetectorPermissionPolicy : uint32_t {
	/// No players can interact with the `Class.DragDetector`.
	Nobody = 0,
	/// All players can interact with the `Class.DragDetector`.
	Everybody = 1,
	/// Invokes the function registered via
	/// `Class.DragDetector:SetPermissionPolicyFunction()`, enabling/disabling the
	/// detector based on whether the function returns `true` or `false`.
	Scriptable = 2
};

/// Describes how the clicked object will be treated once the desired motion has
/// been calculated.
enum class DragDetectorResponseStyle : uint32_t {
	/// For an `Class.BasePart.Anchored|Anchored` object both inside the running
	/// experience and in Studio edit mode, the position/orientation of the object
	/// will be updated to exactly reflect the proposed motion. For an unanchored
	/// object, behavior is the same as for an anchored object; however, in a
	/// running experience, the object will be anchored at the start of the drag
	/// and restored to unanchored upon drag release.
	Geometric = 0,
	/// An `Class.BasePart.Anchored|Anchored` object will default to **Geometric**
	/// behavior as it is not affected by forces. An unanchored object will be
	/// moved by constraint forces that attempt to bring it to the desired
	/// position and/or orientation given by the proposed motion.
	Physical = 1,
	/// The object will not move at all, but
	/// `Class.DragDetector.DragFrame|DragFrame` will still be updated and you can
	/// respond to drag manipulation however you'd like.
	Custom = 2
};

/// Determines the coordinate space used when dragging objects in Studio.
/// Determines the coordinate space in which the Studio dragger moves and orients
/// selected objects. Used as the type of the
/// `Class.DraggerService.DraggerCoordinateSpace` property, which defaults to
/// `Enum.DraggerCoordinateSpace.Object`.
enum class DraggerCoordinateSpace : uint32_t {
	/// Dragging is performed relative to the object's local coordinate space.
	Object = 0,
	/// Dragging is performed relative to the world coordinate space.
	World = 1
};

/// Controls whether `Class.DraggerService` moves parts geometrically or with
/// physics simulation during Studio drag operations.
/// Controls whether Studio's drag tool moves parts by directly setting their
/// positions and orientations (`Enum.DraggerMovementMode.Geometric`) or by
/// simulating physics and respecting `Class.Constraint|Constraints` during the
/// drag (`Enum.DraggerMovementMode.Physical`). The active mode is set via
/// `Class.DraggerService.DraggerMovementMode`, which defaults to
/// `Enum.DraggerMovementMode.Geometric`.
enum class DraggerMovementMode : uint32_t {
	/// Parts are moved by directly updating their position and orientation,
	/// ignoring physics and constraints.
	Geometric = 0,
	/// Parts are moved by applying physics impulses, so constraints and
	/// collisions are respected during the drag.
	Physical = 1
};

/// Enum used with `Datatype.TweenInfo.new()` to control the direction
/// `Class.Tween|Tweens` play in.
/// These enum values are passed to `Datatype.TweenInfo.new()` to control the
/// direction `Class.Tween|Tweens` play in.
enum class EasingDirection : uint32_t {
	/// The easing style is applied in a forward direction.
	In = 0,
	/// The easing style is applied in a reverse direction.
	Out = 1,
	/// The easing style is applied forward for the first half and in reverse for
	/// the second half.
	InOut = 2
};

/// Enum used with `Datatype.TweenInfo|TweenInfo.new` to control the motion of a
/// `Class.Tween`.
/// These enum values are passed to `Datatype.TweenInfo|TweenInfo.new()` to
/// control the motion of a `Class.Tween`. The following graphs reflect easing
/// styles for `Enum.EasingDirection|Enum.EasingDirection.In`. For graphs
/// reflecting `Enum.EasingDirection|Enum.EasingDirection.Out` and
/// `Enum.EasingDirection|Enum.EasingDirection.InOut`, see
/// [UI&nbsp;Animations](https://create.roblox.com/docs/ui/animation#style).
/// 
/// <img src="/assets/engine-api/enums/EasingStyle/Easing-Styles-In.png" width="800" alt="Graphs of EasingStyle variations with an 'In' EasingDirection." />
enum class EasingStyle : uint32_t {
	/// Moves at a constant speed.
	Linear = 0,
	/// Speed is determined by a sine wave for a gentle easing motion.
	Sine = 1,
	/// Slightly overshoots the target, then backs into place.
	Back = 2,
	/// Similar to `Sine` but with a slightly sharper curve based on quadratic
	/// interpolation.
	Quad = 3,
	/// Similar to `Cubic` but with an even sharper curve based on quartic
	/// interpolation.
	Quart = 4,
	/// Similar to `Quart` but with an even sharper curve based on quintic
	/// interpolation.
	Quint = 5,
	/// Bounces backwards multiple times after reaching the target, before
	/// eventually settling.
	Bounce = 6,
	/// Moves as if attached to a rubber band, overshooting the target several
	/// times.
	Elastic = 7,
	/// The sharpest curve based on exponential interpolation.
	Exponential = 8,
	/// Follows a circular arc, such that acceleration is more sudden and
	/// deceleration more gradual versus `Quint` or `Exponential`.
	Circular = 9,
	/// Similar to `Quad` but with a slightly sharper curve based on cubic
	/// interpolation.
	Cubic = 10
};

/// This enum is used by `Class.ScrollingFrame.ElasticBehavior` to control when
/// elastic scrolling is active on touch‑enabled devices.
enum class ElasticBehavior : uint32_t {
	/// Scrolling is elastic when there is content to be scrolled to.
	WhenScrollable = 0,
	/// Scrolling is always elastic, even when there isn't content available to
	/// scroll to.
	Always = 1,
	/// Scrolling is never elastic and the canvas will never scroll beyond its
	/// bounds.
	Never = 2
};

/// Defines where and how an `Class.AudioEmitter` is positioned when sending out
/// spatial audio.
enum class EmitterPositionType : uint32_t {
	/// Uses the parent `Class.Instance` of the `Class.AudioEmitter`.
	Parent = 0,
	/// Uses a specified `Class.Instance`.
	Instance = 1
};

/// Describes how many days a player played the current experience in the last 7
/// days, represented as a bucket.
/// The `EngagementLevel` enum describes how many days a player played the current
/// experience in the last 7 days, represented as a bucket.
enum class EngagementLevel : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player did not play the experience in the last 7 days.
	Inactive = 1,
	/// The player played the experience on 1 of the last 7 days.
	Low = 2,
	/// The player played the experience on 2 or 3 of the last 7 days.
	Medium = 3,
	/// The player played the experience on 4 to 7 of the last 7 days.
	High = 4
};

/// Used to control the throttle rate of Roblox's physics engine.
/// The `EnviromentalPhysicsThrottle` enum is used with
/// `Class.PhysicsSettings.PhysicsEnvironmentalThrottle`, controlling how
/// aggressively the engine skips physics simulation steps to reduce CPU load.
enum class EnviromentalPhysicsThrottle : uint32_t {
	/// Automatically adjusts throttle level based on performance.
	DefaultAuto = 0,
	/// No throttling; every physics step runs.
	Disabled = 1,
	/// Maximum throttling; physics is effectively frozen.
	Always = 2,
	/// Runs 1 out of every 2 steps (50% reduction). If
	/// `Class.Workspace.PhysicsSteppingMethod` is set to
	/// `Enum.PhysicsSteppingMethod.Adaptive|Adaptive`, skipping is based on
	/// groups of 4 steps instead of individual steps.
	Skip2 = 3,
	/// Runs 1 out of every 4 steps (75% reduction). If
	/// `Class.Workspace.PhysicsSteppingMethod` is set to
	/// `Enum.PhysicsSteppingMethod.Adaptive|Adaptive`, skipping is based on
	/// groups of 4 steps instead of individual steps.
	Skip4 = 4,
	/// Runs 1 out of every 8 steps (87.5% reduction). If
	/// `Class.Workspace.PhysicsSteppingMethod` is set to
	/// `Enum.PhysicsSteppingMethod.Adaptive|Adaptive`, skipping is based on
	/// groups of 4 steps instead of individual steps.
	Skip8 = 5,
	/// Runs 1 out of every 16 steps (93.75% reduction). If
	/// `Class.Workspace.PhysicsSteppingMethod` is set to
	/// `Enum.PhysicsSteppingMethod.Adaptive|Adaptive`, skipping is based on
	/// groups of 4 steps instead of individual steps.
	Skip16 = 6
};

/// Describes whether a player is new, active, lapsed, or reactivated in the
/// current experience.
/// The `ExperienceActivationStatus` enum describes a player's activity status in
/// the current experience, based on the last 30 days.
enum class ExperienceActivationStatus : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player first played the experience within the last 30 days.
	New = 1,
	/// The player played the experience in the last 30 days and is not `New` or
	/// `Reactivated`.
	Active = 2,
	/// The player has not played the experience in the last 30 days.
	Lapsed = 3,
	/// The player returned to the experience within the last 30 days after being
	/// `Lapsed`.
	Reactivated = 4
};

/// Enumerates the authorization scopes an experience can request when prompting a
/// creator for permission to access their assets.
/// Enumerates the authorization scopes passed to `ExperienceAuthService` when an
/// experience needs to request specific permissions from a creator. Each value
/// maps to an underlying OAuth-style token scope: `CreatorAssetsCreate` resolves
/// to `asset:*:read,write`, granting the experience read and write access to the
/// creator's assets for the duration of the session.
enum class ExperienceAuthScope : uint32_t {
	/// The base scope (value `0`) representing no additional permissions; used
	/// internally when no specific asset authorization is required.
	DefaultScope = 0,
	/// Requests read and write access to the creator's assets; maps to the
	/// `asset:*:read,write` authorization token scope.
	CreatorAssetsCreate = 1
};

/// Describes the lifecycle state of a Roblox experience event as returned by
/// `Class.SocialService`.
/// Describes the lifecycle state of a Roblox experience event.
/// `Class.SocialService:GetExperienceEventAsync()` and
/// `Class.SocialService:GetUpcomingExperienceEventsAsync()` return event
/// dictionaries whose `Status` field is a value of this enum, derived from the
/// `eventStatus` field in the virtual-events API response.
/// `GetUpcomingExperienceEventsAsync()` filters out events whose status is
/// `Cancelled`, `Moderated`, or `Unpublished`, so only `Active` events appear in
/// that list.
enum class ExperienceEventStatus : uint32_t {
	/// The event is currently published and available.
	Active = 0,
	/// The event has been cancelled and will not occur.
	Cancelled = 1,
	/// The event has been removed by moderation.
	Moderated = 2,
	/// The event has been unpublished by the creator.
	Unpublished = 3,
	/// The event status could not be determined.
	Unknown = 4
};

/// Determines whether an `Class.Explosion` creates craters when it detonates.
/// The ExplosionType Enum is used to set the `Class.Explosion.ExplosionType`
/// property.
enum class ExplosionType : uint32_t {
	/// Explosion does not generate craters.
	NoCraters = 0,
	/// Explosion generates craters.
	Craters = 1
};

/// Controls whether Roblox Studio opens scripts in the operating system's default
/// editor or in a user-selected external editor.
/// Controls whether Roblox Studio opens scripts in the operating system's default
/// editor or in a specific editor chosen by the user. Used by the
/// `ExternalEditorMode` property of `Class.Studio`. The default value is
/// `Enum.ExternalEditorMode.SystemDefault`.
/// 
/// When set to `Enum.ExternalEditorMode.UserSelectedEditor`, the
/// `Class.Studio.ExternalEditorSelection` property becomes active and determines
/// which editor executable Studio launches.
enum class ExternalEditorMode : uint32_t {
	/// Studio opens scripts using the operating system's default application for
	/// the file type.
	SystemDefault = 0,
	/// Studio opens scripts using the external editor executable specified in
	/// `Class.Studio.ExternalEditorSelection`.
	UserSelectedEditor = 1
};

/// Specifies the level of detail for FACS blendshape data transmitted by the face
/// tracking system.
/// `FACSDataLod` controls how many FACS (Facial Action Coding System) blendshape
/// weights the face tracking system transmits and processes. Higher LOD numbers
/// transmit fewer controls, reducing network and CPU cost at the expense of
/// facial animation fidelity. The active LOD is selected automatically at runtime
/// based on performance.
enum class FACSDataLod : uint32_t {
	/// Full-fidelity FACS data transmitting all 50 blendshape controls.
	LOD0 = 0,
	/// Reduced FACS data transmitting 6 blendshape controls: JawDrop,
	/// RightEyeClosed, LeftEyeClosed, RightLipCornerPuller, LeftLipCornerPuller,
	/// and Pucker.
	LOD1 = 1,
	/// Sentinel value equal to the total number of FACSDataLod levels; not a
	/// valid LOD to assign.
	LODCount = 2
};

/// Describes the outcome of a facial age estimation inquiry initiated by
/// `Class.FacialAgeEstimationService`.
/// Describes the outcome of a facial age estimation inquiry initiated by
/// `Class.FacialAgeEstimationService`. The result type is reported as the `type`
/// field of the dictionary returned by
/// `Class.FacialAgeEstimationService:InquiryAsync()`.
enum class FacialAgeEstimationResultType : uint32_t {
	/// The facial age estimation inquiry finished successfully.
	Complete = 0,
	/// The facial age estimation inquiry was cancelled before it could complete.
	Cancel = 1,
	/// The facial age estimation inquiry failed due to an error.
	Error = 2
};

/// A bitmask enum describing which facial animation streaming capabilities are
/// active for a user or service.
/// `FacialAnimationStreamingState` is a bitmask enum that represents which facial
/// animation streaming modalities are currently enabled. Values can be combined
/// via bitwise OR to represent multiple active states simultaneously. It covers
/// both per-user opt-in state and place- or server-level enablement.
enum class FacialAnimationStreamingState : uint32_t {
	/// Indicates that no facial animation streaming is active.
	None = 0,
	/// Indicates that audio-based facial animation streaming is enabled for the
	/// user.
	Audio = 1,
	/// Indicates that video-based facial animation streaming is enabled for the
	/// user.
	Video = 2,
	/// Indicates that facial animation streaming is enabled at the place level.
	Place = 4,
	/// Indicates that facial animation streaming is enabled at the server level.
	Server = 8
};

/// Identifies a Facial Action Coding System pose for facial animation.
/// Represents a Facial Action Coding System (FACS) pose used by
/// `Class.EditableMesh` facial-animation methods such as
/// `Class.EditableMesh:GetFacsPose()` and `Class.EditableMesh:SetFacsPose()`.
enum class FacsActionUnit : uint32_t {
	/// Moves the upper lip upward when the chin raiser is engaged.
	ChinRaiserUpperLip = 0,
	/// Raises the chin and moves the lower lip upward.
	ChinRaiser = 1,
	/// Moves the mouth corners inward and presses the lips against the teeth.
	FlatPucker = 2,
	/// Forms an O shape with the mouth.
	Funneler = 3,
	/// Rolls the lower lip over the teeth.
	LowerLipSuck = 4,
	/// Presses the lips together.
	LipPresser = 5,
	/// Brings the lips together relative to the jaw-drop pose.
	LipsTogether = 6,
	/// Moves the mouth to the character's left.
	MouthLeft = 7,
	/// Moves the mouth to the character's right.
	MouthRight = 8,
	/// Puckers the lips into a kiss-like shape.
	Pucker = 9,
	/// Rolls the upper lip over the teeth.
	UpperLipSuck = 10,
	/// Puffs the left cheek.
	LeftCheekPuff = 11,
	/// Moves the left mouth corner backward to form a dimple.
	LeftDimpler = 12,
	/// Lowers the left mouth corner into a frown.
	LeftLipCornerDown = 13,
	/// Lowers the left side of the lower lip to reveal the lower teeth.
	LeftLowerLipDepressor = 14,
	/// Raises the left mouth corner into a smile.
	LeftLipCornerPuller = 15,
	/// Stretches the left mouth corner outward.
	LeftLipStretcher = 16,
	/// Raises the left side of the upper lip to reveal the upper teeth.
	LeftUpperLipRaiser = 17,
	/// Puffs the right cheek.
	RightCheekPuff = 18,
	/// Moves the right mouth corner backward to form a dimple.
	RightDimpler = 19,
	/// Lowers the right mouth corner into a frown.
	RightLipCornerDown = 20,
	/// Lowers the right side of the lower lip to reveal the lower teeth.
	RightLowerLipDepressor = 21,
	/// Raises the right mouth corner into a smile.
	RightLipCornerPuller = 22,
	/// Stretches the right mouth corner outward.
	RightLipStretcher = 23,
	/// Raises the right side of the upper lip to reveal the upper teeth.
	RightUpperLipRaiser = 24,
	/// Lowers the jaw to open the mouth.
	JawDrop = 25,
	/// Moves the mouth and jaw toward the character's left.
	JawLeft = 26,
	/// Moves the mouth and jaw toward the character's right.
	JawRight = 27,
	/// Moves the left and right eyebrows inward.
	Corrugator = 28,
	/// Lowers the left eyebrow.
	LeftBrowLowerer = 29,
	/// Raises the outer part of the left eyebrow.
	LeftOuterBrowRaiser = 30,
	/// Raises the left nostril and wrinkles the left side of the nose.
	LeftNoseWrinkler = 31,
	/// Raises the inner half of the left eyebrow.
	LeftInnerBrowRaiser = 32,
	/// Lowers the right eyebrow.
	RightBrowLowerer = 33,
	/// Raises the outer part of the right eyebrow.
	RightOuterBrowRaiser = 34,
	/// Raises the inner half of the right eyebrow.
	RightInnerBrowRaiser = 35,
	/// Raises the right nostril and wrinkles the right side of the nose.
	RightNoseWrinkler = 36,
	/// Moves the gaze downward.
	EyesLookDown = 37,
	/// Moves the gaze to the left.
	EyesLookLeft = 38,
	/// Moves the gaze upward.
	EyesLookUp = 39,
	/// Moves the gaze to the right.
	EyesLookRight = 40,
	/// Raises the left cheek and squints the left eye.
	LeftCheekRaiser = 41,
	/// Raises the left upper eyelid to reveal more of the eye above the iris.
	LeftEyeUpperLidRaiser = 42,
	/// Closes the left eyelid.
	LeftEyeClosed = 43,
	/// Raises the right cheek and squints the right eye.
	RightCheekRaiser = 44,
	/// Raises the right upper eyelid to reveal more of the eye above the iris.
	RightEyeUpperLidRaiser = 45,
	/// Closes the right eyelid.
	RightEyeClosed = 46,
	/// Bends the tongue downward.
	TongueDown = 47,
	/// Extends the tip of the tongue out of the mouth.
	TongueOut = 48,
	/// Bends the tongue upward.
	TongueUp = 49
};

/// Determines which field-of-view angle a `Class.Camera` holds constant when the
/// viewport is resized.
/// `Enum.FieldOfViewMode` controls which field-of-view (FOV) measurement the
/// `Class.Camera` treats as invariant when the viewport dimensions change. When
/// the viewport is resized, the engine recalculates the other FOV values to keep
/// the chosen axis constant. Used by
/// `Class.Camera.FieldOfViewMode|FieldOfViewMode`, which defaults to
/// `Enum.FieldOfViewMode.Vertical`.
/// 
/// This also controls which axis `Class.Camera.ViewStretch|ViewStretch` will
/// stretch for perspective cameras (which is currently always the horizontal
/// axis).
enum class FieldOfViewMode : uint32_t {
	/// The camera holds its vertical field of view constant when the viewport is
	/// resized. The `Class.Camera.ViewStretch|ViewStretch` will apply to the
	/// horizontal axis.
	Vertical = 0,
	/// The camera holds its diagonal field of view constant when the viewport is
	/// resized. The `Class.Camera.ViewStretch|ViewStretch` will apply to the
	/// horizontal axis.
	Diagonal = 1,
	/// The camera holds the field of view along the longer viewport axis constant
	/// when the viewport is resized. The `Class.Camera.ViewStretch|ViewStretch`
	/// will apply to the horizontal axis.
	MaxAxis = 2
};

/// Controls whether `Class.FileSystemService` normalizes line endings when
/// reading or writing files.
/// The `FileMode` enum is passed to `Class.FileSystemService:ReadFile()` and
/// `Class.FileSystemService:WriteFile()` to control line-ending handling.
/// `Enum.FileMode.Text` normalizes `\r\n` sequences to `\n` on both read and
/// write, ensuring consistent cross-platform behavior when working with text
/// content. `Enum.FileMode.Binary` performs no transformation, preserving every
/// byte exactly as stored on disk.
enum class FileMode : uint32_t {
	/// Reads or writes raw bytes with no line-ending transformation, preserving
	/// all characters exactly as stored on disk.
	Binary = 0,
	/// Reads or writes file content with `\r\n` sequences normalized to `\n`,
	/// ensuring consistent line endings across platforms.
	Text = 1
};

/// Controls whether `Class.FileSystemService:Walk()` descends into
/// subdirectories.
/// Controls whether `Class.FileSystemService:Walk()` traverses only the immediate
/// entries of the target directory or also descends recursively into
/// subdirectories. Pass one of these values as the `mode` argument to `Walk`;
/// when `mode` is omitted the method defaults to
/// `Enum.FileSystemWalkMode.NonRecursive`.
enum class FileSystemWalkMode : uint32_t {
	/// Visits only the immediate entries of the specified directory, without
	/// descending into subdirectories.
	NonRecursive = 0,
	/// Visits all entries in the specified directory and all of its
	/// subdirectories, incrementing the iterator's `Depth` field for each level
	/// descended.
	Recursive = 1
};

/// Used by `Class.UIGridStyleLayout.FillDirection` to control which direction
/// elements are placed.
enum class FillDirection : uint32_t {
	/// Fill in the left-to-right direction.
	Horizontal = 0,
	/// Fill in the top-to-bottom direction.
	Vertical = 1
};

/// Identifies the category of a parse or validation error produced by the Studio
/// Explorer filter expression engine.
/// `Enum.FilterErrorType` classifies each `FilterError` returned when the Studio
/// Explorer filter bar cannot parse or validate a filter expression. A
/// `FilterError` carries the type alongside the source range and human-readable
/// message so tooling can distinguish failure categories programmatically.
/// 
/// Values fall into three groups:
/// 
/// - **Lexer errors** — the raw character stream cannot be tokenized.
/// - **Parser errors** — a valid token stream forms an invalid expression tree.
/// - **Bespoke-filter and property errors** — the expression is syntactically
///   valid but semantically incorrect (unknown property, unsupported type, bad
///   operator, and similar).
enum class FilterErrorType : uint32_t {
	/// A backslash at the end of a quoted string has nothing after it to escape.
	BackslashNotEscapingAnything = 0,
	/// A recognized bespoke filter keyword (such as `classname:`) is missing its
	/// required value, or a `query:` expression contains an invalid query string.
	BadBespokeFilter = 1,
	/// An unexpected token was encountered where a name or identifier was
	/// expected.
	BadName = 2,
	/// Reserved error code for an incomplete `or` expression; currently not
	/// emitted by the filter engine.
	IncompleteOr = 3,
	/// An opening parenthesis `(` in the filter expression has no matching
	/// closing parenthesis `)`.
	IncompleteParenthesis = 4,
	/// A `**` wildcard token directly follows a `*` wildcard in a dotted name
	/// path (for example, `A.*.**.X`), which is not allowed.
	InvalidDoubleStar = 5,
	/// A lone `~` character was found that is not part of the `~=` not-equal
	/// operator.
	InvalidTilde = 6,
	/// A comparison operator other than `=` or `~=` was used with a property type
	/// that only supports equality comparisons.
	PropertyBadOperator = 7,
	/// The named property does not exist on any reflected class known to the
	/// filter engine.
	PropertyDoesNotExist = 8,
	/// A sub-field index (such as `.W`) was used with a vector or color property
	/// that does not have a field by that name.
	PropertyInvalidField = 9,
	/// The value string provided for a property comparison cannot be parsed into
	/// the expected type for that property (for example, `Locked=notabool`).
	PropertyInvalidValue = 10,
	/// A sub-field index was used with a property type that does not support
	/// field access (for example, `Locked.X=true`).
	PropertyUnsupportedFields = 11,
	/// The named property exists but its type is not supported by the filter
	/// engine (for example, complex datatypes such as `CFrame` or `TweenInfo`).
	PropertyUnsupportedProperty = 12,
	/// A `.` in a dotted name path is not followed by a valid name, number, or
	/// wildcard token.
	UnexpectedNameIndex = 13,
	/// A token that cannot be a value (such as an operator) appears where a value
	/// is expected after a comparison operator.
	UnexpectedToken = 14,
	/// An `and` or `or` binary operator appears with no right-hand operand.
	UnfinishedBinaryOperator = 15,
	/// A quoted string was opened but not closed before the end of the filter
	/// input.
	UnfinishedQuote = 16,
	/// A `name:value` token uses a keyword that is not a recognized bespoke
	/// filter type (for example, `foo:Bar`).
	UnknownBespokeFilter = 17,
	/// A wildcard (`*` or `**`) appears in the property portion of a dotted
	/// expression where a concrete property name is required.
	WildcardInProperty = 18
};

/// Used to determine the result of a text filter request.
enum class FilterResult : uint32_t {
	/// Text accepted by filter.
	Accepted = 0,
	/// Text rejected by filter.
	Rejected = 1
};

/// Controls how `Class.ChangeHistoryService:FinishRecording()` completes or
/// discards a recording session.
/// Controls what `Class.ChangeHistoryService:FinishRecording()` does when a
/// plugin ends a recording. Pass `Enum.FinishRecordingOperation.Commit` to push
/// recorded changes onto the undo/redo stack,
/// `Enum.FinishRecordingOperation.Append` to merge them with the previous entry
/// when possible, or `Enum.FinishRecordingOperation.Cancel` to discard them.
enum class FinishRecordingOperation : uint32_t {
	/// Cancels the recording, automatically undoing any work in progress.
	Cancel = 0,
	/// Commits the recorded work.
	Commit = 1,
	/// Commits the recorded work and merges with the previous recording if
	/// possible.
	Append = 2
};

/// Determines the geometric representation used to compute aerodynamic forces.
/// Determines the geometric representation used to compute aerodynamic forces and
/// torques for `Class.MeshPart` and `Class.PartOperation` instances.
enum class FluidFidelity : uint32_t {
	/// Let the physics engine select the geometric representation for aerodynamic
	/// force and torque calculations.
	Automatic = 0,
	/// Use the current collision geometry specified by
	/// `Class.TriangleMeshPart.CollisionFidelity` for aerodynamic force and
	/// torque calculations .
	UseCollisionGeometry = 1,
	/// Force the engine to compute aerodynamic forces and torques using a more
	/// precise geometry representation based on the original mesh. This option
	/// may increase join and replication time if used on a large scale.
	UsePreciseGeometry = 2
};

/// Controls the enablement of aerodynamic forces on parts and assemblies in the
/// workspace.
/// Used as an enum value for `Class.Workspace.FluidForces` to control the
/// enablement of aerodynamic forces on parts and assemblies in the workspace.
/// Note that this enum is not applicable in scripting and
/// `Class.Workspace.FluidForces` must be toggled in Studio.
enum class FluidForces : uint32_t {
	/// Aerodynamic forces will not be calculated on any
	/// `Class.BasePart|BaseParts`.
	Default = 0,
	/// Aerodynamic forces will be calculated on `Class.BasePart|BaseParts` with
	/// `Class.BasePart.EnableFluidForces|EnableFluidForces` set to true. During
	/// the beta phase, the behavior of the aerodynamic force model may change as
	/// the model improves.
	Experimental = 1
};

/// Determines the font used to render text in GUI objects such as
/// Class.TextLabel, Class.TextButton, and Class.TextBox. This is a legacy
/// property. For new work, use `Datatype.Font`,
/// `Class.TextLabel.FontFace|FontFace`, and `Class.TextButton.FontFace|FontFace`
/// instead.
/// The `Font` enum is used in `Class.TextBox`, `Class.TextLabel`,
/// `Class.TextButton`, and similar GUI objects to determine how the element will
/// render its text.
/// 
/// See also `Datatype.Font` as a newer alternative to this enum which
/// encapsulates fonts as a datatype and provides access to more fonts than this
/// enum allows.
enum class Font : uint32_t {
	/// <img src="../../../assets/engine-api/enums/Font/Legacy.png" />
	Legacy = 0,
	/// `Arial` has been removed. Using it will map to the `Arimo` font family of
	/// the `Datatype.Font` data type.
	Arial = 1,
	/// `ArialBold` has been removed. Using it will map to the `Arimo` font family
	/// of the `Datatype.Font` data type.
	ArialBold = 2,
	/// <img src="../../../assets/engine-api/enums/Font/SourceSans.png" />
	SourceSans = 3,
	/// <img src="../../../assets/engine-api/enums/Font/SourceSansBold.png" />
	SourceSansBold = 4,
	/// <img src="../../../assets/engine-api/enums/Font/SourceSansLight.png" />
	SourceSansLight = 5,
	/// <img src="../../../assets/engine-api/enums/Font/SourceSansItalic.png" />
	SourceSansItalic = 6,
	/// <img src="../../../assets/engine-api/enums/Font/Bodoni.png" />
	Bodoni = 7,
	/// <img src="../../../assets/engine-api/enums/Font/Garamond.png" />
	Garamond = 8,
	/// <img src="../../../assets/engine-api/enums/Font/Cartoon.png" />
	Cartoon = 9,
	/// <img src="../../../assets/engine-api/enums/Font/Code.png" />
	Code = 10,
	/// <img src="../../../assets/engine-api/enums/Font/Highway.png" />
	Highway = 11,
	/// <img src="../../../assets/engine-api/enums/Font/SciFi.png" />
	SciFi = 12,
	/// <img src="../../../assets/engine-api/enums/Font/Arcade.png" />
	Arcade = 13,
	/// <img src="../../../assets/engine-api/enums/Font/Fantasy.png" />
	Fantasy = 14,
	/// <img src="../../../assets/engine-api/enums/Font/Antique.png" />
	Antique = 15,
	/// <img src="../../../assets/engine-api/enums/Font/SourceSansSemibold.png" />
	SourceSansSemibold = 16,
	/// `Gotham` has been removed. Using it will map to the `Montserrat` font
	/// family of the `Datatype.Font` data type.
	Gotham = 17,
	/// `GothamMedium` has been removed. Using it will map to the `Montserrat`
	/// font family of the `Datatype.Font` data type.
	GothamMedium = 18,
	/// `GothamBold` has been removed. Using it will map to the `Montserrat` font
	/// family of the `Datatype.Font` data type.
	GothamBold = 19,
	/// `GothamBlack` has been removed. Using it will map to the `Montserrat` font
	/// family of the `Datatype.Font` data type.
	GothamBlack = 20,
	/// <img src="../../../assets/engine-api/enums/Font/AmaticSC.png" />
	AmaticSC = 21,
	/// <img src="../../../assets/engine-api/enums/Font/Bangers.png" />
	Bangers = 22,
	/// <img src="../../../assets/engine-api/enums/Font/Creepster.png" />
	Creepster = 23,
	/// <img src="../../../assets/engine-api/enums/Font/DenkOne.png" />
	DenkOne = 24,
	/// <img src="../../../assets/engine-api/enums/Font/Fondamento.png" />
	Fondamento = 25,
	/// <img src="../../../assets/engine-api/enums/Font/FredokaOne.png" />
	FredokaOne = 26,
	/// <img src="../../../assets/engine-api/enums/Font/GrenzeGotisch.png" />
	GrenzeGotisch = 27,
	/// <img src="../../../assets/engine-api/enums/Font/IndieFlower.png" />
	IndieFlower = 28,
	/// <img src="../../../assets/engine-api/enums/Font/JosefinSans.png" />
	JosefinSans = 29,
	/// <img src="../../../assets/engine-api/enums/Font/Jura.png" />
	Jura = 30,
	/// <img src="../../../assets/engine-api/enums/Font/Kalam.png" />
	Kalam = 31,
	/// <img src="../../../assets/engine-api/enums/Font/LuckiestGuy.png" />
	LuckiestGuy = 32,
	/// <img src="../../../assets/engine-api/enums/Font/Merriweather.png" />
	Merriweather = 33,
	/// <img src="../../../assets/engine-api/enums/Font/Michroma.png" />
	Michroma = 34,
	/// <img src="../../../assets/engine-api/enums/Font/Nunito.png" />
	Nunito = 35,
	/// <img src="../../../assets/engine-api/enums/Font/Oswald.png" />
	Oswald = 36,
	/// <img src="../../../assets/engine-api/enums/Font/PatrickHand.png" />
	PatrickHand = 37,
	/// <img src="../../../assets/engine-api/enums/Font/PermanentMarker.png" />
	PermanentMarker = 38,
	/// <img src="../../../assets/engine-api/enums/Font/Roboto.png" />
	Roboto = 39,
	/// <img src="../../../assets/engine-api/enums/Font/RobotoCondensed.png" />
	RobotoCondensed = 40,
	/// <img src="../../../assets/engine-api/enums/Font/RobotoMono.png" />
	RobotoMono = 41,
	/// <img src="../../../assets/engine-api/enums/Font/Sarpanch.png" />
	Sarpanch = 42,
	/// <img src="../../../assets/engine-api/enums/Font/SpecialElite.png" />
	SpecialElite = 43,
	/// <img src="../../../assets/engine-api/enums/Font/TitilliumWeb.png" />
	TitilliumWeb = 44,
	/// <img src="../../../assets/engine-api/enums/Font/Ubuntu.png" />
	Ubuntu = 45,
	/// <img src="../../../assets/engine-api/enums/Font/BuilderSans.png" />
	/// 
	/// See [Builder Font License](https://create.roblox.com/docs/resources/builder-font-license).
	BuilderSans = 46,
	/// <img src="../../../assets/engine-api/enums/Font/BuilderSansMedium.png" />
	/// 
	/// See [Builder Font License](https://create.roblox.com/docs/resources/builder-font-license).
	BuilderSansMedium = 47,
	/// <img src="../../../assets/engine-api/enums/Font/BuilderSansBold.png" />
	/// 
	/// See [Builder Font License](https://create.roblox.com/docs/resources/builder-font-license).
	BuilderSansBold = 48,
	/// <img src="../../../assets/engine-api/enums/Font/BuilderSansExtraBold.png" />
	/// 
	/// See [Builder Font License](https://create.roblox.com/docs/resources/builder-font-license).
	BuilderSansExtraBold = 49,
	/// <img src="../../../assets/engine-api/enums/Font/Arimo.png" />
	Arimo = 50,
	/// <img src="../../../assets/engine-api/enums/Font/ArimoBold.png" />
	ArimoBold = 51,
	/// Set when the GUI object's font face is set to a `Datatype.Font` that has
	/// no corresponding enum value.
	Unknown = 100
};

/// Specifies preset font sizes for text-rendering UI objects such as
/// `Class.TextLabel`, `Class.TextButton`, and `Class.TextBox`. Prefer the
/// `TextSize` property instead of this deprecated enum.
/// The `FontSize` enum controls the font size of text in `Class.TextBox`,
/// `Class.TextLabel`, `Class.TextButton`, and similar objects.
enum class FontSize : uint32_t {
	/// Font size `8`.
	Size8 = 0,
	/// Font size `9`.
	Size9 = 1,
	/// Font size `10`.
	Size10 = 2,
	/// Font size `11`.
	Size11 = 3,
	/// Font size `12`.
	Size12 = 4,
	/// Font size `14`.
	Size14 = 5,
	/// Font size `18`.
	Size18 = 6,
	/// Font size `24`.
	Size24 = 7,
	/// Font size `36`.
	Size36 = 8,
	/// Font size `48`.
	Size48 = 9,
	/// Font size `28`.
	Size28 = 10,
	/// Font size `32`.
	Size32 = 11,
	/// Font size `42`.
	Size42 = 12,
	/// Font size `60`.
	Size60 = 13,
	/// Font size `96`.
	Size96 = 14
};

/// Describes whether a `Datatype.Font` style is normal or italic.
/// Describes whether a `Datatype.Font` style is normal or italic. Used by
/// `Datatype.Font.Style`.
enum class FontStyle : uint32_t {
	/// The text renders normally with this font.
	Normal = 0,
	/// The text renders italic with this font.
	Italic = 1
};

/// The **ForceLimitMode** enum determines how the maximum force for a constraint
/// is specified and how that limit is enforced by the constraint.
/// This enum is used to determine how the maximum force for a constraint is
/// specified and how that limit will be enforced by the constraint.
enum class ForceLimitMode : uint32_t {
	/// A single number is used to specify the magnitude of the maximum constraint
	/// force. The constraint will ensure that the force it applies will have a
	/// magnitude that is less than this limit.
	Magnitude = 0,
	/// A vector is used to specify the maximum force value along each axis of a
	/// given reference frame. The constraint will ensure that each component of
	/// the force will have an absolute value that's less than the corresponding
	/// vector entry.
	PerAxis = 1
};

/// Deprecated enum that previously controlled the minimum size and resize
/// increment of a `Class.FormFactorPart` along each axis.
/// The FormFactor Enum for `Class.FormFactorPart.FormFactor`.
/// 
/// Minimum size along a given axis is 1 \* RateOfIncrease for that axis, except
/// in the case of the "Custom" FormFactor, which has a minimum size of 0.2 along
/// all axes.
/// @deprecated This item is deprecated as parts no longer contain a FormFactor to determine their minimum size. The minimum size of all parts now behaves like "Custom" by default.
enum class FormFactor : uint32_t {
	/// Increases by a rate of 1 along all axes.
	Symmetric = 0,
	/// Increases by a rate of 1 along the x- and z- axes, 1.2 along the y-axis.
	Brick = 1,
	/// Increases by a rate of 1 along the x- and z- axes, 0.4 along the y-axis.
	Plate = 2,
	/// Increases by a rate as low as .001 along all axes.
	Custom = 3
};

/// Used to set the style of a `Class.Frame`.
/// The **FrameStyle** enum is used to set the style of a `Class.Frame`.
enum class FrameStyle : uint32_t {
	/// Uses the frame's `Class.GuiObject.BackgroundColor3`,
	/// `Class.GuiObject.BorderColor3`, and
	/// `Class.GuiObject.BackgroundTransparency` properties to determine the
	/// frame's appearance. It has no padding; elements with the position
	/// `Datatype.UDim2.new(0, 0, 0, 0)` will appear at the frame's top-left
	/// corner.
	Custom = 0,
	/// Causes the frame to appear similar to a `Class.Dialog` with its
	/// `Class.Dialog.Tone|Tone` property set to `Enum.DialogTone.Neutral`. Like
	/// **ChatGreen** and **ChatRed**, this has a padding of fifteen pixels on all
	/// sides.
	ChatBlue = 1,
	/// Causes the frame to appear as a translucent dark gray rectangle with a
	/// padding of five pixels on all sides.
	RobloxSquare = 2,
	/// Causes the frame to appear as a translucent dark gray rectangle with
	/// rounded edges. Like **RobloxSquare**, this has a padding of five pixels on
	/// all sides.
	RobloxRound = 3,
	/// Causes the frame to appear similar to a `Class.Dialog` with its
	/// `Class.Dialog.Tone|Tone` property set to `Enum.DialogTone.Friendly`. Like
	/// **ChatBlue** and **ChatRed**, this has a padding of fifteen pixels on all
	/// sides.
	ChatGreen = 4,
	/// Causes the frame to appear similar to a `Class.Dialog` with its
	/// `Class.Dialog.Tone|Tone` property set to `Enum.DialogTone.Enemy`. Like
	/// **ChatBlue** and **ChatGreen**, this has a padding of fifteen pixels on
	/// all sides.
	ChatRed = 5,
	/// Causes the frame to appear as a translucent gray rectangle with blurred
	/// sides. The blur is more apparent on the bottom edge. It has a padding of
	/// eight pixels on all sides.
	DropShadow = 6
};

/// Controls how the Frame Rate Manager (FRM) adjusts rendering quality to
/// maintain target frame rates.
/// Controls how the Frame Rate Manager (FRM) dynamically scales rendering quality
/// — including view distance, block count, and quality level — to meet frame rate
/// targets. The FRM is enabled separately via `Class.RenderSettings.EnableFRM`;
/// this enum selects its operating mode when active.
enum class FramerateManagerMode : uint32_t {
	/// The engine selects whether to run FRM based on hardware and platform
	/// context. This is the default.
	Automatic = 0,
	/// FRM is explicitly enabled and dynamically adjusts rendering quality to
	/// meet frame rate targets.
	On = 1,
	/// FRM quality throttling is disabled; block count is fixed at the baseline
	/// level regardless of frame rate.
	Off = 2
};

/// Used with `Class.Player.FrustumStreaming` to control the engine's instance
/// streaming behavior for their camera view
enum class FrustumStreamingMode : uint32_t {
	/// Default behavior, currently equivalent to `Disabled`.
	Default = 0,
	/// Always stream camera view.
	Enabled = 1,
	/// Disable camera view streaming.
	Disabled = 2,
	/// Allow the engine to decide when to stream the camera view based client
	/// ability and gameplay factors.
	Automatic = 3
};

/// Status of a single functional test run.
/// Represents the outcome of a single functional test run.
enum class FunctionalTestResult : uint32_t {
	/// The test run was successful.
	Passed = 0,
	/// The test run is potentially unstable.
	Warning = 1,
	/// The test run failed.
	Error = 2
};

/// Value indicating which type of avatar an experience uses.
/// The value of this Enum indicates which type of avatar an experience uses. Some
/// experiences may specify explicitly R6/R15, while some will allow the player's
/// choice of avatar to be used.
enum class GameAvatarType : uint32_t {
	/// The R6 character rig.
	R6 = 0,
	/// The R15 character rig.
	R15 = 1,
	/// The rig (either R6 or
	/// [R15](https://create.roblox.com/docs/avatar/character-bodies/specifications#rigging)
	/// determined by a player's character settings set on the website in the
	/// 'Edit Avatar' page.
	PlayerChoice = 2
};

/// Identifies the hardware type of a connected gamepad controller.
/// Identifies the hardware type of a connected gamepad (for example PlayStation
/// or Xbox). Detected when a gamepad connects. On console platforms the value is
/// fixed to the platform's native controller type; elsewhere it reflects the most
/// recently connected gamepad, defaulting to `Enum.GamepadType.Unknown` when none
/// has connected or the type cannot be determined.
/// 
/// Use `Class.UserInputService:GetImageForKeyCode()` to get an image
/// representation of a KeyCode for a given gamepad.
enum class GamepadType : uint32_t {
	/// A gamepad whose hardware type could not be determined, or no gamepad has
	/// connected yet.
	Unknown = 0,
	/// A Sony PlayStation 4 DualShock controller.
	PS4 = 1,
	/// A Sony PlayStation 5 DualSense controller.
	PS5 = 2,
	/// A Microsoft Xbox One controller.
	XboxOne = 3
};

/// Controls which gear genres are permitted in a place.
/// The GearGenreSetting Enum sets what types of gear are allowed in a place.
/// @deprecated This enum is deprecated as it is used by deprecated properties that are no longer functional. It should not be used.
enum class GearGenreSetting : uint32_t {
	/// All gear genres are allowed.
	AllGenres = 0,
	/// Only gear genres matching the allowed genres specified in a place's
	/// configuration settings.
	MatchingGenreOnly = 1
};

/// Categorizes gear items by type for use with deprecated gear-allowlist
/// properties.
/// The GearType Enum is used as an argument in
/// `Class.DataModel:IsGearTypeAllowed()`. Gear may have more than one
/// type/attribute.
/// @deprecated This enum is deprecated because it's used by deprecated properties. Don't use it.
enum class GearType : uint32_t {
	/// Gear with the 'Melee' attribute.
	MeleeWeapons = 0,
	/// Gear with the 'Ranged' attribute.
	RangedWeapons = 1,
	/// Gear with the 'Explosive' attribute.
	Explosives = 2,
	/// Gear with the 'Power Up' attribute.
	PowerUps = 3,
	/// Gear with the 'Navigation' attribute.
	NavigationEnhancers = 4,
	/// Gear with the 'Musical' attribute.
	MusicalInstruments = 5,
	/// Gear with the 'Social' attribute.
	SocialItems = 6,
	/// Gear with the 'Building' attribute.
	BuildingTools = 7,
	/// Gear with the 'Transport' attribute.
	Transport = 8
};

/// Used to represent the type of game.
/// `Genre` categorizes an experience by its play-style theme. Its only consumer
/// is the `Class.DataModel.Genre` property, which is deprecated and no longer
/// functional — reading `Class.DataModel.Genre` may throw an error. The enum
/// values are listed here for reference only; new experiences should not depend
/// on this enum.
enum class Genre : uint32_t {
	/// The game's genre is set to All. The game will be listed as all possible
	/// genres.
	All = 0,
	/// The game's genre is set to Town and City.
	TownAndCity = 1,
	/// The game's genre is set to Fantasy.
	Fantasy = 2,
	/// The game's genre is set to SciFi (Science Fiction).
	SciFi = 3,
	/// The game's genre is set to Ninja.
	Ninja = 4,
	/// The game's genre is set to Scary.
	Scary = 5,
	/// The game's genre is set to Pirate.
	Pirate = 6,
	/// The game's genre is set to Adventure.
	Adventure = 7,
	/// The game's genre is set to Sports.
	Sports = 8,
	/// The game's genre is set to Funny.
	Funny = 9,
	/// The game's genre is set to Wild West.
	WildWest = 10,
	/// The game's genre is set to War.
	War = 11,
	/// The game's genre is set to Skate Park.
	SkatePark = 12,
	/// The game's genre is set to Tutorial.
	Tutorial = 13
};

/// Used alongside `Class.UIGradient.TileMode` to set how the gradient repeats.
/// Used alongside `Class.UIGradient.TileMode` to set how the gradient repeats
/// when the full sequence does not fully cover the parent `Class.GuiObject`.
enum class GradientTileMode : uint32_t {
	/// Default mode where the color/transparency values at the start and end of
	/// the sequence extend infinitely, so the start values fill any area before
	/// the gradient and the end values fill any area after it.
	Clamp = 0,
	/// The gradient repeats by wrapping the color/transparency sequence tiles
	/// seamlessly from end back to start. This can produce a visible seam if the
	/// first and last color/transparency values in the sequence differ.
	Repeat = 1,
	/// The gradient reflects at each boundary so the color/transparency sequence
	/// ping-pongs. This produces a smooth repetition with no seam, since the
	/// direction reverses at each tile edge.
	Mirror = 2
};

/// Used alongside `Class.UIGradient.Type` to set the shape of the gradient.
/// Used alongside `Class.UIGradient.Type` to set the shape of the gradient as
/// linear, radial, elliptical, or conical.
enum class GradientType : uint32_t {
	/// The color/transparency sequence transitions in a straight line across the
	/// element. The direction is controlled by
	/// `Class.UIGradient.Rotation|Rotation` and the position by
	/// `Class.UIGradient.Offset|Offset`.
	Linear = 0,
	/// The color/transparency sequence radiates outward from the element's
	/// center, optionally shifted by `Class.UIGradient.Offset|Offset`. The radius
	/// is defined by the average of the element's width and height divided by
	/// two, effectively `(width+height)/4`. `Class.UIGradient.Rotation|Rotation`
	/// has no effect on a radial gradient.
	Radial = 1,
	/// The color/transparency sequence sweeps clockwise around the center of the
	/// element, optionally shifted by `Class.UIGradient.Offset|Offset`.
	/// `Class.UIGradient.Rotation|Rotation` controls the starting angle of the
	/// sweep.
	Conical = 2,
	/// The color/transparency sequence radiates outward from the element's center
	/// in an ellipse, optionally shifted by `Class.UIGradient.Offset|Offset`. The
	/// ellipse's horizontal and vertical radii are half the element's width and
	/// height, respectively, so the ellipse fits the element's bounds.
	/// `Class.UIGradient.Rotation|Rotation` rotates the ellipse's axes.
	Elliptical = 3
};

/// Used to set the graphics API that Roblox uses to render the game.
enum class GraphicsMode : uint32_t {
	/// Roblox will automatically decide what graphics mode to use, depending on
	/// what best suits your device's specifications.
	Automatic = 1,
	/// Direct3D Version 11 (Microsoft).
	Direct3D11 = 2,
	/// OpenGL (Khronos Group).
	OpenGL = 4,
	/// Metal (Apple).
	Metal = 5,
	/// Vulkan (Khronos Group).
	Vulkan = 6,
	/// Game will not be rendered, and instead a _Diagnostics_ window is rendered
	/// on screen.
	NoGraphics = 9
};

/// Specifies the player's preferred trade-off between rendering quality and frame
/// rate when using manual graphics quality.
/// Preferred trade-off between visual quality and performance for
/// `Class.UserGameSettings.GraphicsOptimizationMode` when the player uses
/// **manual** graphics quality. This setting has no effect when graphics quality
/// is automatic. Defaults to `Enum.GraphicsOptimizationMode.Balanced`.
enum class GraphicsOptimizationMode : uint32_t {
	/// Prefers frame rate over visual fidelity, corresponding to manual render
	/// quality levels 1–3.
	Performance = 0,
	/// Middle-ground preference, corresponding to manual render quality levels
	/// 4–7. This is the default of
	/// `Class.UserGameSettings.GraphicsOptimizationMode`.
	Balanced = 1,
	/// Prefers visual fidelity over frame rate, corresponding to manual render
	/// quality levels 8–10.
	Quality = 2
};

/// Defines the possible outcomes of the `Class.GroupService:PromptJoinAsync()`
/// method.
/// `GroupMembershipStatus` is an enumeration that represents the result of a
/// player's interaction with the `Class.GroupService:PromptJoinAsync()` method.
/// It conveys the player's group membership status after the prompt.
enum class GroupMembershipStatus : uint32_t {
	/// The player chose not to join, cancelled the prompt, or was not eligible to
	/// join the group.
	None = 0,
	/// The player successfully joined the group during the prompt.
	Joined = 1,
	/// The player submitted a request to join the group, or already had a pending
	/// join request prior to prompting.
	JoinRequestPending = 2,
	/// The player was already a member of the group.
	AlreadyMember = 3
};

/// Describes the current interaction state of a `Class.GuiObject`.
/// Describes the current input state of a `Class.GuiObject`, as reported by its
/// read-only `Class.GuiObject.GuiState` property. The engine sets this value
/// automatically based on user input; it cannot be set from scripts. The value
/// defaults to `Enum.GuiState.Idle` when the object is not being interacted with.
enum class GuiState : uint32_t {
	/// The GuiObject is idle — neither hovered nor pressed.
	Idle = 0,
	/// The GUI is being hovered over by the user.
	Hover = 1,
	/// The GUI is being pressed/held down by the user.
	Press = 2,
	/// The GUI cannot be interacted with and therefore has no states.
	NonInteractable = 3
};

/// Determines the visual style of `Class.Handles` object handles.
/// Determines the visual style of `Class.Handles` object handles. Setting
/// `Class.Handles.Style` to a value from this enum controls whether the handles
/// rendered on each face of the adornee appear as spheres
/// (`Enum.HandlesStyle.Resize`) or as directional arrows
/// (`Enum.HandlesStyle.Movement`). The default value of `Class.Handles.Style` is
/// `Enum.HandlesStyle.Resize`.
enum class HandlesStyle : uint32_t {
	/// Renders `Class.Handles` as sphere shapes for resizing an adornee along its
	/// face axes (the default style).
	Resize = 0,
	/// Renders `Class.Handles` as directional arrow shapes for translating an
	/// adornee along its face axes.
	Movement = 1
};

/// Enum used alongside `Class.HapticEffect.Type`.
enum class HapticEffectType : uint32_t {
	/// Allows for application of a custom haptic waveform through the
	/// `Class.HapticEffect:SetWaveformKeys()` method.
	Custom = 0,
	/// Useful for when a player browses over an object (often a UI object)
	/// without the intention of triggering its action; it can also alert the
	/// player that they have browsed over an interactable object. This effect
	/// type is subtle and does not disrupt the gameplay experience.
	UIHover = 1,
	/// Useful for when a player has selected an object (often a UI object) with
	/// the intention of triggering its action. This effect type is crisp and it
	/// provides immediate feedback without being overwhelming.
	UIClick = 2,
	/// Useful for when there is an inbound message that should draw the player's
	/// attention away from their current gameplay and prompt them that the
	/// notification requires immediate attention or action.
	UINotification = 3,
	/// Useful to signify a large-scale physics event that triggers impact across
	/// a large portion of a given scene. This effect is high intensity in order
	/// to represent the magnitude of the impact and it lingers for a longer
	/// period of time than `GameplayCollision`.
	GameplayExplosion = 4,
	/// This effect is a large immediate rumble that dies down quickly, useful to
	/// signify a clear and purposeful impact between objects.
	GameplayCollision = 5
};

/// A Cryptographic hash function to use in `Class.EncodingService` methods.
/// A
/// [Cryptographic hash function](https://en.wikipedia.org/wiki/Cryptographic_hash_function)
/// to use in `Class.EncodingService` methods.
enum class HashAlgorithm : uint32_t {
	/// Used to compute a 256-bit (32-byte) hash digest using the
	/// [BLAKE2b](https://en.wikipedia.org/wiki/BLAKE2) algorithm.
	Blake2b = 0,
	/// Used to compute a 256-bit (32-byte) hash digest using the
	/// [BLAKE3](https://en.wikipedia.org/wiki/BLAKE3) algorithm.
	Blake3 = 1,
	/// Used to compute a 128-bit (16-byte) hash digest using the
	/// [MD5](https://en.wikipedia.org/wiki/MD5) algorithm.
	Md5 = 2,
	/// Used to compute a 160-bit (20-byte) hash digest using the
	/// [SHA-1](https://en.wikipedia.org/wiki/SHA-1) algorithm.
	Sha1 = 3,
	/// Used to compute a 256-bit (32-byte) hash digest using the
	/// [SHA256](https://en.wikipedia.org/wiki/SHA-2) algorithm.
	Sha256 = 4
};

/// Controls how the `Class.Highlight` effect displays with respect to other
/// objects in the world.
enum class HighlightDepthMode : uint32_t {
	/// Allows the `Class.Highlight` to display regardless if there are objects
	/// between the camera and the highlighted object. This means the viewer is
	/// always able to see the highlight regardless of what is between the
	/// highlighted object and the camera.
	/// 
	/// <img src="/assets/ui/highlighting-objects/DepthMode-AlwaysOnTop.jpg" />
	AlwaysOnTop = 0,
	/// Hides the `Class.Highlight` if there are objects between the camera and
	/// the highlighted object. This means the viewer is only able to see the
	/// object if there are no obstructing objects between the highlighted object
	/// and the camera's view.
	/// 
	/// <img src="/assets/ui/highlighting-objects/DepthMode-Occluded.jpg" />
	Occluded = 1
};

/// Used by `Class.UIGridStyleLayout.HorizontalAlignment` to align the layout
/// horizontally within its parent.
enum class HorizontalAlignment : uint32_t {
	/// Grid is aligned to the center of its parent along the **X** axis.
	Center = 0,
	/// Grid is aligned to the left edge of its parent.
	Left = 1,
	/// Grid is aligned to the right edge of its parent.
	Right = 2
};

/// Specifies the animation speed of the hover highlight in Roblox Studio.
/// Specifies how frequently the hover animation flashes.
enum class HoverAnimateSpeed : uint32_t {
	/// 2 seconds per cycle.
	VerySlow = 0,
	/// 1 second per cycle.
	Slow = 1,
	/// 0.5 seconds per cycle.
	Medium = 2,
	/// 0.25 seconds per cycle.
	Fast = 3,
	/// 0.1 seconds per cycle.
	VeryFast = 4
};

/// Specifies the compression algorithm applied to HTTP request body sent via
/// `Class.HttpService`.
/// Specifies the compression algorithm applied to the body of an HTTP request
/// when calling `Class.HttpService:RequestAsync()` or
/// `Class.HttpService:PostAsync()`. Pass this enum value in the `Compress` field
/// of the request options table to reduce bandwidth when sending large payloads.
enum class HttpCompression : uint32_t {
	/// No compression is applied to the request body. This is the default.
	None = 0,
	/// The request body is compressed using the Gzip algorithm before being sent.
	Gzip = 1
};

/// Specifies the value of the HTTP Content-Type header which describes the HTTP
/// request data type.
enum class HttpContentType : uint32_t {
	/// Represents the "application/json" Content-Type.
	ApplicationJson = 0,
	/// Represents the "application/xml" Content-Type.
	ApplicationXml = 1,
	/// Represents the "application/x-www-form-urlencoded" Content-Type.
	ApplicationUrlEncoded = 2,
	/// Represents the "text/plain" Content-Type.
	TextPlain = 3,
	/// Represents the "text/xml" Content-Type.
	TextXml = 4
};

/// Enum representing errors that can occur when making HTTP requests, unrelated
/// to HTTP status codes returned by the server.
/// Transport-level errors that can occur when making HTTP requests via
/// `Class.HttpService`. These values are distinct from HTTP status codes (such as
/// 404 or 500) that a remote server might return in a successful response;
/// `Enum.HttpError` values indicate that the request did not complete normally at
/// the network or client level.
/// 
/// When a request callback receives an error code other than `Enum.HttpError.OK`,
/// the associated `HttpResponse` should not be considered valid.
enum class HttpError : uint32_t {
	/// No error occurred; the request completed successfully. This value is
	/// unrelated to the HTTP 200 OK status code.
	OK = 0,
	/// The request URL is malformed or otherwise invalid; depending on the
	/// platform, a bad URL might instead surface as `Enum.HttpError.DnsResolve`
	/// or `Enum.HttpError.ConnectFail`.
	InvalidUrl = 1,
	/// The hostname in the request URL could not be resolved via DNS.
	DnsResolve = 2,
	/// The client failed to establish a TCP connection to the remote host.
	ConnectFail = 3,
	/// The client ran out of memory while processing the HTTP request or
	/// response.
	OutOfMemory = 4,
	/// The request did not receive a response within the allowed time limit.
	TimedOut = 5,
	/// The server returned more redirects than the client is configured to
	/// follow.
	TooManyRedirects = 6,
	/// The server returned a redirect response with an invalid or malformed
	/// Location header.
	InvalidRedirect = 7,
	/// A general network-level failure occurred that does not fall into a more
	/// specific error category.
	NetFail = 8,
	/// The HTTP request was aborted before it could complete.
	Aborted = 9,
	/// The TLS/SSL handshake with the remote server failed during connection
	/// establishment.
	SslConnectFail = 10,
	/// The server's TLS certificate could not be verified.
	SslVerificationFail = 11,
	/// An error occurred that does not map to any other `Enum.HttpError` value.
	Unknown = 12,
	/// The connection was closed by the remote end before the full response was
	/// received, typically indicating a server or network problem.
	ConnectionClosed = 13,
	/// An HTTP/2 protocol-level error was returned by the server.
	ServerProtocolError = 14,
	/// The request was sent from a non-live environment (such as Studio) and the
	/// target service does not support creator environments.
	CreatorEnvironmentsNotSupportedByService = 15,
	/// A streaming request timed out because no data was transferred during the
	/// inactivity window.
	InactivityTimeout = 16,
	/// The request was rejected because the client has exceeded its limit for
	/// concurrent or pending requests.
	TooManyOutstandingRequests = 17,
	/// The server returned an invalid response to a ranged HTTP request, such as
	/// responding with a full 200 status instead of the expected 206 Partial
	/// Content.
	InvalidRangeResponse = 18
};

/// The collision `Class.Humanoid` uses.
/// Enum to select the `Class.Humanoid.CollisionType`.
enum class HumanoidCollisionType : uint32_t {
	/// Dynamically sized collision boxes based on mesh sizes.
	OuterBox = 0,
	/// Fixed size collision boxes, similar to the classic avatar collision.
	InnerBox = 1
};

/// HumanoidDisplayDistanceType determines how
/// `Class.Humanoid.HealthDisplayDistance`, and
/// `Class.Humanoid.NameDisplayDistance` are used in determining whether a
/// players's name and health are visible to other players.
enum class HumanoidDisplayDistanceType : uint32_t {
	/// A player selecting `Viewer` on their `Class.Humanoid` will see the Name
	/// and healthbar of other players if those other players are within the
	/// distance settings set in the `Class.Humanoid` selecting `Viewer` (this can
	/// be thought of as the lowest priority, and will not be taken into account
	/// if other players are selecting 'Subject' or 'None').
	Viewer = 0,
	/// A player selecting `Subject` on their `Class.Humanoid` will allow other
	/// players to see their Name and healthbar if those other players are within
	/// the distance settings set in the `Class.Humanoid` selecting `Subject`
	/// (this can be thought of as the second highest priority).
	Subject = 1,
	/// A player selecting `None` on their `Class.Humanoid` will not have their
	/// Name and healthbar displayed to other players under any circumstance (this
	/// can be thought of as the highest priority).
	None = 2
};

/// Controls under what circumstances the `Class.Humanoid` health bar is
/// displayed.
/// Controls when the `Class.Humanoid` health bar is displayed. This works in
/// conjunction with the `Class.Humanoid.MaxHealth` property which must have a
/// value higher than zero or the health bar doesn't display.
enum class HumanoidHealthDisplayType : uint32_t {
	/// The humanoid's health bar is only visible when the humanoid is not at full
	/// health (assuming `MaxHealth` is greater than zero).
	DisplayWhenDamaged = 0,
	/// The humanoid's health bar is always visible (assuming `MaxHealth` is
	/// greater than zero).
	AlwaysOn = 1,
	/// The humanoid's health bar is never visible.
	AlwaysOff = 2
};

/// Describes whether or not a character is using an R15 rig or the legacy R6 rig.
/// Describes whether or not a character is using an
/// [R15 rig](https://create.roblox.com/docs/avatar/character-bodies/specifications#rigging) or the
/// legacy R6 rig, as returned by the `Class.Humanoid.RigType` property.
enum class HumanoidRigType : uint32_t {
	/// Indicates that a character is using the legacy R6 rig.
	R6 = 0,
	/// Indicates that a character is using an R15 rig.
	R15 = 1
};

/// Describes the physics control states within the Humanoid.
/// Identifies, reads and sets the physics control state of a `Class.Humanoid`.
/// `Class.Humanoid:GetState()` and `Class.Humanoid:ChangeState()` methods, as
/// well as the `Class.Humanoid.StateChanged` event currently use this Enum.
/// 
/// Some states only allow manual setting, and allow a developer to make the
/// Humanoid relinquish control of its character.
/// 
/// When altering the Humanoid of a player, this should be done from a
/// `Class.LocalScript` ran by that player on their local client. Certain states
/// only work when set by the owner process (client or server). (Dead for example)
enum class HumanoidStateType : uint32_t {
	/// The Humanoid has been tripped, and will attempt to get up in a few
	/// moments.
	FallingDown = 0,
	/// (Deprecated) The Humanoid has been hit by a fast moving object
	/// (uncontrolled falling). _The Humanoid can recover from this._ This state
	/// has to be set and unset manually using `Class.Humanoid:ChangeState()`.
	Ragdoll = 1,
	/// The Humanoid is getting back on their feet after FallingDown or Ragdoll.
	GettingUp = 2,
	/// The Humanoid just jumped. (Check `Class.Humanoid.Jump`). This state lasts
	/// only briefly. This state normally transitions into either Landed, if on
	/// the ground, or Freefall, if still in the air.
	Jumping = 3,
	/// The Humanoid is currently swimming in `Class.Terrain` water.
	Swimming = 4,
	/// The Humanoid is currently freefalling (jumped from a height or fell off a
	/// ledge).
	Freefall = 5,
	/// When set, the Humanoid won't be animated, as with the
	/// `Class.Humanoid.PlatformStand` property. This state lasts as long as the
	/// player flies.
	Flying = 6,
	/// The Humanoid touched the ground after a Freefall. This state lasts only
	/// briefly.
	Landed = 7,
	/// Currently running while on the ground.
	Running = 8,
	/// (Deprecated) Currently running and not near other physical objects.
	RunningNoPhysics = 10,
	/// Not currently used with default Humanoid. Cannot be set with
	/// `Class.Humanoid:ChangeState()`.
	StrafingNoPhysics = 11,
	/// The Humanoid is climbing (e.g. up a `Class.TrussPart` or ladder).
	Climbing = 12,
	/// The Humanoid is currently sitting in a Seat or VehicleSeat. Check the
	/// `Class.Humanoid.Sit` property.
	Seated = 13,
	/// The Humanoid is platformstanding. Check the `Class.Humanoid.PlatformStand`
	/// property.
	PlatformStanding = 14,
	/// The Humanoid died. Changing a Humanoid's state to this state will kill it.
	Dead = 15,
	/// The Humanoid doesn't apply any force on its own and will not automatically
	/// transition to any other state. This state has to be set and unset manually
	/// using `Class.Humanoid:ChangeState()`.
	Physics = 16,
	/// Unusable placeholder in case an unknown state gets triggered internally.
	None = 18
};

/// Controls which parts in the workspace participate in collision resolution when
/// `Class.WorldRoot:IKMoveTo()` drives a part toward a target `Datatype.CFrame`.
/// Controls which parts in the workspace participate in collision resolution when
/// `Class.WorldRoot:IKMoveTo()` drives a part toward a target `Datatype.CFrame`
/// via inverse kinematics.
/// 
/// The three `Enum.IKCollisionsMode` values offer a spectrum of collision
/// fidelity. `Enum.IKCollisionsMode.NoCollisions` ignores the rest of the
/// workspace and moves only the mechanism being dragged (fastest, most
/// permissive). `Enum.IKCollisionsMode.OtherMechanismsAnchored` keeps the dragged
/// mechanism physically correct against the scene but treats other objects as
/// immovable anchors. `Enum.IKCollisionsMode.IncludeContactedMechanisms` lets the
/// dragged mechanism push unanchored objects, so the entire contacted set
/// participates in resolution.
/// 
/// `Class.WorldRoot:IKMoveTo()` defaults to
/// `Enum.IKCollisionsMode.OtherMechanismsAnchored` when no collisions mode is
/// supplied.
enum class IKCollisionsMode : uint32_t {
	/// Only the part and any parts directly joined to it via
	/// joints/`Class.Constraint|constraints` will be involved in the resolution;
	/// everything else in the workspace will be treated as though it doesn't
	/// exist.
	NoCollisions = 0,
	/// Only the part and any parts directly joined to it via
	/// joints/`Class.Constraint|constraints` will be moved during resolution, but
	/// they will collide with other objects in the workspace.
	OtherMechanismsAnchored = 1,
	/// The part, any parts directly joined to it via
	/// joints/`Class.Constraint|constraints`, and any parts which it comes into
	/// contact with during the solve will be moved during the resolution. That
	/// is, the moved parts will be allowed to "push" other unanchored parts in
	/// the workspace out of the way in order to get to the target position.
	IncludeContactedMechanisms = 2
};

/// Values for `Class.Workspace.IKControlConstraintSupport`. Sets the support for
/// constraints for `Class.IKControl|IKControls` in your experience.
enum class IKControlConstraintSupport : uint32_t {
	/// The default option for `Class.IKControl|IKControls`. The default is
	/// currently set to `Enabled`.
	Default = 0,
	/// Disables support for constraints for `Class.IKControl|IKControls`. When
	/// disabled, `Class.IKControl|IKControls` still work, but ignore physics
	/// constraints.
	Disabled = 1,
	/// Enables support for constraints for `Class.IKControl|IKControls`.
	Enabled = 2
};

/// Used on `Class.IKControl` to specify their `Class.IKControl.Type|Type`, to
/// change their behavior.
enum class IKControlType : uint32_t {
	/// It is a full 6-DoF constraint. Aligns the
	/// `Class.IKControl.EndEffector|EndEffector` `Datatype.CFrame` to that of the
	/// `Class.IKControl.Target|Target`. It is the default value.
	Transform = 0,
	/// Aligns the `Class.IKControl.EndEffector|EndEffector` position to that of
	/// the `Class.IKControl.Target|Target` .
	Position = 1,
	/// Aligns the `Class.IKControl.EndEffector|EndEffector` rotation to that of
	/// the `Class.IKControl.Target|Target`.
	Rotation = 2,
	/// Moves and orients the whole chain to make the forward axis on the
	/// `Class.IKControl.EndEffector|EndEffector` point at a position in the world
	/// specified by `Class.IKControl.Target|Target`.
	LookAt = 3
};

/// Describes the loading state of an IXP (in-experience experiment) layer fetch
/// operation.
/// `Enum.IXPLoadingStatus` represents the lifecycle state of an HTTP request made
/// by `IXPService` to fetch IXP layer assignments for a subject (user, browser
/// tracker, or creator). Methods such as `GetUserLayerLoadingStatus()` and events
/// such as `OnUserLayerLoadingStatusChanged` return or pass this enum. Callers
/// should wait for `Enum.IXPLoadingStatus.Initialized` before reading layer
/// variables; any error value indicates the fetch did not succeed and layer
/// variables will not be populated.
enum class IXPLoadingStatus : uint32_t {
	/// The default status when the IXP controller is first constructed or after
	/// layers have been cleared.
	None = 0,
	/// An HTTP request to fetch layer assignments has been sent and a response is
	/// awaited.
	Pending = 1,
	/// The HTTP request completed successfully and layer variable values have
	/// been populated from the response.
	Initialized = 2,
	/// The fetch failed because the requested subject (user) was invalid at the
	/// time of the request.
	ErrorInvalidUser = 3,
	/// The HTTP request to fetch layer assignments failed due to a connection
	/// error.
	ErrorConnection = 4,
	/// The HTTP request succeeded but the response body could not be parsed as
	/// valid JSON.
	ErrorJsonParse = 5,
	/// The HTTP request to fetch layer assignments timed out before a response
	/// was received.
	ErrorTimedOut = 6
};

/// Enum for determining if the alpha or color is locked while combining two
/// images.
enum class ImageAlphaType : uint32_t {
	/// The default behavior in which neither color nor alpha values are locked.
	Default = 1,
	/// The alpha values of the image will not be modified.
	LockCanvasAlpha = 2,
	/// The color values of the image will not be modified.
	LockCanvasColor = 3
};

/// Enum for determining how two images are combined together.
/// Enum for determining how two images are combined together.
/// 
/// In all combine operations, **source** refers to the new pixels being drawn and
/// **destination** refers to the existing pixels in the image being drawn onto.
enum class ImageCombineType : uint32_t {
	/// Blends pixels from the source with pixels from the destination using
	/// source over alpha blending.
	BlendSourceOver = 1,
	/// Overwrites all pixels in the destination image with pixels from the source
	/// image.
	Overwrite = 2,
	/// Adds pixels from the source and pixels from the destination together.
	/// Source RGB values are scaled by the source alpha, while source alpha is
	/// added directly to destination alpha.
	Add = 3,
	/// Multiplies pixels from the source and pixels from the destination
	/// together. RGBA values are multiplied as values between `0` and `1`. Values
	/// lower than `1` have a darkening effect on the image.
	Multiply = 4,
	/// Blends pixels from the source with pixels from the destination based on
	/// the alpha of the source pixels. Unlike **BlendSourceOver**, the
	/// destination color in **AlphaBlend** affects the resulting color of the
	/// image, regardless of the destination color's alpha.
	AlphaBlend = 5,
	/// Blends pixels from the source with the destination using alpha blending,
	/// then renormalizes the resulting RGB values as a tangent-space normal
	/// vector.
	NormalMapBlend = 6,
	/// Subtracts pixels of the source from pixels of the destination. Source RGB
	/// values are scaled by the source alpha, while source alpha is subtracted
	/// directly from destination alpha.
	Subtract = 7
};

/// The InOut Enum is used to set where the object is on the side of its parent.
enum class InOut : uint32_t {
	/// The object is located along an edge of its parent.
	Edge = 0,
	/// The object's located is inset from its parent's location.
	Inset = 1,
	/// The object's location is centered on it's parent.
	Center = 2
};

/// Specifies the type of product information returned by
/// `Class.MarketplaceService:GetProductInfoAsync()`.
/// Used to represent the possible information formats returnable by
/// `Class.MarketplaceService:GetProductInfoAsync()`.
enum class InfoType : uint32_t {
	/// The product is an asset.
	Asset = 0,
	/// Product such as a
	/// [Developer Product](https://create.roblox.com/docs/production/monetization/developer-products).
	Product = 1,
	/// The product is a game pass.
	GamePass = 2,
	/// The product is a subscription.
	Subscription = 3,
	/// The product is a bundle.
	Bundle = 4
};

/// Describes the initial docking state of a `Class.DockWidgetPluginGui`.
/// Specifies where a `Class.DockWidgetPluginGui` is initially positioned in
/// Roblox Studio when it is created for the first time. The value is supplied as
/// the `initialDockState` field of `Datatype.DockWidgetPluginGuiInfo`, which is
/// passed to `Class.Plugin:CreateDockWidgetPluginGuiAsync()`. If Roblox Studio
/// has a saved layout entry for the plugin widget, that saved layout takes
/// precedence and this value is ignored;
/// `Class.DockWidgetPluginGui.HostWidgetWasRestored` is `true` in that case.
enum class InitialDockState : uint32_t {
	/// The widget will appear docked above the game screen.
	Top = 0,
	/// The widget will appear docked below the game screen.
	Bottom = 1,
	/// The widget will appear docked to the left of the game screen.
	Left = 2,
	/// The widget will appear docked to the right of the game screen.
	Right = 3,
	/// The widget will not be docked to any side of the game screen, and instead
	/// can be freely dragged around.
	Float = 4
};

/// This enum is used by `Class.InputAction.Type` to determine which input data
/// type the `Class.InputAction` will receive.
enum class InputActionType : uint32_t {
	/// The `Class.InputAction` will receive boolean values from button inputs,
	/// for example `true`/`false` on press/release from inputs such as
	/// `Enum.KeyCode.ButtonA` or `Enum.KeyCode.E`. This setting also exposes the
	/// `Class.InputBinding.UIButton|UIButton` property on child
	/// `Class.InputBinding|InputBindings`, allowing you to easily hook up press
	/// or release of a `Class.GuiButton` for the action.
	Bool = 0,
	/// The `Class.InputAction` will receive numerical values, generally from
	/// analog gamepad triggers such as `Enum.KeyCode.ButtonL2` or
	/// `Enum.KeyCode.ButtonR2`. This setting also exposes the
	/// `Class.InputBinding.Up|Up` and `Class.InputBinding.Down|Down` properties
	/// on child `Class.InputBinding|InputBindings`, allowing for boolean inputs
	/// or "1D" inputs as composite directions for the action.
	Direction1D = 1,
	/// The `Class.InputAction` will receive `Datatype.Vector2` values, generally
	/// from thumbstick inputs such as `Enum.KeyCode.Thumbstick1` and
	/// `Enum.KeyCode.Thumbstick2`. This setting also exposes the
	/// `Class.InputBinding.Up|Up`, `Class.InputBinding.Down|Down`,
	/// `Class.InputBinding.Left|Left`, and `Class.InputBinding.Right|Right`
	/// properties on child `Class.InputBinding|InputBindings`, allowing for "2D"
	/// inputs as composite directions for the action.
	Direction2D = 2,
	/// The `Class.InputAction` will receive `Datatype.Vector3` values from inputs
	/// assigned to the `Class.InputBinding.Up|Up`,
	/// `Class.InputBinding.Down|Down`, `Class.InputBinding.Left|Left`,
	/// `Class.InputBinding.Right|Right`, `Class.InputBinding.Forward|Forward`,
	/// and/or `Class.InputBinding.Backward|Backward` properties on child
	/// `Class.InputBinding|InputBindings`, allowing for "3D" inputs as composite
	/// directions for the action.
	Direction3D = 3,
	/// The `Class.InputAction` will receive `Datatype.Vector2` values
	/// representing the absolute pixel (**X**, **Y**) coordinates of a pointer
	/// input in the viewport.
	ViewportPosition = 4
};

/// This enum is used by `Class.InputBinding.Type` to determine whether the
/// binding responds to hardware input or is driven programmatically.
/// This enum is used by `Class.InputBinding.Type` to determine whether the
/// `Class.InputBinding` responds to hardware input devices or is driven
/// programmatically via `Class.InputBinding:Fire()`.
enum class InputBindingType : uint32_t {
	/// The `Class.InputBinding` responds to physical input devices (keyboard,
	/// mouse, gamepad, touch) based on its `Class.InputBinding.KeyCode|KeyCode`
	/// or composite direction properties. This is the default.
	Automatic = 0,
	/// The `Class.InputBinding` ignores hardware input and instead receives state
	/// updates exclusively through the `Class.InputBinding:Fire()` method.
	Scriptable = 1
};

/// Controls how a `Class.GuiObject` or `Class.GuiButton` absorbs pointer and
/// activation input events relative to GUI elements beneath it.
/// Controls how a `Class.GuiObject` or `Class.GuiButton` absorbs pointer and
/// activation input events relative to GUI elements layered beneath it. Use this
/// enum with the `Class.GuiObject.InputSink` property, which defaults to
/// `Enum.InputSink.None` on `Class.GuiObject` and `Enum.InputSink.Activate` on
/// `Class.GuiButton`.
enum class InputSink : uint32_t {
	/// The element does not sink any input events; pointer and activation events
	/// pass through to elements beneath it.
	None = 0,
	/// The element sinks activation input (button presses and taps) but allows
	/// hover, `MouseEnter`, and `MouseLeave` events to pass through to elements
	/// beneath it.
	Activate = 1,
	/// The element sinks all input events, preventing them from reaching any GUI
	/// element beneath it.
	All = 100
};

/// The InputType Enum controls the SurfaceInputs of `Class.Part`.
/// The InputType Enum controls the SurfaceInputs of `Class.Part`. Several
/// parameters here are left-overs from 2005, before Roblox was a multiplayer
/// game, and are used by `Class.Part.BackSurfaceInput`,
/// `Class.Part.BottomSurfaceInput`, `Class.Part.FrontSurfaceInput`,
/// `Class.Part.LeftSurfaceInput`, `Class.Part.RightSurfaceInput`,
/// `Class.Part.TopSurfaceInput`.
/// @deprecated This enum is deprecated as it is used by deprecated methods. It should not be used in new work.
enum class InputType : uint32_t {
	/// Behaves like a weld and does nothing.
	NoInput = 0,
	/// Rotate at a constant velocity of `Class.BasePart` `ParamB`.
	Constant = 12,
	/// Rotate at a velocity of:
	/// `ParamA * math.sin(workspace.DistributedGameTime * ParamB)`, where
	/// `Class.BasePart` `ParamA` determines the maximum speed at which the part
	/// spins, and `Class.BasePart` `ParamB` determines how frequently it changes
	/// direction.
	Sin = 13
};

/// Describes the file sync status of an Instance.
/// Describes the file sync status of an `Class.Instance`.
enum class InstanceFileSyncStatus : uint32_t {
	/// The `Class.Instance` is not being synced or errored.
	NotSynced = 0,
	/// The `Class.Instance` is a sync root that has errored and stopped syncing.
	Errored = 1,
	/// The `Class.Instance` is being synced as the root of a sync tree.
	SyncedAsRoot = 2,
	/// The `Class.Instance` is being synced because it is a descendant of a sync
	/// root.
	SyncedAsDescendant = 3,
	/// The `Class.Instance` is not currently being synced because the root of its
	/// sync tree is `Errored`.
	AncestorErrored = 4
};

/// Indicates the type of result delivered via the intermediate-result callback
/// during an asynchronous mesh-generation operation.
/// `IntermediateMeshGenerationResult` is returned as the first argument to the
/// optional intermediate-result callback supplied to
/// `Class.GenerationService:GenerateMeshAsync()|GenerateMeshAsync()`. When the
/// backend finishes producing an intermediate version of the mesh before the
/// final result is ready, the callback fires with a value from this enum together
/// with a `generationId` string and a `contextId` string. The only current member
/// is `Enum.IntermediateMeshGenerationResult.HighQualityMesh`.
/// 
/// `GenerateMeshAsync` and `InternalGenerateMeshAsync` are deprecated; new code
/// should use
/// `Class.GenerationService:GenerateModelAsync()|GenerateModelAsync()`, which
/// returns the generated `Model` directly to the calling coroutine and does not
/// use this enum.
enum class IntermediateMeshGenerationResult : uint32_t {
	/// Signals that the intermediate mesh delivered to the callback is
	/// high-quality.
	HighQualityMesh = 0
};

/// Controls whether the engine reduces the physics interpolation update rate for
/// distant assemblies when the client is under load. Used by the deprecated
/// `Class.Workspace.InterpolationThrottling` property.
/// Controls whether the engine reduces the physics interpolation update rate for
/// distant assemblies when the client is under load. This enum is consumed by the
/// deprecated `Class.Workspace.InterpolationThrottling` property, which is no
/// longer exposed in Studio or recommended for use in new experiences.
enum class InterpolationThrottlingMode : uint32_t {
	/// The engine automatically throttles physics interpolation for distant
	/// assemblies when client frame time is high.
	Default = 0,
	/// Physics interpolation throttling is unconditionally disabled; all
	/// assemblies interpolate at the full rate regardless of client load.
	Disabled = 1,
	/// Physics interpolation throttling is unconditionally enabled; distant
	/// assemblies have their interpolation update rate reduced even when the
	/// client is not under load.
	Enabled = 2
};

/// Describes a player's call invite state.
/// This enum describes a player's call invite state. See
/// `Class.SocialService.CallInviteStateChanged` for details.
enum class InviteState : uint32_t {
	/// Call invite was placed.
	Placed = 0,
	/// Call invite was accepted.
	Accepted = 1,
	/// Call invite was declined.
	Declined = 2,
	/// Call invite was missed.
	Missed = 3
};

/// Used for `Class.UIListLayout.ItemLineAlignment` and
/// `Class.UIFlexItem.ItemLineAlignment` in a flex layout to define the
/// cross-directional alignment of siblings or the parent within a line.
/// In a [flex layout](https://create.roblox.com/docs/ui/list-flex-layouts#flex-layouts), this enum
/// is used for the `Class.UIListLayout.ItemLineAlignment|ItemLineAlignment`
/// property of the `Class.UIListLayout` to define the **cross-directional**
/// alignment of siblings within a line. It is also used for the
/// `Class.UIFlexItem.ItemLineAlignment|ItemLineAlignment` property of a specific
/// `Class.UIFlexItem` to define the cross-directional alignment of the parent
/// `Class.GuiObject` within the line.
/// 
/// <img
/// src="../../../assets/engine-api/classes/UIListLayout/ItemLineAlignment.png"
/// width="720" alt="Examples of options for ItemLineAlignment in a horizontal
/// fill direction." />
enum class ItemLineAlignment : uint32_t {
	/// Aligns the siblings of the `Class.UIListLayout` or the specific
	/// `Class.UIFlexItem` parent to the layout's
	/// `Class.UIListLayout.HorizontalAlignment|HorizontalAlignment` or
	/// `Class.UIListLayout.VerticalAlignment|VerticalAlignment`, depending on its
	/// `Class.UIListLayout.FillDirection|FillDirection`. If
	/// `Class.UIListLayout.HorizontalFlex|HorizontalFlex` or
	/// `Class.UIListLayout.VerticalFlex|VerticalFlex` is enabled for the
	/// `Class.UIListLayout` cross‑direction, `Stretch` will be used for that
	/// direction.
	Automatic = 0,
	/// Aligns the siblings of the `Class.UIListLayout` or the specific
	/// `Class.UIFlexItem` parent to the line's **top** in a horizontal fill or
	/// the line's **left** in a vertical fill.
	Start = 1,
	/// Aligns the siblings of the `Class.UIListLayout` or the specific
	/// `Class.UIFlexItem` parent to the line's **center** in either a horizontal
	/// or vertical fill.
	Center = 2,
	/// Aligns the siblings of the `Class.UIListLayout` or the specific
	/// `Class.UIFlexItem` parent to the line's **bottom** in a horizontal fill or
	/// the line's **right** in a vertical fill.
	End = 3,
	/// Stretches the siblings of the `Class.UIListLayout` or the specific
	/// `Class.UIFlexItem` parent to fill the entire cross‑direction of the line
	/// in either a horizontal or vertical fill.
	Stretch = 4
};

/// Identifies the context in which a player joined an experience via a deeplink.
/// Identifies the context in which a player joined an experience via a deeplink.
/// The value is available as the `JoinSource` key in the `GameJoinContext` table
/// returned by `Class.Player:GetJoinData()`. Experiences can inspect this value
/// on `Class.Players.PlayerAdded` to customize the player's starting state
/// depending on how they arrived.
enum class JoinSource : uint32_t {
	/// The player joined by following an attribution link for an item created
	/// inside an experience.
	CreatedItemAttribution = 1
};

/// The way joints are created between two surfaces.
enum class JointCreationMode : uint32_t {
	/// Joints are created between any kind of surface. Functions identically to
	/// Surface.
	All = 0,
	/// Joints are created between any kind of surface. Functions identically to
	/// All.
	Surface = 1,
	/// Joints are never created, no matter what.
	None = 2
};

/// Byte keycodes that represent the key or button involved in user input.
/// The `KeyCode` enum contains a list of byte keycodes that represent the key or
/// button involved in user input. This enum also includes buttons and axes
/// present on gamepads, and 96 `World[]` values for non-standard buttons.
/// 
/// Note that keyboard values refer to the physical position of buttons on a
/// standard QWERTY keyboard. Provided the user's system is configured correctly,
/// the location of keys (such as
/// <kbd>W</kbd><kbd>A</kbd><kbd>S</kbd><kbd>D</kbd>) will remain the same on
/// other keyboard types such as Dvorak keyboards where it would map to
/// <kbd>,</kbd><kbd>A</kbd><kbd>O</kbd><kbd>E</kbd>.
/// 
/// See also `Class.InputObject`, used for keyboard and gamepad input.
enum class KeyCode : uint32_t {
	None = 0,
	/// The `Backspace` key.
	Backspace = 8,
	/// The `Tab` key.
	Tab = 9,
	/// Only present on certain keyboards.
	Clear = 12,
	/// Frequently known as **Enter**.
	Return = 13,
	/// Only present on certain keyboards.
	Pause = 19,
	/// The `Escape` key.
	Escape = 27,
	/// The `Space` key.
	Space = 32,
	/// The `"` key.
	QuotedDouble = 34,
	/// The `#` key.
	Hash = 35,
	/// The `$` key.
	Dollar = 36,
	/// The `%` key.
	Percent = 37,
	/// The `&` key.
	Ampersand = 38,
	/// The `'` key.
	Quote = 39,
	/// The `(` key.
	LeftParenthesis = 40,
	/// The `)` key.
	RightParenthesis = 41,
	/// The `*` key.
	Asterisk = 42,
	/// The `+` key.
	Plus = 43,
	/// The `,` key.
	Comma = 44,
	/// The `-` key.
	Minus = 45,
	/// The `.` key.
	Period = 46,
	/// The `/` key.
	Slash = 47,
	/// The `0` key.
	Zero = 48,
	/// The `1` key.
	One = 49,
	/// The `2` key.
	Two = 50,
	/// The `3` key.
	Three = 51,
	/// The `4` key.
	Four = 52,
	/// The `5` key.
	Five = 53,
	/// The `6` key.
	Six = 54,
	/// The `7` key.
	Seven = 55,
	/// The `8` key.
	Eight = 56,
	/// The `9` key.
	Nine = 57,
	/// The `:` key.
	Colon = 58,
	/// The `;` key.
	Semicolon = 59,
	/// The `<` key.
	LessThan = 60,
	/// The `=` key.
	Equals = 61,
	/// The `>` key.
	GreaterThan = 62,
	/// The `?` key.
	Question = 63,
	/// The `@` key.
	At = 64,
	/// The `[` key.
	LeftBracket = 91,
	/// The `\` key.
	BackSlash = 92,
	/// The `]` key.
	RightBracket = 93,
	/// The `^` key.
	Caret = 94,
	/// The `_` key.
	Underscore = 95,
	/// The `` ` `` key.
	Backquote = 96,
	/// The `A` key.
	A = 97,
	/// The `B` key.
	B = 98,
	/// The `C` key.
	C = 99,
	/// The `D` key.
	D = 100,
	/// The `E` key.
	E = 101,
	/// The `F` key.
	F = 102,
	/// The `G` key.
	G = 103,
	/// The `H` key.
	H = 104,
	/// The `I` key.
	I = 105,
	/// The `J` key.
	J = 106,
	/// The `K` key.
	K = 107,
	/// The `L` key.
	L = 108,
	/// The `M` key.
	M = 109,
	/// The `N` key.
	N = 110,
	/// The `O` key.
	O = 111,
	/// The `P` key.
	P = 112,
	/// The `Q` key.
	Q = 113,
	/// The `R` key.
	R = 114,
	/// The `S` key.
	S = 115,
	/// The `T` key.
	T = 116,
	/// The `U` key.
	U = 117,
	/// The `V` key.
	V = 118,
	/// The `W` key.
	W = 119,
	/// The `X` key.
	X = 120,
	/// The `Y` key.
	Y = 121,
	/// The `Z` key.
	Z = 122,
	/// The `{` key.
	LeftCurly = 123,
	/// The `|` key.
	Pipe = 124,
	/// The `}` key.
	RightCurly = 125,
	/// The `~` key.
	Tilde = 126,
	/// The `Del` key.
	Delete = 127,
	/// Deprecated
	World0 = 160,
	/// Deprecated
	World1 = 161,
	/// Deprecated
	World2 = 162,
	/// Deprecated
	World3 = 163,
	/// Deprecated
	World4 = 164,
	/// Deprecated
	World5 = 165,
	/// Deprecated
	World6 = 166,
	/// Deprecated
	World7 = 167,
	/// Deprecated
	World8 = 168,
	/// Deprecated
	World9 = 169,
	/// Deprecated
	World10 = 170,
	/// Deprecated
	World11 = 171,
	/// Deprecated
	World12 = 172,
	/// Deprecated
	World13 = 173,
	/// Deprecated
	World14 = 174,
	/// Deprecated
	World15 = 175,
	/// Deprecated
	World16 = 176,
	/// Deprecated
	World17 = 177,
	/// Deprecated
	World18 = 178,
	/// Deprecated
	World19 = 179,
	/// Deprecated
	World20 = 180,
	/// Deprecated
	World21 = 181,
	/// Deprecated
	World22 = 182,
	/// Deprecated
	World23 = 183,
	/// Deprecated
	World24 = 184,
	/// Deprecated
	World25 = 185,
	/// Deprecated
	World26 = 186,
	/// Deprecated
	World27 = 187,
	/// Deprecated
	World28 = 188,
	/// Deprecated
	World29 = 189,
	/// Deprecated
	World30 = 190,
	/// Deprecated
	World31 = 191,
	/// Deprecated
	World32 = 192,
	/// Deprecated
	World33 = 193,
	/// Deprecated
	World34 = 194,
	/// Deprecated
	World35 = 195,
	/// Deprecated
	World36 = 196,
	/// Deprecated
	World37 = 197,
	/// Deprecated
	World38 = 198,
	/// Deprecated
	World39 = 199,
	/// Deprecated
	World40 = 200,
	/// Deprecated
	World41 = 201,
	/// Deprecated
	World42 = 202,
	/// Deprecated
	World43 = 203,
	/// Deprecated
	World44 = 204,
	/// Deprecated
	World45 = 205,
	/// Deprecated
	World46 = 206,
	/// Deprecated
	World47 = 207,
	/// Deprecated
	World48 = 208,
	/// Deprecated
	World49 = 209,
	/// Deprecated
	World50 = 210,
	/// Deprecated
	World51 = 211,
	/// Deprecated
	World52 = 212,
	/// Deprecated
	World53 = 213,
	/// Deprecated
	World54 = 214,
	/// Deprecated
	World55 = 215,
	/// Deprecated
	World56 = 216,
	/// Deprecated
	World57 = 217,
	/// Deprecated
	World58 = 218,
	/// Deprecated
	World59 = 219,
	/// Deprecated
	World60 = 220,
	/// Deprecated
	World61 = 221,
	/// Deprecated
	World62 = 222,
	/// Deprecated
	World63 = 223,
	/// Deprecated
	World64 = 224,
	/// Deprecated
	World65 = 225,
	/// Deprecated
	World66 = 226,
	/// Deprecated
	World67 = 227,
	/// Deprecated
	World68 = 228,
	/// Deprecated
	World69 = 229,
	/// Deprecated
	World70 = 230,
	/// Deprecated
	World71 = 231,
	/// Deprecated
	World72 = 232,
	/// Deprecated
	World73 = 233,
	/// Deprecated
	World74 = 234,
	/// Deprecated
	World75 = 235,
	/// Deprecated
	World76 = 236,
	/// Deprecated
	World77 = 237,
	/// Deprecated
	World78 = 238,
	/// Deprecated
	World79 = 239,
	/// Deprecated
	World80 = 240,
	/// Deprecated
	World81 = 241,
	/// Deprecated
	World82 = 242,
	/// Deprecated
	World83 = 243,
	/// Deprecated
	World84 = 244,
	/// Deprecated
	World85 = 245,
	/// Deprecated
	World86 = 246,
	/// Deprecated
	World87 = 247,
	/// Deprecated
	World88 = 248,
	/// Deprecated
	World89 = 249,
	/// Deprecated
	World90 = 250,
	/// Deprecated
	World91 = 251,
	/// Deprecated
	World92 = 252,
	/// Deprecated
	World93 = 253,
	/// Deprecated
	World94 = 254,
	/// Deprecated
	World95 = 255,
	/// The `0` key on the keypad cluster.
	KeypadZero = 256,
	/// The `1` key on the keypad cluster.
	KeypadOne = 257,
	/// The `2` key on the keypad cluster.
	KeypadTwo = 258,
	/// The `3` key on the keypad cluster.
	KeypadThree = 259,
	/// The `4` key on the keypad cluster.
	KeypadFour = 260,
	/// The `5` key on the keypad cluster.
	KeypadFive = 261,
	/// The `6` key on the keypad cluster.
	KeypadSix = 262,
	/// The `7` key on the keypad cluster.
	KeypadSeven = 263,
	/// The `8` key on the keypad cluster.
	KeypadEight = 264,
	/// The `9` key on the keypad cluster.
	KeypadNine = 265,
	/// The `.` key on the keypad cluster.
	KeypadPeriod = 266,
	/// The `/` key on the keypad cluster.
	KeypadDivide = 267,
	/// The `*` key on the keypad cluster.
	KeypadMultiply = 268,
	/// The `-` key on the keypad cluster.
	KeypadMinus = 269,
	/// The `+` key on the keypad cluster.
	KeypadPlus = 270,
	/// The `Enter` key on the keypad cluster.
	KeypadEnter = 271,
	/// The `=` key on the keypad cluster.
	KeypadEquals = 272,
	/// The `↑` arrow key.
	Up = 273,
	/// The `↓` arrow key.
	Down = 274,
	/// The `→` arrow key.
	Right = 275,
	/// The `←` arrow key.
	Left = 276,
	/// The `Insert` key.
	Insert = 277,
	/// The `Home` key.
	Home = 278,
	/// The `End` key.
	End = 279,
	/// The `PgUp` key.
	PageUp = 280,
	/// The `PgDown` key.
	PageDown = 281,
	/// The `F1` key.
	F1 = 282,
	/// The `F2` key.
	F2 = 283,
	/// The `F3` key.
	F3 = 284,
	/// The `F4` key.
	F4 = 285,
	/// The `F5` key.
	F5 = 286,
	/// The `F6` key.
	F6 = 287,
	/// The `F7` key.
	F7 = 288,
	/// The `F8` key.
	F8 = 289,
	/// The `F9` key.
	F9 = 290,
	/// The `F10` key.
	F10 = 291,
	/// The `F11` key.
	F11 = 292,
	/// The `F12` key.
	F12 = 293,
	/// The `F13` key. Only present on certain keyboards.
	F13 = 294,
	/// The `F14` key. Only present on certain keyboards.
	F14 = 295,
	/// The `F15` key. Only present on certain keyboards.
	F15 = 296,
	/// The `Num Lock` key on the keypad cluster.
	NumLock = 300,
	/// The `Caps Lock` key.
	CapsLock = 301,
	/// The `Scr Lock` key.
	ScrollLock = 302,
	/// The right side `Shift` key.
	RightShift = 303,
	/// The left side `Shift` key.
	LeftShift = 304,
	/// The right side `Ctrl` key.
	RightControl = 305,
	/// The left side `Ctrl` key.
	LeftControl = 306,
	/// The right side `Alt` key.
	RightAlt = 307,
	/// The left side `Alt` key.
	LeftAlt = 308,
	/// The right side `Meta` key.
	RightMeta = 309,
	/// The left side `Meta` key.
	LeftMeta = 310,
	/// The left side `Super` key. Better known as the Windows key or
	/// <kbd>Cmd</kbd> key.
	LeftSuper = 311,
	/// The right side `Super` key. Better known as the Windows key or
	/// <kbd>Cmd</kbd> key.
	RightSuper = 312,
	/// Only present on certain keyboards.
	Mode = 313,
	/// Only present on certain keyboards.
	Compose = 314,
	/// Only present on certain keyboards.
	Help = 315,
	/// Only present on certain keyboards.
	Print = 316,
	/// Only present on certain keyboards.
	SysReq = 317,
	/// Only present on certain keyboards.
	Break = 318,
	/// The `Menu` key.
	Menu = 319,
	/// Only present on certain keyboards.
	Power = 320,
	/// The `€` key. Only present on certain keyboards.
	Euro = 321,
	/// Only present on certain keyboards.
	Undo = 322,
	/// Gamepad `X` button.
	ButtonX = 1000,
	/// Gamepad `Y` button.
	ButtonY = 1001,
	/// Gamepad `A` button.
	ButtonA = 1002,
	/// Gamepad `B` button.
	ButtonB = 1003,
	/// Gamepad `R1` button.
	ButtonR1 = 1004,
	/// Gamepad `L1` button.
	ButtonL1 = 1005,
	/// Gamepad `R2` button.
	ButtonR2 = 1006,
	/// Gamepad `L2` button.
	ButtonL2 = 1007,
	/// Gamepad `R3` button.
	ButtonR3 = 1008,
	/// Gamepad `L3` button.
	ButtonL3 = 1009,
	/// Gamepad `Start` button.
	ButtonStart = 1010,
	/// Gamepad `Select` button.
	ButtonSelect = 1011,
	/// Left arrow on a gamepad D-pad.
	DPadLeft = 1012,
	/// Right arrow on a gamepad D-pad.
	DPadRight = 1013,
	/// Up arrow on a gamepad D-pad.
	DPadUp = 1014,
	/// Down arrow on a gamepad D-pad.
	DPadDown = 1015,
	/// Gamepad primary thumbstick.
	Thumbstick1 = 1016,
	/// Gamepad secondary thumbstick.
	Thumbstick2 = 1017,
	/// Up vector on the gamepad primary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick1Up = 1018,
	/// Down vector on the gamepad primary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick1Down = 1019,
	/// Left vector on the gamepad primary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick1Left = 1020,
	/// Right vector on the gamepad primary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick1Right = 1021,
	/// Up vector on the gamepad secondary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick2Up = 1022,
	/// Down vector on the gamepad secondary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick2Down = 1023,
	/// Left vector on the gamepad secondary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick2Left = 1024,
	/// Right vector on the gamepad secondary thumbstick. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	Thumbstick2Right = 1025,
	/// The left mouse button, also commonly referred to as "button 1" on a
	/// generic mouse. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	MouseLeftButton = 1026,
	/// The right mouse button, also commonly referred to as "button 2" on a
	/// generic mouse. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	MouseRightButton = 1027,
	/// The middle mouse button, also commonly referred to as "button 3" on a
	/// generic mouse. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	MouseMiddleButton = 1028,
	/// @deprecated This enum is deprecated and flagged for removal.
	MouseBackButton = 1029,
	/// @deprecated This enum is deprecated and flagged for removal.
	MouseNoButton = 1030,
	/// @deprecated This enum is deprecated and flagged for removal.
	MouseX = 1031,
	/// @deprecated This enum is deprecated and flagged for removal.
	MouseY = 1032,
	/// The position of a mouse in the viewport. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	MousePosition = 1033,
	/// The position of a touch in the viewport. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system).
	TouchPosition = 1034,
	/// The scroll delta (change) of a mouse wheel. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system), returning a
	/// velocity in scroll units per second (where one scroll unit is
	/// approximately equivalent to a standard mouse wheel notch) under a
	/// `Enum.InputActionType|Direction1D` action type.
	MouseWheel = 1035,
	/// The pan delta (change) from a trackpad two-finger pan gesture. Primarily
	/// used in the [Input Action System](https://create.roblox.com/docs/input/input-action-system),
	/// returning a velocity in pixels per second under a
	/// `Enum.InputActionType|Direction2D` action type.
	TrackpadPan = 1040,
	/// The scale delta (change) from a trackpad two-finger pinch gesture.
	/// Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system), returning a
	/// velocity in scroll units per second (where one scroll unit is
	/// approximately equivalent to a standard mouse wheel notch) under a
	/// `Enum.InputActionType|Direction1D` action type.
	TrackpadPinch = 1045,
	/// The movement delta (change) of the mouse cursor. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system), returning a
	/// velocity in pixels per second under a `Enum.InputActionType|Direction2D`
	/// action type.
	MouseDelta = 1048,
	/// The movement delta (change) of a touch input. Primarily used in the
	/// [Input Action System](https://create.roblox.com/docs/input/input-action-system), returning a
	/// velocity in pixels per second under a `Enum.InputActionType|Direction2D`
	/// action type.
	TouchDelta = 1049,
	/// The scale delta (change) from a touch two-finger pinch gesture. Primarily
	/// used in the [Input Action System](https://create.roblox.com/docs/input/input-action-system),
	/// returning a velocity in pixels per second under a
	/// `Enum.InputActionType|Direction1D` action type.
	TouchPinch = 1050,
	/// TV remote `Center` button.
	ButtonCenter = 1051,
	/// TV remote `Back` button.
	ButtonBack = 1052,
	/// [MicroGamepad](https://create.roblox.com/docs/reference/engine/enums/PreferredInput#MicroGamepad)
	/// (including TV remotes) `Up` directional button.
	ButtonUp = 1053,
	/// [MicroGamepad](https://create.roblox.com/docs/reference/engine/enums/PreferredInput#MicroGamepad)
	/// (including TV remotes) `Down` directional button.
	ButtonDown = 1054,
	/// [MicroGamepad](https://create.roblox.com/docs/reference/engine/enums/PreferredInput#MicroGamepad)
	/// (including TV remotes) `Left` directional button.
	ButtonLeft = 1055,
	/// [MicroGamepad](https://create.roblox.com/docs/reference/engine/enums/PreferredInput#MicroGamepad)
	/// (including TV remotes) `Right` directional button.
	ButtonRight = 1056
};

/// Determines the string format returned by
/// `Class.UserInputService:GetStringForKeyCode()`.
/// This enum is used with `Class.UserInputService:GetStringForKeyCode()` to
/// control how the returned key string is formatted. The `Abbreviated` option
/// provides shortened labels suitable for compact UI elements such as keybind
/// hints, tooltips, or on-screen button prompts where space is limited.
enum class KeyCodeStringFormat : uint32_t {
	/// Default behavior which returns the full key string, for example
	/// `"LeftControl"`, `"Backspace"`, or `"Escape"`.
	Default = 0,
	/// Returns a shortened key string when available, for example `"LCtrl"`,
	/// `"Bksp"`, or `"Esc"`.
	Abbreviated = 1
};

/// Describes the interpolation method between two keys.
/// Describes the interpolation method for a `Class.FloatCurve` or
/// `Class.RotationCurve` segment between the key for which this mode is set and
/// the next key in the curve.
enum class KeyInterpolationMode : uint32_t {
	/// The segment starting at this key will constantly evaluate to the value set
	/// at this key.
	Constant = 0,
	/// The segment starting at this key will evaluate using a linear
	/// interpolation at this key and the value at the next key.
	Linear = 1,
	/// The segment starting at this key will evaluate using cubic interpolation
	/// of this key value using its right tangent and the next key value and its
	/// left tangent.
	Cubic = 2
};

/// The LeftRight Enum is used to set where the object is on the side of its
/// parent.
enum class LeftRight : uint32_t {
	/// The object is on the left side of its parent (**X** axis).
	Left = 0,
	/// The object is centered on the center of its parent (**X** axis), expanding
	/// equally to the left and right of the parent's center.
	Center = 1,
	/// The object is on the right side of its parent (**X** axis).
	Right = 2
};

/// Identifies the category of a token produced when the Studio Explorer filter
/// bar lexes a filter expression.
/// Studio-only Explorer filter lexer token kinds — not used by experience
/// scripts. Classifies each token produced while tokenizing text in the Studio
/// Explorer filter search bar. The lexer assigns one of these categories to every
/// token; the parser builds an expression tree that the filter evaluates against
/// the Explorer hierarchy.
enum class LexemeType : uint32_t {
	/// End-of-input token emitted when the lexer reaches the end of the filter
	/// string.
	Eof = 0,
	/// An unquoted identifier token, such as an instance name or property key in
	/// a filter expression.
	Name = 1,
	/// A string literal token delimited by single (`'`) or double (`"`) quotes,
	/// with backslash escape support.
	QuotedString = 2,
	/// A numeric literal token representing an integer or decimal value used in a
	/// comparison.
	Number = 3,
	/// The case-insensitive keyword `and`, used to combine filter conditions with
	/// logical AND.
	And = 4,
	/// The case-insensitive keyword `or`, used to combine filter conditions with
	/// logical OR.
	Or = 5,
	/// The equality comparison operator, matched as `=` or `==` in a filter
	/// expression.
	Equal = 6,
	/// The not-equal comparison operator (`~=`).
	TildeEqual = 7,
	/// The greater-than comparison operator (`>`).
	GreaterThan = 8,
	/// The greater-than-or-equal comparison operator (`>=`).
	GreaterThanEqual = 9,
	/// The less-than comparison operator (`<`).
	LessThan = 10,
	/// The less-than-or-equal comparison operator (`<=`).
	LessThanEqual = 11,
	/// The colon character (`:`), used as a separator in filter expressions such
	/// as `ClassName:PropertyName`.
	Colon = 12,
	/// The dot character (`.`), used to navigate nested property paths in a
	/// filter expression.
	Dot = 13,
	/// The opening parenthesis character (`(`), used to begin a grouped
	/// subexpression in a filter.
	LeftParenthesis = 14,
	/// The closing parenthesis character (`)`), used to end a grouped
	/// subexpression in a filter.
	RightParenthesis = 15,
	/// The single wildcard character (`*`), used to match any single name segment
	/// in a filter path.
	Star = 16,
	/// The double wildcard token (`**`), which matches any number of path
	/// segments recursively across the instance hierarchy.
	DoubleStar = 17,
	/// A character that is syntactically recognized but has no defined meaning in
	/// the current filter grammar.
	ReservedSpecial = 18
};

/// Enum used by `Class.Lighting.LightingStyle` to indicate the artistic intent
/// behind lighting in the experience.
/// This enum indicates the artistic intent behind lighting in the experience. It
/// is used by the `Class.Lighting.LightingStyle` property.
enum class LightingStyle : uint32_t {
	/// The most advanced and realistic lighting and shadows Roblox can deliver.
	Realistic = 0,
	/// A flat, retro-Roblox look with softer lights and shadows.
	Soft = 1
};

/// Describes which limb a particular Instance belongs to (assuming the Instance
/// is part of a Humanoid).
/// Describes which limb a particular Instance belongs to (assuming the Instance
/// is part of a Humanoid). Passing an Instance to the Humanoid:GetLimb() function
/// will return the Limb for the Instance.
enum class Limb : uint32_t {
	/// If the limb is a part of the Humanoid's Head.
	Head = 0,
	/// If the limb is a part of the Humanoid's Torso. This includes UpperTorso
	/// and LowerTorso for R15 rigs.
	Torso = 1,
	/// If the limb is a part of the Humanoid's Left Arm. This includes
	/// UpperLeftArm, LowerLeftArm, and LeftHand for R15 rigs.
	LeftArm = 2,
	/// If the limb is a part of the Humanoid's Right Arm. This includes
	/// UpperRightArm, LowerRightArm and RightHand for R15 rigs.
	RightArm = 3,
	/// If the limb is a part of the Humanoid's Left Leg. This includes
	/// UpperLeftLeg, LowerLeftLeg and LeftFoot for R15 rigs.
	LeftLeg = 4,
	/// If the limb is a part of the Humanoid's Right Leg. This includes
	/// UpperRightLeg, LowerRightLeg, and RightFoot for R15 rigs.
	RightLeg = 5,
	/// If a part is not a limb (e.g. running the `Class.Humanoid:GetLimb()`
	/// function and passing it an accessory which is a sibling of the Humanoid
	/// will return this value).
	Unknown = 6
};

/// This enum is used by `Class.UIStroke.LineJoinMode` to determine how corners
/// are interpreted.
/// This enum is used by `Class.UIStroke.LineJoinMode` to determine how corners
/// are interpreted.
/// 
/// For a more detailed walkthrough of the `Class.UIStroke` object, see
/// [here](https://create.roblox.com/docs/ui/appearance-modifiers#stroke).
enum class LineJoinMode : uint32_t {
	/// The corners are rounded.
	/// 
	/// <img src="/assets/ui/ui-objects/UIStroke-LineJoinMode-Round.png" width="376" />
	Round = 0,
	/// The corners are beveled.
	/// 
	/// <img src="/assets/ui/ui-objects/UIStroke-LineJoinMode-Bevel.png" width="376" />
	Bevel = 1,
	/// The corners are mitered.
	/// 
	/// <img src="/assets/ui/ui-objects/UIStroke-LineJoinMode-Miter.png" width="376" />
	Miter = 2
};

/// Used to set the scrolling mode of the Advanced Objects tab.
enum class ListDisplayMode : uint32_t {
	/// Scrolling along the X-axis (fixed Y-Axis).
	Horizontal = 0,
	/// Scrolling along the Y-axis (fixed X-Axis).
	Vertical = 1
};

/// Enum used with `Class.SoundService.DefaultListenerLocation` to determine where
/// an `Class.AudioListener` is placed by default.
enum class ListenerLocation : uint32_t {
	/// Behavior depends on the value of
	/// `Class.VoiceChatService.EnableDefaultVoice` and
	/// `Class.VoiceChatService.UseAudioApi`. When using the default voice setup
	/// with the audio API, this behaves similarly to `Camera`.
	Default = 0,
	/// No `Class.AudioListener` will be created by default, but they can be
	/// created separately by scripts.
	None = 1,
	/// All of the following, resulting in the world being heard from the position
	/// of your character while matching the orientation of your camera.
	/// 
	/// - An `Class.Attachment` will be created and parented to the
	///   `Class.Model.PrimaryPart|PrimaryPart` of the local player's
	///   `Class.Player.Character|Character` model.
	/// 
	/// - An `Class.AudioListener` will be created and parented to the
	///   `Class.Attachment`.
	/// 
	/// - An `Class.AudioDeviceOutput` will be created and parented to
	///   `Class.SoundService`.
	/// 
	/// - A `Class.Wire` will be created and parented to the previously-created
	///   `Class.AudioListener`. The wire's
	///   `Class.Wire.SourceInstance|SourceInstance` will be set to the
	///   previously-created `Class.AudioListener` and its
	///   `Class.Wire.TargetInstance|TargetInstance` will be set to the
	///   previously-created `Class.AudioDeviceOutput`.
	/// 
	/// - The previously-created `Class.Attachment` will be updated once per frame
	///   to face the same direction as `Class.Workspace.CurrentCamera`.
	Character = 2,
	/// All of the following, resulting in the world being heard from the
	/// perspective (postition and orientation) of the camera.
	/// 
	/// - An `Class.AudioListener` will be created and parented to
	///   `Class.Workspace.CurrentCamera`.
	/// - An `Class.AudioDeviceOutput` will be created and parented to
	///   `Class.SoundService`.
	/// - A `Class.Wire` will be created and parented to the previously-created
	///   `Class.AudioListener`. The wire's
	///   `Class.Wire.SourceInstance|SourceInstance` will be set to the
	///   previously-created `Class.AudioListener` and its
	///   `Class.Wire.TargetInstance|TargetInstance` will be set to the
	///   previously-created `Class.AudioDeviceOutput`.
	Camera = 3
};

/// Defines where and how an `Class.AudioListener` is positioned when receiving
/// spatial audio.
enum class ListenerPositionType : uint32_t {
	/// Uses the position and orientation of the `Class.AudioListener`'s parent
	/// `Class.Instance`.
	Parent = 0,
	/// Uses the position and orientation of the `Class.Instance` specified by
	/// `Class.AudioListener.PositionInstance`.
	Instance = 1
};

/// Defines where and how the listener is positioned when picking up spatial
/// audio.
/// Defines where and how the listener is positioned when picking up spatial
/// audio. Used in `Class.SoundService.SetListener` and
/// `Class.SoundService.GetListener`.
enum class ListenerType : uint32_t {
	/// Uses the world CFrame of `workspace.CurrentCamera`.
	Camera = 0,
	/// Uses a specified world CFrame.
	CFrame = 1,
	/// Uses the world position of an instance and the rotation of
	/// `workspace.CurrentCamera`.
	ObjectPosition = 2,
	/// Uses the world CFrame from an instance.
	ObjectCFrame = 3
};

/// Indicates whether characters spawning into an experience will have layered
/// clothing accessories equipped on them.
/// Indicates whether characters spawning into an experience will have layered
/// clothing accessories equipped on them (Although
/// `Enum.MeshPartHeadsAndAccessories` also need to be enabled). This is set in
/// `Class.StarterPlayer.LoadCharacterLayeredClothing`.
enum class LoadCharacterLayeredClothing : uint32_t {
	/// The behavior of the default setting is not constant. It can mean Disabled
	/// or Enabled depending on what the global back-end flag settings are
	/// currently.
	Default = 0,
	/// This means layered clothing will not be equipped on characters in the
	/// experience.
	Disabled = 1,
	/// This means layered clothing will be equipped on characters in the
	/// experience (Although `Enum.MeshPartHeadsAndAccessories` also need to be
	/// enabled for the experience).
	Enabled = 2
};

/// Specifies whether player characters load dynamic heads.
/// Controls dynamic-head loading through
/// `Class.StarterPlayer.EnableDynamicHeads`.
enum class LoadDynamicHeads : uint32_t {
	/// Uses Roblox's default dynamic-head loading behavior.
	Default = 0,
	/// Disables loading dynamic heads.
	Disabled = 1,
	/// Enables loading dynamic heads.
	Enabled = 2
};

/// Specifies how `HeatmapService` determines a player's representative world
/// position for heatmap data collection.
/// Controls which point in 3D space is sampled as a player's location when
/// `HeatmapService` records positional heatmap events. The value is stored per
/// `Class.Player` and defaults to `Enum.LocationType.Character`. See the items
/// below for each sampling mode.
enum class LocationType : uint32_t {
	/// Use the player's character model world position as the heatmap location
	/// (default).
	Character = 0,
	/// Use the current workspace camera's world position as the player's heatmap
	/// location.
	Camera = 1,
	/// Use the world position of a configured target object as the player's
	/// heatmap location.
	ObjectPosition = 2
};

/// The Luau type checking mode for scripts in the experience.
/// Determines how strictly the Luau type checker analyzes scripts in the
/// experience. This enum is used by `Class.Workspace.LuauTypeCheckMode`.
enum class LuauTypeCheckMode : uint32_t {
	/// Uses the engine-default type checking mode.
	Default = 0,
	/// Scripts are not type-checked.
	NoCheck = 1,
	/// Scripts are type-checked in nonstrict mode.
	Nonstrict = 2,
	/// Scripts are type-checked in strict mode.
	Strict = 3
};

/// The category of makeup asset applied to an avatar through a
/// `Class.MakeupDescription`.
/// `MakeupType` categorizes the region of the avatar face that a
/// `Class.MakeupDescription` targets. Each `MakeupDescription` child of a
/// `Class.HumanoidDescription` carries a `MakeupType` that determines which
/// platform asset type is used when loading and compositing the makeup layer.
/// Multiple layers of the same type can be stacked; their compositing order is
/// controlled by `Class.MakeupDescription.Order`. Makeup is only supported on R15
/// characters with `Class.MeshPart` heads.
enum class MakeupType : uint32_t {
	/// Makeup asset applied broadly across the face, such as blush or foundation;
	/// the default value of `Class.MakeupDescription.MakeupType`.
	Face = 0,
	/// Makeup asset targeting the lip area, such as lipstick or lip gloss.
	Lip = 1,
	/// Makeup asset targeting the eye region, such as eyeshadow or eyeliner.
	Eye = 2
};

/// The status of the BulkPurchasePrompt after player interaction.
enum class MarketplaceBulkPurchasePromptStatus : uint32_t {
	/// User confirmed the purchase and the transaction has been processed.
	Completed = 1,
	/// User closed the prompt.
	Aborted = 2,
	/// User confirmed the purchase, but the transaction cannot be sent to the
	/// backend for processing.
	Error = 3
};

/// The status of the item purchase through MarketplaceService.
enum class MarketplaceItemPurchaseStatus : uint32_t {
	/// The item is purchased successfully.
	Success = 1,
	/// Unable to purchase item due to Roblox system error.
	SystemError = 2,
	/// Unable to purchase item because user already owns the item. Users can only
	/// own one copy of non-limited item.
	AlreadyOwned = 3,
	/// Unable to purchase item because of insufficient Robux.
	InsufficientRobux = 4,
	/// User has reached the max quantity allowed per user set by the creator for
	/// limited items.
	QuantityLimitExceeded = 5,
	/// The user has exceeded our
	/// [purchase request limit](https://create.roblox.com/docs/marketplace/marketplace-fees-and-commissions#rate-limits).
	QuotaExceeded = 6,
	/// Item is not for sale.
	NotForSale = 7,
	/// This item is restricted to a group of users and the purchaser is not in
	/// this group.
	NotAvailableForPurchaser = 8,
	/// The provided price does not match the item price. Most likely the price
	/// changed since displayed to the user.
	PriceMismatch = 9,
	/// The item is sold out.
	SoldOut = 10,
	/// The purchaser is the same user as the seller, for a resale purchase.
	PurchaserIsSeller = 11,
	/// The user does not have sufficient premium membership to purchase this
	/// item.
	InsufficientMembership = 12,
	/// The item is not allowed to be sold in the place.
	PlaceInvalid = 13
};

/// Indicates if an avatar item is an asset or bundle. Used with
/// MarketplaceService and similar services.
/// Indicates if an avatar item is an asset or bundle. Used with
/// `Class.MarketplaceService` and similar services.
enum class MarketplaceProductType : uint32_t {
	/// A standalone avatar item (such as an accessory, clothing, or body part)
	/// sold individually in the Avatar Shop.
	AvatarAsset = 1,
	/// A curated collection of avatar items sold together as a single package in
	/// the Avatar Shop.
	AvatarBundle = 2
};

/// Used with `Class.DataModel.MatchmakingType` to represent how players in the
/// server are handled by matchmaking.
/// This enum is used with `Class.DataModel.MatchmakingType` to represent how
/// players in the server are handled by matchmaking.
enum class MatchmakingType : uint32_t {
	/// Includes desktop, mobile, cross-play enabled players, etc.
	Default = 1,
	/// Xbox players with cross-play disabled.
	XboxOnly = 2,
	/// PlayStation players with cross-play disabled.
	PlayStationOnly = 3
};

/// Materials used for parts and/or terrain.
/// The following base materials are used for [parts](https://create.roblox.com/docs/parts)
/// and/or [terrain](https://create.roblox.com/docs/parts/terrain). See the
/// [Materials](https://create.roblox.com/docs/parts/materials) guide for more details on using and
/// modifying materials.
enum class Material : uint32_t {
	/// Applies to `Class.BasePart` only.
	Plastic = 256,
	/// Applies to `Class.BasePart` only.
	SmoothPlastic = 272,
	/// Applies to `Class.BasePart` only.
	Neon = 288,
	/// Applies to `Class.BasePart` only.
	Wood = 512,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	WoodPlanks = 528,
	/// Applies to `Class.BasePart` only.
	Marble = 784,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Basalt = 788,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Slate = 800,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	CrackedLava = 804,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Concrete = 816,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Limestone = 820,
	/// Applies to `Class.BasePart` only.
	Granite = 832,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Pavement = 836,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Brick = 848,
	/// Applies to `Class.BasePart` only.
	Pebble = 864,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Cobblestone = 880,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Rock = 896,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Sandstone = 912,
	/// Applies to `Class.BasePart` only.
	CorrodedMetal = 1040,
	/// Applies to `Class.BasePart` only.
	DiamondPlate = 1056,
	/// Applies to `Class.BasePart` only.
	Foil = 1072,
	/// Applies to `Class.BasePart` only.
	Metal = 1088,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Grass = 1280,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	LeafyGrass = 1284,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Sand = 1296,
	/// Applies to `Class.BasePart` only.
	Fabric = 1312,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Snow = 1328,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Mud = 1344,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Ground = 1360,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Asphalt = 1376,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Salt = 1392,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Ice = 1536,
	/// Applies to `Class.BasePart` and `Class.Terrain`.
	Glacier = 1552,
	/// Applies to `Class.BasePart` only. Note that refraction of light through
	/// this material is not supported on mobile devices due to computational
	/// limitations.
	Glass = 1568,
	/// Must be used on a `Class.MeshPart` with UVs laid out to cover much of the
	/// 0:1 UV space or more (larger is better). The `Class.MeshPart` must also
	/// have a texture applied to its `Class.MeshPart.TextureID|TextureID`, and
	/// that texture image must have a wide value range since the material
	/// displays the range from dark/black to light/white values. Obtain
	/// [this model](https://create.roblox.com/store/asset/15507769146/ForceFieldMesh)
	/// for a functional example.
	ForceField = 1584,
	/// Applies to `Class.Terrain` only.
	Air = 1792,
	/// Applies to `Class.Terrain` only.
	Water = 2048,
	/// Applies to `Class.BasePart` only.
	Cardboard = 2304,
	/// Applies to `Class.BasePart` only.
	Carpet = 2305,
	/// Applies to `Class.BasePart` only.
	CeramicTiles = 2306,
	/// Applies to `Class.BasePart` only.
	ClayRoofTiles = 2307,
	/// Applies to `Class.BasePart` only.
	RoofShingles = 2308,
	/// Applies to `Class.BasePart` only.
	Leather = 2309,
	/// Applies to `Class.BasePart` only.
	Plaster = 2310,
	/// Applies to `Class.BasePart` only.
	Rubber = 2311
};

/// Describes the pattern of material. Affects texture tiling method.
enum class MaterialPattern : uint32_t {
	/// Material has ordered pattern, usually man-made, like brick or wood planks.
	Regular = 0,
	/// Material pattern has less repetition, like stone or dirt.
	Organic = 1
};

/// The membership type of a Player.
/// Describes the paid-membership tier associated with a `Class.Player`. The value
/// is exposed via the `Class.Player.MembershipType` property, which defaults to
/// `Enum.MembershipType.None` and is set automatically by the server when the
/// player joins. Prefer `Class.Player.HasRobloxSubscription` to check for an
/// active paid subscription.
/// 
/// The legacy Builders Club tiers (`Enum.MembershipType.BuildersClub`,
/// `Enum.MembershipType.TurboBuildersClub`,
/// `Enum.MembershipType.OutrageousBuildersClub`) are no longer available for
/// purchase and are retained only for backward compatibility. All active paid
/// memberships are represented by `Enum.MembershipType.Premium`.
enum class MembershipType : uint32_t {
	/// The player does not have an active paid membership.
	None = 0,
	/// Legacy Builders Club membership. No longer available for purchase;
	/// retained for compatibility. Active paid memberships use
	/// `Enum.MembershipType.Premium`.
	BuildersClub = 1,
	/// Legacy Turbo Builders Club membership. No longer available for purchase;
	/// retained for compatibility. Active paid memberships use
	/// `Enum.MembershipType.Premium`.
	TurboBuildersClub = 2,
	/// Legacy Outrageous Builders Club membership. No longer available for
	/// purchase; retained for compatibility. Active paid memberships use
	/// `Enum.MembershipType.Premium`.
	OutrageousBuildersClub = 3,
	/// The player has an active Premium membership.
	Premium = 4
};

/// Identifies a mesh attribute when calling the batch methods on
/// `Class.EditableMesh`.
/// `Enum.MeshAttribute` identifies a mesh attribute when calling the batch
/// methods on `Class.EditableMesh`. Some methods take this enum as an argument to
/// identify which attribute to operate on.
enum class MeshAttribute : uint32_t {
	/// The per-element vertex position attribute, storing a `Datatype.Vector3`
	/// point in object space for each vertex.
	Vertex = 0,
	/// The per-element surface normal attribute, storing a `Datatype.Vector3`
	/// direction used for lighting calculations.
	Normal = 1,
	/// The per-element color attribute, storing a `Datatype.Color3` value and a
	/// float alpha for each color entry.
	Color = 2,
	/// The per-element UV attribute, storing a `Datatype.Vector2` texture
	/// coordinate for each UV entry.
	UV = 3,
	/// The face attribute channel, identifying topology elements that connect
	/// vertex positions into triangles.
	Face = 4
};

/// The level of detail of `MeshParts` displayed in Studio.
/// The level of detail of `MeshParts` displayed in Studio. Used to visually
/// verify the quality of MeshParts at lower level of detail at close range.
/// Level01 being the highest detail and Level04 being the lowest detail.
enum class MeshPartDetailLevel : uint32_t {
	/// Select level of detail based on distance (default behavior as in game).
	DistanceBased = 0,
	/// Forces MeshParts to render at LOD index 0, the finest detail level.
	Level00 = 1,
	/// Highest level of detail.
	Level01 = 2,
	/// Second highest level of detail.
	Level02 = 3,
	/// Third highest level of detail.
	Level03 = 4,
	/// Lowest level of detail.
	Level04 = 5,
	/// Forces MeshParts to render at LOD index 5.
	Level05 = 6,
	/// Forces MeshParts to render at LOD index 6.
	Level06 = 7,
	/// Forces MeshParts to render at LOD index 7.
	Level07 = 8,
	/// Forces MeshParts to render at LOD index 8.
	Level08 = 9,
	/// Forces MeshParts to render at LOD index 9, the coarsest available.
	Level09 = 10
};

/// Controls the `Class.Workspace.MeshPartHeadsAndAccessories` feature.
/// Controls whether the `Class.Workspace` loads R15 avatar heads and accessories
/// as `Class.MeshPart` objects. When set to `Default` or `Enabled`, heads and
/// accessories resolve through the `MeshPart`-based avatar pipeline, which
/// supports modern rendering, layered clothing, and `Class.MeshPart`-specific
/// deformation. When set to `Disabled`, heads and accessories use the legacy
/// `Class.SpecialMesh`-based pipeline.
/// 
/// `Class.Workspace.MeshPartHeadsAndAccessories` defaults to `Default`.
enum class MeshPartHeadsAndAccessories : uint32_t {
	/// The default option to control the
	/// `Class.Workspace.MeshPartHeadsAndAccessories` feature. This currently has
	/// the same meaning as "Enabled".
	Default = 0,
	/// Disables the `Class.Workspace.MeshPartHeadsAndAccessories` feature.
	Disabled = 1,
	/// Enables the `Class.Workspace.MeshPartHeadsAndAccessories` feature.
	Enabled = 2
};

/// Specifies the real-world unit of length that a source 3D mesh file was
/// authored in, used by the mesh importer to scale geometry to Roblox studs.
/// Specifies the unit of length used when the source 3D asset was modeled. The
/// mesh importer reads this value and applies a conversion factor so that the
/// imported geometry is proportionally sized in Roblox studs. Choosing the
/// correct unit ensures that a 1-meter object in the source file arrives at the
/// correct stud dimensions.
enum class MeshScaleUnit : uint32_t {
	/// Treats the source mesh as authored in Roblox studs, applying no unit
	/// conversion on import.
	Stud = 0,
	/// Treats the source mesh as authored in meters and scales it to Roblox studs
	/// on import.
	Meter = 1,
	/// Treats the source mesh as authored in centimeters and scales it to Roblox
	/// studs on import.
	CM = 2,
	/// Treats the source mesh as authored in millimeters and scales it to Roblox
	/// studs on import.
	MM = 3,
	/// Treats the source mesh as authored in feet and scales it to Roblox studs
	/// on import.
	Foot = 4,
	/// Treats the source mesh as authored in inches and scales it to Roblox studs
	/// on import.
	Inch = 5
};

/// The MeshType Enum is used to set what type of mesh the `Class.SpecialMesh` is.
enum class MeshType : uint32_t {
	/// The mesh is the default `Class.Humanoid` head mesh.
	Head = 0,
	/// The mesh is the default Humanoid torso mesh.
	Torso = 1,
	/// The mesh is a wedge.
	Wedge = 2,
	/// The mesh is a sphere.
	Sphere = 3,
	/// The mesh is a cylinder.
	Cylinder = 4,
	/// The mesh is determined by the Roblox mesh asset ID provided.
	FileMesh = 5,
	/// The mesh is a brick (just like the shape of a default `Class.BasePart`).
	Brick = 6,
	/// The mesh is a prism.
	Prism = 7,
	/// The mesh is a pyramid.
	Pyramid = 8,
	/// The mesh is a parallel ramp.
	ParallelRamp = 9,
	/// The mesh is a right angle ramp.
	RightAngleRamp = 10,
	/// The mesh is a corner wedge.
	CornerWedge = 11
};

/// Message category and severity level.
/// A message can be a simple diagnostic or a sign of a system instability or
/// failure. The channel that the message appears in indicates its severity. The
/// MessageType indicates which channel the message displays in.
enum class MessageType : uint32_t {
	/// The message is from the standard output channel.
	MessageOutput = 0,
	/// The message is from the information channel.
	MessageInfo = 1,
	/// The message is from the warning channel.
	MessageWarning = 2,
	/// The message is from the error channel.
	MessageError = 3
};

/// Controls the level of detail for `Class.Model|Models` in experiences with
/// instance streaming enabled.
/// Controls the level of detail for `Class.Model|Models` in experiences with
/// instance [streaming](https://create.roblox.com/docs/workspace/streaming) enabled. Composite
/// or imposter meshes do not support physics, collision detection, or raycasting.
/// 
/// <table>
/// <tbody>
/// <tr>
/// <td>
/// <figure>
/// <img src="/assets/modeling/model-objects/LevelOfDetail-Original.jpg" width="270" />
/// <figcaption>Original model</figcaption>
/// </figure>
/// </td>
/// <td>
/// <figure>
/// <img src="/assets/modeling/model-objects/LevelOfDetail-Slim.jpg" width="270" />
/// <figcaption>Lightweight SLIM mesh</figcaption>
/// </figure>
/// </td>
/// <td>
/// <figure>
/// <img src="/assets/modeling/model-objects/LevelOfDetail-Imposter.jpg" width="270" />
/// <figcaption>Low-res "imposter" mesh</figcaption>
/// </figure>
/// </td>
/// </tr>
/// </tbody>
/// </table>
enum class ModelLevelOfDetail : uint32_t {
	/// Default behavior, currently equivalent to `Disabled`.
	Automatic = 0,
	/// A lower resolution "imposter" mesh (colored, coarse mesh that wraps around
	/// all child parts of the model) renders outside the streaming radius. Does
	/// not support textures.
	StreamingMesh = 1,
	/// A lower resolution mesh will not be displayed.
	Disabled = 2,
	/// A **SLIM** model (Scalable Lightweight Interactive Model) renders a
	/// composite of all child parts at progressively lower resolutions at
	/// distances based on the streaming radius. Greatly improves visual quality
	/// over `StreamingMesh`.
	SLIM = 4
};

/// Controls how `Class.Model|Models` are sent to clients in experiences with
/// instance streaming enabled.
/// Controls how `Class.Model|Models` are replicated in experiences when instance
/// [streaming](https://create.roblox.com/docs/workspace/streaming) is enabled. Only affects
/// models with `Class.Model.ModelStreamingMode|ModelStreamingMode` set to
/// `Enum.ModelStreamingMode|Default`/`Enum.ModelStreamingMode|Nonatomic`.
enum class ModelStreamingBehavior : uint32_t {
	/// Default behavior (subject to change).
	Default = 0,
	/// Models are sent when their parent is sent, typically during player join.
	/// Models are never streamed out unless an ancestor of the model is streamed
	/// out.
	Legacy = 1,
	/// Models are never sent during player join. See
	/// [model streaming controls](https://create.roblox.com/docs/workspace/streaming#model-streaming-controls)
	/// for detailed behavioral notes.
	Improved = 2
};

/// Controls stream in and out behavior of a model.
/// Controls how model is streamed in and out when used in an experience that is
/// streaming enabled. Has no effect when experience is not streaming enabled.
enum class ModelStreamingMode : uint32_t {
	/// Default behavior (subject to change).
	Default = 0,
	/// The `Class.Model` and all of its descendants are streamed in/out together.
	/// For streaming in, this applies when **any** descendant `Class.BasePart` is
	/// eligible for streaming in. For streaming out, this applies when **all**
	/// descendant `Class.BasePart|BaseParts` are eligible for streaming out.
	Atomic = 1,
	/// Persistent models are sent as a complete atomic unit soon after the player
	/// joins and before the `Class.Workspace.PersistentLoaded` event fires.
	/// Persistent models and their descendants are never streamed out.
	Persistent = 2,
	/// Behaves as a persistent model for players that have been added using
	/// `Class.Model:AddPersistentPlayer()`. For other players, behavior is the
	/// same as `Atomic`. You can revert a model from player persistence via
	/// `Class.Model:RemovePersistentPlayer()`.
	PersistentPerPlayer = 3,
	/// When a nonatomic model is streamed, descendants are also sent, except for
	/// part descendants. Nonatomic models that are not descendants of parts are
	/// sent during experience loading.
	Nonatomic = 4
};

/// Indicates the moderation review state of an avatar outfit or asset.
/// The `ModerationStatus` enum represents the current moderation review state of
/// avatar content such as outfits and assets. It is returned by
/// `Class.AvatarCreationService` moderation events —
/// `Class.AvatarCreationService.AvatarModerationCompleted`,
/// `Class.AvatarCreationService.AvatarAssetModerationCompleted`, and
/// `Class.AvatarCreationService.AvatarOutfitModerationCompleted` — to communicate
/// the outcome of a moderation check.
enum class ModerationStatus : uint32_t {
	/// The content completed moderation review and was approved for use.
	ReviewedApproved = 1,
	/// The content completed moderation review and was rejected.
	ReviewedRejected = 2,
	/// The content has been submitted but moderation review is still pending.
	NotReviewed = 3,
	/// Moderation review is not applicable to this content.
	NotApplicable = 4,
	/// An unrecognized or error moderation status returned when the server
	/// response cannot be mapped to a known value.
	Invalid = 5
};

/// Identifies a keyboard modifier key for use with
/// `Class.InputObject:IsModifierKeyDown()`.
/// Identifies keyboard modifier keys. Pass a value to
/// `Class.InputObject:IsModifierKeyDown()` to test whether that modifier is held
/// during an input event. Left and right physical variants map to the same value
/// (for example, both Shift keys report as `Enum.ModifierKey.Shift`).
enum class ModifierKey : uint32_t {
	/// The Shift key (left or right Shift key).
	Shift = 0,
	/// The Control key (left or right Ctrl key).
	Ctrl = 1,
	/// The Alt key (left or right Alt/Option key).
	Alt = 2,
	/// The Meta key (the Windows key on Windows, or the Command key on macOS).
	Meta = 3
};

/// Sets the user's mouse behavior.
/// Used with the `Class.UserInputService.MouseBehavior` property of
/// `Class.UserInputService` to set how the user's mouse behaves.
enum class MouseBehavior : uint32_t {
	/// The mouse moves freely around the user's screen.
	Default = 0,
	/// The mouse is locked and cannot move from the center of the user's screen.
	LockCenter = 1,
	/// The mouse is locked and cannot move from its current position on the
	/// user's screen at the time of locking.
	LockCurrentPosition = 2
};

/// Represents the state of a `Class.SkateboardPlatform`.
enum class MoveState : uint32_t {
	/// Skateboard is stopped (not moving).
	Stopped = 0,
	/// Skateboard is coasting (not actively speeding up / being pushed).
	Coasting = 1,
	/// Skateboard is being pushed (speeding up).
	Pushing = 2,
	/// Skateboard is stopping, but still moving.
	Stopping = 3,
	/// Skateboard is in the air.
	AirFree = 4
};

/// Describes whether a voice chat participant's microphone is actively
/// transmitting audio.
/// `Enum.MuteState` is the microphone mute status of a local player in a voice
/// chat session. It is passed in `Class.VoiceChatService` events such as
/// `VoiceChatPlayerMuteStateChangedClientToServer` and
/// `VoiceChatPlayerMuteStateChangedServerToClient`. Defaults to
/// `Enum.MuteState.Unmuted`.
enum class MuteState : uint32_t {
	/// The participant's microphone is active and transmitting audio.
	Unmuted = 0,
	/// The participant's microphone is muted and not transmitting audio.
	Muted = 1
};

/// The NameOcclusion Enum is used to set the `Class.Humanoid.NameOcclusion`
/// property.
/// `NameOcclusion` controls whether overhead name labels on `Class.Humanoid`
/// characters are hidden when solid geometry blocks the line of sight between the
/// viewer and the character. When the local player's
/// `Class.Humanoid.NameOcclusion` is set to `EnemyOcclusion` or `OccludeAll`, the
/// engine performs a raycast; if the character's head is behind a solid part, the
/// name label is not rendered for that frame. Setting the value to `NoOcclusion`
/// skips the raycast entirely and names are always visible regardless of
/// intervening geometry.
enum class NameOcclusion : uint32_t {
	/// Do not occlude (hide) any humanoid names.
	NoOcclusion = 0,
	/// Occlude (hide) all enemy humanoid names.
	EnemyOcclusion = 1,
	/// Occlude (hide) all humanoid names.
	OccludeAll = 2
};

/// Records the CSG combination operation — Union or Intersection — that
/// previously merged multiple `Class.NegateOperation` parts, allowing the engine
/// to restore the correct result type when those parts are later separated.
/// Type of the `PreviousOperation` property. Records which CSG combination
/// produced this `Class.NegateOperation` —
/// `Enum.NegateOperationHiddenHistory.NegatedUnion` or
/// `Enum.NegateOperationHiddenHistory.NegatedIntersection` — so the engine can
/// restore the correct output type when the solid is later separated. Defaults to
/// `Enum.NegateOperationHiddenHistory.None` when no prior combination history is
/// recorded.
enum class NegateOperationHiddenHistory : uint32_t {
	/// Indicates no previous CSG combination operation is recorded for this
	/// `Class.NegateOperation` part. This is the default value of
	/// `PreviousOperation`.
	None = 0,
	/// Indicates this `Class.NegateOperation` was previously produced by a Union
	/// operation applied to multiple negated parts.
	NegatedUnion = 1,
	/// Indicates this `Class.NegateOperation` was previously produced by an
	/// Intersection operation applied to multiple negated parts.
	NegatedIntersection = 2
};

/// Defines how simulation authority is determined for the Network Ownership
/// Unit/Mechanism this part is attached to.
/// Defines how to determine which client has ownership of a part for a server
/// (network).
enum class NetworkOwnership : uint32_t {
	/// Network ownership is determined automatically by the server.
	Automatic = 0,
	/// Network ownership is set manually by the developer.
	Manual = 1,
	/// The first player to touch a part is given ownership of that part for the
	/// server (network). Ownership will not change if another player touches that
	/// part unless network ownership has been released by the owner.
	OnContact = 2
};

/// Describes the device's current network reachability state as reported by
/// `ConnectivityService`.
/// Describes the device's current network reachability state as tracked by
/// `ConnectivityService`. The engine's connectivity subsystem monitors
/// platform-level network availability and updates the `NetworkStatus` property
/// with one of these values whenever the state changes.
enum class NetworkStatus : uint32_t {
	/// The network connection state has not yet been determined or is unavailable
	/// on the current platform.
	Unknown = 0,
	/// The device has an active network connection.
	Connected = 1,
	/// The device does not currently have a network connection.
	Disconnected = 2
};

/// Specifies the noise algorithm used by a `Noise` instance's `NoiseType`
/// property.
/// Selects the procedural noise algorithm applied when sampling through a `Noise`
/// instance. The chosen value determines which kernel `SampleDirectional()`
/// evaluates; different values support different sampling modes. The default
/// value of `NoiseType` is `Enum.NoiseType.SimplexGabor`.
enum class NoiseType : uint32_t {
	/// Uses an OpenSimplex2 body-centered cubic (BCC) lattice with a Gabor
	/// sinusoidal kernel for anisotropic directional noise sampling.
	SimplexGabor = 0
};

/// The NormalId Enum sets which side/face of a Part is used.
enum class NormalId : uint32_t {
	/// The right face of a Part.
	Right = 0,
	/// The top face of a Part.
	Top = 1,
	/// The back face of a Part.
	Back = 2,
	/// The left face of a Part.
	Left = 3,
	/// The bottom face of a Part.
	Bottom = 4,
	/// The front face of a Part.
	Front = 5
};

/// The OrientationAlignmentMode Enum is used to select the number of
/// `Class.Attachment|Attachments` used in an alignment.
enum class OrientationAlignmentMode : uint32_t {
	/// Use one attachment.
	OneAttachment = 0,
	/// Use two attachments.
	TwoAttachment = 1
};

/// Sets which screen axis `Class.Camera.OrthographicSize|OrthographicSize` is
/// applied to.
/// Used by `Class.Camera|Camera` to set which aspect of the
/// `Class.Camera.ViewportSize|ViewportSize` is controlled by
/// `Class.Camera.OrthographicSize|OrthographicSize`.
/// 
/// For example, when this property is set to `Enum.OrthographicMode.Vertical`,
/// the orthographic projection is scaled such that the vertical dimension spans
/// exactly `Class.Camera.OrthographicSize|OrthographicSize` studs, and the
/// horizontal dimension spans however many studs are needed to match.
/// 
/// This also controls which axis `Class.Camera.ViewStretch|ViewStretch` will
/// stretch for orthographic cameras.
enum class OrthographicMode : uint32_t {
	/// The screen's vertical axis will span exactly
	/// `Class.Camera.OrthographicSize|OrthographicSize` studs. The
	/// `Class.Camera.ViewStretch|ViewStretch` will apply to the horizontal axis.
	Vertical = 0,
	/// The screen's horizontal axis will span exactly
	/// `Class.Camera.OrthographicSize|OrthographicSize` studs. The
	/// `Class.Camera.ViewStretch|ViewStretch` will apply to the vertical axis.
	Horizontal = 1,
	/// The screen diagonal will span exactly
	/// `Class.Camera.OrthographicSize|OrthographicSize` studs. The
	/// `Class.Camera.ViewStretch|ViewStretch` will apply to the horizontal axis.
	/// (In the initial beta, a bug makes it apply to both axes in a complex way.)
	Diagonal = 2,
	/// The screen's longer axis will span exactly
	/// `Class.Camera.OrthographicSize|OrthographicSize` studs. The
	/// `Class.Camera.ViewStretch|ViewStretch` will apply to the shorter axis. If
	/// both dimensions are identical, it will apply to the horizontal axis.
	MaxAxis = 3
};

/// Filters which outfits are returned by
/// `Class.AvatarEditorService:GetOutfitsAsync()` based on how they were obtained.
/// Specifies whether `Class.AvatarEditorService:GetOutfitsAsync()` should return
/// all of a user's outfits, only outfits the user created themselves, or only
/// outfits the user purchased. Pass this value as the `outfitSource` parameter of
/// `Class.AvatarEditorService:GetOutfitsAsync()`.
enum class OutfitSource : uint32_t {
	/// Return all outfits regardless of whether they were created or purchased.
	All = 1,
	/// Return only outfits that the user created themselves (editable outfits).
	Created = 2,
	/// Return only outfits that the user purchased (non-editable outfits).
	Purchased = 3
};

/// Categorizes a saved player outfit by its content type, used to filter or
/// specify outfit type in `Class.AvatarEditorService` methods.
/// `OutfitType` is an enum used with `Class.AvatarEditorService` to distinguish
/// saved player outfits by their content. It is accepted by
/// `Class.AvatarEditorService:GetOutfitsAsync()` and
/// `Class.AvatarEditorService:GetOutfits()` as a filter.
/// 
/// The most common values are `Enum.OutfitType.Avatar` (a full-body outfit) and
/// `Enum.OutfitType.Makeup` (a makeup-only configuration). Passing
/// `Enum.OutfitType.All` to a query method returns outfits of every type with no
/// filtering applied.
enum class OutfitType : uint32_t {
	/// Returns outfits of every type, with no filtering applied.
	All = 1,
	/// A full-body avatar outfit.
	Avatar = 2,
	/// An outfit containing a dynamic head.
	DynamicHead = 3,
	/// An outfit consisting of a pair of shoes.
	Shoes = 4,
	/// An outfit consisting of makeup items applied to the avatar's face.
	Makeup = 5
};

/// Specifies the orientation of the Output panel in Roblox Studio.
/// `OutputLayoutMode` controls how the Output panel is oriented and docked within
/// the Roblox Studio window. The selected value is exposed through the
/// `Output Layout Mode` property on the `Class.Studio` settings object. Defaults
/// to `Enum.OutputLayoutMode.Vertical`.
enum class OutputLayoutMode : uint32_t {
	/// Docks the Output panel horizontally along the top or bottom edge of the
	/// Studio window.
	Horizontal = 0,
	/// Docks the Output panel vertically along the left or right edge of the
	/// Studio window.
	Vertical = 1
};

/// Overrides the behavior of the mouse icon to either force that it is always
/// shown or force that it is always hidden.
enum class OverrideMouseIconBehavior : uint32_t {
	/// The mouse icon behavior is not overridden - default behavior is used.
	None = 0,
	/// The mouse icon is forced to always remain shown/visible.
	ForceShow = 1,
	/// The mouse icon is forced to always remain hidden/invisible.
	ForceHide = 2
};

/// Indicates the current user's or group roleset's permission to the package.
/// The `Enum.PackagePermission` indicates the current user's or group roleset's
/// permission to the package.
enum class PackagePermission : uint32_t {
	/// Permission data is not available for the current user or group roleset.
	None = 0,
	/// The current user or group roleset doesn't have access.
	NoAccess = 1,
	/// The current user's or group roleset's permission is revoked.
	Revoked = 2,
	/// The current user or group roleset can download a copy of the package from
	/// Roblox.
	UseView = 3,
	/// The current user or group roleset can download a copy of the package from
	/// Roblox and publish package changes to Roblox.
	Edit = 4,
	/// The current user or group roleset can download a copy of the page from
	/// Roblox, publish package changes to Roblox, and manage who has access to
	/// the package.
	Own = 5
};

/// Controls the `Class.Part.Shape` of an object.
/// The **PartType** enum specifies the primitive geometry shape of a
/// `Class.Part`, assigned through its `Class.Part.Shape|Shape` property. A new
/// `Class.Part` defaults to `Block`. The five available shapes are Ball (sphere),
/// Block (rectangular prism), Cylinder (oriented along the X axis), Wedge (a ramp
/// with a slope on one face), and CornerWedge (a ramp with slopes on two
/// perpendicular faces).
enum class PartType : uint32_t {
	/// A spherical shape.
	Ball = 0,
	/// A block shape.
	Block = 1,
	/// A cylinder shape oriented along the **X** axis.
	Cylinder = 2,
	/// A wedge shape with a slope on one side.
	Wedge = 3,
	/// A wedge shape with slopes on two sides.
	CornerWedge = 4
};

/// Specifies the geometric shape from which a particle emitter emits particles.
/// Controls the emitter shape used by `Class.ParticleEmitter.Shape`.
enum class ParticleEmitterShape : uint32_t {
	/// Emits particles from a box-shaped region.
	Box = 0,
	/// Emits particles from a sphere-shaped region.
	Sphere = 1,
	/// Emits particles from a cylinder-shaped region.
	Cylinder = 2,
	/// Emits particles from a disc-shaped region.
	Disc = 3
};

/// Controls the direction particles travel when emitted from a shaped
/// `Class.ParticleEmitter`.
/// Controls whether particles emitted from a `Class.ParticleEmitter` travel
/// outward from, inward toward, or in both directions relative to the emitter
/// shape surface. Used with the `Class.ParticleEmitter.ShapeInOut` property,
/// which defaults to `Enum.ParticleEmitterShapeInOut.Outward`.
enum class ParticleEmitterShapeInOut : uint32_t {
	/// Particles emit directed outward away from the emitter shape surface.
	Outward = 0,
	/// Particles emit directed inward toward the center of the emitter shape.
	Inward = 1,
	/// Particles emit in both outward and inward directions from the emitter
	/// shape surface, chosen randomly per particle.
	InAndOut = 2
};

/// Controls whether a `Class.ParticleEmitter` emits particles from the surface or
/// the volume of its shape.
/// Controls whether a `Class.ParticleEmitter` emits particles from the surface or
/// throughout the volume of the shape defined by `Class.ParticleEmitter.Shape`.
/// Used with the `Class.ParticleEmitter.ShapeStyle` property, which defaults to
/// `Enum.ParticleEmitterShapeStyle.Volume`.
enum class ParticleEmitterShapeStyle : uint32_t {
	/// Particles emit from throughout the interior volume of the emitter shape.
	Volume = 0,
	/// Particles emit only from the outer surface of the emitter shape.
	Surface = 1
};

/// Determines the layout of the flipbook texture.
enum class ParticleFlipbookLayout : uint32_t {
	/// Disable flipbook features and use the texture as a single static texture
	/// over the particle's lifetime.
	None = 0,
	/// 2&times;2 frames for a 4-frame animation.
	Grid2x2 = 1,
	/// 4&times;4 frames for a 16-frame animation.
	Grid4x4 = 2,
	/// 8&times;8 frames for a 64-frame animation.
	Grid8x8 = 3,
	/// A custom grid size defined by
	/// `Class.ParticleEmitter.FlipbookSizeX|FlipbookSizeX` and
	/// `Class.ParticleEmitter.FlipbookSizeY|FlipbookSizeY`.
	Custom = 4
};

/// Determines the type of the flipbook animation.
enum class ParticleFlipbookMode : uint32_t {
	/// Continuously play through all frames, starting back at the first frame
	/// after playing the last.
	Loop = 0,
	/// Play through the animation only once across the particle's lifetime. With
	/// this setting, the `Class.ParticleEmitter.FlipbookFramerate` property
	/// doesn't apply; instead, the framerate is determined by the particle's
	/// `Class.ParticleEmitter.Lifetime` divided evenly by the number of frames in
	/// the animation. **OneShot** animations are useful for clear non-repeating
	/// animations, such as an explosion that creates a puff of smoke and then
	/// fades out.
	OneShot = 1,
	/// Play from the first to the last frame, then in reverse from the last to
	/// the first, repeating throughout the `Class.ParticleEmitter.Lifetime` of
	/// the particle.
	PingPong = 2,
	/// Play the frames in a random order, blending/crossfading from one frame to
	/// the next. This can be useful for organic particle textures at low
	/// framerates, such as stars slowly twinkling between subtly different
	/// shapes.
	Random = 3
};

/// Indicates whether a `Class.ParticleEmitter`'s flipbook texture dimensions are
/// compatible with the selected flipbook layout.
/// Describes runtime compatibility between a `Class.ParticleEmitter`'s texture
/// and its `Class.ParticleEmitter.FlipbookLayout|FlipbookLayout`. Flipbook
/// playback requires a 1024×1024 texture; if the texture does not meet this
/// requirement, the engine sets
/// `Enum.ParticleFlipbookTextureCompatible.NotCompatible` and disables flipbook
/// playback. The value begins as `Enum.ParticleFlipbookTextureCompatible.Unknown`
/// and transitions to `Enum.ParticleFlipbookTextureCompatible.Compatible` or
/// `Enum.ParticleFlipbookTextureCompatible.NotCompatible` once texture dimensions
/// are resolved. Set automatically by the engine; not writable from scripts.
enum class ParticleFlipbookTextureCompatible : uint32_t {
	/// The `Class.ParticleEmitter`'s flipbook texture dimensions are incompatible
	/// with the active flipbook layout (the texture must be 1024×1024); flipbook
	/// playback is suppressed.
	NotCompatible = 0,
	/// The `Class.ParticleEmitter`'s flipbook texture dimensions are confirmed
	/// compatible with the active flipbook layout; flipbook playback proceeds
	/// normally.
	Compatible = 1,
	/// Compatibility has not yet been determined; this is the initial state
	/// before the engine resolves the flipbook texture dimensions.
	Unknown = 2
};

/// Specifies how a particle's rendered geometry is oriented.
/// Controls the orientation mode used by `Class.ParticleEmitter.Orientation`.
enum class ParticleOrientation : uint32_t {
	/// Orients particles as billboards that face the camera.
	FacingCamera = 0,
	/// Orients particles toward the camera while keeping them upright on the
	/// world Y axis.
	FacingCameraWorldUp = 1,
	/// Orients particles parallel to their direction of movement.
	VelocityParallel = 2,
	/// Orients particles perpendicular to their direction of movement.
	VelocityPerpendicular = 3
};

/// The success of a `Class.Path` generated by `Class.PathfindingService`.
enum class PathStatus : uint32_t {
	/// Path found successfully.
	Success = 0,
	/// Path doesn't exist, returns path to closest point.
	ClosestNoPath = 1,
	/// Goal is out of MaxDistance range, returns path to closest point you can
	/// reach within MaxDistance.
	ClosestOutOfRange = 2,
	/// Failed to compute path; the starting point is not empty.
	FailStartNotEmpty = 3,
	/// Failed to compute path; the finish point is not empty.
	FailFinishNotEmpty = 4,
	/// Path doesn't exist.
	NoPath = 5
};

/// Describes the action to take when a `Datatype.PathWaypoint` is reached.
enum class PathWaypointAction : uint32_t {
	/// Walk action needed to reach the next waypoint.
	Walk = 0,
	/// Jump action needed to reach the next waypoint.
	Jump = 1,
	/// A developer-defined custom action is needed to traverse a
	/// `Class.PathfindingLink` to reach the next waypoint.
	Custom = 2
};

/// Controls whether `Class.PathfindingService` uses an improved search algorithm.
/// Determines whether `Class.PathfindingService` uses an improved pathfinding
/// search algorithm. This enum is used by
/// `Class.Workspace.PathfindingUseImprovedSearch`.
enum class PathfindingUseImprovedSearch : uint32_t {
	/// Uses the engine-default pathfinding behavior.
	Default = 0,
	/// Uses the legacy pathfinding search algorithm.
	Disabled = 1,
	/// Uses the improved pathfinding search algorithm.
	Enabled = 2
};

enum class PeoplePageLayout : uint32_t {
	Card = 0,
	List = 1
};

/// Used to set the highest permission level that APIs have to have in order to be
/// shown in the Object Browser.
enum class PermissionLevelShown : uint32_t {
	/// Member must have no security permissions in order to be shown.
	Game = 0,
	/// Member must have security permissions less than or equal to
	/// **RobloxPlaceSecurity** to be shown.
	RobloxGame = 1,
	/// Member must have security permissions less than or equal to
	/// **RobloxScriptSecurity** to be shown.
	RobloxScript = 2,
	/// Member must have security permissions less than or equal to
	/// **LocalUserSecurity** to be shown.
	Studio = 3,
	/// Member is shown no matter what security it has.
	Roblox = 4
};

/// Specifies the type of physical joint created when importing a rigged asset.
/// Controls which joint class connects bones in an imported rig skeleton.
enum class PhysicalConstraintType : uint32_t {
	/// Import creates `Class.AnimationConstraint` instances to connect the rig's
	/// bone joints.
	AnimationConstraint = 0,
	/// Import creates `Class.Motor6D` instances to connect the rig's bone joints.
	Motor6D = 1
};

/// Controls how the physics engine advances simulation time for assemblies in a
/// `Class.Workspace`.
/// The `PhysicsSteppingMethod` enum determines the timestep arbiter strategy used
/// by the physics engine for all simulated assemblies in a place. It is set via
/// the `Class.Workspace.PhysicsSteppingMethod` property. The default value is
/// `Enum.PhysicsSteppingMethod.Default`, which currently resolves to the same
/// behavior as `Enum.PhysicsSteppingMethod.Adaptive`.
enum class PhysicsSteppingMethod : uint32_t {
	/// The current default is `Adaptive`.
	Default = 0,
	/// All simulated assemblies inside the workspace will advance forward at 240
	/// Hz. This option is best for optimal stability and simulation accuracy.
	Fixed = 1,
	/// The engine attempts to assign optimal simulation rates for individual
	/// assemblies of either 240 Hz, 120 Hz, or 60 Hz. This setting is optimized
	/// for performance.
	Adaptive = 2
};

/// Host operating system of the client.
/// The **Platform** enum is used to determine the operating system of the client.
enum class Platform : uint32_t {
	/// The client is running on a Windows Operating System.
	Windows = 0,
	/// The client is running on OSX (Apple desktop).
	OSX = 1,
	/// The client is running on IOS (Apple mobile).
	IOS = 2,
	/// The client is running on Android (Google mobile).
	Android = 3,
	/// The client is running on an XBox One (console).
	XBoxOne = 4,
	/// The client is running on a PS4 (console).
	PS4 = 5,
	/// The client is running on a PS3 (console).
	PS3 = 6,
	/// The client is running on an XBox 360 (console).
	XBox360 = 7,
	/// The client is running on a Wii U (console).
	WiiU = 8,
	/// The client is running on an NX Operating System (Cisco Nexus).
	NX = 9,
	/// The client is running on an Ouya Operating System (Android-Based).
	Ouya = 10,
	/// The client is running on an Android TV.
	AndroidTV = 11,
	/// The client is running on Chromecast.
	Chromecast = 12,
	/// The client is running on a Linux Operating System (desktop).
	Linux = 13,
	/// The client is running on Steam.
	SteamOS = 14,
	/// The client is running on WebOS.
	WebOS = 15,
	/// The client is running on DOS.
	DOS = 16,
	/// The client is running on BeOS.
	BeOS = 17,
	/// The client is running on UWP.
	UWP = 18,
	/// The client is running on a PS5 (console).
	PS5 = 19,
	/// The client is running on Meta OS (Meta Quest VR platform).
	MetaOS = 20,
	/// The client is running in a web browser.
	Web = 21,
	/// The client's operating system is unknown.
	None = 22
};

/// Describes the current state of a `Class.Tween` in its
/// `Class.Tween.PlaybackState` property.
/// Describes the current playback state of a `Class.Tween`, accessible via its
/// `Class.TweenBase.PlaybackState` property. The state advances through a defined
/// lifecycle: a newly created tween begins in `Begin`; calling
/// `Class.TweenBase:Play()` moves it to `Delayed` (when
/// `Datatype.TweenInfo.DelayTime` is greater than `0`) or directly to `Playing`;
/// from `Playing` the tween can be suspended (`Paused`), stopped early
/// (`Cancelled`), or reach its natural end (`Completed`). The
/// `Class.TweenBase.Completed` event fires when the state transitions to either
/// `Completed` or `Cancelled`.
enum class PlaybackState : uint32_t {
	/// The tween has been created, but has yet to be played. After exiting this
	/// state, the tween never enters it again.
	Begin = 0,
	/// The tween is waiting for the duration specified in its
	/// `Datatype.TweenInfo.DelayTime`. After the delay elapses, the tween plays.
	Delayed = 1,
	/// The tween is currently in progress.
	Playing = 2,
	/// The tween is paused in the middle of playing.
	Paused = 3,
	/// The tween completed successfully.
	Completed = 4,
	/// The tween was cancelled before completion.
	Cancelled = 5
};

/// References a movement action taken by a player.
/// @deprecated This enum has been deprecated in favor of `Enum.KeyCode` which is more platform-agnostic and should be used in new work instead.
enum class PlayerActions : uint32_t {
	/// The player moved forward.
	CharacterForward = 0,
	/// The player moved backward.
	CharacterBackward = 1,
	/// The player moved left.
	CharacterLeft = 2,
	/// The player moved right.
	CharacterRight = 3,
	/// The player jumped.
	CharacterJump = 4
};

/// Controls destruction behavior when a player character is removed.
/// Controls whether the engine automatically calls `Destroy()` on a player's old
/// character when it is replaced and on the `Player` object when the player
/// leaves. This enum is used by `Class.Workspace.PlayerCharacterDestroyBehavior`.
enum class PlayerCharacterDestroyBehavior : uint32_t {
	/// Uses the engine-default behavior.
	Default = 0,
	/// Automatic `Destroy()` calls on character replacement and player removal
	/// are disabled.
	Disabled = 1,
	/// The engine automatically calls `Destroy()` on old characters when they are
	/// replaced (for example, on respawn) and on `Player` objects when players
	/// leave.
	Enabled = 2
};

/// Determines the style of a chat message.
/// Used by Roblox's Chat to determine the style of a chat message. If you want to
/// check for this kind of stuff, see `Class.Player.Chatted`.
enum class PlayerChatType : uint32_t {
	/// A global message that everyone can receive.
	All = 0,
	/// A team message only players in the same team can receive.
	Team = 1,
	/// A whispered message only the person it's whispered to can receive.
	Whisper = 2
};

/// The decision that `Class.IntegrityService.EvaluatePlayerDeviceTrust` returns
/// for a player.
/// The decision that `Class.IntegrityService.EvaluatePlayerDeviceTrust` returns
/// in the `Action` field of its result, which tells Roblox whether a player can
/// stay in the server based on their device trust level.
enum class PlayerDeviceTrustDecision : uint32_t {
	/// The player stays in the server.
	Accept = 0,
	/// The player is disconnected from the server and sees a rejection message.
	Reject = 1
};

/// The trust level of a player's device.
/// The trust level of a player's device as reported by
/// `Class.Player.DeviceTrustLevel`. The trust level describes the device, not the
/// player or their account.
enum class PlayerDeviceTrustLevel : uint32_t {
	/// Roblox is still checking the device. Every player starts at this level,
	/// and some players might stay at it for the whole session.
	Pending = 0,
	/// Roblox can't tell whether the device is trusted, because the player is on
	/// an unsupported platform or an error occurred on the Roblox side. The
	/// device might or might not be trustworthy.
	Unknown = 1,
	/// The device failed the check, or the player is on a platform that can't be
	/// verified.
	None = 2,
	/// The device passed some of the checks, but not all of them.
	Standard = 3,
	/// The device passed every check.
	Full = 4
};

/// An enum that specifies the reason for **Players.PlayerRemoving** signal.
/// Second argument in `Class.Players.PlayerRemoving`. Helps identify whether a
/// kick was caused by the Roblox platform or the Creator.
enum class PlayerExitReason : uint32_t {
	/// Catch-all for all other disconnect reasons.
	Unknown = 0,
	/// User was kicked by Roblox systems, such as being blocked while in a
	/// Private Server.
	PlatformKick = 1,
	/// Creator called **Player:Kick()**
	CreatorKick = 2
};

/// Describes whether a player is new, active, lapsed, or reactivated on Roblox.
/// The `PlayerPlatformActivationStatus` enum describes a player's platform-wide
/// activity status on Roblox, based on the last 60 days.
enum class PlayerPlatformActivationStatus : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player signed up for Roblox within the last 60 days.
	New = 1,
	/// The player played on Roblox in the last 60 days and is not `New` or
	/// `Reactivated`.
	Active = 2,
	/// The player has not played on Roblox in the last 60 days.
	Lapsed = 3,
	/// The player returned to Roblox within the last 60 days after being
	/// `Lapsed`.
	Reactivated = 4
};

/// Describes a player's platform-wide spender status bucket.
/// The `PlayerPlatformSpenderStatus` enum describes a player's platform-wide
/// spender status bucket.
enum class PlayerPlatformSpenderStatus : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player is an active platform spender.
	Active = 1,
	/// The player is not an active platform spender, including players who have
	/// never spent.
	OtherPayer = 2
};

/// Describes the data model type that the remote end of a
/// `Class.PluginConnection` runs in.
/// An enum describing the possible relationships a target data model of a
/// `Class.PluginConnection` can have to the current data model.
enum class PluginConnectionTargetType : uint32_t {
	/// The target data model is an edit-session data model which spawned this
	/// test data model.
	Edit = 0,
	/// The target data model is a test (simulation/playtest) data model spawned
	/// from this edit data model.
	Test = 1
};

/// Used exclusively by Pose.EasingDirection to specify direction of the
/// EasingStyle curve.
/// When a Pose has an EasingStyle which is not symmetric, the EasingDirection
/// determines if the curve is applied from previous keyframe to next, next
/// keyframe to previous, or in both directions by using two copies of the curve
/// back to back. For the symmetric Linear and Constant EasingStyles, this
/// property has no effect. For legacy compatibility reasons, the use of In and
/// Out are backwards from how these terms are used by most other animation tools
/// and by TweenService.
enum class PoseEasingDirection : uint32_t {
	/// The EasingStyle curve is reversed, with the easing becoming linear as it
	/// approaches the next keyframe.
	In = 0,
	/// EasingStyle curves are applied in the forward direction, from the current
	/// keyframe to the next.
	Out = 1,
	/// Two easing curves are applied back-to-back with the linear ends of the
	/// curves meeting in the middle.
	InOut = 2
};

/// Specifies the interpolation curve used when blending between keyframe
/// `Class.Pose|Poses` in a `Class.KeyframeSequence`.
/// Controls how a `Class.Pose` transitions from one keyframe to the next in a
/// `Class.KeyframeSequence`. The value is set via the `Class.Pose.EasingStyle`
/// property, which defaults to `Enum.PoseEasingStyle.Linear`. For asymmetric
/// styles such as `Enum.PoseEasingStyle.Elastic`, `Enum.PoseEasingStyle.Bounce`,
/// and `Enum.PoseEasingStyle.CubicV2`, the direction of the curve is further
/// controlled by `Enum.PoseEasingDirection`. `Enum.PoseEasingStyle.Cubic` is a
/// legacy alias with a known direction-reversal bug between the Animation Editor
/// and runtime; use `Enum.PoseEasingStyle.CubicV2` for all new work.
enum class PoseEasingStyle : uint32_t {
	/// Poses interpolate linearly between keyframes.
	Linear = 0,
	/// Poses do not interpolate but snap to the keyframe indicated by the
	/// `Enum.PoseEasingDirection`.
	Constant = 1,
	/// Pose interpolation overshoots like an elastic curve.
	Elastic = 2,
	/// Deprecated - Use `Enum.PoseEasingStyle.CubicV2`. Pose interpolation is a
	/// cubic curve between keyframes based on the `Enum.PoseEasingDirection`.
	/// @deprecated Use CubicV2 going forward, Cubic has a bug where the direction is reversed between the editor and runtime.
	Cubic = 3,
	/// Pose interpolation produces a bounce-like effect between keyframes.
	Bounce = 4,
	/// Pose interpolation is a cubic curve between keyframes based on
	/// `Enum.PoseEasingDirection`.
	CubicV2 = 5
};

/// The PositionAlignmentMode Enum is used to select the number of
/// `Class.Attachment|Attachments` used in an alignment.
enum class PositionAlignmentMode : uint32_t {
	/// Use one attachment.
	OneAttachment = 0,
	/// Use two attachments.
	TwoAttachment = 1
};

/// Enum used with `Class.RunService:SetPredictionMode()` to define the prediction
/// mode for the instance.
enum class PredictionMode : uint32_t {
	/// The engine will automatically decide if this instance should be predicted
	/// or not. Currently, only `Class.BasePart|BaseParts` near the local player
	/// character's `Class.Humanoid` will be predicted within a dynamic radius
	/// that grows and shrinks based on the device's capability to handle the
	/// simulation load.
	Automatic = 0,
	/// The instance will be predicted. Mismatches in the attributes of this
	/// instance between the client and server will cause a rollback and
	/// resimulation. If the instance is a `Class.BasePart`, its physics
	/// properties will be predicted ahead of the replicated authoritative server
	/// state.
	On = 1,
	/// The instance will **not** be predicted. Regular network ownership
	/// semantics apply.
	Off = 2
};

/// Enum used with `Class.RunService:GetPredictionStatus()` to check the status of
/// a specific instance.
/// Enum used with `Class.RunService:GetPredictionStatus()` to check the status of
/// a specific instance.
/// 
/// This prediction status can be used to determine whether any associated scripts
/// should run. If the status is `Authoritative` or `Predicted`, such scripts
/// should run, since the local node is either the authority for the instance or
/// is predicting it. If the status is `None`, such scripts do not need to run.
enum class PredictionStatus : uint32_t {
	/// This instance is authoritative.
	Authoritative = 0,
	/// This instance is being predicted.
	Predicted = 1,
	/// The instance will not be resimulated; classic simulation rules apply
	/// instead.
	None = 2
};

/// Used with `Class.Workspace.PredictiveStreamingMode` to control whether the
/// engine streams instances predictively.
/// Used by `Class.Workspace.PredictiveStreamingMode` to control whether streaming
/// pre-fetches content in the predicted direction of player movement, reducing
/// visible pop-in. `Enum.PredictiveStreamingMode.Enabled` uses player velocity
/// and heading to pre-fetch beyond the current position-based radius.
/// `Enum.PredictiveStreamingMode.Disabled` uses only the position-based radius.
/// `Enum.PredictiveStreamingMode.Default` uses the engine's current default
/// behavior for predictive streaming.
enum class PredictiveStreamingMode : uint32_t {
	/// Uses the engine's current default behavior for predictive streaming.
	Default = 0,
	/// Enables predictive streaming, pre-fetching content in the direction of
	/// player movement to reduce pop-in.
	Enabled = 1,
	/// Disables predictive streaming; content is streamed based on the player's
	/// current position radius only.
	Disabled = 2
};

/// This enum is used with `Class.UserInputService.PreferredInput` to indicate the
/// primary input type a player is likely using.
enum class PreferredInput : uint32_t {
	/// The player has connected or most recently interacted with a keyboard or
	/// mouse.
	KeyboardAndMouse = 0,
	/// The player has connected or most recently interacted with a gamepad.
	Gamepad = 1,
	/// The player's device has touch capability and no other input method is
	/// available or was recently interacted with.
	Touch = 2,
	/// The player has connected or most recently interacted with a gamepad
	/// without a thumbstick (for example, a TV remote or another limited-input
	/// gamepad), and no standard gamepad is currently connected.
	MicroGamepad = 3
};

/// This enum is used with `Class.GuiService.PreferredTextSize` to indicate the
/// player's preferred text size.
enum class PreferredTextSize : uint32_t {
	/// The player prefers default text size.
	Medium = 1,
	/// The player prefers text size slightly increased beyond default.
	Large = 2,
	/// The player prefers text size moderately increased beyond default.
	Larger = 3,
	/// The player prefers text size considerably increased beyond default.
	Largest = 4
};

/// Identifies the base primitive shape of a `Class.BasePart` node within a CSG
/// operation graph.
/// Identifies the base primitive shape of a `Class.BasePart` node within a CSG
/// (Constructive Solid Geometry) operation graph (`OperationGraph`). Used when
/// performing union, negate, and intersect operations to determine how each input
/// part's geometry is represented during the operation.
enum class PrimitiveType : uint32_t {
	/// Sentinel value indicating no valid primitive shape; used for uninitialized
	/// or invalid nodes in a CSG operation graph.
	Null = 0,
	/// A spherical primitive shape, corresponding to the ball/sphere geometry of
	/// a `Class.Part`.
	Ball = 1,
	/// A cylindrical primitive shape, corresponding to the cylinder geometry of a
	/// `Class.Part`.
	Cylinder = 2,
	/// A box primitive shape, corresponding to the standard rectangular block
	/// geometry of a `Class.Part`; the default primitive type for new Part nodes
	/// in a CSG operation graph.
	Block = 3,
	/// A wedge primitive shape, corresponding to the geometry of a
	/// `Class.WedgePart`.
	Wedge = 4,
	/// A corner wedge primitive shape, corresponding to the geometry of a
	/// `Class.CornerWedgePart`.
	CornerWedge = 5
};

/// Specifies the purchase locations permitted for an avatar item.
/// Specifies the purchase locations permitted for an avatar item, as returned in
/// the `AllowedSaleLocations` field of the product info table from
/// `Class.MarketplaceService:GetProductInfo()`. The item creator sets the
/// restriction on the Marketplace; it controls whether the item can be sold
/// in-experience and in which experiences. See `Enum.ProductLocationRestriction`
/// items for each restriction.
enum class ProductLocationRestriction : uint32_t {
	/// Item is purchasable only in the Marketplace.
	AvatarShop = 0,
	/// Item is purchasable in the Marketplace and experiences owned by the item
	/// creator.
	AllowedGames = 1,
	/// (Default) Item is purchasable in the Marketplace and all experiences.
	AllGames = 2
};

/// Enum which works with `Class.MarketplaceService` to represent how the  
/// user acquired the developer product.
/// The `ProductPurchaseChannel` enum works with `Class.MarketplaceService` and
/// represents how the user acquired the developer product.
enum class ProductPurchaseChannel : uint32_t {
	/// The purchase was made inside of an experience.
	InExperience = 1,
	/// The purchase was made outside of an experience, on the **Store** tab of
	/// the experience details page.
	ExperienceDetailsPage = 2,
	/// The product was rewarded to the user when they watched a video ad to
	/// completion.
	AdReward = 3,
	/// The user acquired the product as a benefit of purchasing commerce
	/// merchandise from the developer of the experience.
	CommerceProduct = 4
};

/// The `ProductPurchaseDecisionEnum` works with `Class.MarketplaceService` to
/// indicate the status of the sale of developer products.
/// The `ProductPurchaseDecisionEnum` is used to work with
/// `Class.MarketplaceService`, and the sale of developer products.
enum class ProductPurchaseDecision : uint32_t {
	/// The purchase request has been sent but not yet processed.
	NotProcessedYet = 0,
	/// The purchase has been processed and granted to the user who initiated the
	/// purchase request.
	PurchaseGranted = 1
};

/// Chooses between perspective and orthographic cameras.
/// Set to `Enum.ProjectionType.Perspective` (default) to use a perspective
/// camera, where parallel lines in 3D converge on the screen and objects get
/// smaller in the distance. Set to `Enum.ProjectionType.Orthographic` to use an
/// orthographic camera, where parallel lines stay parallel and objects are the
/// same size at any distance. This is useful for things like 2D games, isometric
/// games, and minimaps.
enum class ProjectionType : uint32_t {
	/// The camera is perspective, and uses the field of view settings.
	Perspective = 0,
	/// The camera is orthographic, and uses the orthographic settings.
	Orthographic = 1
};

/// Describes the result of a
/// `Class.AvatarCreationService:PromptCreateAvatarAssetAsync()` call.
/// Outcome of `Class.AvatarCreationService:PromptCreateAvatarAssetAsync()` after
/// a player responds to the in-game asset creation prompt. Distinguishes a
/// successful publish from failure modes such as moderation rejection, declined
/// consent, insufficient Robux, validation failure, or upload errors.
enum class PromptCreateAssetResult : uint32_t {
	/// The asset was successfully created and published.
	Success = 1,
	/// The player explicitly declined the asset-creation consent prompt.
	PermissionDenied = 2,
	/// The creation attempt timed out because the player disconnected or left the
	/// experience.
	Timeout = 3,
	/// The asset upload to the Roblox backend failed after validation.
	UploadFailed = 4,
	/// The player did not interact with the creation prompt before it expired.
	NoUserInput = 5,
	/// The asset creation failed for an unspecified or unexpected reason.
	UnknownFailure = 6,
	/// The asset failed user-generated content validation checks before upload.
	UGCValidationFailed = 7,
	/// The asset name or description was rejected by Roblox moderation.
	ModeratedName = 8,
	/// The asset could not be created because the player had insufficient Robux.
	PurchaseFailure = 9,
	/// The creation token provided to the prompt was invalid or could not be
	/// verified.
	TokenInvalid = 10
};

/// Result codes returned by
/// `Class.AvatarCreationService:PromptCreateAvatarAsync()` indicating whether
/// avatar creation succeeded or why it failed.
/// Result codes returned by
/// `Class.AvatarCreationService:PromptCreateAvatarAsync()` to indicate the
/// outcome of an in-experience avatar creation flow. A value of
/// `Enum.PromptCreateAvatarResult.Success` means the avatar was created and
/// published; all other values identify the failure reason so the experience can
/// surface an appropriate message to the player.
enum class PromptCreateAvatarResult : uint32_t {
	/// The avatar was successfully created and published to the player's account.
	Success = 1,
	/// The player explicitly declined the avatar creation consent prompt.
	PermissionDenied = 2,
	/// The avatar creation consent prompt timed out before the player responded.
	Timeout = 3,
	/// The avatar assets passed validation but the server-side upload or bundle
	/// creation step failed.
	UploadFailed = 4,
	/// The player did not interact with the avatar creation consent prompt before
	/// it closed.
	NoUserInput = 5,
	/// The `Class.HumanoidDescription` supplied to
	/// `Class.AvatarCreationService:PromptCreateAvatarAsync()` was invalid and
	/// could not be used to create an avatar.
	InvalidHumanoidDescription = 6,
	/// The avatar's geometry or content failed Roblox's UGC (User-Generated
	/// Content) validation checks.
	UGCValidationFailed = 7,
	/// The proposed avatar name or description was rejected by Roblox moderation.
	ModeratedName = 8,
	/// The player has reached the maximum number of outfits allowed on their
	/// Roblox account.
	MaxOutfits = 9,
	/// The avatar creation attempt failed because the player did not have
	/// sufficient Robux to cover the required purchase.
	PurchaseFailure = 10,
	/// An unexpected or unclassified failure occurred during avatar creation.
	UnknownFailure = 11,
	/// The creation token provided to
	/// `Class.AvatarCreationService:PromptCreateAvatarAsync()` was not valid or
	/// did not match the current experience.
	TokenInvalid = 12
};

/// Result codes returned by
/// `Class.AvatarCreationService:PromptCreateMakeupAsync()` that describe the
/// overall makeup look creation outcome.
/// Result codes returned by
/// `Class.AvatarCreationService:PromptCreateMakeupAsync()|PromptCreateMakeupAsync()`.
/// Use this enum for the overall creation outcome. For a
/// `Enum.PromptCreateOutfitResult.PartialSuccess|PartialSuccess` result, inspect
/// the method's per-asset results to determine which submitted assets were
/// created. Partial success does not guarantee that the makeup look itself was
/// created.
enum class PromptCreateOutfitResult : uint32_t {
	/// All submitted makeup assets and the makeup look were created successfully.
	Success = 1,
	/// At least one makeup asset was created, but one or more assets or the final
	/// makeup look composition did not succeed.
	PartialSuccess = 2,
	/// No makeup assets could be created, so the makeup look was not created.
	CreationFailure = 3,
	/// The player declined the makeup creation prompt.
	PermissionDenied = 4,
	/// The makeup creation prompt timed out before the player responded.
	Timeout = 5,
	/// The player did not respond to the makeup creation prompt.
	NoUserInput = 6,
	/// An unexpected or unclassified error prevented makeup look creation.
	UnknownFailure = 7,
	/// The makeup assets or creation tokens failed validation before upload.
	UGCValidationFailed = 8
};

/// Indicates how the player dismissed the experience details prompt shown by
/// `Class.TeleportService:PromptExperienceDetailsAsync()`.
/// Indicates how the player dismissed the experience details prompt displayed by
/// `Class.TeleportService:PromptExperienceDetailsAsync()`. The returned value
/// lets scripts distinguish between a player who closed the prompt without acting
/// and a player who initiated a teleport to the advertised experience.
enum class PromptExperienceDetailsResult : uint32_t {
	/// The player dismissed the experience details prompt without choosing to
	/// teleport (value `0`).
	PromptClosed = 0,
	/// The player clicked the **Join** button in the experience details prompt,
	/// initiating a teleport to the advertised experience (value `1`).
	TeleportAttempted = 1
};

/// Deprecated result enum for the `OpenPublishResultModal` event.
/// Deprecated result enum for the `OpenPublishResultModal` event. Use
/// `Enum.PromptCreatePlatformContentResult` instead.
/// 
/// `Enum.PromptCreateAssetResult` is a separate result enum returned by the
/// `OpenCreateResultModal` event.
enum class PromptPublishAssetResult : uint32_t {
	/// The asset was published successfully.
	Success = 1,
	/// The user explicitly denied the consent prompt required to publish the
	/// asset.
	PermissionDenied = 2,
	/// The publish flow timed out, typically because the user disconnected or
	/// left the experience during the consent prompt.
	Timeout = 3,
	/// The asset upload to the Roblox backend failed after consent was granted.
	UploadFailed = 4,
	/// The user did not grant or deny the consent prompt before the window
	/// expired.
	NoUserInput = 5,
	/// The publish failed for an unspecified or unexpected reason.
	UnknownFailure = 6
};

/// Indicates the validation state of a property as displayed in Roblox Studio's
/// Properties panel.
/// Indicates the validation state of a property as displayed in Roblox Studio's
/// Properties panel. This enum is returned by the `PropertyStatusStudio` property
/// on `Class.Instance` and by `GetOverrideStatus()` on `Class.MaterialService` to
/// communicate whether a property's current value is valid, has a recoverable
/// issue, or is in an error state.
enum class PropertyStatus : uint32_t {
	/// The property value is valid; no status indicator is shown in Studio.
	Ok = 0,
	/// The property value has a recoverable issue; Studio displays a warning
	/// indicator on the instance.
	Warning = 1,
	/// The property value is invalid and cannot be resolved; Studio displays an
	/// error indicator on the instance.
	Error = 2
};

/// Controls how a `Class.ProximityPrompt` competes with other prompts for screen
/// visibility.
/// Controls whether a `Class.ProximityPrompt` is always shown, shares a single
/// global display slot with all other prompts, or competes only with prompts
/// bound to the same input key. Set via the `Class.ProximityPrompt.Exclusivity`
/// property, which defaults to `Enum.ProximityPromptExclusivity.OnePerButton`.
enum class ProximityPromptExclusivity : uint32_t {
	/// One prompt will be shown per input `Enum.KeyCode`.
	OnePerButton = 0,
	/// Only one prompt will be shown with this setting.
	OneGlobally = 1,
	/// This prompt will always show when in range and visible.
	AlwaysShow = 2
};

/// Identifies the input method a player is using when a `Class.ProximityPrompt`
/// is shown.
/// `Enum.ProximityPromptInputType` is passed to
/// `Class.ProximityPrompt.PromptShown` and
/// `Class.ProximityPromptService.PromptShown` to indicate which input device the
/// player is using. `Class.ProximityPromptService` switches shown prompts when
/// the active input type changes so button hints match the device (keyboard,
/// gamepad, or touch).
enum class ProximityPromptInputType : uint32_t {
	/// The player is using keyboard and mouse input.
	Keyboard = 0,
	/// The player is using a gamepad controller.
	Gamepad = 1,
	/// The player is using a touch screen.
	Touch = 2
};

/// Specifies the visual style of a `Class.ProximityPrompt`.
/// Specifies the visual style used by a `Class.ProximityPrompt`. The default
/// value is `Enum.ProximityPromptStyle.Default`, which renders the built-in
/// Roblox CoreScript UI. Set `Class.ProximityPrompt.Style` to
/// `Enum.ProximityPromptStyle.Custom` to suppress the built-in UI and take full
/// control of prompt rendering by listening to
/// `Class.ProximityPromptService.PromptShown` and
/// `Class.ProximityPromptService.PromptHidden`.
enum class ProximityPromptStyle : uint32_t {
	/// Built-in Roblox CoreScript prompt UI.
	Default = 0,
	/// Suppresses the built-in prompt UI so you can render a custom prompt (see
	/// `Class.ProximityPrompt.Style`).
	Custom = 1
};

/// Specifies the type of purchase option in a bulk purchase prompt.
/// The `Enum.PurchaseOption` enum specifies the type of purchase option when
/// building the `PurchaseOptions` array for
/// `Class.MarketplaceService:PromptBulkPurchase()`.
/// 
/// Use `TimedOption` for timed option durations and `Permanent` for standard
/// full-price purchase. Only one entry is allowed in `PurchaseOptions`; providing
/// more than one throws an error.
/// 
/// Do not hardcode duration values when using `TimedOption`. Always retrieve
/// available durations from the backend APIs and pass them through, as they may
/// change at any time.
enum class PurchaseOption : uint32_t {
	/// A timed ownership option. The `Value` field specifies the duration in
	/// seconds.
	TimedOption = 1,
	/// A permanent ownership purchase option.
	Permanent = 2
};

/// Controls the rendering quality of the game.
/// Controls the rendering quality of the game. Higher levels correspond to higher
/// quality graphics.
/// 
/// As QualityLevel increases, Roblox rendering engine increases the rendering
/// distance, shading quality, apparent geometry and texture resolution, limits on
/// particles that are being rendered, fidelity of trail effects, post-effect
/// quality and more. On low quality levels some post effects may be completely
/// disabled and objects that are far away will not be rendered.
/// 
/// The specific effects of quality level on the individual elements of the scene
/// or individual rendering features are platform- and device- specific and can
/// not be relied upon.
enum class QualityLevel : uint32_t {
	/// The quality level of graphics is determined automatically depending on the
	/// client's setting for either game performance or graphic quality.
	Automatic = 0,
	/// Graphic quality level 1 - the lowest quality level.
	Level01 = 1,
	/// Graphic quality level 2.
	Level02 = 2,
	/// Graphic quality level 3.
	Level03 = 3,
	/// Graphic quality level 4.
	Level04 = 4,
	/// Graphic quality level 5.
	Level05 = 5,
	/// Graphic quality level 6.
	Level06 = 6,
	/// Graphic quality level 7.
	Level07 = 7,
	/// Graphic quality level 8.
	Level08 = 8,
	/// Graphic quality level 9.
	Level09 = 9,
	/// Graphic quality level 10.
	Level10 = 10,
	/// Graphic quality level 11.
	Level11 = 11,
	/// Graphic quality level 12.
	Level12 = 12,
	/// Graphic quality level 13.
	Level13 = 13,
	/// Graphic quality level 14.
	Level14 = 14,
	/// Graphic quality level 15.
	Level15 = 15,
	/// Graphic quality level 16.
	Level16 = 16,
	/// Graphic quality level 17.
	Level17 = 17,
	/// Graphic quality level 18.
	Level18 = 18,
	/// Graphic quality level 19.
	Level19 = 19,
	/// Graphic quality level 20.
	Level20 = 20,
	/// Graphic quality level 21, the highest quality level.
	Level21 = 21
};

/// Collision behavior type for a R15 character.
/// Internal enum used to save the collision behavior setting for R15 characters.
enum class R15CollisionType : uint32_t {
	/// Dynamically sized collision boxes based on mesh sizes.
	OuterBox = 0,
	/// Fixed size collision boxes, similar to the classic avatar collision.
	InnerBox = 1
};

/// Used in a `Datatype.RaycastParams` object to determine how its
/// `Datatype.RaycastParams.FilterDescendantsInstances|FilterDescendantsInstances`
/// list will be used.
enum class RaycastFilterType : uint32_t {
	/// Every `Class.BasePart` in the raycast operation will be considered
	/// **except** those that are descendants of objects in the filter list.
	Exclude = 0,
	/// Only `Class.BasePart|BaseParts` which are descendants of objects in the
	/// filter list will be considered in the raycast operation.
	Include = 1
};

/// Describes the outcome of a
/// `Class.CaptureService:ReadCapturesFromGalleryAsync()` call.
/// Represents the result of reading captures from a user's gallery.
enum class ReadCapturesFromGalleryResult : uint32_t {
	/// The read operation completed successfully and capture data has been
	/// returned.
	Success = 0,
	/// The read operation failed because the experience has not been granted
	/// permission to access the user's capture gallery.
	NeedPermission = 1
};

/// `ReceiptDecision` works with `Class.MarketplaceService` to indicate the
/// acknowledgement of receipts.
/// `ReceiptDecision` is the required return type for callbacks registered with
/// `Class.MarketplaceService:BindReceiptHandler()`. The value you return
/// determines whether the receipt is marked as complete or remains unresolved for
/// future processing.
enum class ReceiptDecision : uint32_t {
	/// The receipt has not been processed yet. Returning this value keeps the
	/// receipt unresolved so it will be redelivered to the user's handler later,
	/// either during their existing session or the next time they join a server
	/// if they have disconnected.
	NotProcessedYet = 0,
	/// The receipt has been processed and all benefits have been granted. The
	/// receipt is marked as complete and will not be delivered again.
	Processed = 1
};

/// `ReceiptType` is used to work with server-sided receipt processing.
/// `ReceiptType` works with `Class.MarketplaceService:BindReceiptHandler()` to
/// indicate the different type of receipts a developer can bind to for
/// processing. When you call
/// `Class.MarketplaceService:BindReceiptHandler()|BindReceiptHandler`, you pass a
/// `ReceiptType` to specify which kind of receipt your handler should process.
/// 
/// `DeveloperProduct` is used for developer product purchases and provides a
/// `BindReceiptHandler`-based alternative to the legacy
/// `Class.MarketplaceService.ProcessReceipt|ProcessReceipt` callback.
/// `RobuxTransferSender` and `RobuxTransferReceiver` are used for Robux
/// transfers, described below.
/// 
/// For Robux transfers initiated with
/// `Class.MarketplaceService:PromptRobuxTransferAsync()|PromptRobuxTransferAsync`,
/// two receipts are generated: one for the sender (`RobuxTransferSender`) and one
/// for the receiver (`RobuxTransferReceiver`). You should register handlers for
/// both types to fully process a transfer.
/// 
/// Transfer receipts are delivered to whichever server the user is currently in
/// once the transfer settles (the user does not need to rejoin). If the user is
/// offline when the transfer settles, the receipt is delivered the next time they
/// join a server. See
/// `Class.MarketplaceService:BindReceiptHandler()|BindReceiptHandler` for
/// details.
enum class ReceiptType : uint32_t {
	/// Used for processing receipts from developer product purchases made with
	/// `Class.MarketplaceService:PromptProductPurchase()|PromptProductPurchase`.
	/// The receipt includes `ProductId`, `CurrencyType`, and `CurrencySpent`
	/// fields. A handler bound for this type processes developer product receipts
	/// in place of the legacy
	/// `Class.MarketplaceService.ProcessReceipt|ProcessReceipt` callback;
	/// receipts with no matching bound handler fall through to `ProcessReceipt`.
	DeveloperProduct = 0,
	/// Used for processing receipts for the user who initiated a Robux transfer.
	/// The receipt's `PlayerId` is the sender's user ID and includes a
	/// `TransferRequestId` field. Delivered immediately if the transfer settles
	/// synchronously. If receiver approval is required, delivered to the server
	/// the sender is currently in once the receiver accepts, or on the sender's
	/// next session join if they are offline.
	RobuxTransferSender = 1,
	/// Used for processing receipts for the user who received Robux via a
	/// transfer. The receipt's `PlayerId` is the receiver's user ID and includes
	/// a `TransferRequestId` field. Delivered to the server the receiver is
	/// currently in once the transfer settles, or on their next session join if
	/// they are offline.
	RobuxTransferReceiver = 2
};

/// Describes the type of action a user took on a recommended item, used when
/// logging action events via `Class.RecommendationService:LogActionEvent()`.
/// Action a user performed on a recommended item. Pass as the first argument to
/// `Class.RecommendationService:LogActionEvent()` to record interaction signals
/// used for personalization.
enum class RecommendationActionType : uint32_t {
	/// The user added a reaction to the item, such as a "like".
	AddReaction = 0,
	/// The user removed a reaction from the item.
	RemoveReaction = 1,
	/// The user shared the item.
	Share = 2,
	/// The user created an abuse report of the item.
	Report = 3,
	/// The user commented on the item.
	Comment = 4,
	/// The user joined an experience through the item, or played a mini-game
	/// associated with the item.
	Play = 5,
	/// The user made a purchase from the item.
	Purchase = 6
};

/// Specifies the outcome of rendering a recommended item, passed to
/// `Class.RecommendationService:LogImpressionEvent()` to indicate whether the
/// item was shown to the user.
/// `RecommendationImpressionType` is used as the `impressionType` argument to
/// `Class.RecommendationService:LogImpressionEvent()`. It tells the Roblox
/// recommendation backend whether a given item was successfully rendered on the
/// client (`Enum.RecommendationImpressionType.View`) or whether a rendering error
/// prevented the user from seeing it
/// (`Enum.RecommendationImpressionType.NotViewable`). The backend uses
/// `NotViewable` as a negative signal when ranking future recommendations.
enum class RecommendationImpressionType : uint32_t {
	/// A complete view of the item.
	View = 0,
	/// The item has failed to render.
	NotViewable = 1
};

/// Describes the content type of an item registered with
/// `Class.RecommendationService`.
/// This enum describes the content type of the recommendation item. It is
/// designed to be generic.
enum class RecommendationItemContentType : uint32_t {
	/// The item is static, such as an image.
	Static = 0,
	/// The item is dynamic; for example, it is a video.
	Dynamic = 1,
	/// The item is interactive, such as a 3D model or a mini-game.
	Interactive = 2
};

/// Controls whether a registered recommendation item is publicly discoverable or
/// restricted to private access.
/// Controls whether a recommendation item registered via
/// `Class.RecommendationService:RegisterItemAsync()` or updated via
/// `Class.RecommendationService:UpdateItemAsync()` is publicly discoverable by
/// the recommendation system or kept private. Pass the desired value in the
/// `Visibility` field of the request dictionary.
enum class RecommendationItemVisibility : uint32_t {
	/// The recommendation item is not surfaced to other players by the
	/// recommendation system.
	Private = 0,
	/// The recommendation item is discoverable and may be surfaced to other
	/// players by the recommendation system.
	Public = 1
};

/// Identifies the kind of entity that a preference signal targets when logged via
/// `Class.RecommendationService:LogPreferenceEvent()|LogPreferenceEvent()`.
/// The kind of entity a preference signal targets when logged via
/// `Class.RecommendationService.LogPreferenceEvent|LogPreferenceEvent`.
/// Determines how the `targetId` parameter is interpreted.
enum class RecommendationPreferenceTargetType : uint32_t {
	/// The target is another Roblox user. The `targetId` is the user key.
	User = 0,
	/// The target is a universe. The `targetId` is the universe ID as a string.
	Universe = 1,
	/// The target is a custom content tag. The `targetId` is the tag string.
	CustomTag = 2
};

/// Identifies the type of preference action (follow, unfollow, mute, or unmute)
/// passed to
/// `Class.RecommendationService:LogPreferenceEvent()|LogPreferenceEvent()`.
/// The type of preference signal logged via
/// `Class.RecommendationService.LogPreferenceEvent|LogPreferenceEvent`.
/// Preference signals capture follow, unfollow, mute, and unmute actions toward
/// another user, a universe, or a custom content tag, and are used by the
/// recommendation engine to personalize future results.
enum class RecommendationPreferenceType : uint32_t {
	/// The user started following the target.
	AddFollow = 0,
	/// The user stopped following the target.
	RemoveFollow = 1,
	/// The user muted the target.
	AddMute = 2,
	/// The user unmuted a previously muted target.
	RemoveMute = 3
};

/// Controls whether the server rejects client attempts to delete player
/// characters.
/// Determines whether the server rejects client replication requests that would
/// delete player character models from the workspace. This enum is used by
/// `Class.Workspace.RejectCharacterDeletions`.
enum class RejectCharacterDeletions : uint32_t {
	/// Uses the engine-default behavior (currently equivalent to `Enabled`).
	Default = 0,
	/// The server does not reject character deletion requests from clients.
	Disabled = 1,
	/// The server rejects client attempts to delete player characters.
	Enabled = 2
};

/// Determines the level of detail that solid modeled and mesh parts will be shown
/// in.
/// This enum determines the level of detail that
/// [meshes](https://create.roblox.com/docs/parts/meshes) and
/// [solid modeled](https://create.roblox.com/docs/parts/solid-modeling) parts will be shown in. The
/// default is **Automatic**, meaning the object's detail is based on its distance
/// from the camera as outlined in the following table.
/// 
/// <table>
///     <thead>
///         <tr>
///             <th>Distance From Camera</th>
///             <th>Render Fidelity</th>
///         </tr>
///     </thead>
///     <tbody>
///         <tr>
///             <td>Less than 250 studs</td>
///             <td>Highest</td>
///         </tr>
///         <tr>
///             <td>250 to 500 studs</td>
///             <td>Medium</td>
///         </tr>
///         <tr>
///             <td>500 or more studs</td>
///             <td>Lowest</td>
///         </tr>
///     </tbody>
/// </table>
enum class RenderFidelity : uint32_t {
	/// Object's level of detail is dynamically controlled by its distance from
	/// the camera (see table above).
	Automatic = 0,
	/// Object is rendered in the highest fidelity regardless of its distance from
	/// the camera.
	Precise = 1,
	/// Push performance as much as possible, trying to maintain quality if
	/// possible, and discarding appearance if that's necessary to reach
	/// performance. This means that the performance will always be excellent, but
	/// mesh visuals may be affected negatively.
	Performance = 2
};

/// A list of standard reserved values in BindToRenderStep.
/// A list of standard reserved values in BindToRenderStep.
/// 
/// See `Class.RunService:BindToRenderStep()` for the proper usage, as the enum
/// itself isn't used.
enum class RenderPriority : uint32_t {
	/// The lowest reserved priority level; callbacks run before all other
	/// standard priorities.
	First = 0,
	/// Runs after `First`; intended for input-processing callbacks.
	Input = 100,
	/// Runs after `Input`; intended for camera-update callbacks.
	Camera = 200,
	/// Runs after `Camera`; intended for character-response callbacks.
	Character = 300,
	/// The highest reserved priority level; callbacks run after all other
	/// standard priorities.
	Last = 2000
};

/// Controls rendering cache optimization behavior.
/// Determines whether the renderer caches per-object rendering state to avoid
/// redundant per-frame work. This enum is used by
/// `Class.Workspace.RenderingCacheOptimizations`.
enum class RenderingCacheOptimizationMode : uint32_t {
	/// Uses the engine-default rendering cache state.
	Default = 0,
	/// Rendering cache optimizations are disabled.
	Disabled = 1,
	/// Rendering cache optimizations are enabled.
	Enabled = 2
};

/// Controls how `Instance:Destroy()` calls are replicated from server to clients.
/// Determines the replication behavior the server uses when `Instance:Destroy()`
/// is called. This enum is used by
/// `Class.Workspace.ReplicateInstanceDestroySetting`.
enum class ReplicateInstanceDestroySetting : uint32_t {
	/// Uses the engine-default instance destroy replication behavior.
	Default = 0,
	/// Uses legacy instance destroy replication behavior.
	Disabled = 1,
	/// Uses improved instance destroy replication behavior.
	Enabled = 2
};

/// Determines the image filtering used.
enum class ResamplerMode : uint32_t {
	/// Bilinear filtering of the four near pixels in the image.
	Default = 0,
	/// Nearest neighbor filtering of the closest pixel in the image.
	Pixelated = 1
};

/// Identifies the built-in reserved role assigned to a `Class.Highlight` via its
/// `ReservedId` property.
/// `ReservedHighlightId` enumerates the system-reserved roles used to distinguish
/// Studio selection, hover, active (last-selected), and CSG visualization
/// `Class.Highlight` instances from ordinary developer-created ones. The
/// `ReservedId` property (accessible only at `RobloxScript` security level and
/// hidden from the Properties panel) stores this value. Its default is
/// `Enum.ReservedHighlightId.Standard`, which marks the instance as a normal,
/// non-reserved highlight available for general scripted use.
enum class ReservedHighlightId : uint32_t {
	/// Marks a `Class.Highlight` as a standard, non-reserved instance not tied to
	/// any built-in system state.
	Standard = 0,
	/// Marks a `Class.Highlight` as the last-selected object in Studio.
	Active = 131072,
	/// Marks a `Class.Highlight` as the hover-state indicator, applied to an
	/// object currently under the mouse cursor.
	Hover = 262144,
	/// Marks a `Class.Highlight` as the selection-state indicator, applied to a
	/// selected object in Studio.
	Selection = 524288,
	/// Marks a `Class.Highlight` used for CSG negated-part visualization in
	/// Roblox Studio.
	NegatedPart = 1048576
};

/// Determines how the initial joint rest pose is established when importing a
/// rigged 3D model.
/// Controls the source from which the mesh importer derives the initial (rest)
/// pose for all joints when building a rig from a 3D file.
enum class RestPose : uint32_t {
	/// Uses the first animation clip found in the source file to define the
	/// initial joint rest pose on import.
	Default = 0,
	/// Resets all joint rotations to zero so that the imported rig starts from an
	/// identity rest pose.
	RotationsReset = 1,
	/// Uses a specific animation clip, identified by its index in the file, to
	/// set the initial joint rest pose on import.
	Custom = 2
};

/// The ReverbType Enum allows you to make audio in your game sound different,
/// depending on what "area" the sounds are in.
/// The ReverbType Enum allows you to make audio in your game sound different,
/// depending on what "area" the sounds are in.
/// 
/// Note that some of these do not appear to have any effect on the sound.
enum class ReverbType : uint32_t {
	/// No sound reverb. Audio is not changed from default.
	NoReverb = 0,
	/// Sound reverb is changed to a generic reverb effect.
	GenericReverb = 1,
	/// Sound reverb is changed to sound like the player is in a padded cell.
	PaddedCell = 2,
	/// Sound reverb is changed to sound like the player is in a room.
	Room = 3,
	/// Sound reverb is changed to sound like the player is in a bathroom.
	Bathroom = 4,
	/// Sound reverb is changed to sound like the player is in a living room.
	LivingRoom = 5,
	/// Sound reverb is changed to sound like the player is in a stone room.
	StoneRoom = 6,
	/// Sound reverb is changed to sound like the player is in an auditorium.
	Auditorium = 7,
	/// Sound reverb is changed to sound like the player is in a concert hall.
	ConcertHall = 8,
	/// Sound reverb is changed to sound like the player is in a cave.
	Cave = 9,
	/// Sound reverb is changed to sound like the player is in an arena.
	Arena = 10,
	/// Sound reverb is changed to sound like the player is in a hangar.
	Hangar = 11,
	/// Sound reverb is changed to sound like the player is in a carpeted hallway.
	CarpettedHallway = 12,
	/// Sound reverb is changed to sound like the player is in a hallway.
	Hallway = 13,
	/// Sound reverb is changed to sound like the player is in a stone corridor.
	StoneCorridor = 14,
	/// Sound reverb is changed to sound like the player is in an alley.
	Alley = 15,
	/// Sound reverb is changed to sound like the player is in a forest.
	Forest = 16,
	/// Sound reverb is changed to sound like the player is in a city.
	City = 17,
	/// Sound reverb is changed to sound like the player is in the mountains.
	Mountains = 18,
	/// Sound reverb is changed to sound like the player is in a quarry.
	Quarry = 19,
	/// Sound reverb is changed to sound like the player is an open plain.
	Plain = 20,
	/// Sound reverb is changed to sound like the player is in a parking lot.
	ParkingLot = 21,
	/// Sound reverb is changed to sound like the player is in a sewer pipe.
	SewerPipe = 22,
	/// Sound reverb is changed to sound like the player is underwater.
	UnderWater = 23
};

/// Identifies a Studio ribbon toolbar tool, used with
/// `Class.Plugin:GetSelectedRibbonTool()` and `Class.Plugin:SelectRibbonTool()`.
/// `Enum.RibbonTool` represents the set of built-in tools available on the Roblox
/// Studio ribbon toolbar. Values from this enum are returned by
/// `Class.Plugin:GetSelectedRibbonTool()` to identify which tool is currently
/// active, and passed to `Class.Plugin:SelectRibbonTool()` to programmatically
/// activate a tool from a plugin script.
enum class RibbonTool : uint32_t {
	/// The **Select** tool, which selects objects in the viewport.
	Select = 0,
	/// The **Scale** tool, which resizes selected parts along their axes.
	Scale = 1,
	/// The **Rotate** tool, which rotates selected parts around the three primary
	/// axes.
	Rotate = 2,
	/// The **Move** tool, which translates selected parts along the three primary
	/// axes.
	Move = 3,
	/// The **Transform** tool, which provides combined move, scale, and rotate
	/// handles in a single gizmo.
	Transform = 4,
	/// The **Color** tool, which opens the color picker to paint the color of
	/// selected parts.
	ColorPicker = 5,
	/// Deprecated ribbon **Color**/**Material** picker tool; use **Material
	/// Manager** instead.
	/// @deprecated Deprecated in favor of Material Manager. Don't use.
	MaterialPicker = 6,
	/// The **Group** tool, which groups the selected objects into a
	/// `Class.Model`.
	Group = 7,
	/// The **Ungroup** tool, which dissolves a selected Model and promotes its
	/// children to the parent container.
	Ungroup = 8,
	/// Represents no ribbon tool being active.
	None = 9,
	/// The **Edit Pivot** tool, which repositions the pivot point of selected
	/// parts or models.
	PivotEditor = 10
};

/// How `Class.Sound|Sounds` parented to a `Class.BasePart` or `Class.Attachment`
/// attenuate (fade out) as the distance between the listener and the parent
/// increases.
/// Enum which determines how `Class.Sound|Sounds` parented to a `Class.BasePart`
/// or `Class.Attachment` attenuate (fade out) as the distance between the
/// listener and the parent increases.
enum class RollOffMode : uint32_t {
	/// Volume attenuates from `Class.Sound.RollOffMinDistance` in an inverse
	/// manner, mirroring how sounds attenuate in the real world. This is done
	/// through `Class.Sound.RollOffMinDistance`/`distance`, where `distance` is
	/// the `Datatype.Vector3.Magnitude` between the audio source and the audio
	/// listener.
	Inverse = 0,
	/// Volume attenuates between `Class.Sound.RollOffMinDistance` and
	/// `Class.Sound.RollOffMaxDistance` with a linear relationship. This is done
	/// through
	/// (`Class.Sound.RollOffMaxDistance`/`distance`)/(`Class.Sound.RollOffMaxDistance`-`Class.Sound.RollOffMinDistance`),
	/// where `distance` is the `Datatype.Vector3.Magnitude` between the audio
	/// source and the audio listener.
	Linear = 1,
	/// Volume attenuates between `Class.Sound.RollOffMinDistance` and
	/// `Class.Sound.RollOffMaxDistance` with a linear squared relationship. This
	/// is done through squaring `Linear`.
	LinearSquare = 2,
	/// A hybrid model which follows the `Inverse` model when close to
	/// `Class.Sound.RollOffMinDistance` and the `LinearSquare` model when close
	/// to `Class.Sound.RollOffMaxDistance`. This is done by taking the lesser of
	/// `Inverse` and `LinearSquare`.
	InverseTapered = 3
};

/// A three-phase rollout state used to opt in or out of engine features.
/// Several `Class.Workspace` properties use `RolloutState` to support a
/// three-phase rollout pattern, where a feature is initially opt-in (`Default`
/// equals disabled), then opt-out (`Default` equals enabled), and finally always
/// on. `Default` always tracks the current engine-wide phase.
enum class RolloutState : uint32_t {
	/// Uses the engine-wide rollout default, which changes as the feature
	/// progresses through its rollout phases.
	Default = 0,
	/// Opts out of the feature regardless of the engine-wide rollout phase.
	Disabled = 1,
	/// Opts in to the feature regardless of the engine-wide rollout phase.
	Enabled = 2
};

/// The order of rotation axes used for Euler angles encoding of rotations.
/// Euler angles encode a rotation in 3D space via a sequence of three rotations
/// along the X, Y, and Z axes. The `RotationOrder` enum specifies the order in
/// which the engine performs these rotations.
/// 
/// To help visualize the many rotation orders, you can test them manually in
/// Studio with the [Rotate](../../../parts#rotate) tool or by inserting
/// `Library.task.wait()` statements between individual rotations of a cube with a
/// unique face:
/// 
/// ```lua
/// local cube = Instance.new("Part")
/// cube.Shape = Enum.PartType.Block
/// local rx, ry, rz = math.rad(90), math.rad(90), math.rad(90)
/// 
/// task.wait(5)
/// cube.CFrame *= CFrame.fromEulerAngles(rx, 0, 0)  -- X
/// task.wait(5)
/// cube.CFrame *= CFrame.fromEulerAngles(0, ry, 0)  -- Y
/// task.wait(5)
/// cube.CFrame *= CFrame.fromEulerAngles(0, 0, rz)  -- Z
/// ```
/// 
/// An equivalent operation is:
/// 
/// ```lua
/// local cube = Instance.new("Part")
/// cube.Shape = Enum.PartType.Block
/// local rx, ry, rz = math.rad(90), math.rad(90), math.rad(90)
/// 
/// cube.CFrame = CFrame.fromEulerAngles(rx, ry, rz, Enum.RotationOrder.XYZ)
/// ```
enum class RotationOrder : uint32_t {
	/// X, Y, Z order.
	XYZ = 0,
	/// X, Z, Y order.
	XZY = 1,
	/// Y, Z, X order.
	YZX = 2,
	/// Y, X, Z order.
	YXZ = 3,
	/// Z, X, Y order.
	ZXY = 4,
	/// Z, Y, X order.
	ZYX = 5
};

/// Controls how a player character's body rotation is determined — relative to
/// the camera direction or relative to the movement direction.
/// `RotationType` is used by `Class.UserGameSettings.RotationType` to specify how
/// the local player's character orients its body. With
/// `Enum.RotationType.MovementRelative` (the default), the character turns to
/// face whichever direction it is moving. With
/// `Enum.RotationType.CameraRelative`, the character's body continuously aligns
/// with the camera's look direction, enabling first-person-style aiming where the
/// character faces wherever the player is looking regardless of movement
/// direction.
enum class RotationType : uint32_t {
	/// The character's body rotation follows the direction of movement.
	MovementRelative = 0,
	/// The character's body rotation continuously follows the camera's look
	/// direction.
	CameraRelative = 1
};

/// Indicates a player's RSVP response to a Roblox experience event.
/// Indicates a player's RSVP response to a Roblox experience event.
/// `Class.SocialService:GetEventRsvpStatusAsync()` returns a value of this enum
/// to reflect whether a player has responded to an event invitation, and
/// `PromptRsvpToEventCompleted` passes both the new and previous status as
/// `RsvpStatus` values when a player finishes interacting with the RSVP prompt.
enum class RsvpStatus : uint32_t {
	/// The player has not yet responded to the event invitation; this is the
	/// default RSVP state.
	None = 0,
	/// The player has accepted the event invitation and confirmed they are going.
	Going = 1,
	/// The player has declined the event invitation and indicated they are not
	/// going.
	NotGoing = 2
};

/// Controls whether right-to-left text rendering is enabled for the experience.
/// Determines how `Class.StarterGui` handles bidirectional text layout across the
/// experience. Right-to-left (RTL) support allows UI text to flow from right to
/// left, which is the natural reading direction for scripts such as Arabic and
/// Hebrew. When set to `Enum.RtlTextSupport.Default` or
/// `Enum.RtlTextSupport.Enabled`, text-bearing UI elements correctly display
/// these scripts, including proper text alignment and character ordering. Setting
/// the property to `Enum.RtlTextSupport.Disabled` forces all text to render
/// left-to-right regardless of the script's natural direction.
/// 
/// The `Class.StarterGui.RtlTextSupport` property defaults to
/// `Enum.RtlTextSupport.Default`.
enum class RtlTextSupport : uint32_t {
	/// Enables RTL text support using the engine's default behavior.
	Default = 0,
	/// Disables RTL text support, forcing all text to render left-to-right.
	Disabled = 1,
	/// Explicitly enables RTL text support for right-to-left scripts such as
	/// Arabic and Hebrew.
	Enabled = 2
};

/// Controls the execution context of a `Class.Script`, determining whether it
/// runs as server, client, plugin, or legacy container-based code.
/// The `RunContext` enum is used with the `Class.BaseScript.RunContext` property
/// to specify the context in which a `Class.Script` executes. The default value
/// is `Enum.RunContext.Legacy`, which preserves the original container-based
/// behavior where a `Class.Script` runs on the server and a `Class.LocalScript`
/// runs on the client depending on its placement in the instance hierarchy.
/// 
/// Setting a non-`Legacy` value allows a `Class.Script` to run explicitly on the
/// server, client, or as plugin code, regardless of container placement.
/// `Class.LocalScript` objects cannot use this property — only `Class.Script`
/// objects support non-`Legacy` run contexts.
/// 
/// Changing this property while the script is running terminates any active
/// threads and restarts the script under the new context if conditions permit.
enum class RunContext : uint32_t {
	/// Runs with legacy container-based behavior that depends on the script type,
	/// such as `Class.LocalScript` or `Class.Script`.
	Legacy = 0,
	/// Runs on the server.
	Server = 1,
	/// Runs on the client.
	Client = 2,
	/// Runs as a descendant of `Class.Plugin` instances.
	Plugin = 3
};

/// Specifies the current run state of Roblox Studio's simulation.
/// Represents the simulation state exposed by `Class.RunService.RunState`.
enum class RunState : uint32_t {
	/// The simulation is stopped.
	Stopped = 0,
	/// The simulation is running.
	Running = 1,
	/// The simulation is paused.
	Paused = 2
};

/// Controls how `Class.ChangeHistoryService` records and handles undo history
/// during a Studio playtest session.
/// `RuntimeUndoBehavior` is the type of the
/// `ChangeHistoryService.RuntimeUndoBehavior` property and determines what Studio
/// does when a waypoint is requested (via
/// `Class.ChangeHistoryService:SetWaypoint()` or the recording API) while the
/// game is in the run state (i.e., during a playtest). The three values offer
/// different trade-offs between undo granularity and physics-change handling.
/// 
/// The default behavior is `Enum.RuntimeUndoBehavior.Aggregate`: waypoints are
/// suppressed during the run, all runtime edits accumulate into a single
/// waypoint, and they are all reverted at once when the playtest stops or resets.
enum class RuntimeUndoBehavior : uint32_t {
	/// Rejects waypoint requests during a run session; all runtime changes
	/// accumulate into a single waypoint that is reverted together when the
	/// session stops or resets.
	Aggregate = 0,
	/// Accepts waypoint requests during a run session and captures a snapshot of
	/// each instance's position and velocity at every waypoint boundary so that
	/// physics state can be fully restored on undo.
	Snapshot = 1,
	/// Accepts waypoint requests during a run session but excludes unsolicited
	/// physics changes (position and velocity drift from simulation) from the
	/// recorded history.
	Hybrid = 2
};

/// Describes how descendants of a `Class.ScreenGui` adapt to screens with
/// cutouts.
/// This enum describes the automatic compatibility transformations that apply to
/// descendant "fullscreen" `Class.GuiObject|GuiObjects` of a `Class.ScreenGui` on
/// displays with screen cutouts.
enum class SafeAreaCompatibility : uint32_t {
	/// Do not apply compatibility transformations to any descendants of the
	/// `Class.ScreenGui`.
	None = 0,
	/// If the total area of any descendant `Class.GuiObject` within the
	/// `Class.ScreenGui` (including any applied border or `Class.UIStroke`)
	/// covers the device's safe area both horizontally and vertically, its
	/// background area will be expanded to cover the fullscreen area. This
	/// expansion does **not** affect the size or position of the descendant's
	/// **content**, except in the case of `Class.ImageLabel`,
	/// `Class.ImageButton`, or `Class.VideoFrame` where the image/video is
	/// considered part of the background and will be expanded to fullscreen.
	/// 
	/// Note that this option is intended to automatically improve the appearance
	/// of UI that was authored for screens without any cutouts. However, it's
	/// recommended that you avoid fullscreen extensions for new work; instead,
	/// use the `Class.ScreenGui.ScreenInsets|ScreenInsets` property to specify
	/// which insets should be respected for different
	/// `Class.ScreenGui|ScreenGuis`.
	FullscreenExtension = 1
};

/// Filters catalog search results by sales type.
/// The `Enum.SalesTypeFilter` enum is used with
/// `Datatype.CatalogSearchParams.SalesTypeFilter` to filter catalog search
/// results by their sales type when calling
/// `Class.AvatarEditorService:SearchCatalogAsync()`.
enum class SalesTypeFilter : uint32_t {
	/// Returns all items regardless of sales type.
	All = 1,
	/// Returns only collectible items (Limited and Limited Unique).
	Collectibles = 2,
	/// Returns only items with Premium pricing.
	Premium = 3,
	/// Returns only items that have timed options available.
	TimedOptions = 4
};

/// Controls whether sandboxed instance mode (script capabilities) is enabled.
/// Determines whether sandboxed instance mode, which lets you use script
/// capabilities, is active. This enum is used by
/// `Class.Workspace.SandboxedInstanceMode`.
enum class SandboxedInstanceMode : uint32_t {
	/// Uses the engine-default sandboxed instance state.
	Default = 0,
	/// Sandboxed instance mode is enabled.
	Experimental = 1
};

/// Used by `Class.DataModel.SavePlace` to determine the type of save operation
/// This enum determines which aspects of the current place are saved, based on
/// the following options.
/// @deprecated This deprecated enum is used by `Class.DataModel.SavePlace` which has also been deprecated. Neither should be used in new work.
enum class SaveFilter : uint32_t {
	/// Saves only the world-related data.
	SaveWorld = 0,
	/// Saves only the game-related data.
	SaveGame = 1,
	/// Saves all data, including both world and game-related information.
	SaveAll = 2
};

/// Represents the user's saved graphics quality preference, stored in
/// `Class.UserGameSettings.SavedQualityLevel`.
/// Represents the user's saved graphics quality preference, stored in
/// `Class.UserGameSettings.SavedQualityLevel`. When set to
/// `Enum.SavedQualitySetting.Automatic`, the engine selects quality automatically
/// based on device performance; otherwise the chosen level (1–10) is persisted
/// across sessions and applied as the initial quality setting on next launch.
enum class SavedQualitySetting : uint32_t {
	/// Graphics quality is determined automatically based on device performance.
	Automatic = 0,
	/// Saved graphics quality level 1 — the lowest explicit quality setting.
	QualityLevel1 = 1,
	/// Saved graphics quality level 2.
	QualityLevel2 = 2,
	/// Saved graphics quality level 3.
	QualityLevel3 = 3,
	/// Saved graphics quality level 4.
	QualityLevel4 = 4,
	/// Saved graphics quality level 5.
	QualityLevel5 = 5,
	/// Saved graphics quality level 6.
	QualityLevel6 = 6,
	/// Saved graphics quality level 7.
	QualityLevel7 = 7,
	/// Saved graphics quality level 8.
	QualityLevel8 = 8,
	/// Saved graphics quality level 9.
	QualityLevel9 = 9,
	/// Saved graphics quality level 10 — the highest explicit quality setting.
	QualityLevel10 = 10
};

/// Determines how an image (of a `Class.ImageLabel` or `Class.ImageButton`) is
/// scaled.
/// Controls the method by which an image is scaled to fill a `Class.ImageLabel`,
/// `Class.ImageButton`, or `Class.VideoDisplay` element. When the source image's
/// dimensions differ from the element's rendered size, each `ScaleType` value
/// determines whether the image is stretched uniformly to fill, tiled in a
/// repeating grid, cropped to cover the element, letterboxed to fit without
/// cropping, or divided into independently scalable 9-slice regions that preserve
/// border details at any element size.
enum class ScaleType : uint32_t {
	/// The image is stretched to fit within the element.
	Stretch = 0,
	/// 9-Slice scaling: slice the image into 9 regions and apply different
	/// scaling rules to each region. The slice boundaries are determined by
	/// `Class.ImageLabel.SliceCenter` or `Class.ImageButton.SliceCenter`. See
	/// [UI 9-Slice Design](https://create.roblox.com/docs/ui/9-slice) for more information.
	Slice = 1,
	/// The image is tiled to fit within the element. For example, if the element
	/// is twice the X dimension of the image, the image will appear twice (2
	/// tiles).
	Tile = 2,
	/// The image is scaled fit within the element X or Y dimension (whichever
	/// fits first).
	Fit = 3,
	/// The image is cropped to fit within the element.
	Crop = 4
};

/// Indicates the outcome of an `ExperienceAuthService` scope-authorization
/// request.
/// Returned by an `ExperienceAuthService` scope-authorization callback to
/// indicate whether the player granted, denied, or failed to complete a
/// permission-consent flow. Callers such as `Class.AssetService` and
/// `Class.AvatarCreationService` inspect this value to decide whether to proceed
/// with the authorized action or surface an appropriate error to the developer.
enum class ScopeCheckResult : uint32_t {
	/// The player accepted the authorization prompt and a valid token was issued
	/// for the requested scopes.
	ConsentAccepted = 0,
	/// The requested scopes are not recognized or are not permitted for the
	/// calling context.
	InvalidScopes = 1,
	/// The scope-check request exceeded the configured timeout period before the
	/// player responded.
	Timeout = 2,
	/// The authorization prompt was dismissed without any explicit player action,
	/// such as when the player disconnects or the UI is closed without a
	/// response.
	NoUserInput = 3,
	/// The Roblox backend returned an error or unexpected HTTP status when
	/// exchanging the consent grant for an authorization token.
	BackendError = 4,
	/// An unexpected error occurred that is not covered by a more specific result
	/// code.
	UnexpectedError = 5,
	/// One or more arguments passed to the scope-check call were invalid, such as
	/// an empty scope list, a null player instance, or a player who is no longer
	/// in the experience.
	InvalidArgument = 6,
	/// The player explicitly declined the authorization prompt.
	ConsentDenied = 7
};

/// Insets associated with various screen safe areas.
/// This enum specifies screen edge insets that are associated with a particular
/// screen safe area. The insets are relative to the **fullscreen area**, meaning
/// the rectangular region that encompasses all visible pixels on the screen.
/// 
/// <img src="../../../assets/engine-api/enums/ScreenInsets/Inset-Regions-All.png" width="840" alt="Mobile device screen showing inset regions." />
enum class ScreenInsets : uint32_t {
	/// No insets are added to the fullscreen area. This mode may result in UI
	/// that is obscured or completely hidden by device notches and cutouts, so
	/// you should only use it for a `Class.ScreenGui` that contains
	/// non‑interactive content like background images.
	None = 0,
	/// Device safe area insets are added to the fullscreen area. The resulting
	/// area is guaranteed to not be occluded by any **device** screen cutouts
	/// such as the camera notch, although no inset is added for Roblox core UI
	/// elements like the top bar buttons. As a result, it's recommended that you
	/// use `CoreUISafeInsets` for a `Class.ScreenGui` whose contents should
	/// remain unobscured by both device cutouts **and** core screen elements.
	DeviceSafeInsets = 1,
	/// Core UI insets are added to the `DeviceSafeInsets` area, resulting in an
	/// area guaranteed to be unobscured by both device screen cutouts and Roblox
	/// core UI elements like the top bar buttons. This mode is recommended for
	/// any `Class.ScreenGui` that contains interactive and/or important UI
	/// elements such as buttons and status messages.
	CoreUISafeInsets = 2,
	/// Top bar safe area insets are added to the `DeviceSafeInsets` area,
	/// resulting in an area guaranteed to be unobscured by both device screen
	/// cutouts and Roblox core UI elements like the experience controls. Unlike
	/// `CoreUISafeInsets`, this area's position and size is dynamic and is
	/// limited to the space available within the top bar area itself, outside of
	/// `CoreUISafeInsets`. See the `Class.GuiService.TopbarInset` property which
	/// represents the absolute size and position of the unobstructed area within
	/// the top bar space.
	TopbarSafeInsets = 3
};

/// The preference of in-game screen orientation on hand-held devices.
/// Indicates what orientation the game prefers to be played on mobile devices.
enum class ScreenOrientation : uint32_t {
	/// A preference where the game is displayed landscape (horizontally) with the
	/// bottom of the device on the left side of the screen.
	LandscapeLeft = 0,
	/// A preference where the game is displayed landscape (horizontally) with the
	/// bottom of the device on the right side of the screen.
	LandscapeRight = 1,
	/// A preference where the game is displayed landscape (horizontally) with the
	/// bottom of the device on the left of right side of the screen depending on
	/// the device's orientation (the sensor determines which side allows for the
	/// game to be displayed right-side-up).
	LandscapeSensor = 2,
	/// A preference where the game is displayed portrait (vertically) with the
	/// bottom of the device on the bottom of the screen.
	Portrait = 3,
	/// A preference where the game is displayed depending on the best match to
	/// the device's current orientation - either landscape (left/right) or
	/// portrait.
	Sensor = 4
};

/// Describes the result of a screenshot capture initiated by
/// `Class.CaptureService:TakeScreenshotCaptureAsync()`.
/// The ScreenshotCaptureResult enum describes the result of a screenshot capture
/// initiated through `Class.CaptureService:TakeScreenshotCaptureAsync()`. It is
/// passed as the first argument to the `onCaptureReady` callback.
enum class ScreenshotCaptureResult : uint32_t {
	/// The screenshot capture completed successfully.
	Success = 0,
	/// The screenshot capture failed due to an unspecified error.
	OtherError = 1,
	/// The device does not support screenshot captures.
	NoDeviceSupport = 2,
	/// The device does not have enough storage space to save the screenshot
	/// capture.
	NoSpaceOnDevice = 3
};

/// Describes why the debugger paused execution.
/// Passed in the `Datatype.ScriptDebugStopped` payload to the
/// `Class.ScriptDebuggerService.OnStopped` callback, indicating what triggered
/// the pause.
enum class ScriptStoppedReason : uint32_t {
	/// Execution stopped because a user-defined breakpoint was hit.
	Breakpoint = 0,
	/// Execution stopped because an exception was thrown (governed by the current
	/// `Enum.DebugBreakModeType`).
	Exception = 1,
	/// Execution stopped because `Class.ScriptDebuggerService:Pause()` was
	/// called.
	Pause = 2,
	/// Execution stopped after completing a step operation.
	Step = 3,
	/// Execution stopped at a script's entry point.
	Entry = 4
};

/// Indicates the scope category of a variable returned by the debugger.
/// Used in `Datatype.ScriptVariable` to classify the scope of a variable returned
/// by `Class.ScriptDebuggerService:GetRootVariables()` or
/// `Class.ScriptDebuggerService:GetVariables()`. Children of a variable inherit
/// the parent's scope.
enum class ScriptVariableScope : uint32_t {
	/// A local variable declared in the current function scope.
	Local = 0,
	/// A variable captured from an enclosing function scope.
	Upvalue = 1,
	/// A global variable.
	Global = 2
};

/// This enum is used with `Class.ScrollingFrame.HorizontalScrollBarInset` and
/// `Class.ScrollingFrame.VerticalScrollBarInset` to indicate whether the canvas
/// should be inset by
/// `Class.ScrollingFrame.ScrollBarThickness|ScrollBarThickness` for the
/// respective scroll bar.
enum class ScrollBarInset : uint32_t {
	/// The canvas will never be inset for the respective scroll bar.
	None = 0,
	/// The canvas will only be inset if the respective scroll bar is showing.
	ScrollBar = 1,
	/// The canvas will always be inset for the respective scroll bar, regardless
	/// of whether that scroll bar is showing.
	Always = 2
};

/// This enum is used by `Class.ScrollingFrame.ScrollingDirection` to specify the
/// direction(s) in which scrolling is allowed.
enum class ScrollingDirection : uint32_t {
	/// The canvas can only be scrolled along the **X** axis.
	X = 1,
	/// The canvas can only be scrolled along the **Y** axis.
	Y = 2,
	/// The canvas can be scrolled along both the **X** and **Y** axes.
	XY = 4
};

/// Identifies a specific permission capability that a sandboxed script container
/// may grant or restrict.
/// `SecurityCapability` is a bitmask-based permission system that controls which
/// engine APIs and Luau language features are accessible to scripts running
/// inside sandboxed containers. Each value represents one capability bit that can
/// be granted or restricted.
/// 
/// When an `Class.Instance` has its `Class.Instance.Sandboxed|Sandboxed` property
/// enabled, the engine intersects the capabilities of all ancestor containers to
/// determine the effective permission set of any script that executes within that
/// container. API members, classes, and Luau built-ins are each annotated with
/// one or more `SecurityCapability` values; a script's thread must hold every
/// required capability to call them.
enum class SecurityCapability : uint32_t {
	/// Indicates that a script container is permitted to execute scripts on the
	/// client (`Class.LocalScript`).
	RunClientScript = 0,
	/// Indicates that a script container is permitted to execute scripts on the
	/// server (`Class.Script`).
	RunServerScript = 1,
	/// Grants a script read-write access to instances that live outside its
	/// sandboxed container.
	AccessOutsideWrite = 2,
	/// Deprecated. Use `Enum.SecurityCapability.LoadUnownedAsset` instead.
	/// @deprecated Use `Enum.SecurityCapability.LoadUnownedAsset` instead.
	AssetRequire = 3,
	/// Allows a script to use the `loadstring()` Luau built-in to compile and
	/// execute a string as code.
	LoadString = 4,
	/// Allows a script to access the `shared` and `_G` shared global variable
	/// tables.
	ScriptGlobals = 5,
	/// Allows a script to create new `Instance` objects using `Instance.new()`.
	CreateInstances = 6,
	/// Guards access to a broad set of general-purpose engine APIs that do not
	/// belong to a more specific capability category.
	Basic = 7,
	/// Guards access to audio engine APIs such as `Class.Sound`,
	/// `Class.AudioPlayer`, and related classes.
	Audio = 8,
	/// Guards access to data store APIs such as `Class.DataStoreService` and its
	/// associated objects.
	DataStore = 9,
	/// Guards access to low-level networking APIs such as `Class.HttpService`.
	Network = 10,
	/// Guards access to physics engine APIs such as `Class.Constraint` classes
	/// and `Class.BasePart` physics properties.
	Physics = 11,
	/// Guards access to UI engine APIs such as `Class.ScreenGui`, `Class.Frame`,
	/// and other `Class.GuiObject` classes.
	UI = 12,
	/// Guards access to Constructive Solid Geometry (CSG) APIs such as
	/// `Class.UnionOperation` and `Class.NegateOperation`.
	CSG = 13,
	/// Guards access to chat engine APIs such as `Class.TextChatService` and
	/// related chat classes.
	Chat = 14,
	/// Guards access to animation engine APIs such as `Class.AnimationController`
	/// and related classes.
	Animation = 15,
	/// Deprecated. Use `Enum.SecurityCapability.AvatarAppearance` instead.
	/// @deprecated Use `Enum.SecurityCapability.AvatarAppearance` instead.
	Avatar = 16,
	/// Guards access to user input APIs such as `Class.UserInputService` and
	/// `Class.ContextActionService`.
	Input = 17,
	/// Guards access to environment and world-setting APIs such as
	/// `Class.Lighting` and `Class.Atmosphere`.
	Environment = 18,
	/// Guards access to remote event and function APIs such as
	/// `Class.RemoteEvent` and `Class.RemoteFunction`.
	RemoteEvent = 19,
	/// Guards access to the legacy `Class.Sound` and
	/// pre-`Class.VoiceChatService.UseAudioApi` sound stack APIs.
	LegacySound = 20,
	/// Guards access to `Class.Players` service APIs that query or manage
	/// connected players.
	Players = 21,
	/// Guards access to the `Instance.Capabilities` and `Instance.Sandboxed`
	/// properties that configure script sandboxing.
	CapabilityControl = 22,
	/// Mirrors the legacy `Plugin` permission level, granting access to Studio
	/// plugin APIs.
	Plugin = 23,
	/// Mirrors the legacy `LocalUser` permission level, granting access to
	/// IDE-only and Studio-level APIs.
	LocalUser = 24,
	/// Mirrors the legacy `WritePlayer` permission level, granting the ability to
	/// modify player identity properties such as name and `UserId`.
	WritePlayer = 25,
	/// Mirrors the legacy `RobloxScript` permission level, granting access to
	/// `CoreScript` APIs.
	RobloxScript = 26,
	/// Mirrors the legacy `RobloxEngine` permission level, granting access to
	/// internal engine-level APIs.
	RobloxEngine = 27,
	/// The default capability assigned to API members that have not been
	/// explicitly assigned to any other capability category.
	Unassigned = 28,
	/// Restricts access to non-sensitive APIs that are intentionally kept
	/// internal.
	InternalTest = 29,
	/// Restricts access to APIs callable only from Studio plugin or Open Cloud
	/// Luau execution sessions.
	PluginOrOpenCloud = 30,
	/// Restricts access to APIs that may only be called from Studio Assistant
	/// execution contexts.
	Assistant = 31,
	/// Restricts access to APIs that are executable only from Studio's
	/// `RemoteCommandService` in Team Create sessions.
	RemoteCommand = 32,
	/// Guards access to APIs that read or query asset metadata from the Roblox
	/// catalog.
	AssetRead = 33,
	/// Guards access to asset management APIs such as
	/// `Class.ContentProvider:PreloadAsync()` and encryption-key registration.
	AssetManagement = 34,
	/// Guards access to procedural and AI-driven content generation APIs such as
	/// `Class.EditableMesh` and `Class.AvatarCreationService`.
	DynamicGeneration = 35,
	/// Guards access to platform-level avatar editing APIs provided by
	/// `Class.AvatarEditorService`.
	PlatformAvatarEditing = 36,
	/// Guards access to APIs that create or update published Roblox assets.
	AssetCreateUpdate = 37,
	/// Guards access to `Class.CaptureService` APIs that take screenshots and
	/// record video.
	Capture = 38,
	/// Guards access to sensitive user input APIs such as those that can read raw
	/// keyboard or mouse data beyond normal game input.
	SensitiveInput = 39,
	/// Guards access to in-experience purchase and monetization APIs such as
	/// `Class.MarketplaceService`.
	Monetization = 40,
	/// Allows a script to load assets that are owned by the experience's creator
	/// using `Class.InsertService` or `Global.LuaGlobals.require()`.
	LoadOwnedAsset = 41,
	/// Guards access to social APIs such as `Class.SocialService`,
	/// `Class.FriendPages`, and `Class.ExperienceInviteOptions`.
	Social = 42,
	/// Guards access to server-to-server messaging APIs such as
	/// `Class.MessagingService`.
	ServerCommunication = 43,
	/// Guards access to `Class.LogService` and logging-related APIs.
	Logging = 44,
	/// Guards access to APIs that initiate external (non-Roblox) purchase
	/// prompts.
	PromptExternalPurchase = 45,
	/// Guards access to group-related APIs such as `Class.GroupService`.
	Groups = 46,
	/// Guards access to teleportation APIs such as `Class.TeleportService`,
	/// `Class.TeleportOptions`, and `Class.TeleportAsyncResult`.
	Teleport = 47,
	/// Guards access to moderation and player-consequence APIs such as
	/// `Class.Players:BanAsync()` and `Class.ModerationService`.
	Consequences = 48,
	/// Guards access to `Class.MaterialService`, `Class.MaterialVariant`, and
	/// custom material APIs.
	Material = 49,
	/// Guards access to APIs that control avatar locomotion and behavior at
	/// runtime.
	AvatarBehavior = 50,
	/// Guards access to APIs that read or modify avatar appearance, such as
	/// `Class.HumanoidDescription`.
	AvatarAppearance = 51,
	/// Allows a script to `Global.LuaGlobals.require()` asset IDs or call
	/// `Class.InsertService:LoadAsset()` for assets not owned by the creator.
	LoadUnownedAsset = 52
};

/// Customization options for gamepad selection when
/// `Class.GuiBase2d.SelectionGroup` is true.
enum class SelectionBehavior : uint32_t {
	/// Prioritizes GuiObjects within the same SelectionGroup but allows the
	/// selection to move to other outside GuiObjects if no suitable button is
	/// found.
	Escape = 0,
	/// Constrains gamepad selection to the SelectionGroup.
	Stop = 1
};

/// Controls how selected objects are highlighted in Roblox Studio.
/// Specifies the visual style used to highlight selected objects in Roblox
/// Studio. This enum is used by the `RenderMode` property, which defaults to
/// `Enum.SelectionRenderMode.Outlines`.
enum class SelectionRenderMode : uint32_t {
	/// Renders selected objects using an outline drawn along each object's edges.
	Outlines = 0,
	/// Renders selected objects using a bounding box drawn around each object's
	/// extents.
	BoundingBoxes = 1,
	/// Renders selected objects with both outlines and bounding boxes
	/// simultaneously.
	Both = 2
};

/// Defines the screen location of the current player's self view.
/// This enum defines the screen location of the current player's self view, used
/// in conjunction with `Class.SocialService:ShowSelfView()` for example.
enum class SelfViewPosition : uint32_t {
	/// The position of the self view when it was last closed.
	LastPosition = 0,
	/// Top-left corner of the screen, with slight padding from the top and left
	/// edges.
	TopLeft = 1,
	/// Top-right corner of the screen, with slight padding from the top and right
	/// edges.
	TopRight = 2,
	/// Bottom-left corner of the screen, with slight padding from the bottom and
	/// left edges.
	BottomLeft = 3,
	/// Bottom-right corner of the screen, with slight padding from the bottom and
	/// right edges.
	BottomRight = 4
};

/// Specifies whether a `Class.ControllerPartSensor` targets floor or ladder
/// geometry, and which detection algorithm to use.
/// The `Enum.SensorMode` enum controls both the type of geometry a
/// `Class.ControllerPartSensor` targets (floor surfaces or ladder rungs) and the
/// detection algorithm it applies. `Enum.SensorMode.Floor` and
/// `Enum.SensorMode.Ladder` use the current sensing algorithms, while
/// `Enum.SensorMode.ClassicFloor` and `Enum.SensorMode.ClassicLadder` preserve
/// legacy behavior. The default value of `Class.ControllerPartSensor.SensorMode`
/// is `Enum.SensorMode.Floor`.
enum class SensorMode : uint32_t {
	/// Detects floor surfaces below the part using the modern detection
	/// algorithm; the default value of `Class.ControllerPartSensor.SensorMode`.
	Floor = 0,
	/// Detects ladder surfaces adjacent to the part using the modern
	/// piercing-based detection algorithm.
	Ladder = 1,
	/// Detects floor surfaces below the part using the legacy raycast-based
	/// algorithm.
	ClassicFloor = 2,
	/// Detects ladder surfaces adjacent to the part using the legacy ladder
	/// detection algorithm.
	ClassicLadder = 3
};

/// Controls when a sensor recalculates its output properties.
/// Controls when a sensor recalculates its output properties. Assign this enum to
/// the `UpdateType` property on any `Class.SensorBase`‑derived instance
/// (`Class.ControllerSensor`, `Class.FluidForceSensor`, `Class.AtmosphereSensor`)
/// to choose between automatic lazy evaluation and fully manual control.
enum class SensorUpdateType : uint32_t {
	/// The sensor lazily recalculates its output the next time an output property
	/// is read and the output is marked dirty.
	OnRead = 0,
	/// The sensor never automatically recalculates its output; scripts are
	/// responsible for driving output updates.
	Manual = 1
};

/// Controls when a service is displayed in the Explorer window in Roblox Studio.
/// Controls when a service is displayed in the Explorer panel in Roblox Studio.
/// This enum is used by the `ServiceVisibility` property on
/// `Class.ReflectionMetadataClass`, which defines the default explorer visibility
/// for a service class. It does not affect whether the service is accessible via
/// `Class.ServiceProvider:GetService()|GetService()`.
enum class ServiceVisibility : uint32_t {
	/// The service is always visible in the Explorer window.
	Always = 0,
	/// The service is hidden from the Explorer window by default, but can still
	/// be added via the Insert Service menu.
	Off = 1,
	/// The service is visible in the Explorer window only when it has children;
	/// it can still be added via the Insert Service menu.
	WithChildren = 2
};

/// Classifies the severity level of a Luau LSP diagnostic reported by a Script
/// Analysis callback.
/// `Severity` is used in the diagnostics table returned by Script Analysis
/// callbacks registered with
/// `Class.ScriptEditorService:RegisterScriptAnalysisCallback()`. Each diagnostic
/// entry can include a `severity` field set to one of these values to control how
/// the diagnostic is categorized in the **Script Analysis** tool and how the
/// corresponding source range is highlighted in the Script Editor.
/// 
/// The enum maps directly to the
/// [Language Server Protocol `DiagnosticSeverity` specification](https://microsoft.github.io/language-server-protocol/specifications/lsp/3.17/specification/#diagnosticSeverity).
enum class Severity : uint32_t {
	/// Reports a critical error that indicates a definite problem in the script.
	Error = 1,
	/// Reports a potential problem that can cause incorrect behavior but does not
	/// prevent the script from running.
	Warning = 2,
	/// Conveys informational context about the script without indicating a
	/// problem.
	Information = 3,
	/// Provides a subtle suggestion, such as a style improvement or an
	/// unused-variable notice.
	Hint = 4
};

/// Result codes returned by `Class.AdService:ShowRewardedVideoAdAsync()`
/// indicating whether a rewarded video ad completed successfully or why it did
/// not.
enum class ShowAdResult : uint32_t {
	/// The ad was successfully shown to completion.
	ShowCompleted = 1,
	/// You are trying to show a full-screen ad before the ad has fully loaded.
	/// You might have failed to properly fetch the ad, or the ad might have
	/// expired.
	AdNotReady = 2,
	/// You are trying to show a full-screen ad while another full-screen ad is
	/// already playing.
	AdAlreadyShowing = 3,
	/// An unspecified internal error occurred. Try showing the ad again.
	InternalError = 4,
	/// The ad view of the user has been interrupted. The user might have closed
	/// the ad view or left the experience, and should not receive a reward.
	ShowInterrupted = 5,
	/// The device does not have sufficient video memory available to display the
	/// ad.
	InsufficientMemory = 6
};

/// Determines when the engine resumes event handlers.
/// Determines when the engine resumes event handlers. At some future point, the
/// default mode will be `Deferred` but opt-out will still be possible through use
/// of `Immediate`.
/// 
/// For more information, see
/// [Deferred Events](https://create.roblox.com/docs/scripting/events/deferred).
enum class SignalBehavior : uint32_t {
	/// The default behavior; currently equivalent to `Immediate` but this will
	/// eventually change to `Deferred`.
	Default = 0,
	/// Event handlers are resumed immediately when the event occurs.
	Immediate = 1,
	/// All events are deferred and their handlers resumed at specific resumptions
	/// points each frame.
	Deferred = 2,
	/// Equivalent to `Deferred` but only for events triggered by changes in
	/// ancestry.
	AncestryDeferred = 3
};

/// Used to constrain the scale of a GUI object.
enum class SizeConstraint : uint32_t {
	/// The scale of X and Y are independent.
	RelativeXY = 0,
	/// The scale of X is shared with Y.
	RelativeXX = 1,
	/// The scale of Y is shared with X.
	RelativeYY = 2
};

/// Determines the color-coding mode used by the SLIM debug tint overlay in the
/// Developer Console.
/// Determines the color-coding mode used by the SLIM debug tint overlay. Select a
/// mode via the **DebugVisualizations** panel in the Developer Console to
/// color-code meshes by different criteria.
enum class SlimTintMode : uint32_t {
	/// No tint is applied. Meshes render with their normal appearance.
	None = 0,
	/// Colors each mesh by its current level of detail. Blue is the coarsest, red
	/// the finest, and every rank in between maps to a fixed color. A given color
	/// always means the same LOD rank across every mesh, with the exception that
	/// each mesh's own highest available LOD is always shown red.
	LevelOfDetail = 1,
	/// Colors SLIM models by whether their DataModel instances are streamed in or
	/// out. Green indicates streamed in (full DataModel present); yellow
	/// indicates streamed out (a placeholder). Both are still rendered via SLIM.
	DataModelState = 5,
	/// Colors each SLIM model by its `Enum.SlimTranscoderStatus`. Follow the link
	/// to see which color maps to each status.
	TranscoderStatus = 6
};

/// Describes the backend transcoding state of a SLIM model, from upload through
/// transcoding to success or failure.
/// Describes the backend transcoding state of a SLIM model. The status progresses
/// as the model is uploaded to the content-delivery network and transcoded into
/// SLIM assets. The **DebugVisualizations** panel in the Developer Console can
/// color-code models by this status to surface which models have successfully
/// transcoded and which have failed.
enum class SlimTranscoderStatus : uint32_t {
	/// The transcoding status has not yet been determined. This is the initial
	/// state before the model has been queried. Shown as yellow in the debug tint
	/// overlay.
	Unknown = 0,
	/// SLIM transcoding is currently in progress on the backend. The model is
	/// expected to transition to Succeeded or Failed once transcoding completes.
	/// Shown as blue in the debug tint overlay.
	Transcoding = 1,
	/// Transcoding completed successfully and the SLIM assets are available for
	/// streaming. Shown as green in the debug tint overlay.
	Succeeded = 2,
	/// Transcoding did not complete successfully. Shown as red in the debug tint
	/// overlay.
	Failed = 3
};

/// Specifies the metric used to identify the least-converged constraint when
/// visualizing physics solver convergence.
/// Specifies the metric used to determine which constraint is least converged
/// within a solver island when
/// `Class.PhysicsSettings.SolverConvergenceVisualizationMode` is active. The
/// selected metric controls what data is gathered per constraint and displayed in
/// the per-edge and per-island overlay. The default value, stored on
/// `Class.PhysicsSettings.SolverConvergenceMetricType`, is
/// `Enum.SolverConvergenceMetricType.AlgorithmAgnostic`.
enum class SolverConvergenceMetricType : uint32_t {
	/// Identifies the least-converged constraint using the estimated force change
	/// from an additional, non-applied solver iteration.
	IterationBased = 0,
	/// Identifies the least-converged constraint using a residual-based
	/// convergence metric supported across solver algorithms.
	AlgorithmAgnostic = 1
};

/// Controls whether and at what granularity the physics solver's convergence
/// quality is overlaid as a debug visualization in Studio.
/// Controls whether and at what granularity the physics solver's convergence
/// quality is overlaid as a 3D debug visualization in Roblox Studio. When active,
/// constraint edges connecting assembly root bodies are drawn as colored
/// cylinders; the worst-ranked edge within each simulation island is drawn in
/// red, while all remaining edges stay green. This visualization is only rendered
/// in Studio (not in published experiences). The metric used to rank convergence
/// is selected separately via
/// `Class.PhysicsSettings.SolverConvergenceMetricType`. Defaults to
/// `Enum.SolverConvergenceVisualizationMode.Disabled`.
enum class SolverConvergenceVisualizationMode : uint32_t {
	/// No solver convergence visualization is rendered; the default state.
	Disabled = 0,
	/// Renders a single convergence metric label at the center of each simulation
	/// island displaying the velocity-stage and position-stage maxima, which may
	/// come from different constraints.
	PerIsland = 1,
	/// Renders convergence metrics as text labels on each aggregated body-pair
	/// edge between assembly root bodies.
	PerEdge = 2
};

/// Controls whether results are ordered from lowest to highest or from highest to
/// lowest.
/// Controls the ordering direction of results returned by APIs that support
/// sorted retrieval, such as `Class.DataStore:ListVersionsAsync()` and
/// `Class.MemoryStoreSortedMap:GetRangeAsync()`. Pass
/// `Enum.SortDirection.Ascending` to receive items ordered from lowest to highest
/// (or oldest to newest), and `Enum.SortDirection.Descending` to receive them
/// from highest to lowest (or newest to oldest).
enum class SortDirection : uint32_t {
	/// Orders results from lowest to highest value, or from oldest to newest
	/// entry.
	Ascending = 0,
	/// Orders results from highest to lowest value, or from newest to oldest
	/// entry.
	Descending = 1
};

/// Used by `Class.UIGridStyleLayout.SortOrder` to order the elements in the
/// layout.
/// Used by `Class.UIGridStyleLayout.SortOrder` to order the elements in the
/// layout.
/// 
/// <img src="../../../assets/engine-api/classes/UIListLayout/SortOrder.png" width="720" />
enum class SortOrder : uint32_t {
	/// Elements are ordered by their `Class.Instance.Name` in alphanumeric order.
	Name = 0,
	/// Elements are ordered by the function passed to
	/// `Class.UIGridStyleLayout:SetCustomSortFunction()`.
	Custom = 1,
	/// Elements are ordered by `Class.GuiObject.LayoutOrder` in ascending order;
	/// for example `0` will be placed before `1`.
	LayoutOrder = 2
};

/// Used by `Class.UIGridLayout.StartCorner` to decide where the first element is
/// placed.
enum class StartCorner : uint32_t {
	/// Grid starts in top left corner.
	TopLeft = 0,
	/// Grid starts in top right corner.
	TopRight = 1,
	/// Grid starts in bottom left corner.
	BottomLeft = 2,
	/// Grid starts in bottom right corner.
	BottomRight = 3
};

/// Identifies the data type of a field in a deprecated `StateObject`; all values
/// are deprecated and the enum is retained only for backward compatibility.
/// `StateObjectFieldType` formerly described the data type of a field within a
/// `StateObject`. All enum values are deprecated. The enum itself is not used by
/// engine code and is preserved solely so that existing creator scripts that
/// reference it continue to function. New code should not depend on this enum.
enum class StateObjectFieldType : uint32_t {
	/// A boolean field.
	Boolean = 0,
	/// A `Datatype.CFrame` field.
	CFrame = 1,
	/// A `Datatype.Color3` field.
	Color3 = 2,
	/// A floating-point number field.
	Float = 3,
	/// An `Class.Instance` reference field.
	Instance = 4,
	/// A `Datatype.Random` field.
	Random = 5,
	/// A `Datatype.Vector2` field.
	Vector2 = 6,
	/// A `Datatype.Vector3` field.
	Vector3 = 7,
	/// An invalid or unrecognized field type.
	INVALID = 8
};

/// This enum was used with the unfinished `Class.Status` library.
/// This enum was used with the unfinished `Class.Status` library which would have
/// allowed you to add conditions to a `Class.Humanoid`.
/// @deprecated This enum is deprecated as it was only used by deprecated methods and events. It should not be used in new work.
enum class Status : uint32_t {
	/// @deprecated This option is deprecated.
	Poison = 0,
	/// @deprecated This option is deprecated.
	Confusion = 1
};

/// Enum used with `Class.RunService:BindToSimulation()` to indicate the frequency
/// at which the bound function is called.
/// Enum used with `Class.RunService:BindToSimulation()` to indicate the frequency
/// at which the bound function is called during the simulation step.
/// 
/// The Roblox simulation pipeline runs at 60 Hz. Each `StepFrequency` value
/// divides that base rate so the bound callback fires at the requested cadence
/// and receives a `deltaTime` argument representing the simulation-time interval
/// represented by the invocation. Choosing a lower frequency reduces per-frame
/// overhead for logic that does not need to run every physics tick, such as
/// periodic state checks. Because these callbacks run on the simulation step and
/// can be replayed during client resimulation, avoid using them for actions that
/// must occur exactly once, such as network replication. The default frequency
/// for `Class.RunService:BindToSimulation()` is `Enum.StepFrequency.Hz30`.
enum class StepFrequency : uint32_t {
	/// The bound function is called at 60 Hz.
	Hz60 = 0,
	/// The bound function is called at 30 Hz.
	Hz30 = 1,
	/// The bound function is called at 15 Hz.
	Hz15 = 2,
	/// The bound function is called at 10 Hz.
	Hz10 = 3,
	/// The bound function is called at 5 Hz.
	Hz5 = 4,
	/// The bound function is called at 1 Hz.
	Hz1 = 5
};

/// Determines how content is streamed out from `Class.Player` clients.
enum class StreamOutBehavior : uint32_t {
	/// Default behavior (subject to change).
	Default = 0,
	/// Only stream out when memory is low.
	LowMemory = 1,
	/// Stream out content that is significantly outside of the current
	/// `Class.Workspace.StreamingTargetRadius`.
	Opportunistic = 2
};

/// Determines how a user's client should handle not having enough content
/// streamed in.
/// This enum is used to control `Class.Workspace.StreamingIntegrityMode`
/// behavior. For all modes, the replication focus defaults to be the local
/// character model unless explicitly set via `Class.Player.ReplicationFocus`.
/// 
/// Note that `MinimumRadiusPause` and `PauseOutsideLoadedArea` both set the
/// `Class.Player.GameplayPaused` property when their respective pause logic is
/// triggered, and a default message is displayed on the client.
enum class StreamingIntegrityMode : uint32_t {
	/// Default behavior (subject to change).
	Default = 0,
	/// Simulation of the replication focus is never paused, regardless of the
	/// amount of content streamed in on the client.
	Disabled = 1,
	/// All client-side simulation is paused when content is not streamed in up to
	/// the minimum radius.
	MinimumRadiusPause = 2,
	/// Simulation of the replication focus is paused when any part of its
	/// bounding box is not in a streamed-in area.
	PauseOutsideLoadedArea = 3
};

/// Determines how a client should handle not having enough content streamed in to
/// continue playing properly.
/// This enum is used to control `Class.Workspace.StreamingPauseMode` behavior.
/// The `Disabled` mode indicates that gameplay continues unchanged even if player
/// does not have the minimum streaming radius available. In `ClientPhysicsPause`
/// mode, client-side physics is paused when the player doesn't have the minimum
/// radius present and resumed when the minimum radius is available.
/// @deprecated Please use `Class.Workspace.StreamingIntegrityMode` instead.
enum class StreamingPauseMode : uint32_t {
	/// Default behavior (subject to change).
	Default = 0,
	/// No change to gameplay due to streaming region availability.
	Disabled = 1,
	/// Client owned physics is paused.
	ClientPhysicsPause = 2
};

/// Used by `Class.UIStroke.StrokeSizingMode` to determine whether the stroke's
/// `Class.UIStroke.Thickness|Thickness` will be measured in pixels or be relative
/// to the parent.
enum class StrokeSizingMode : uint32_t {
	/// `Class.UIStroke.Thickness|Thickness` is measured in pixels.
	FixedSize = 0,
	/// `Class.UIStroke.Thickness|Thickness` is relative to minimum parent width
	/// or height. If stroke is on text, thickness is relative to font size.
	ScaledSize = 1
};

enum class StudioCaptureBufferStatus : uint32_t {
	NotStarted = 0,
	Pending = 1,
	Ready = 2,
	Error = 3
};

/// Specifies the pixel format of the image buffer stored in a
/// `Class.StudioScreenshotCapture` object.
/// Specifies the pixel format used when
/// `Class.StudioCaptureService:CaptureScreenshot()` stores the captured image.
/// Pass this value as the `Format` key in the options table to
/// `Class.StudioCaptureService:CaptureScreenshot()`; it is then reflected as the
/// read-only `Class.StudioScreenshotCapture.BufferFormat` property. When `Format`
/// is omitted, the capture defaults to
/// `Enum.StudioCaptureScreenshotFormat.RGBA8`.
enum class StudioCaptureScreenshotFormat : uint32_t {
	/// The buffer contains raw, uncompressed RGBA pixel data with 8 bits per
	/// channel (4 bytes per pixel).
	RGBA8 = 0,
	/// The buffer contains a complete PNG-encoded image.
	PNG = 1
};

/// Describes why a place publish or update operation failed in Roblox Studio.
/// Describes why a place publish or update operation failed in Roblox Studio.
/// This enum is passed as the `reason` parameter of the `GamePublishFinished`
/// event when `success` is `false`.
enum class StudioPlaceUpdateFailureReason : uint32_t {
	/// The place publish or update failed for an unspecified or generic reason.
	Other = 0,
	/// The place publish failed because a Team Create server currently holds a
	/// lock on the place.
	TeamCreateConflict = 1
};

/// Color categories used to theme the Script Editor in Roblox Studio.
/// Identifies visual element categories whose colors can be customized in the
/// Roblox Studio Script Editor theme system. Each value is a distinct syntactic
/// or UI region in the editor.
enum class StudioScriptEditorColorCategories : uint32_t {
	/// Fallback foreground color used for script text that does not match any
	/// more specific syntax category.
	Default = 0,
	/// Color applied to operator tokens such as `+`, `-`, `*`, `/`, `==`, and
	/// `..` in scripts.
	Operator = 1,
	/// Color applied to numeric literal tokens in scripts.
	Number = 2,
	/// Color applied to string literal tokens, including quoted strings and
	/// long-string literals.
	String = 3,
	/// Color applied to comment tokens (single-line `--` and block `--[[ ]]`
	/// comments) in scripts.
	Comment = 4,
	/// Color applied to Luau reserved keywords such as `if`, `then`, `else`,
	/// `do`, `end`, `return`, and `while`.
	Keyword = 5,
	/// Color applied to Luau built-in functions and standard library identifiers
	/// in scripts.
	Builtin = 6,
	/// Color applied to method call identifiers in scripts.
	Method = 7,
	/// Color applied to property access identifiers (tokens following a `.`
	/// operator) in scripts.
	Property = 8,
	/// Color applied to the `nil` literal token in scripts.
	Nil = 9,
	/// Foreground color used to highlight boolean literals (`true` and `false`)
	/// in scripts.
	Bool = 10,
	/// Color applied to the `function` keyword token in function declarations.
	Function = 11,
	/// Color applied to the `local` keyword token in local variable and function
	/// declarations.
	Local = 12,
	/// Color applied to the `self` identifier token in method bodies.
	Self = 13,
	/// Color applied to Luau-specific type annotation keywords such as `type` and
	/// `typeof`.
	LuauKeyword = 14,
	/// Color applied to the identifier that names a function in its declaration.
	FunctionName = 15,
	/// Color applied to `TODO` markers found inside comments in scripts.
	TODO = 16,
	/// Main background color of the Script Editor canvas.
	Background = 17,
	/// Foreground color for text within the currently selected range in the
	/// Script Editor.
	SelectionText = 18,
	/// Background highlight color for the currently selected text range in the
	/// Script Editor.
	SelectionBackground = 19,
	/// Background highlight color applied to text ranges matched by a Find or
	/// Replace operation.
	FindSelectionBackground = 20,
	/// Background highlight color applied to all occurrences of the word under
	/// the cursor when word-highlight is active.
	MatchingWordBackground = 21,
	/// Color used for warning-severity diagnostic markers and underlines in
	/// scripts.
	Warning = 22,
	/// Color used for error-severity diagnostic markers and underlines in
	/// scripts.
	Error = 23,
	/// Color used for information-severity diagnostic markers in scripts.
	Info = 24,
	/// Color used for hint-severity diagnostic markers in scripts.
	Hint = 25,
	/// Color used to render visible whitespace characters (spaces and tabs) when
	/// that display option is enabled.
	Whitespace = 26,
	/// Background highlight color applied to the line that currently contains the
	/// text cursor.
	ActiveLine = 27,
	/// Background highlight color for the line the debugger is currently paused
	/// on.
	DebuggerCurrentLine = 28,
	/// Background highlight color for a line that caused a runtime error during a
	/// debugging session.
	DebuggerErrorLine = 29,
	/// Color of the vertical column ruler line drawn at the configured
	/// character-width limit in the Script Editor.
	Ruler = 30,
	/// Color applied to bracket characters such as `(`, `)`, `[`, `]`, `{`, and
	/// `}` in scripts.
	Bracket = 31,
	/// Color applied to Luau type name tokens in type annotations and
	/// declarations.
	Type = 32,
	/// Primary text color for items listed in autocomplete and context-menu
	/// popups.
	MenuPrimaryText = 33,
	/// Secondary text color (for example, type annotations or documentation
	/// hints) in autocomplete popups.
	MenuSecondaryText = 34,
	/// Text color of the currently highlighted item in autocomplete and
	/// context-menu popups.
	MenuSelectedText = 35,
	/// Background color for autocomplete and context-menu popups in the Script
	/// Editor.
	MenuBackground = 36,
	/// Background color of the currently highlighted item in autocomplete and
	/// context-menu popups.
	MenuSelectedBackground = 37,
	/// Background color of the scrollbar track inside autocomplete and
	/// context-menu popups.
	MenuScrollbarBackground = 38,
	/// Color of the scrollbar thumb (handle) inside autocomplete and context-menu
	/// popups.
	MenuScrollbarHandle = 39,
	/// Border color for autocomplete and context-menu popups in the Script
	/// Editor.
	MenuBorder = 40,
	/// Background color for inline code blocks rendered in the documentation
	/// viewer panel within Studio.
	DocViewCodeBackground = 41,
	/// Text color for labels displayed in the AI Code Overlay panel.
	AICOOverlayText = 42,
	/// Background color for AI Code Overlay action buttons in their default
	/// (idle) state.
	AICOOverlayButtonBackground = 43,
	/// Background color for AI Code Overlay action buttons when the pointer
	/// hovers over them.
	AICOOverlayButtonBackgroundHover = 44,
	/// Background color for AI Code Overlay action buttons while they are being
	/// pressed.
	AICOOverlayButtonBackgroundPressed = 45,
	/// Color of the vertical guide lines drawn at each indentation level in the
	/// script editor gutter.
	IndentationRuler = 46
};

/// Specifies a script editor syntax-color preset in Roblox Studio.
/// Controls the preset selected by the **Script Editor Color Preset** Studio
/// setting.
enum class StudioScriptEditorColorPresets : uint32_t {
	/// Uses Roblox Studio's default script editor colors.
	RobloxDefault = 0,
	/// Uses the first alternate script editor color preset.
	Extra1 = 1,
	/// Uses the second alternate script editor color preset.
	Extra2 = 2,
	/// Uses the creator's custom script editor colors.
	Custom = 3
};

/// An enum that lists color roles used by Studio themes, passed to
/// `Class.StudioTheme:GetColor()` to retrieve the correct theme color for a given
/// UI element in a plugin.
/// Named color roles in Roblox Studio's theming system. Each item is a UI color
/// slot, not a literal color. Pass with `Enum.StudioStyleGuideModifier` to
/// `Class.StudioTheme:GetColor()` to get the active theme's `Datatype.Color3` so
/// plugin widgets adapt when the user switches Light/Dark themes.
enum class StudioStyleGuideColor : uint32_t {
	/// The primary background color used by the toolbar and windows.
	MainBackground = 0,
	/// The color of windows' title bars.
	Titlebar = 1,
	/// The color of dropdown menus, like those found in the Properties window.
	Dropdown = 2,
	/// The background color of tooltips, like those seen when hovering over
	/// buttons on the toolbar or properties in the Properties window.
	Tooltip = 3,
	/// The background color of message box and dialog notification panels.
	Notification = 4,
	/// The color of scrollbar handles, like those seen in the Explorer window.
	ScrollBar = 5,
	/// The background color of scrollbars, like those seen in the Explorer
	/// window.
	ScrollBarBackground = 6,
	/// The background color of the tab bar, like the one where the script editor
	/// is opened.
	TabBar = 7,
	/// The color of tabs on the tab bar, like the ones opened when the script
	/// editor is opened.
	Tab = 8,
	/// The default background color of filter buttons in the Script Analysis
	/// widget.
	FilterButtonDefault = 9,
	/// The background color of filter buttons in the Script Analysis widget when
	/// hovered.
	FilterButtonHover = 10,
	/// The background color of filter buttons in the Script Analysis widget when
	/// they are in a checked (active) state.
	FilterButtonChecked = 11,
	/// The accent color drawn on the top and left edges of filter buttons in the
	/// Script Analysis widget.
	FilterButtonAccent = 12,
	/// The border color of filter buttons in the Script Analysis widget.
	FilterButtonBorder = 13,
	/// The border color of filter buttons in the Script Analysis widget when they
	/// are hovered or checked.
	FilterButtonBorderAlt = 14,
	/// The color of a tab on the toolbar menu.
	RibbonTab = 15,
	/// The background color of the toolbar.
	RibbonTabTopBar = 16,
	/// The background color of clickable buttons.
	Button = 17,
	/// The background color of clickable buttons that are the primary action.
	MainButton = 18,
	/// The background color of buttons on the toolbar.
	RibbonButton = 19,
	/// The background color of the game viewport.
	ViewPortBackground = 20,
	/// The background color of input fields, like those found in the Explorer
	/// window.
	InputFieldBackground = 21,
	/// The background color of items listed in the Explorer and Properties
	/// windows.
	Item = 22,
	/// The background color of row items in table views such as the Game Settings
	/// window.
	TableItem = 23,
	/// The background color of category header items in the Properties widget.
	CategoryItem = 24,
	/// The color of items within tables in the settings window.
	GameSettingsTableItem = 25,
	/// The color of tooltips in the settings window.
	GameSettingsTooltip = 26,
	/// The color of the bar shown when the mobile emulator is active.
	EmulatorBar = 27,
	/// The color of the device and physical size dropdowns in the emulator bar.
	EmulatorDropDown = 28,
	/// The background color of the color picker.
	ColorPickerFrame = 29,
	/// The color of the current-item marker, such as the blue selection indicator
	/// in the logout menu in the Light theme.
	CurrentMarker = 30,
	/// The color of borders, like those found in the Properties window.
	Border = 31,
	/// The color used for drop-shadow decorations on floating panels and menus.
	DropShadow = 32,
	/// The color of shadows rendered under floating items like dropdowns.
	Shadow = 33,
	/// The light role color from the Qt widget palette, used for the lightest
	/// shading of 3D widget effects.
	Light = 34,
	/// The dark role color from the Qt widget palette, used for the darkest
	/// shading of 3D widget effects.
	Dark = 35,
	/// The mid role color from the Qt widget palette, used between the button and
	/// dark shading for 3D widget effects.
	Mid = 36,
	/// The primary text color used throughout Studio's UI.
	MainText = 37,
	/// The color of secondary text such as status labels shown in the Team Create
	/// widget for offline users and place owners.
	SubText = 38,
	/// The text color displayed in dock widget title bars and Ribbon tabs.
	TitlebarText = 39,
	/// The color of text displayed inside input fields and other high-contrast
	/// contexts.
	BrightText = 40,
	/// The color of placeholder or dimmed text shown in empty input fields.
	DimmedText = 41,
	/// The color of hyperlink text in Studio panels and documentation views.
	LinkText = 42,
	/// The color of warning messages, such as those displayed in the Output
	/// window.
	WarningText = 43,
	/// The color of error messages, such as those displayed in the Output window.
	ErrorText = 44,
	/// The color of informational messages, such as those displayed in the Output
	/// window.
	InfoText = 45,
	/// The color used to display sensitive information text, such as certain
	/// messages in the Output window.
	SensitiveText = 46,
	/// The background color of the Script Editor's side gutter, which displays
	/// fold icons and breakpoint markers.
	ScriptSideWidget = 47,
	/// The background color of the Script Editor canvas.
	ScriptBackground = 48,
	/// The default text color for unclassified tokens in the Script Editor.
	ScriptText = 49,
	/// The foreground text color of the active text selection in the Script
	/// Editor.
	ScriptSelectionText = 50,
	/// The background color of the active text selection in the Script Editor.
	ScriptSelectionBackground = 51,
	/// The background color of text matched by the current find query in the
	/// Script Editor.
	ScriptFindSelectionBackground = 52,
	/// The background color of all occurrences of the word under the cursor
	/// highlighted as matching selections in the Script Editor.
	ScriptMatchingWordSelectionBackground = 53,
	/// The color of operator symbols in the Script Editor.
	ScriptOperator = 54,
	/// The color of numeric literals in the Script Editor.
	ScriptNumber = 55,
	/// The color of string literals in the Script Editor.
	ScriptString = 56,
	/// The color of comment text in the Script Editor.
	ScriptComment = 57,
	/// The color of Lua reserved keywords that don't have a more specific color
	/// role in the Script Editor.
	ScriptKeyword = 58,
	/// The color of recognized built-in global identifiers in the Script Editor,
	/// including non-function globals.
	ScriptBuiltInFunction = 59,
	/// The color of warning markers and underlines in the Script Editor.
	ScriptWarning = 60,
	/// The color of error markers and underlines in the Script Editor.
	ScriptError = 61,
	/// The color of informational diagnostic markers in the Script Editor.
	ScriptInformation = 62,
	/// The color of hint diagnostic underlines and scrollbar markers in the
	/// Script Editor.
	ScriptHint = 63,
	/// The color of rendered whitespace characters (spaces and tabs) when
	/// whitespace display is enabled in the Script Editor.
	ScriptWhitespace = 64,
	/// The color of the column ruler line displayed in the Script Editor when the
	/// ruler is enabled.
	ScriptRuler = 65,
	/// The background color of inline code blocks in the Script Editor's
	/// documentation view.
	DocViewCodeBackground = 66,
	/// The highlight color applied to the line currently paused on in the script
	/// debugger.
	DebuggerCurrentLine = 67,
	/// The highlight color applied to a line that caused a debugger error or
	/// runtime exception.
	DebuggerErrorLine = 68,
	/// The text color of the file path displayed in the header row of a diff
	/// view.
	DiffFilePathText = 69,
	/// The text color of hunk-info lines (the `@@` header rows) in the diff view.
	DiffTextHunkInfo = 70,
	/// The text color of unchanged context lines in the diff view.
	DiffTextNoChange = 71,
	/// The text color of added lines in the diff view.
	DiffTextAddition = 72,
	/// The text color of deleted lines in the diff view.
	DiffTextDeletion = 73,
	/// The background color of hunk-separator rows in the diff view text area.
	DiffTextSeparatorBackground = 74,
	/// The background color of unchanged context lines in the diff view.
	DiffTextNoChangeBackground = 75,
	/// The background color of added lines in the diff view.
	DiffTextAdditionBackground = 76,
	/// The background color of deleted lines in the diff view.
	DiffTextDeletionBackground = 77,
	/// The text color of line numbers in the diff view gutter.
	DiffLineNum = 78,
	/// The background color of line-number cells in the diff gutter for
	/// hunk-separator rows.
	DiffLineNumSeparatorBackground = 79,
	/// The background color of line-number cells in the diff gutter for unchanged
	/// lines.
	DiffLineNumNoChangeBackground = 80,
	/// The background color of line-number cells in the diff gutter for added
	/// lines.
	DiffLineNumAdditionBackground = 81,
	/// The background color of line-number cells in the diff gutter for deleted
	/// lines.
	DiffLineNumDeletionBackground = 82,
	/// The background color of the file-path header row in a diff view.
	DiffFilePathBackground = 83,
	/// The border color of the file-path header row in a diff view.
	DiffFilePathBorder = 84,
	/// The background color of incoming messages in the Studio chat widget.
	ChatIncomingBgColor = 85,
	/// The text color of incoming messages in the Studio chat widget.
	ChatIncomingTextColor = 86,
	/// The background color of outgoing messages in the Studio chat widget.
	ChatOutgoingBgColor = 87,
	/// The text color of outgoing messages in the Studio chat widget.
	ChatOutgoingTextColor = 88,
	/// The color used to display moderated or filtered messages in the Studio
	/// chat widget.
	ChatModeratedMessageColor = 89,
	/// The color of separator lines that divide sections within Studio panels.
	Separator = 90,
	/// The border color of standard clickable buttons.
	ButtonBorder = 91,
	/// The label text color of standard clickable buttons.
	ButtonText = 92,
	/// The border color of text input fields throughout Studio.
	InputFieldBorder = 93,
	/// The background color of checkbox and checked-state input fields.
	CheckedFieldBackground = 94,
	/// The border color of checkbox and checked-state input fields.
	CheckedFieldBorder = 95,
	/// The color of the check mark or indicator drawn inside a checked input
	/// field.
	CheckedFieldIndicator = 96,
	/// The background color of section header rows in Studio widgets such as the
	/// Properties window.
	HeaderSection = 97,
	/// The midlight role color from the Qt widget palette, used between the
	/// button and light shading for 3D widget effects.
	Midlight = 98,
	/// The color of the status bar shown at the bottom of Studio, if it is
	/// visible.
	StatusBar = 99,
	/// The background color of standard buttons in modal dialog boxes.
	DialogButton = 100,
	/// The label text color of standard buttons in modal dialog boxes.
	DialogButtonText = 101,
	/// The border color of standard buttons in modal dialog boxes.
	DialogButtonBorder = 102,
	/// The background color of the primary action button (such as OK or Save) in
	/// modal dialog boxes.
	DialogMainButton = 103,
	/// The label text color of the primary action button in modal dialog boxes.
	DialogMainButtonText = 104,
	/// The background color of the warning bar that appears at the top of a
	/// widget to surface important notices.
	InfoBarWarningBackground = 105,
	/// The text color of warning messages inside the info bar warning strip.
	InfoBarWarningText = 106,
	/// The background highlight color applied to the line containing the cursor
	/// in the Script Editor.
	ScriptEditorCurrentLine = 107,
	/// The color of function-call target identifiers in the Script Editor,
	/// including bare functions and indexed methods.
	ScriptMethod = 108,
	/// The color of property name identifiers in the Script Editor.
	ScriptProperty = 109,
	/// The color of the `nil` literal in the Script Editor.
	ScriptNil = 110,
	/// The color of boolean literals (`true` and `false`) in the Script Editor.
	ScriptBool = 111,
	/// The color of the `function` keyword token in the Script Editor.
	ScriptFunction = 112,
	/// The color of the `local` keyword in the Script Editor.
	ScriptLocal = 113,
	/// The color of the `self` identifier in the Script Editor.
	ScriptSelf = 114,
	/// The color of Luau-specific keywords (such as type annotation keywords) in
	/// the Script Editor.
	ScriptLuauKeyword = 115,
	/// The color of function name identifiers in the Script Editor.
	ScriptFunctionName = 116,
	/// The highlight color applied to TODO annotations in script comments.
	ScriptTodo = 117,
	/// The color of parentheses, braces, and square brackets in the Script
	/// Editor.
	ScriptBracket = 118,
	/// The color of the attribute cog icon shown in the Properties widget.
	AttributeCog = 119,
	/// The text color used inside the AI companion (AICO) overlay panel.
	AICOOverlayText = 128,
	/// The background color of buttons in the AI companion (AICO) overlay panel.
	AICOOverlayButtonBackground = 129,
	/// The background color of buttons in the AI companion (AICO) overlay panel
	/// when hovered.
	AICOOverlayButtonBackgroundHover = 130,
	/// The background color of buttons in the AI companion (AICO) overlay panel
	/// when pressed.
	AICOOverlayButtonBackgroundPressed = 131,
	/// The overlay color used to dim non-focused areas during onboarding flows.
	OnboardingCover = 132,
	/// The highlight color used to draw attention to a UI element during
	/// onboarding flows.
	OnboardingHighlight = 133,
	/// The shadow color used beneath highlighted elements during onboarding
	/// flows.
	OnboardingShadow = 134,
	/// The color of the breakpoint marker shown in the script editor gutter.
	BreakpointMarker = 136,
	/// The text color of line numbers in the diff gutter when hovered.
	DiffLineNumHover = 137,
	/// The background color of line-number cells in the diff gutter for
	/// hunk-separator rows when hovered.
	DiffLineNumSeparatorBackgroundHover = 138
};

/// Specifies the interaction state of a Roblox Studio interface element.
/// Used with `Class.StudioTheme:GetColor()` to retrieve the theme color for an
/// interface element in a particular interaction state.
enum class StudioStyleGuideModifier : uint32_t {
	/// Uses the element's default state color.
	Default = 0,
	/// Uses the color for a selected element.
	Selected = 1,
	/// Uses the color for a pressed element.
	Pressed = 2,
	/// Uses the color for a disabled element.
	Disabled = 3,
	/// Uses the color for an element under the pointer.
	Hover = 4
};

/// The Style Enum is used to set what style of supports the `Class.TrussPart`
/// has.
enum class Style : uint32_t {
	/// Truss beams contain alternating supports.
	AlternatingSupports = 0,
	/// Truss beams contain bridge style supports.
	BridgeStyleSupports = 1,
	/// Truss beams do not contain supports.
	NoSupports = 2
};

/// Describes the reason a user's subscription has expired.
/// `Enum.SubscriptionExpirationReason` describes why a subscription entered the
/// `Enum.SubscriptionState.Expired|Expired` state. It appears under the
/// `ExpirationReason` key in the `ExpirationDetails` table returned by
/// `Class.MarketplaceService:GetUserSubscriptionDetailsAsync()`.
enum class SubscriptionExpirationReason : uint32_t {
	/// The subscription product is inactive.
	ProductInactive = 0,
	/// The subscription product was deleted.
	ProductDeleted = 1,
	/// The subscriber cancelled the subscription.
	SubscriberCancelled = 2,
	/// The subscriber received a refund that ended the subscription.
	SubscriberRefunded = 3,
	/// The subscription expired because payment lapsed.
	Lapsed = 4
};

/// Describes the payment outcome for a single entry in a user's subscription
/// payment history.
/// The `SubscriptionPaymentStatus` enum describes whether a billing cycle for a
/// `Class.MarketplaceService` subscription was successfully charged or
/// subsequently refunded. It appears as the `subscriptionPaymentStatus` field on
/// each record returned by
/// `Class.MarketplaceService:GetUserSubscriptionPaymentHistoryAsync()`.
enum class SubscriptionPaymentStatus : uint32_t {
	/// Payment for the subscription has been received.
	Paid = 0,
	/// Payment for the subscription has been refunded.
	Refunded = 1
};

/// Describes the billing period for a `Class.MarketplaceService` subscription
/// product.
/// Describes the recurring billing interval of a subscription product sold
/// through `Class.MarketplaceService`. The value is returned in the
/// `SubscriptionPeriod` field of the dictionary produced by
/// `Class.MarketplaceService:GetSubscriptionProductInfoAsync()`.
enum class SubscriptionPeriod : uint32_t {
	/// The subscription renews on a monthly billing cycle.
	Month = 0
};

/// Describes the current subscription state of a user's in-experience
/// subscription product.
/// The `SubscriptionState` enum describes the current subscription state of a
/// user with respect to a specific in-experience subscription product. It is
/// returned in the `SubscriptionState` key of the table from
/// `Class.MarketplaceService:GetUserSubscriptionDetailsAsync()`, which must be
/// called from a server-side `Class.Script`. See `Enum.SubscriptionState` for the
/// lifecycle values (never subscribed, active with or without renewal, renewal
/// payment pending, and expired).
enum class SubscriptionState : uint32_t {
	/// User has never subscribed to the product.
	NeverSubscribed = 0,
	/// Subscription is active and will renew.
	SubscribedWillRenew = 1,
	/// Subscription is active and will not renew.
	SubscribedWillNotRenew = 2,
	/// Subscription is active and renewal payment is pending.
	SubscribedRenewalPaymentPending = 3,
	/// Subscription has expired.
	Expired = 4
};

/// This item is deprecated and is replaced by the `Enum.SurfaceType` enum.
/// @deprecated This item is deprecated and is replaced by the `Enum.SurfaceType` enum.
enum class SurfaceConstraint : uint32_t {
	/// No surface constraint.
	None = 0,
	/// Makes the side appear with a yellow hinge. Any part connected to this
	/// hinge will stick to the side and rotate using physics.
	Hinge = 1,
	/// Functions identically to a motor. It may have functioned differently in
	/// the past, but that functionality no longer seems to exist.
	SteppingMotor = 2,
	/// Acts the same as a Hinge, but has a grey ring around it and automatically
	/// rotates any part connected to it.
	Motor = 3
};

/// Used by `Class.SurfaceGui.SizingMode` to control the sizing behavior of a
/// `Class.SurfaceGui`.
enum class SurfaceGuiSizingMode : uint32_t {
	/// Renders with a fixed size set using `Class.SurfaceGui.CanvasSize`.
	FixedSize = 0,
	/// Renders with a variable size based on `Class.SurfaceGui.PixelsPerStud` and
	/// the SurfaceGui's size in studs.
	PixelsPerStud = 1
};

/// Used to determine how a surface should be displayed on a part and how
/// automatic surface joints should behave.
/// @deprecated **SurfaceType** joining is deprecated, leaving only visual changes on the affected `Class.Part`. It should not be used for future work.
enum class SurfaceType : uint32_t {
	/// Adds no details on the surface.
	Smooth = 0,
	/// Adds an "X" pattern across the surface.
	Glue = 1,
	/// Adds an "X" pattern across the surface.
	Weld = 2,
	/// Adds square studs across the surface.
	Studs = 3,
	/// Adds square holes across the surface where studs would be.
	Inlet = 4,
	/// Adds a checker pattern to the surface using studs and inlets.
	Universal = 5,
	/// Adds a yellow hinge to the surface. Parts touching it stick to the
	/// surface, allowing for rotations using physics. This should not be used for
	/// future work and existing instances should be replaced with a
	/// `Class.HingeConstraint`.
	Hinge = 6,
	/// Functioned identically to a hinge with the addition of a grey ring.
	Motor = 7,
	/// Functioned identically to a motor. It may have functioned differently in
	/// the past, but that functionality is non-existent.
	SteppingMotor = 8,
	/// Previously similar to **Smooth** with outlines but no longer relevant
	/// since outlines have been removed.
	SmoothNoOutlines = 10
};

/// The direction that a user is swiping on their touch screen.
/// The SwipeDirection Enum represents the direction in which a user swipes on a
/// `Class.UserInputService.TouchEnabled` device.
/// 
/// The `Class.GuiObject.TouchSwipe` and `Class.UserInputService.TouchSwipe`
/// events pass this enum as an argument.
enum class SwipeDirection : uint32_t {
	/// The user swiped right.
	Right = 0,
	/// The user swiped left.
	Left = 1,
	/// The user swiped up.
	Up = 2,
	/// The user swiped down.
	Down = 3,
	/// The user did not swipe in a certain direction.
	None = 4
};

/// Used by `Class.UITableLayout.MajorAxis` to decide whether direct siblings are
/// rows or columns.
/// Used to indicate whether the direct siblings of a `Class.UITableLayout` are
/// considered the rows or the columns. The children of the direct siblings are
/// the columns or rows, respectively.
enum class TableMajorAxis : uint32_t {
	/// The direct siblings are considered rows.
	RowMajor = 0,
	/// The direct siblings are considered columns.
	ColumnMajor = 1
};

/// Indicates the outcome of a Team Create place-upload attempt, as reported by
/// the `TeamCreateErrorStatus` event on `TeamCreatePublishService`.
/// `TeamCreateErrorState` is fired as the `result` argument of
/// `TeamCreatePublishService.TeamCreateErrorStatus` after each Team Create
/// auto-save or publish attempt. Studio clients use this value to update status
/// indicators and surface warnings or errors to collaborators. Values reflect the
/// outcome of serializing the place and comparing its size against the configured
/// thresholds.
enum class TeamCreateErrorState : uint32_t {
	/// The serialized place size has exceeded the hard upload limit and the save
	/// was aborted.
	PlaceSizeTooLarge = 0,
	/// The serialized place size has reached or exceeded the public warning
	/// threshold but is still below the hard upload limit.
	PlaceSizeApproachingLimit = 1,
	/// Repeated upload attempts have failed due to HTTP or network errors, and
	/// the consecutive-failure count has reached the configured warning
	/// threshold.
	PlaceUploadFailing = 2,
	/// The place serialized and uploaded successfully with no size-limit issues
	/// detected.
	NoError = 3
};

/// Enum used by `Class.Lighting.Technology` to represent the different lighting
/// systems available for rendering the 3D world.
/// This enum represents the different lighting systems available for rendering
/// the 3D world. It is used by the `Class.Lighting.Technology` property.
/// 
/// Note that `Class.Lighting.Technology` has been superseded by
/// `Class.Lighting.LightingStyle|LightingStyle` which determines the artistic
/// intent behind lighting, and
/// `Class.Lighting.PrioritizeLightingQuality|PrioritizeLightingQuality` which
/// indicates whether you prefer lighting/shading quality or view distance to
/// scale down first.
enum class Technology : uint32_t {
	/// @deprecated This option is deprecated and cannot be selected in Studio.
	Legacy = 0,
	/// Uses a 4&times;4&times;4 voxel map for light and shadow calculation.
	Voxel = 1,
	/// Simulates the removed legacy technology and is now deprecated. To achieve
	/// a similar look, use `Voxel` Lighting and add a `Class.ColorGradingEffect`
	/// post‑processing effect set to the `Enum.TonemapperPreset|Retro` preset.
	/// @deprecated This option is deprecated and cannot be selected in Studio.
	Compatibility = 2,
	/// Features shadow mapping that produces more realistic and crisp shadows
	/// from sunlight or directional light sources.
	ShadowMap = 3,
	/// Features the most advanced technology for high-fidelity lighting and
	/// shadows.
	Future = 4,
	/// @deprecated This option is deprecated and cannot be selected in Studio.
	Unified = 5
};

/// Identifies which `Class.TeleportService` API method initiated a teleport.
/// `TeleportMethod` identifies the `Class.TeleportService` call that initiated a
/// given teleport. Each enum item corresponds to a specific public
/// `Class.TeleportService` method.
enum class TeleportMethod : uint32_t {
	/// Teleport was initiated by `Class.TeleportService:TeleportToSpawnByName()`,
	/// which sends a player to a named `Class.SpawnLocation` in a place.
	TeleportToSpawnByName = 0,
	/// Teleport was initiated by
	/// `Class.TeleportService:TeleportToPlaceInstance()`, which sends a player to
	/// a specific running server instance identified by its `instanceId`.
	TeleportToPlaceInstance = 1,
	/// Teleport was initiated by
	/// `Class.TeleportService:TeleportToPrivateServer()`, a deprecated method
	/// that sends players to a reserved server using a legacy access code.
	TeleportToPrivateServer = 2,
	/// Teleport was initiated by `Class.TeleportService:TeleportPartyAsync()`,
	/// which sends a group of players to a place together.
	TeleportPartyAsync = 3,
	/// Teleport was initiated to a VIP (creator-owned private) server; the engine
	/// upgrades the method tag to this value when VIP server credentials are
	/// present at teleport time.
	TeleportToVIPServer = 4,
	/// Teleport was initiated by back-navigation, returning a player to a
	/// specific prior place instance.
	TeleportToInstanceBack = 5,
	/// Fallback value used when the teleport method cannot be determined.
	TeleportUnknown = 6
};

/// Describes the result of a teleport.
enum class TeleportResult : uint32_t {
	/// The teleport was successful.
	Success = 0,
	/// The teleport failed for an unknown reason.
	Failure = 1,
	/// The game that this player attempted to teleport to could not be found.
	GameNotFound = 2,
	/// The game that this player attempted to teleport to has ended.
	GameEnded = 3,
	/// The game that this player attempted to teleport to is full.
	GameFull = 4,
	/// The player is not authorized to complete this teleport.
	Unauthorized = 5,
	/// Too many teleport requests have been made recently.
	Flooded = 6,
	/// The player is currently being teleported.
	IsTeleporting = 7
};

/// Determines the current teleportation state of a player.
/// Represents each stage of a player teleport as reported by the
/// `Class.Player.OnTeleport` event. Scripts connect to `Class.Player.OnTeleport`
/// to observe state changes throughout the teleport lifecycle and react
/// accordingly — for example, showing a loading screen when `InProgress` fires or
/// displaying an error when `Failed` fires.
enum class TeleportState : uint32_t {
	/// The server has requested that the client teleport.
	RequestedFromServer = 0,
	/// The client has started attempting to teleport.
	Started = 1,
	/// The client is waiting for the server to respond to the teleport request.
	WaitingForServer = 2,
	/// The teleport failed.
	Failed = 3,
	/// The teleport is currently in progress. The player usually disconnects and
	/// teleports to the destination after this.
	InProgress = 4
};

/// Determines the type of teleport destination for a `Class.TeleportService`
/// teleport call.
enum class TeleportType : uint32_t {
	/// The teleport destination is a place (no specific instance).
	ToPlace = 0,
	/// The teleport destination is an instance of a place.
	ToInstance = 1,
	/// The destination of the teleport is a reserved server (a place instance
	/// that is reserved for a select group of players).
	ToReservedServer = 2,
	/// The teleport destination is a VIP (player-owned private) server instance.
	ToVIPServer = 3,
	/// The teleport destination is a previously-visited place instance (back
	/// navigation).
	ToInstanceBack = 4
};

/// Describes how terrain in a place was originally created or last substantially
/// modified.
/// Describes how the terrain in a place was originally created or last
/// substantially modified. This value is stored on the `AcquisitionMethod`
/// property of `Class.Terrain` and is updated automatically by the engine
/// whenever terrain changes.
enum class TerrainAcquisitionMethod : uint32_t {
	/// No terrain is present, or terrain acquisition method has not been
	/// recorded.
	None = 0,
	/// Terrain was deserialized from a place file that predates
	/// acquisition-method tracking.
	Legacy = 1,
	/// Terrain was loaded from a Studio place template.
	Template = 2,
	/// Terrain was created using the Studio terrain generator.
	Generate = 3,
	/// Terrain was created by importing a heightmap or colormap image via the
	/// Studio terrain importer.
	Import = 4,
	/// Terrain was created by converting legacy smooth terrain from an older
	/// place format.
	Convert = 5,
	/// Terrain was created or last modified using the Studio terrain editor's Add
	/// tool.
	EditAddTool = 6,
	/// Terrain was created or last modified using the Studio terrain editor's Sea
	/// Level tool.
	EditSeaLevelTool = 7,
	/// Terrain was created or last modified using the Studio terrain editor's
	/// Replace tool.
	EditReplaceTool = 8,
	/// Terrain was created or last modified using the Studio terrain editor's
	/// Fill region tool.
	RegionFillTool = 9,
	/// Terrain was created or last modified by pasting a previously copied
	/// terrain region in the Studio terrain editor.
	RegionPasteTool = 10,
	/// Terrain was created or modified by an untracked method, such as a
	/// third-party plugin.
	Other = 11
};

/// Identifies which face direction of a terrain voxel a `Class.TerrainDetail`
/// object overrides.
/// Identifies which face direction of a terrain voxel a `Class.TerrainDetail`
/// object targets. Terrain renders its top (+Y), side (horizontal), and bottom
/// (-Y) faces independently; this enum lets each `Class.TerrainDetail` child of a
/// `Class.MaterialVariant` declare which of those three surfaces it overrides.
enum class TerrainFace : uint32_t {
	/// The top (+Y) face of a terrain voxel.
	Top = 0,
	/// The horizontal (side) faces of a terrain voxel, perpendicular to the Y
	/// axis.
	Side = 1,
	/// The bottom (-Y) face of a terrain voxel.
	Bottom = 2
};

/// Indicates the status of a `Class.TextChatMessage`.
/// Indicates the status of a `Class.TextChatMessage`. The
/// `Class.TextChatMessage.Status` property is set by
/// `Class.TextChannel:SendAsync()` to report the outcome of an attempted send. A
/// status of `Enum.TextChatMessageStatus.Success` means the message passed all
/// server-side checks; any other value identifies the reason the message was
/// blocked or has not yet completed delivery.
enum class TextChatMessageStatus : uint32_t {
	/// Generic failed status for any other `Class.TextChannel:SendAsync()`
	/// failures.
	Unknown = 1,
	/// Message has no issues.
	Success = 2,
	/// Message is sending.
	Sending = 3,
	/// Text filter failed to process the message.
	TextFilterFailed = 4,
	/// Message is from a user sending messages too frequently.
	Floodchecked = 5,
	/// Message can't be sent because of the user's chat privacy settings.
	InvalidPrivacySettings = 6,
	/// Message's `Class.TextSource` is either not in the intended
	/// `Class.TextChannel` or `Class.TextSource.CanSend` is `false`.
	InvalidTextChannelPermissions = 7,
	/// Message is too long.
	MessageTooLong = 8,
	/// Message can't be sent because the user has an active moderation timeout on
	/// chat.
	ModerationTimeout = 9
};

/// Controls the base text rendering direction for `Class.TextLabel`,
/// `Class.TextButton`, and `Class.TextBox` instances.
/// Controls the base paragraph direction used when laying out text. Used by
/// `Class.TextLabel.TextDirection`, `Class.TextButton.TextDirection`, and
/// `Class.TextBox.TextDirection`, which default to `Enum.TextDirection.Auto`.
/// 
/// `Enum.TextDirection.Auto` lets the Unicode Bidirectional Algorithm determine
/// the paragraph's base direction from the first strong directional character.
/// `Enum.TextDirection.LeftToRight` or `Enum.TextDirection.RightToLeft` pins the
/// base direction regardless of content, which is useful for mixed-script strings
/// where automatic detection would choose the wrong base.
enum class TextDirection : uint32_t {
	/// Automatically determines text direction from the first strong directional
	/// character using the Unicode Bidirectional Algorithm.
	Auto = 0,
	/// Forces the paragraph base direction to left-to-right regardless of the
	/// text content.
	LeftToRight = 1,
	/// Forces the paragraph base direction to right-to-left regardless of the
	/// text content.
	RightToLeft = 2
};

/// Indicates whether text submitted to `Class.TextService:FilterStringAsync()` or
/// `Class.TextService:FilterAndTranslateStringAsync()` is intended for a public
/// or private audience, controlling the strictness of the text filtering backend.
enum class TextFilterContext : uint32_t {
	/// Indicates the string will be visible to all players or a broad public
	/// audience, applying the strictest level of text filtering.
	PublicChat = 1,
	/// Indicates the string is part of a private conversation between specific
	/// users, applying filtering appropriate for one-to-one or small-group
	/// exchanges.
	PrivateChat = 2
};

/// Controls the truncation of text when using the `TextTruncate` property.
enum class TextTruncate : uint32_t {
	/// Text is not truncated.
	None = 0,
	/// Text is truncated at the end of the text; extra graphemes that cannot fit
	/// into the space are replaced with `...`. Word boundaries are respected if
	/// possible.
	/// 
	/// For example, if the control is between -> and <- like so:
	/// 
	/// `->Long text is truncated at the en<-d of the last complete word`
	/// 
	/// The text will be:
	/// 
	/// `Long text is truncated at the...`
	AtEnd = 1,
	/// If the end of the line occurs in the middle of a word, the text is
	/// truncated inside of that word. Extra graphemes that cannot fit into the
	/// space are replaced with `...`.
	/// 
	/// For example, if the control is between -> and <- like so:
	/// 
	/// `->Long text is truncated at the en<-d of the last complete word`
	/// 
	/// The text will be:
	/// 
	/// `Long text is truncated at the en...`
	SplitWord = 2
};

/// Determines horizontal alignment of text.
/// Determines horizontal alignment of text.
/// 
/// Used by `Class.TextLabel.TextXAlignment|TextLabel`,
/// `Class.TextButton.TextXAlignment|TextButton`, and
/// `Class.TextBox.TextXAlignment|TextBox`.
enum class TextXAlignment : uint32_t {
	/// Alignment starts at the left side of the GUI object.
	Left = 0,
	/// Alignment starts at the right side of the GUI object.
	Right = 1,
	/// Aligned starts at the center of the GUI object and spreads equally left
	/// and right.
	Center = 2
};

/// Determines vertical alignment of text.
/// Determines vertical alignment of text.
/// 
/// Used by `Class.TextLabel.TextYAlignment|TextLabel`,
/// `Class.TextButton.TextYAlignment|TextButton`, and
/// `Class.TextBox.TextYAlignment|TextBox`.
enum class TextYAlignment : uint32_t {
	/// Alignment starts at the top of the GUI object.
	Top = 0,
	/// Aligned starts at the center of the GUI object and spreads equally toward
	/// the top and bottom.
	Center = 1,
	/// Alignment starts at the bottom of the GUI object.
	Bottom = 2
};

/// Describes how the texture of a `Class.Trail` or `Class.Beam` behaves.
enum class TextureMode : uint32_t {
	/// For a `Class.Trail`, the texture will stretch out based on the lifetime of
	/// the trail, and shrink inwards if the trail's attachments stop moving.
	/// 
	/// For a `Class.Beam`, the texture will repeat
	/// `Class.Beam.TextureLength|TextureLength` times across the beam's overall
	/// length. See [here](https://create.roblox.com/docs/effects/beams#texture-lengthmode) for
	/// details.
	Stretch = 0,
	/// For a `Class.Trail`, the texture will be tiled as the length of the trail
	/// changes, but the textures will remain stationary relative to their
	/// attachments.
	/// 
	/// For a `Class.Beam`, the texture repetitions will equal the beam's overall
	/// length (in&nbsp;studs) divided by its
	/// `Class.Beam.TextureLength|TextureLength`. See
	/// [here](https://create.roblox.com/docs/effects/beams#texture-lengthmode) for details.
	Wrap = 1,
	/// For a `Class.Trail`, the texture will be rolled out as the attachments
	/// move, and they will remain in place until their lifetime is met. This
	/// setting is ideal for trail textures that should appear "stamped" where
	/// rendered, such as paw prints or tire tracks.
	/// 
	/// This value is not supported for `Class.Beam` and therefore behaves
	/// identically to **Wrap**.
	Static = 2
};

/// Used to get memory information about textures.
enum class TextureQueryType : uint32_t {
	/// Texture memory for objects other than `Class.Humanoid`.
	NonHumanoid = 0,
	/// Unreferenced texture memory for objects other than `Class.Humanoid`.
	NonHumanoidOrphaned = 1,
	/// Texture memory for `Class.Humanoid`.
	Humanoid = 2,
	/// Unreferenced texture memory for `Class.Humanoid`.
	HumanoidOrphaned = 3
};

/// Thread pooling scheme for the task scheduler.
/// Controls the thread pooling scheme used by `Class.TaskScheduler`. The selected
/// value determines how many worker threads the task scheduler allocates for
/// background work. `Class.TaskScheduler.ThreadPoolConfig` defaults to `Auto`.
/// 
/// The `PerCore` variants scale the thread count with the number of physical CPU
/// cores reported by the operating system. The `Threads` variants use an absolute
/// count regardless of hardware. `Auto` lets the scheduler choose internally.
enum class ThreadPoolConfig : uint32_t {
	/// Let task scheduler make a decision internally.
	Auto = 0,
	/// Utilize 1 worker thread, ignore the physical CPU core count.
	Threads1 = 1,
	/// Utilize 2 worker threads, ignore the physical CPU core count.
	Threads2 = 2,
	/// Utilize 3 worker threads, ignore the physical CPU core count.
	Threads3 = 3,
	/// Utilize 4 worker threads, ignore the physical CPU core count.
	Threads4 = 4,
	/// Utilize 8 worker threads, ignore the physical CPU core count.
	Threads8 = 8,
	/// Utilize 16 worker threads, ignore the physical CPU core count.
	Threads16 = 16,
	/// Utilize 1 worker thread per available physical CPU core.
	PerCore1 = 101,
	/// Utilize 2 worker threads per available physical CPU core.
	PerCore2 = 102,
	/// Utilize 3 worker threads per available physical CPU core.
	PerCore3 = 103,
	/// Utilize 4 worker threads per available physical CPU core.
	PerCore4 = 104
};

/// Amount of throttling to apply.
/// Controls the amount of throttling under the `Class.HttpRbxApiService`.
enum class ThrottlingPriority : uint32_t {
	/// Standard throttling.
	Default = 0,
	/// Less throttling if on the server.
	ElevatedOnServer = 1,
	/// No throttling, absolutely no exceptions.
	Extreme = 2
};

/// Describes the pixel resolution of a user thumbnail returned by
/// `Class.Players:GetUserThumbnailAsync()`.
/// Describes the resolution of a user thumbnail being returned by
/// GetUserThumbnailAsync.
enum class ThumbnailSize : uint32_t {
	/// Thumbnail resolution is 48 pixels x 48 pixels.
	Size48x48 = 0,
	/// Thumbnail resolution is 180 pixels x 180 pixels.
	Size180x180 = 1,
	/// Thumbnail resolution is 420 pixels x 420 pixels.
	Size420x420 = 2,
	/// Thumbnail resolution is 60 pixels x 60 pixels.
	Size60x60 = 3,
	/// Thumbnail resolution is 100 pixels x 100 pixels.
	Size100x100 = 4,
	/// Thumbnail resolution is 150 pixels x 150 pixels.
	Size150x150 = 5,
	/// Thumbnail resolution is 352 pixels x 352 pixels.
	Size352x352 = 6
};

/// Describes the type of user thumbnail returned by
/// `Class.Players:GetUserThumbnailAsync()`.
/// Describes the type of user thumbnail that should be returned by
/// GetUserThumbnailAsync.
enum class ThumbnailType : uint32_t {
	/// The returned thumbnail shows just the headshot (head and up) of the user's
	/// avatar.
	HeadShot = 0,
	/// The returned thumbnail shows the bust (chest up) of the user's avatar.
	AvatarBust = 1,
	/// The returned thumbnail shows the entire body of the user's avatar.
	AvatarThumbnail = 2
};

/// Controls the precision and performance trade-off used when sampling the
/// current time.
/// Controls the precision and performance trade-off used when sampling the
/// current time via `Class.DebugSettings.TickCountPreciseOverride`.
enum class TickCountSampleMethod : uint32_t {
	/// Compute time using a faster, but less precise method.
	Fast = 0,
	/// Dynamically decide between using `Fast` and `Precise` depending on the
	/// value of `DebugSettings.TickCountPreciseOverride`.
	Benchmark = 1,
	/// Compute time using a precise method.
	Precise = 2
};

/// Controls which tone-mapping algorithm `Class.ColorGradingEffect` applies to
/// the rendered scene.
/// Controls which tone-mapping algorithm `Class.ColorGradingEffect` applies to
/// the rendered scene. Assign one of these values to
/// `Class.ColorGradingEffect.TonemapperPreset` to choose between the current
/// Roblox visual style and the legacy pre-2019 appearance.
enum class TonemapperPreset : uint32_t {
	/// Sets the tone mapper to use the post‑2019 Roblox appearance which provides
	/// vivid colors and high contrasts.
	Default = 0,
	/// Sets the tone mapper to imitate the pre‑2019 Roblox appearance. Colors
	/// look less saturated and there is less contrast between them.
	Retro = 1
};

/// Sets where the object is on the side of its parent.
enum class TopBottom : uint32_t {
	/// The object is above its parent.
	Top = 0,
	/// The object is centered around the center of its parent.
	Center = 1,
	/// The object is below its parent.
	Bottom = 2
};

/// Changes the touch camera movement mode currently in-use by the client using a
/// TouchEnabled device.
enum class TouchCameraMovementMode : uint32_t {
	/// Default mode used by Roblox core scripts.
	Default = 0,
	/// Default mode used by Roblox core scripts.
	Classic = 1,
	/// Camera moves with the subject and rotates to keep the subject in the
	/// center.
	Follow = 2,
	/// The camera locks at a certain angle. Once it's set, players can rotate the
	/// camera, but it will always maintain a consistent angle to the ground.
	Orbital = 3
};

/// The movement mode used by a client with a TouchEnabled device.
/// The TouchMovementMode Enum is used to change the movement controller on Roblox
/// Mobile.
enum class TouchMovementMode : uint32_t {
	/// The default movement controller.
	Default = 0,
	/// Change the movement controller to the classic thumbstick.
	Thumbstick = 1,
	/// Change the movement controller to the DPad.
	DPad = 2,
	/// Change the movement controller to the thumbpad.
	Thumbpad = 3,
	/// Change the movement controller to click to move.
	ClickToMove = 4,
	/// Change the movement controller to the dynamic thumbstick.
	DynamicThumbstick = 5
};

/// Status and error codes reported by the face-tracking subsystem through the
/// `TrackerError` events on `RTAnimationTracker` and `FaceAnimatorService`.
/// Passed to `TrackerError` handlers on `RTAnimationTracker` and
/// `FaceAnimatorService` to indicate why face tracking failed or stopped.
/// `Enum.TrackerError.Ok` is a clean state; other values cover initialization,
/// service availability, video input, or audio input failures.
enum class TrackerError : uint32_t {
	/// No error; the tracker is operating normally.
	Ok = 0,
	/// A required engine service was unavailable when the tracker attempted to
	/// connect.
	NoService = 1,
	/// The tracker failed to create or initialize its tracking session.
	InitFailed = 2,
	/// Video input is unavailable because no camera device was found or the
	/// camera was disconnected.
	NoVideo = 3,
	/// A generic video error occurred during face-tracking camera input
	/// processing.
	VideoError = 4,
	/// The user denied camera permission required for video-based face tracking.
	VideoNoPermission = 5,
	/// Video-based face tracking is not supported on this device or platform.
	VideoUnsupported = 6,
	/// Audio input is unavailable because `SoundService` could not be found or
	/// connected.
	NoAudio = 7,
	/// A generic audio error occurred during face-tracking audio input
	/// processing.
	AudioError = 8,
	/// The user denied microphone permission required for audio-based face
	/// tracking.
	AudioNoPermission = 9,
	/// The current device or platform does not support face tracking.
	UnsupportedDevice = 10
};

/// Controls how the face-tracking pipeline extrapolates animation data between
/// camera frames on the `TrackerLodController`.
/// Controls how the face-tracking pipeline extrapolates animation data between
/// camera frames. This mode is set via `VideoExtrapolationMode` on
/// `TrackerLodController` and determines whether the tracker infers intermediate
/// facial poses and FACS (Facial Action Coding System) blend-shape values when
/// the camera delivers frames at a lower rate than the animation update rate.
enum class TrackerExtrapolationFlagMode : uint32_t {
	/// Disables all extrapolation so that facial animation updates only when a
	/// new camera frame is processed.
	ForceDisabled = 0,
	/// Extrapolates both FACS blend-shape values and head-pose data between
	/// camera frames.
	ExtrapolateFacsAndPose = 1,
	/// Extrapolates only FACS blend-shape values between camera frames, leaving
	/// head-pose data unchanged.
	ExtrapolateFacsOnly = 2,
	/// Lets the `TrackerLodController` automatically select the extrapolation
	/// strategy based on current performance conditions.
	Auto = 3
};

/// Describes the current state of face tracking for the device camera used by
/// `FaceAnimatorService`.
/// Describes the current state of face tracking as reported by the device camera
/// tracker. Surfaced through `FaceTrackingStatusEnum`, which defaults to
/// `Enum.TrackerFaceTrackingStatus.FaceTrackingUninitialized` until the tracker
/// starts running.
enum class TrackerFaceTrackingStatus : uint32_t {
	/// Face tracking is active and a face is being tracked successfully.
	FaceTrackingSuccess = 0,
	/// The tracker is running but no face has been detected in the camera feed.
	FaceTrackingNoFaceFound = 1,
	/// The face tracking state is indeterminate or could not be mapped to a known
	/// status.
	FaceTrackingUnknown = 2,
	/// Face tracking was previously active but the face has been lost from the
	/// camera feed.
	FaceTrackingLost = 3,
	/// Face tracking is active but has encountered an error that prevents
	/// reliable pose estimation.
	FaceTrackingHasTrackingError = 4,
	/// A face is detected but is partially or fully occluded, reducing tracking
	/// reliability.
	FaceTrackingIsOccluded = 5,
	/// Face tracking has not yet been initialized; this is the default state
	/// before the tracker starts.
	FaceTrackingUninitialized = 6
};

/// Controls whether a real-time face-tracker feature (audio or video) is forced
/// on, forced off, or left to the automatic LOD system.
/// Type of the `AudioMode` and `VideoMode` properties on `TrackerLodController`.
/// Each defaults to `Enum.TrackerLodFlagMode.Auto`. Lets a script force a tracker
/// pipeline (audio-based or video-based facial animation) on or off, or leave the
/// decision to the automatic LOD system.
enum class TrackerLodFlagMode : uint32_t {
	/// Forces the associated tracker feature disabled, regardless of the current
	/// LOD state.
	ForceFalse = 0,
	/// Forces the associated tracker feature enabled, regardless of the current
	/// LOD state.
	ForceTrue = 1,
	/// Defers the enabled/disabled decision to the automatic LOD system.
	Auto = 2
};

/// Controls how the video LOD level is selected for the face-tracking pipeline in
/// `TrackerLodController`.
/// Specifies whether the face-tracking video LOD level is chosen automatically by
/// the performance-adaptive LOD controller or forced to a fixed level. Used by
/// `VideoLodMode`, which defaults to `Enum.TrackerLodValueMode.Auto`.
enum class TrackerLodValueMode : uint32_t {
	/// Forces the face-tracking video pipeline to LOD level 0, the faster but
	/// less accurate processing mode.
	Force0 = 0,
	/// Forces the face-tracking video pipeline to LOD level 1, the more accurate
	/// but more resource-intensive processing mode.
	Force1 = 1,
	/// The LOD controller selects the video LOD level automatically based on
	/// real-time performance metrics.
	Auto = 2
};

/// Describes the combination of input sources an `RTAnimationTracker` is
/// currently using to drive animation.
/// Describes what combination of input inference modes an `RTAnimationTracker` is
/// currently using. The value is read-only and reflects whether audio-to-curve
/// (a2c) inference, video-to-curve (v2c) inference, both, or neither is active at
/// a given moment.
enum class TrackerMode : uint32_t {
	/// No tracking inference is active; the tracker is idle or has not
	/// successfully started.
	None = 0,
	/// Only audio-to-curve (lipsync) inference is active; no camera-based facial
	/// tracking is running.
	Audio = 1,
	/// Only video-to-curve facial tracking is active; audio-based lipsync
	/// inference is not running.
	Video = 2,
	/// Both audio-to-curve lipsync inference and video-to-curve facial tracking
	/// are active simultaneously.
	AudioVideo = 3
};

/// Indicates the type of prompt fired by the face tracker when a runtime
/// condition requires user attention.
/// Enumerates the categories of prompt events raised by `RTAnimationTracker` and
/// `FaceAnimatorService` via their `TrackerPrompt` events. Each value describes a
/// distinct condition that the face-tracking system wants to surface to
/// experience code so that the experience can react — for example, by displaying
/// UI guidance to the user.
enum class TrackerPromptEvent : uint32_t {
	/// The LOD controller has determined that device performance is insufficient
	/// to sustain camera-based face tracking and recommends disabling camera
	/// input.
	LODCameraRecommendDisable = 0
};

/// Specifies the type of motion tracking that an `RTAnimationTracker` performs.
/// `TrackerType` controls which tracking modality the `RTAnimationTracker` uses
/// to generate real-time animation data. Changing the `TrackerType` property
/// shuts down the current tracking engine and reinitializes with the newly
/// selected type.
enum class TrackerType : uint32_t {
	/// No tracking type is selected; the tracking engine does not initialize, and
	/// attempting to start tracking with this type set raises
	/// `TrackerError.UnsupportedDevice`.
	None = 0,
	/// Enables face tracking from a connected video device (and optionally audio)
	/// to produce FACS blendshape weights and head-orientation data each step.
	Face = 1,
	/// Reserved for upper-body motion tracking. Setting this type raises
	/// `TrackerError.UnsupportedDevice` on initialization.
	UpperBody = 2
};

/// A three-state boolean enumeration used by `Class.PolicyService` to represent a
/// value that is explicitly `True`, explicitly `False`, or not yet resolved
/// (`Unknown`).
/// A three-state boolean that extends a standard boolean with
/// `Enum.TriStateBoolean.Unknown` for values not yet determined. Used by
/// `Class.PolicyService` for region-specific platform states that may be unknown
/// before policy queries complete. Defaults to `Enum.TriStateBoolean.Unknown`
/// until explicitly set.
enum class TriStateBoolean : uint32_t {
	/// Indicates the condition has not yet been determined or resolved; the
	/// default value.
	Unknown = 0,
	/// Indicates the condition is explicitly true.
	True = 1,
	/// Indicates the condition is explicitly false.
	False = 2
};

/// The completion status of a `Class.GuiObject` tween function.
/// Describes the completion status of a `Class.GuiObject` tween function.
/// 
/// Passed as an argument to the callback function provided to
/// `Class.GuiObject:TweenPosition()`, `Class.GuiObject:TweenSize()`, and
/// `Class.GuiObject:TweenSizeAndPosition()`.
/// 
/// Not to be confused for `Enum.PlaybackState` which is used with
/// `Class.TweenService`.
enum class TweenStatus : uint32_t {
	/// The tween was cancelled before completion.
	Canceled = 0,
	/// The Tween has successfully completed.
	Completed = 1
};

/// Used to determine what UI elements should be captured with
/// `Class.CaptureService`.
/// Controls which UI layers are composited into screenshots and video captures
/// taken by `Class.CaptureService`. When `Enum.UICaptureMode.All`, both
/// `Class.CoreGui` and `Class.PlayerGui` elements are rendered into the output.
/// When `Enum.UICaptureMode.None`, no UI is included and the capture shows only
/// the 3D scene.
enum class UICaptureMode : uint32_t {
	/// Capture all UI elements.
	All = 0,
	/// Capture no UI elements.
	None = 1
};

/// Used with `Class.UIDragDetector` to determine bounding behavior of the dragged
/// UI object when `Class.UIDragDetector.BoundingUI` is set.
enum class UIDragDetectorBoundingBehavior : uint32_t {
	/// Mimics **EntireObject** behavior for a UI object that's entirely contained
	/// by the `Class.UIDragDetector.BoundingUI|BoundingUI`, or else **HitPoint**
	/// for a UI object that's partially outside the
	/// `Class.UIDragDetector.BoundingUI|BoundingUI`.
	Automatic = 0,
	/// Bounds the entire dragged UI object within the
	/// `Class.UIDragDetector.BoundingUI|BoundingUI`.
	EntireObject = 1,
	/// Bounds the dragged UI only by the exact hit/grab point and its respective
	/// position after translation/rotation.
	HitPoint = 2
};

/// Used with `Class.DragDetector` to set the paradigm which defines the
/// relativity of inputs/outputs from a custom drag function.
/// Used with `Class.DragDetector` to set the paradigm which defines the
/// relativity of inputs/outputs from a custom drag function registered through
/// `Class.UIDragDetector:SetDragStyleFunction()|SetDragStyleFunction()` or
/// `Class.UIDragDetector:AddConstraintFunction()|AddConstraintFunction()`.
enum class UIDragDetectorDragRelativity : uint32_t {
	/// Designates the input and return values as the absolute target
	/// position/rotation in the space defined by
	/// `Class.UIDragDetector.DragSpace|DragSpace`.
	Absolute = 0,
	/// Designates the input and return values as the change from the current
	/// position/rotation in the space defined by
	/// `Class.UIDragDetector.DragSpace|DragSpace`.
	Relative = 1
};

/// Used with `Class.DragDetector` to set the paradigm which defines the space of
/// inputs/outputs from a custom drag function.
/// Used with `Class.DragDetector` to set the paradigm which defines the space of
/// inputs/outputs from a custom drag function registered through
/// `Class.UIDragDetector:SetDragStyleFunction()|SetDragStyleFunction()` or
/// `Class.UIDragDetector:AddConstraintFunction()|AddConstraintFunction()`.
enum class UIDragDetectorDragSpace : uint32_t {
	/// Designates the input and return values' space as the local space of the
	/// detector's parent `Class.GuiObject`.
	Parent = 0,
	/// Designates the input and return values' space as that of the
	/// `Class.LayerCollector`.
	LayerCollector = 1,
	/// Designates the input and return values' space as that of the
	/// `Class.UIDragDetector.ReferenceUIInstance|ReferenceUIInstance`. For
	/// `Class.UIDragDetector.DragRelativity|DragRelativity` and
	/// `Class.UIDragDetector.DragUDim2|DragUDim2` purposes, the `(0, 0)` origin
	/// is the absolute center position of the
	/// `Class.UIDragDetector.ReferenceUIInstance|ReferenceUIInstance`.
	/// 
	/// If `Class.UIDragDetector.ReferenceUIInstance|ReferenceUIInstance` is not
	/// `nil`, this will behave the same as **Parent**.
	Reference = 2
};

/// Used with `Class.UIDragDetector` as the paradigm to generate proposed motion,
/// given a stream of input position vectors.
enum class UIDragDetectorDragStyle : uint32_t {
	/// 2D motion in the plane of the `Class.LayerCollector`.
	TranslatePlane = 0,
	/// 1D motion along the detector's `Class.UIDragDetector.DragAxis|DragAxis`.
	TranslateLine = 1,
	/// By default, rotation about the absolute center position of the detector's
	/// parent `Class.GuiObject`. If
	/// `Class.UIDragDetector.ReferenceUIInstance|ReferenceUIInstance` is set,
	/// rotation happens about that instance's absolute center position.
	Rotate = 2,
	/// Calculates desired motion via a custom function provided through
	/// `Class.UIDragDetector:SetDragStyleFunction()|SetDragStyleFunction()`.
	Scriptable = 3
};

/// Describes how the clicked `Class.GuiObject` will be treated once the desired
/// motion has been calculated.
enum class UIDragDetectorResponseStyle : uint32_t {
	/// Move by the `Datatype.UDim.Offset|Offset` values of the detector's
	/// parent's `Class.GuiObject.Position` value.
	Offset = 0,
	/// Move by the `Datatype.UDim.Scale|Scale` values of the detector's parent's
	/// `Class.GuiObject.Position` value.
	Scale = 1,
	/// The UI element will not move at all, but the `Datatype.UDim.Offset|Offset`
	/// values of the detector's `Class.UIDragDetector.DragUDim2|DragUDim2` will
	/// still be updated and the detector's events will still fire, allowing you
	/// to respond to drag manipulation however you'd like.
	CustomOffset = 2,
	/// The UI element will not move at all, but the `Datatype.UDim.Scale|Scale`
	/// values of the detector's `Class.UIDragDetector.DragUDim2|DragUDim2` will
	/// still be updated and the detector's events will still fire, allowing you
	/// to respond to drag manipulation however you'd like.
	CustomScale = 3
};

/// Used with `Class.UIDragDetector.UIDragSpeedAxisMapping` to determine the
/// **X**/**Y** dimension dragging speeds.
/// Used with `Class.UIDragDetector.UIDragSpeedAxisMapping` to determine the
/// **X**/**Y** dimension dragging speeds, based on the detector's
/// `Class.UIDragDetector.SelectionModeDragSpeed|SelectionModeDragSpeed`.
enum class UIDragSpeedAxisMapping : uint32_t {
	/// Default setting for a detector's
	/// `Class.UIDragDetector.UIDragSpeedAxisMapping|UIDragSpeedAxisMapping` where
	/// the **X** and **Y** axis speeds are based off the **X** and **Y**
	/// `Datatype.UDim.Scale|Scale`/`Datatype.UDim.Offset|Offset` values
	/// respectively.
	XY = 0,
	/// Both the **X** and **Y** axis speeds are based off the **X** axis for
	/// `Datatype.UDim.Scale|Scale`, while the `Datatype.UDim.Offset|Offset`
	/// values still apply to their respective axis.
	XX = 1,
	/// Both the **X** and **Y** axis speeds are based off the **Y** axis for
	/// `Datatype.UDim.Scale|Scale`, while the `Datatype.UDim.Offset|Offset`
	/// values still apply to their respective axis.
	YY = 2
};

/// In a `Class.UIListLayout` flex layout, specifies how to distribute extra space
/// in the parent container.
/// In a `Class.UIListLayout` flex layout, specifies how to distribute extra
/// horizontal space in a `Class.UIListLayout.HorizontalFlex|HorizontalFlex`
/// layout or vertical space in a `Class.UIListLayout.VerticalFlex|VerticalFlex`
/// layout.
enum class UIFlexAlignment : uint32_t {
	/// No flex behavior; siblings maintain their defined width or height.
	None = 0,
	/// Siblings resize to fill the entire parent container, overriding their
	/// defined width or height.
	Fill = 1,
	/// Siblings maintain their defined width or height. Equal spacing is added on
	/// both sides of each sibling.
	SpaceAround = 2,
	/// Siblings maintain their defined width or height. Equal spacing is added
	/// **between** siblings, but no additional space is added **around**
	/// siblings.
	SpaceBetween = 3,
	/// Siblings maintain their defined width or height. Equal spacing is added
	/// both **between** and **around** siblings.
	SpaceEvenly = 4
};

/// Used with `Class.UIFlexItem.FlexMode` to define how the parent
/// `Class.GuiObject` grows or shrinks.
/// Used with `Class.UIFlexItem.FlexMode` to define how the parent
/// `Class.GuiObject` grows or shrinks with available space in the container.
enum class UIFlexMode : uint32_t {
	/// The parent `Class.GuiObject` is unaffected and neither shrinks nor grows.
	None = 0,
	/// Sets an effective `1:0` grow‑shrink ratio on the parent `Class.GuiObject`.
	/// Objects set to `Grow` never shrink below their basis size, so overflow may
	/// occur if the container becomes smaller than the flex line's combined basis
	/// size.
	Grow = 1,
	/// Sets an effective `0:1` grow‑shrink ratio on the parent `Class.GuiObject`.
	/// Objects set to `Shrink` never grow above their basis size, so underflow
	/// may occur if the container becomes larger than the flex line's combined
	/// basis size.
	Shrink = 2,
	/// Sets an effective `1:1` grow‑shrink ratio on the parent `Class.GuiObject`.
	/// This setting ensures the flex line always fills the container, even if the
	/// container size changes.
	Fill = 3,
	/// Enables the `Class.UIFlexItem.GrowRatio|GrowRatio` and
	/// `Class.UIFlexItem.ShrinkRatio|ShrinkRatio` properties for the
	/// `Class.UIFlexItem`, allowing for relative growth or shrinking of the
	/// parent `Class.GuiObject` in a ratio compared to other flex objects also
	/// under control of a `Class.UIFlexItem`.
	Custom = 4
};

/// Deprecated Studio UI color theme (`Light` or `Dark`).
/// A deprecated enum that previously represented the Studio UI color theme. It
/// was exposed through the `UI_Theme` property (also deprecated) and contained
/// `Enum.UITheme.Light` and `Enum.UITheme.Dark`. The enum is retained only for
/// backward compatibility with existing plugins that reference it; it has no
/// effect. Use `Class.Studio.Theme` to read or set the current
/// `Class.StudioTheme`.
/// @deprecated This enum refers to a deprecated setting and should not be used for new work. Use `Class.Studio.Theme` (`Class.StudioTheme`) instead.
enum class UITheme : uint32_t {
	/// The light Studio UI color theme. Deprecated; has no effect.
	/// @deprecated This option is deprecated.
	Light = 0,
	/// The dark Studio UI color theme. Deprecated; has no effect.
	/// @deprecated This option is deprecated.
	Dark = 1
};

/// Describes the outcome of a `Class.CaptureService:UploadCaptureAsync()` call.
/// Represents the result of uploading a capture to the asset system.
enum class UploadCaptureResult : uint32_t {
	/// The capture was successfully uploaded and registered as an asset.
	Success = 0,
	/// The experience has not been granted developer gallery read and upload
	/// permission, so the capture cannot be uploaded.
	NeedPermission = 1,
	/// The capture was rejected by Roblox content moderation and cannot be
	/// uploaded.
	CaptureModerated = 2,
	/// The capture no longer exists in the user's gallery and cannot be uploaded.
	CaptureNotInGallery = 3,
	/// The capture is not eligible for upload to this experience, either because
	/// it is a permanent system capture or the experience permissions grant was
	/// rejected.
	IneligibleCapture = 4,
	/// The user has reached their daily capture upload quota and the upload was
	/// not completed.
	UploadQuotaReached = 5,
	/// The upload is still in progress and the asset has not yet been assigned an
	/// ID; poll `Class.CaptureService:CheckUploadCaptureStatusAsync()` again to
	/// check for completion.
	UploadPending = 6,
	/// The upload completed but a backend processing error occurred, so the
	/// capture was not saved as an asset.
	UploadFailed = 7
};

/// Describes how a player first found the current experience.
/// The `UserAcquisitionSource` enum describes how a player first found the
/// current experience.
enum class UserAcquisitionSource : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player started playing recently, and their acquisition source is not
	/// available yet.
	PendingAttribution = 1,
	/// The player first joined from a recommendation on the Home page.
	HomeRecommendation = 2,
	/// The player first joined from the Continue section.
	ContinueToPlay = 3,
	/// The player first joined from content curated by Roblox, such as featured
	/// experiences or events.
	Curation = 4,
	/// The player first joined through a friend.
	Friends = 5,
	/// The player first joined from search results.
	Search = 6,
	/// The player first joined by teleporting from another experience.
	Teleport = 7,
	/// The player first joined from an ad, such as a sponsored ad, search ad, or
	/// portal ad.
	Ads = 8,
	/// The player first joined from a part of the Roblox app other than Home
	/// recommendations, such as Charts or Favorites.
	HomeOther = 9,
	/// The player first joined from another source, such as a share link, chat,
	/// or a notification.
	Other = 10
};

/// Determines what body part is being tracked by a VR device, and what its
/// `Datatype.CFrame` actually is.
enum class UserCFrame : uint32_t {
	/// The `CFrame` of the user's head.
	Head = 0,
	/// The `CFrame` of the user's left hand.
	LeftHand = 1,
	/// The `CFrame` of the user's right hand.
	RightHand = 2,
	/// The `CFrame` of the center of the floor.
	Floor = 3
};

/// This enum describes the state of an input that is currently or was recently
/// performed.
/// The `UserInputState` enum describes the state of an input that is currently or
/// was recently performed. It is used by the `Class.InputObject.UserInputState`
/// property of the same name, as well as various `Class.UserInputService` and
/// `Class.GuiObject` events.
/// 
/// Depending on the `Enum.UserInputType`, input may follow states differently:
/// 
/// - Simple button and key presses generally follow a simple `Begin` to `End`
///   flow. Analog gamepad trigger buttons are similar to button presses but will
///   use `Change` as the trigger pressure changes.
/// - Mouse movement generally follows `Begin` (mouse-over) to `Change` (mouse
///   movement) to `End` (mouse-leave).
/// - Touch input behaves somewhat similarly to mouse movement. `Begin` and `End`
///   occur when the user starts or ends touching the screen, respectively. The
///   same `Class.InputObject` is used for the same touch point.
/// - Gamepad thumbstick controls will cause `Change` to occur each frame the
///   position changes.
enum class UserInputState : uint32_t {
	/// Occurs when an `Class.InputObject` starts to interact with the experience.
	/// For example, a mouse button down, a key down, or when the player begins
	/// touching the screen.
	Begin = 0,
	/// Occurs each frame an `Class.InputObject` has already begun interacting
	/// with the experience and part of its state is changing. For example,
	/// movement of the mouse position, a gamepad thumbstick movement, an analog
	/// gamepad trigger button change, or screen touch point change.
	Change = 1,
	/// Occurs when an `Class.InputObject` finishes interacting with the
	/// experience. For example, a mouse button up, a key up, or when the player
	/// stops touching the screen.
	End = 2,
	/// A special circumstance state that indicates this input is no longer
	/// relevant, particularly with `Class.ContextActionService`. For example,
	/// binding two action-handling functions will cause the first to `Cancel` if
	/// an input was already in-progress when the second was bound.
	Cancel = 3,
	/// A state that should never be seen in an experience; essentially just marks
	/// the end of the enum.
	None = 4
};

/// Describes the type of a user input event.
/// The **UserInputType** enum describes the kind of input being performed (mouse,
/// keyboard, gamepad, touch, etc). This enum is used by the
/// `Class.InputObject.UserInputType` property of the same name, as well as
/// various `Class.UserInputService` and `Class.GuiObject` events.
enum class UserInputType : uint32_t {
	/// The left mouse button.
	MouseButton1 = 0,
	/// The right mouse button.
	MouseButton2 = 1,
	/// The middle mouse button.
	MouseButton3 = 2,
	/// The mouse wheel.
	MouseWheel = 3,
	/// Movement of the mouse. Fires changed events each time the player's cursor
	/// position changes and when the move enters/leaves the game window.
	MouseMovement = 4,
	/// A tap on the screen from a mobile device.
	Touch = 7,
	/// Key press on a keyboard.
	Keyboard = 8,
	/// The client regaining focus of the Roblox window.
	Focus = 9,
	/// The accelerometer of a mobile device.
	Accelerometer = 10,
	/// The Gyroscope of a mobile device.
	Gyro = 11,
	/// Input from the 1st plugged in Gamepad.
	Gamepad1 = 12,
	/// Input from the 2nd plugged in Gamepad.
	Gamepad2 = 13,
	/// Input from the 3rd plugged in Gamepad.
	Gamepad3 = 14,
	/// Input from the 4th plugged in Gamepad.
	Gamepad4 = 15,
	/// Input from the 5th plugged in Gamepad.
	Gamepad5 = 16,
	/// Input from the 6th plugged in Gamepad.
	Gamepad6 = 17,
	/// Input from the 7th plugged in Gamepad.
	Gamepad7 = 18,
	/// Input from the 8th plugged in Gamepad.
	Gamepad8 = 19,
	/// Input of Text into a text-based `Class.GuiObject`. Normally this is only a
	/// `Class.TextBox`.
	TextInput = 20,
	/// Text input from an input method editor (IME).
	/// `Class.InputObject|InputObjects` with this type aren't currently fired.
	InputMethod = 21,
	/// Unknown UserInputType.
	None = 22
};

/// Describes whether a player is new to the current experience or has played it
/// before.
/// The `UserNewReturningStatus` enum describes whether a player is new to the
/// current experience or has played it before.
enum class UserNewReturningStatus : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player is playing the experience for the first time.
	New = 1,
	/// The player has played the experience before.
	Returning = 2
};

/// Named presets for VR comfort assists such as vignette, smooth rotation, and
/// third-person follow camera.
/// Named presets for VR comfort assists. `Comfort`, `Normal`, and `Expert` are
/// fixed combinations of vignette, smooth rotation, and third-person follow
/// camera. `Custom` is not a fixed combination: it lets those assists be
/// configured independently. The `Class.UserGameSettings` property that stores
/// this value is RobloxScript-secured and hidden from the Properties window.
enum class VRComfortSetting : uint32_t {
	/// Most restrictive comfort preset: enables vignette, disables smooth
	/// rotation, and disables the third-person follow camera.
	Comfort = 0,
	/// Default balanced preset: enables vignette and third-person follow camera
	/// while keeping smooth rotation disabled.
	Normal = 1,
	/// Least restrictive comfort preset: disables vignette and enables both
	/// smooth rotation and the third-person follow camera.
	Expert = 2,
	/// Lets vignette, smooth rotation, and third-person follow camera be
	/// configured independently rather than as a fixed preset.
	Custom = 3
};

/// Controls whether and how the player's VR hand controller models are rendered
/// in an experience.
/// `VRControllerModelMode` is used by the `Class.VRService.ControllerModels`
/// property to determine how the 3D models representing a VR player's hand
/// controllers are displayed.
/// 
/// The default value of `Class.VRService.ControllerModels` is
/// `Enum.VRControllerModelMode.Transparent|Transparent`.
enum class VRControllerModelMode : uint32_t {
	/// The player's VR hand controller models are not rendered.
	Disabled = 0,
	/// The player's VR hand controller models are rendered with transparency.
	Transparent = 1
};

/// Specifies the display mode of the VR laser pointer used to interact with the
/// user interface.
/// Specifies the display mode of the laser pointer that a VR player uses to
/// interact with the user interface. This enum is the type of
/// `Class.VRService.LaserPointer`, which defaults to
/// `Enum.VRLaserPointerMode.Pointer|Pointer`.
enum class VRLaserPointerMode : uint32_t {
	/// The laser pointer is hidden and no pointer is rendered for any VR hand.
	Disabled = 0,
	/// A single laser pointer is shown for the primary VR hand; this is the
	/// default value of `Class.VRService.LaserPointer`.
	Pointer = 1,
	/// A laser pointer is shown for each VR hand simultaneously.
	DualPointer = 2
};

/// Controls whether `Class.VRService` automatically adjusts the perceived scale
/// of the world in VR to match the player's avatar size.
/// `VRScaling` is used by the `Class.VRService.AutomaticScaling` property to
/// determine how the engine scales the player's view in VR. When set to
/// `Enum.VRScaling.World`, the engine automatically adjusts
/// `Class.Camera.HeadScale` so that the scale of the world matches the player's
/// avatar height, preserving immersion when avatars differ in size. When set to
/// `Enum.VRScaling.Off`, no automatic adjustment is made and you can set
/// `Class.Camera.HeadScale` manually to control the perceived world scale.
enum class VRScaling : uint32_t {
	/// Adjusts `Class.Camera.HeadScale` so that the world in VR is seen from the
	/// avatar's perspective.
	World = 0,
	/// Disables VR automatic scaling; set `Class.Camera.HeadScale` manually if
	/// needed.
	Off = 1
};

/// The lifecycle state of the active VR session, as reported by the
/// `VRSessionState` property of `Class.VRService`.
/// Represents the current state of the VR session managed by `Class.VRService`.
/// The engine updates `VRSessionState` each frame from the active session.
enum class VRSessionState : uint32_t {
	/// The VR session state is unknown or has not yet been established; the
	/// default value of `VRSessionState`.
	Undefined = 0,
	/// The VR headset is connected and ready but is not yet presenting frames to
	/// the user.
	Idle = 1,
	/// The VR session is rendering frames visible to the user but does not yet
	/// have XR input focus; haptic feedback is available.
	Visible = 2,
	/// The VR session has full XR input focus and is rendering visible frames;
	/// haptic feedback is available.
	Focused = 3,
	/// The VR session is in the process of stopping and will transition to an
	/// inactive state.
	Stopping = 4
};

/// Used to universally identify a VR touchpad that is used by either the left, or
/// right hand.
enum class VRTouchpad : uint32_t {
	/// Left hand touchpad.
	Left = 0,
	/// Right hand touchpad.
	Right = 1
};

/// Used to identify the behavior of a specified VR touchpad.
enum class VRTouchpadMode : uint32_t {
	/// The touchpad is treated as ButtonB if it is the left touchpad, or ButtonA
	/// if it is the right touchpad.
	Touch = 0,
	/// The touchpad will function as a gamepad joystick.
	VirtualThumbstick = 1,
	/// The touchpad will function as a means of inputting the standard ABXY
	/// gamepad input, dividing it up into 4 diagonal pie slices.
	ABXY = 2
};

/// The velocity constraint mode property controls how the linear velocity of the
/// attachment(s) is constrained.
/// The velocity constraint mode sets how the attachment velocity is constrained.
/// The velocity can be constrained to a line, a plane or a vector. See each mode
/// for more details.
enum class VelocityConstraintMode : uint32_t {
	/// The velocity component in the direction of the line is constrained to the
	/// specified value. The line direction is based on the
	/// `Class.LinearVelocity.RelativeTo|RelativeTo` property:
	/// 
	/// - `Enum.ActuatorRelativeTo|Attachment0` - The line direction is the
	///   primary axis of `Class.Constraint.Attachment0|Attachment0`.
	/// - `Enum.ActuatorRelativeTo|Attachment1` - The line direction is the
	///   primary axis of `Class.Constraint.Attachment1|Attachment1`.
	/// - `Enum.ActuatorRelativeTo|World` - The line direction must be specified.
	Line = 0,
	/// The velocity components in the plane are constrained to the specified
	/// values. The plane tangents are based on the
	/// `Class.LinearVelocity.RelativeTo|RelativeTo` property:
	/// 
	/// - `Enum.ActuatorRelativeTo|Attachment0` - The plane tangents are the two
	///   axes of `Class.Constraint.Attachment0|Attachment0`.
	/// - `Enum.ActuatorRelativeTo|Attachment1` - The plane tangents are the two
	///   axes of `Class.Constraint.Attachment1|Attachment1`.
	/// - `Enum.ActuatorRelativeTo|World` - The two plane tangents must be
	///   specified
	Plane = 1,
	/// The velocity components must be equal to the vector components specified.
	/// The coordinate system of the vector is based on the
	/// `Class.LinearVelocity.RelativeTo|RelativeTo` property:
	/// 
	/// - `Enum.ActuatorRelativeTo|Attachment0` - The vector components are in the
	///   coordinate system defined by the axes of
	///   `Class.Constraint.Attachment0|Attachment0`.
	/// - `Enum.ActuatorRelativeTo|Attachment1` - The vector components are in the
	///   coordinate system defined by the axes of
	///   `Class.Constraint.Attachment1|Attachment1`.
	/// - `Enum.ActuatorRelativeTo|World` - The coordinate system is in the world
	///   and the vector components must be specified.
	Vector = 2
};

/// Specifies the level of player verification required by
/// `Class.Player:IsVerified()`.
enum class VerifiedLevel : uint32_t {
	/// Requires the player to meet the low verification level or higher. This is
	/// the default value for `Class.Player:IsVerified()`.
	Low = 0,
	/// Requires the player to meet the high verification level.
	High = 1
};

/// Used by `Class.UIGridStyleLayout.VerticalAlignment` to align the layout
/// vertically within its parent.
enum class VerticalAlignment : uint32_t {
	/// Grid is aligned to the center of its parent along the **Y** axis.
	Center = 0,
	/// Grid is aligned to the top edge of its parent.
	Top = 1,
	/// Grid is aligned to the bottom edge of its parent.
	Bottom = 2
};

/// This enum is used for `Class.ScrollingFrame.VerticalScrollBarPosition` to
/// indicate vertical scroll bar positioning.
enum class VerticalScrollBarPosition : uint32_t {
	/// Right side of the `Class.ScrollingFrame`.
	Right = 0,
	/// Left side of the `Class.ScrollingFrame`.
	Left = 1
};

/// Describes various types of haptic motor sizes and locations.
/// Describes various types of haptic motor sizes and locations. Most devices have
/// two motors, one that's small and another that's large. For devices with a
/// single motor, such as mobile devices, only the large motor is implemented.
enum class VibrationMotor : uint32_t {
	/// Large motor.
	Large = 0,
	/// Small motor.
	Small = 1,
	/// Left trigger motor.
	LeftTrigger = 2,
	/// Right trigger motor.
	RightTrigger = 3,
	/// Left hand motor for VR devices.
	LeftHand = 4,
	/// Right hand motor for VR devices.
	RightHand = 5
};

/// Indicates whether a video capture session ended successfully or the reason it
/// was interrupted.
/// Passed as the `result` argument of `UserVideoCaptureFailed` when a video
/// capture session ends. `Enum.VideoCaptureResult.Success` means the capture
/// completed normally; other values identify why recording stopped.
enum class VideoCaptureResult : uint32_t {
	/// Video capture ended normally without any errors.
	Success = 0,
	/// Video capture stopped due to an unspecified internal error.
	OtherError = 1,
	/// Video capture was interrupted because the screen dimensions changed while
	/// recording was in progress.
	ScreenSizeChanged = 2,
	/// Video capture was stopped automatically because the maximum allowed
	/// recording duration was reached.
	TimeLimitReached = 3
};

/// Describes the outcome of a video capture start request made through
/// `Class.CaptureService`.
/// Describes the outcome of a video capture start request initiated via
/// `Class.CaptureService:StartVideoCaptureAsync()`. The value is returned
/// directly by that method and is also surfaced through the
/// `UserVideoCaptureStartFailed` event when the result is not
/// `Enum.VideoCaptureStartedResult.Success`.
enum class VideoCaptureStartedResult : uint32_t {
	/// Video capture started successfully.
	Success = 0,
	/// Video capture failed due to an unspecified internal error.
	OtherError = 1,
	/// A video capture session is already in progress and a new one cannot be
	/// started.
	CapturingAlready = 2,
	/// The device does not have the required capture capabilities.
	NoDeviceSupport = 3,
	/// The device does not have sufficient storage space available to begin
	/// capturing video.
	NoSpaceOnDevice = 4
};

/// Specifies the capture resolution and frame rate used by a `VideoDeviceInput`
/// when reading from a camera device.
/// Specifies the capture resolution and frame rate used by a `VideoDeviceInput`
/// when reading from a camera device. Set via the `CaptureQuality` property. The
/// actual resolution and frame rate for each value are optimized per platform.
enum class VideoDeviceCaptureQuality : uint32_t {
	/// The default capture quality.
	Default = 0,
	/// Captures at a reduced quality to lower resource usage on constrained or
	/// mobile platforms.
	Low = 1,
	/// Captures at a balanced quality suitable for most use cases.
	Medium = 2,
	/// Captures at the highest available quality.
	High = 3
};

/// Indicates the result of a video operation in the engine's video subsystem.
/// `VideoError` represents the outcome of video operations performed by the
/// engine. Values are surfaced through video-related callbacks and APIs to
/// describe why an operation succeeded or failed.
enum class VideoError : uint32_t {
	/// The video operation completed successfully without error.
	Ok = 0,
	/// The end of the video stream or file has been reached.
	Eof = 1,
	/// No data is available at this moment; the caller should retry the
	/// operation.
	EAgain = 2,
	/// An invalid or out-of-range parameter was supplied to the video operation.
	BadParameter = 3,
	/// A memory allocation required for the video operation failed.
	AllocFailed = 4,
	/// The video codec failed to initialize.
	CodecInitFailed = 5,
	/// The video codec failed to shut down cleanly.
	CodecCloseFailed = 6,
	/// The video decoder failed to decode a frame from the stream.
	DecodeFailed = 7,
	/// Parsing the video stream or container format failed.
	ParsingFailed = 8,
	/// The requested video operation or format is not supported on this platform.
	Unsupported = 9,
	/// A generic or unclassified error occurred in the video subsystem.
	Generic = 10,
	/// The video asset could not be downloaded.
	DownloadFailed = 11,
	/// The requested video stream could not be found.
	StreamNotFound = 12,
	/// The video encoder failed to encode a frame.
	EncodeFailed = 13,
	/// Creating a required video resource or object failed.
	CreateFailed = 14,
	/// The video operation was denied because the required permission, such as
	/// camera access, has not been granted.
	NoPermission = 15,
	/// The required video service is unavailable on this device or platform.
	NoService = 16,
	/// Releasing a video resource failed.
	ReleaseFailed = 17,
	/// An unknown or unrecognized error occurred; this value covers errors that
	/// have no specific classification in this enum.
	Unknown = 18
};

/// The size of textures produced by `Class.VideoSampler`.
/// Controls the resolution of textures produced by `Class.VideoSampler`. Use the
/// smallest resolution that meets your needs to minimize memory usage and improve
/// sampling performance.
enum class VideoSampleSize : uint32_t {
	/// Use when the video sample is displayed on roughly a quarter of the screen.
	Small = 0,
	/// Use when the video sample is displayed on roughly half the screen.
	Medium = 1,
	/// Use when the video sample is displayed on roughly three quarters of the
	/// screen.
	Large = 2,
	/// Use when the video sample is displayed full screen.
	Full = 3
};

/// Controls which debug rendering visualization overlay is displayed in the
/// Studio viewport via `Class.RenderSettings.ViewMode`.
/// Controls which debug rendering visualization overlay is drawn over the Studio
/// viewport. The visualization highlights overdraw for geometry, transparency, or
/// decals, or disables the overlay entirely. Assigned through
/// `Class.RenderSettings.ViewMode`, which defaults to `Enum.ViewMode.None`.
enum class ViewMode : uint32_t {
	/// Disables the debug rendering visualization overlay; the default value of
	/// `Class.RenderSettings.ViewMode`.
	None = 0,
	/// Displays an overdraw visualization highlighting geometric complexity
	/// across rendered surfaces.
	GeometryComplexity = 1,
	/// Displays an overdraw visualization highlighting surfaces rendered with
	/// transparency.
	Transparent = 2,
	/// Displays an overdraw visualization highlighting surfaces rendered with
	/// decals.
	Decal = 3
};

/// Enables Virtual Cursor mode within an experience.
/// Enables Virtual Cursor mode within an experience. By default, this property is
/// disabled.
enum class VirtualCursorMode : uint32_t {
	/// The Virtual Cursor is in the default state.
	Default = 0,
	/// The Virtual Cursor is disabled.
	Disabled = 1,
	/// The Virtual Cursor is enabled.
	Enabled = 2
};

/// Describes the current operational state of a `Class.VirtualInputManager`.
/// Describes the current operational state of a `Class.VirtualInputManager`. The
/// service reports a value from this enum to indicate whether it is idle,
/// actively capturing input events, or replaying a previously captured sequence.
/// Transitions are driven by calls to `StartRecording()`, `StopRecording()`,
/// `StartPlaying()`, and `StopPlaying()`.
enum class VirtualInputMode : uint32_t {
	/// The `Class.VirtualInputManager` is idle and neither recording nor playing
	/// back input.
	None = 0,
	/// The `Class.VirtualInputManager` is actively capturing input events into a
	/// sequence.
	Recording = 1,
	/// The `Class.VirtualInputManager` is replaying a previously recorded input
	/// sequence.
	Playing = 2
};

/// Enum used for preset distance attenuation curve options in the default voice
/// chat setup.
/// Each value in this enum represents a distance attenuation curve that can be
/// used by `Class.VoiceChatService` when creating the default voice chat setup
/// using `Class.AudioDeviceInput` and `Class.AudioEmitter` objects.
enum class VoiceChatDistanceAttenuationType : uint32_t {
	/// Represents a distance attenuation curve that follows the inverse-squared
	/// law. This is identical to the default distance attenuation of an
	/// `Class.AudioEmitter` instance.
	Inverse = 0,
	/// Represents a linear-squared distance attenuation curve with a minimum
	/// distance of `7` and a maximum distance of `80`. This is identical to the
	/// distance attenuation used in the internal-only default voice setup that
	/// does not use `Class.AudioDeviceInput` and `Class.AudioEmitter` objects.
	Legacy = 1
};

/// Describes the connection state of a local player's voice chat session.
/// Describes the connection state of a local player's voice chat session. The
/// session progresses through the `Enum.VoiceChatState` items from idle, through
/// joining, to joined, and then to leaving, ended, or failed when the session
/// concludes.
enum class VoiceChatState : uint32_t {
	/// The player is not connected to voice chat and no join attempt is in
	/// progress.
	Idle = 0,
	/// A voice chat join attempt is in progress for the first time.
	Joining = 1,
	/// A voice chat join is being retried after a previous attempt did not
	/// succeed.
	JoiningRetry = 2,
	/// The player has successfully joined the voice chat session and is actively
	/// connected.
	Joined = 3,
	/// The player is in the process of disconnecting from the voice chat session.
	Leaving = 4,
	/// The voice chat session has ended normally.
	Ended = 5,
	/// The voice chat session ended due to an error, such as a failure to join or
	/// a mid-session error.
	Failed = 6
};

/// Identifies which leg of a voice chat control-plane operation is being
/// reported.
/// Identifies which voice control-plane path triggered a `Class.VoiceChatService`
/// event such as `RelayCandidatesGathered` or `VoiceSetupFailed`:
/// `Enum.VoiceControlPath.Join` (enter a voice room),
/// `Enum.VoiceControlPath.Publish` (send local microphone audio), or
/// `Enum.VoiceControlPath.Subscribe` (receive remote audio).
enum class VoiceControlPath : uint32_t {
	/// Represents the outbound audio path, through which a client sends local
	/// microphone audio to the room.
	Publish = 0,
	/// Represents the inbound audio path, through which a client receives remote
	/// participants' audio streams.
	Subscribe = 1,
	/// Represents the room-join path, through which a client establishes
	/// membership in a voice room.
	Join = 2
};

/// Controls how the engine renders volumetric audio effects.
/// Controls how the engine renders volumetric audio effects, allowing sound to
/// emanate from the surface of a `Class.Part` rather than a single point in
/// space.
enum class VolumetricAudio : uint32_t {
	/// Volumetric audio is disabled; sound emanates from a single point.
	Disabled = 0,
	/// Currently equivalent to `Enum.VolumetricAudio.Disabled`.
	Automatic = 1,
	/// Volumetric audio is enabled; sound emanates from the object's volume.
	Enabled = 2
};

/// This Enum was once used to set the direction of `Class.Terrain` water.
/// @deprecated This item is deprecated. Do not use it for new work. Please see `Class.Terrain` for a list of current function, events, and properties.
enum class WaterDirection : uint32_t {
	/// The negative X-axis face direction of a voxel terrain water cell.
	NegX = 0,
	/// The positive X-axis face direction of a voxel terrain water cell.
	X = 1,
	/// The negative Y-axis face direction of a voxel terrain water cell.
	NegY = 2,
	/// The positive Y-axis face direction of a voxel terrain water cell.
	Y = 3,
	/// The negative Z-axis face direction of a voxel terrain water cell.
	NegZ = 4,
	/// The positive Z-axis face direction of a voxel terrain water cell.
	Z = 5
};

/// The WaterForce Enum is used to work with `Class.Terrain` water cells.
/// @deprecated This item is deprecated. Do not use it for new work. Please see `Class.Terrain` for a list of current function, events, and properties.
enum class WaterForce : uint32_t {
	/// No flow force on a legacy voxel terrain water cell; the water is still.
	None = 0,
	/// A low flow force level of a legacy voxel terrain water cell.
	Small = 1,
	/// A moderate flow force level of a legacy voxel terrain water cell, between
	/// `Enum.WaterForce.Small` and `Enum.WaterForce.Strong`.
	Medium = 2,
	/// A high flow force level of a legacy voxel terrain water cell, one step
	/// below `Enum.WaterForce.Max`.
	Strong = 3,
	/// The maximum flow force level of a legacy voxel terrain water cell.
	Max = 4
};

/// WebStreamClientState indicates the current state of a WebStreamClient object.
/// `WebStreamClientState` describes the lifecycle state of a
/// `Class.WebStreamClient` connection, readable through the
/// `Class.WebStreamClient.ConnectionState` property.
/// 
/// A newly created `Class.WebStreamClient` begins in the `Connecting` state. On a
/// successful handshake the state advances to `Open`, after which messages can be
/// received (and sent, for WebSocket connections). The connection terminates in
/// either `Closed` (clean shutdown) or `Error` (unrecoverable failure). Listening
/// to the `Class.WebStreamClient.Opened`, `Class.WebStreamClient.Closed`, and
/// `Class.WebStreamClient.Error` events is the recommended way to react to these
/// transitions.
enum class WebStreamClientState : uint32_t {
	/// The client has sent a request to connect with the server and is waiting
	/// for a response.
	Connecting = 0,
	/// The client is connected to the server, allowing for data to be streamed
	/// between the server and client.
	Open = 1,
	/// An unrecoverable error has occured while setting up the connection
	/// orduring the connection lifetime, cutting off the stream.
	Error = 2,
	/// The connection has run to completion without issues, either closed
	/// naturally by the server or manually by the user.
	Closed = 3
};

/// Specifies what type of streaming to use when creating a
/// `Class.WebStreamClient`.
enum class WebStreamClientType : uint32_t {
	/// Traditional Server-Sent Events (SSE) client. Requires `text/event-stream`
	/// to be returned in the `Content-Type` header. Messages in the stream will
	/// follow the
	/// [event stream format](https://developer.mozilla.org/en-US/docs/Web/API/Server-sent_events/Using_server-sent_events#event_stream_format).
	SSE = 0,
	/// General purpose HTTP streaming client. It can connect to any server that
	/// provides streaming data transfer (e.g.
	/// [chunked encoding](https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/Transfer-Encoding)).
	/// It provides no guarantees about the stream format.
	RawStream = 1,
	/// [WebSocket](https://en.wikipedia.org/wiki/WebSocket) client that provides
	/// a bidirectional communication channel over a TCP connection.
	WebSocket = 2
};

/// Controls which `Class.WeldConstraint|WeldConstraints` are included in the
/// recommendation table returned by
/// `Class.GeometryService:CalculateConstraintsToPreserve()`.
/// Controls which `Class.WeldConstraint|WeldConstraints` are included in the
/// recommendation table returned by
/// `Class.GeometryService:CalculateConstraintsToPreserve()` after a solid
/// modeling operation such as `Class.GeometryService:UnionAsync()`,
/// `Class.GeometryService:SubtractAsync()`, or
/// `Class.GeometryService:IntersectAsync()`. Pass this enum as the
/// `weldConstraintPreserve` key inside the `options` dictionary argument to that
/// method. The default value used when no option is specified is
/// `Enum.WeldConstraintPreserve.Touching`.
enum class WeldConstraintPreserve : uint32_t {
	/// All `Class.WeldConstraint|WeldConstraints` will be returned in the
	/// recommended table.
	All = 0,
	/// `Class.WeldConstraint|WeldConstraints` will be ignored and not returned in
	/// the recommended table.
	None = 1,
	/// Only `Class.WeldConstraint|WeldConstraints` that connect touching parts in
	/// the performed operation will be returned in the recommended table.
	Touching = 2
};

/// Describes when a player first played the current experience, represented as a
/// bucket.
/// The `WhenUserFirstPlayed` enum describes when a player first played the
/// current experience, represented as a bucket.
enum class WhenUserFirstPlayed : uint32_t {
	/// Segment data is unavailable.
	Unknown = 0,
	/// The player first played the experience within the last 30 days.
	Days0To30 = 1,
	/// The player first played the experience between 31 and 90 days ago.
	Days31To90 = 2,
	/// The player first played the experience between 91 and 180 days ago.
	Days91To180 = 3,
	/// The player first played the experience between 181 and 365 days ago.
	Days181To365 = 4,
	/// The player first played the experience more than 365 days ago.
	Days366Plus = 5
};

/// Describes which other players a player allows to initiate a whisper (direct)
/// chat with them in an experience.
/// Describes which other players a player allows to initiate a whisper (direct)
/// chat with them in an experience. A whisper chat is only permitted when
/// **both** the sender and the recipient have
/// `Enum.WhisperChatPrivacyMode.AllUsers`; if either player's mode is
/// `Enum.WhisperChatPrivacyMode.NoOne`, the private chat is blocked. The setting
/// comes from the player's account privacy configuration and is applied when the
/// `Class.Player` object is created. Defaults to
/// `Enum.WhisperChatPrivacyMode.NoOne`.
enum class WhisperChatPrivacyMode : uint32_t {
	/// The player allows any other player in the experience to initiate a whisper
	/// chat with them.
	AllUsers = 0,
	/// The player does not allow any other player to initiate a whisper chat with
	/// them.
	NoOne = 1
};

/// Controls how automatic bone weight transfer from the body is applied to a
/// `Class.WrapLayer` accessory's mesh.
/// `Enum.WrapLayerAutoSkin` is used exclusively by `Class.WrapLayer.AutoSkin`,
/// which defaults to `Enum.WrapLayerAutoSkin.Disabled`. It controls whether the
/// engine runs an automatic skinning-transfer pass when layered clothing
/// processes an accessory, and — when enabled — whether authored skinning weights
/// are preserved or overridden.
/// 
/// Skinning transfer copies bone weights from the body part the accessory is
/// fitted to so the accessory mesh animates with the character rig. That matters
/// for accessories such as eyebrows and eyelashes, where the body schema may not
/// guarantee a standard facial-bone set.
enum class WrapLayerAutoSkin : uint32_t {
	/// No automatic skinning transfer is applied; the accessory uses its authored
	/// skinning data as-is, and an unskinned mesh will not deform with the
	/// character.
	Disabled = 0,
	/// Applies automatic skinning transfer only when the mesh has no existing
	/// skinning data; otherwise the authored weights are kept.
	EnabledPreserve = 1,
	/// Unconditionally overrides all skinning weights by running the cage-based
	/// skinning transfer algorithm, regardless of whether the mesh was originally
	/// skinned.
	EnabledOverride = 2
};

/// The Studio-only property for quickly visualizing and debugging meshes with
/// inner cage and outer cages.
/// The Studio-only property for quickly visualizing and debugging meshes with
/// inner and outer cages.
/// 
/// This debug visualization only works when the WrapLayer is active and does not
/// work if WrapLayer is not active or incorrectly configured.
enum class WrapLayerDebugMode : uint32_t {
	/// This debug rendering mode does nothing. This is the default value.
	None = 0,
	/// This debug mode visualizes corresponding cage mesh vertices bound to an
	/// underlying `Class.WrapTarget`. In order to find corresponding vertices
	/// between different cages, the Wrap Deformer algorithm uses UV matching. As
	/// long as your `Class.WrapLayer` cage mesh share the same UV layout as
	/// `Class.WrapTarget`, its vertices will be marked as "bound".
	BoundCage = 1,
	/// This debug mode shows the resulting layer mesh as a whole. The deformer
	/// will use vertex locations from the previous layer for all unbound
	/// vertices.
	LayerCage = 2,
	/// The same as BoundCage but also visualizes how bound vertices were moved.
	/// You can use this mode to identify where they belong on a previous layer
	/// and where they are located on the current layer.
	BoundCageAndLinks = 3,
	/// This debug mode shows the original inner cage mesh as it was created.
	Reference = 4,
	/// This debug mode visualizes the internal RBF solver state. You can estimate
	/// the wrap deformer's expected behavior by looking at this state. All
	/// renderable mesh vertices move from a "big sphere" to a "small sphere"
	/// along a corresponding line connecting two spheres.
	Rbf = 5,
	/// This debug mode shows the original outer cage mesh as it was created.
	OuterCage = 6,
	/// Renders the layer's outer cage after the morph step that aligns it to the
	/// previous layer's outer cage surface, prior to HSR processing.
	ReferenceMeshAfterMorph = 7,
	/// Interactive mode that highlights the render-mesh triangle under the cursor
	/// and draws the corresponding outer cage vertices on the layer above using
	/// HSR association data.
	HSROuterDetail = 8,
	/// Highlights outer cage vertices that HSR associates with visible
	/// render-mesh faces.
	HSROuter = 9,
	/// Highlights inner cage vertices that Hidden Surface Removal (HSR)
	/// classifies as occluded by the clothing layer above, drawn at the previous
	/// layer's outer-cage positions.
	HSRInner = 10,
	/// Highlights inner cage vertices that HSR classifies as visible (not
	/// occluded), the complement of `Enum.WrapLayerDebugMode.HSRInner`.
	HSRInnerReverse = 11,
	/// Renders the layer's outer cage at positions from fitting it to the base
	/// body mesh (rest pose), shown as spheres and wireframe edges.
	LayerCageFittedToBase = 12,
	/// Renders the layer's outer cage at positions from fitting it to the
	/// previous layer's deformed shape, shown as spheres and wireframe edges.
	LayerCageFittedToPrev = 13,
	/// Draws each outer cage vertex that moved during deformation as a sphere at
	/// its pre-deformation position connected by a line to its post-deformation
	/// position.
	PreWrapDeformerOuterCage = 14,
	/// Visualizes per-vertex skinning weight transfer for the layer mesh, drawing
	/// lines from each mesh vertex to its influencing skeleton joints.
	SkinningTransfer = 15
};

/// The Studio-only property for quickly visualizing and debugging meshes with
/// only outer cages.
/// The Studio-only property for quickly visualizing and debugging meshes with
/// only outer cages.
/// 
/// This debug visualization only works when the WrapTarget is active and does not
/// work if WrapTarget is not active or incorrectly configured.
enum class WrapTargetDebugMode : uint32_t {
	/// This debug rendering mode does nothing, and this is the default value.
	None = 0,
	/// This debug mode shows the original cage mesh as it was created.
	TargetCageOriginal = 1,
	/// This debug mode shows corresponding cage mesh compressed by clothing
	/// layers above it. This debug mode is intended to validate that the
	/// compression algorithm and corresponding cages work as intended.
	TargetCageCompressed = 2,
	/// This debug mode shows the resulting cage mesh for the corresponding Wrap
	/// Instance. This debug mode is intended to validate that the final deformed
	/// cage looks as intended.
	TargetCageInterface = 3,
	/// The same as TargetCageOriginal but affects all WrapTargets that belong to
	/// the Wrap Deformer simultaneously. It doesn't matter which particular
	/// WrapTarget you enable this debug visualization option.
	TargetLayerCageOriginal = 4,
	/// The same as TargetCageCompressed but affects all WrapTargets that belong
	/// to the Wrap Deformer simultaneously. It doesn't matter which particular
	/// WrapTarget you enable this debug visualization option.
	TargetLayerCageCompressed = 5,
	/// The same as TargetCageInterface but affects all WrapTargets that belong to
	/// the Wrap Deformer simultaneously. It doesn't matter which particular
	/// WrapTarget you enable this debug visualization option.
	TargetLayerInterface = 6,
	/// This debug mode visualizes the internal RBF solver state. You can estimate
	/// the wrap deformer expected behavior by looking at this state. All
	/// renderable mesh vertices move from a "big sphere" to a "small sphere"
	/// along a corresponding line connecting two spheres.
	Rbf = 7,
	/// Visualizes outer cage vertices and related cage faces when hovering a mesh
	/// triangle in Studio.
	OuterCageDetail = 8,
	/// Renders the outer cage as wireframe with vertex markers in its
	/// pre-deformation state.
	PreWrapDeformerCage = 9
};

/// Used by `Class.LayerCollector.ZIndexBehavior` to control how the
/// `Class.GuiObject.ZIndex` property behaves for descendants.
enum class ZIndexBehavior : uint32_t {
	/// The ZIndex property overrides the default value computed from the depth in
	/// the hierarchy.
	Global = 0,
	/// The ZIndex property controls the order in which the GuiObject renders
	/// relative to its siblings.
	Sibling = 1
};
