# Roblox Offsets 2026
> [!CAUTION]
> ***Argus Dumper experimental so you need verify all struct and internal offsets from them.***

# API (Windows Only)
> [!TIP]
> ***Tested on windows 10 and 11***  
> _You can use api example for auto offsets updater or anything else_  

# Links
***Windows:*** _[Future](https://github.com/Offsetmanager/Roblox-Internal-External-Offsets/tree/main/Windows/version-2366ba214ec740ca)_  
***Windows:*** _[Current](https://github.com/Offsetmanager/Roblox-Internal-External-Offsets/tree/main/Windows/version-4310300497aa4917)_  

# Windows
***Current player version:*** _version-4310300497aa4917_  
***Previous player version:*** _version-c5aecda2245e4fae_  

# Latest offsets
| Offset | Rebased | Value | Offset | Rebased | Value |
| :--- | :---: | ---: | :--- | :---: | ---: |
| Print | Yes | 0x1CD9D90 | InvokeServer | Yes | 0x351A7F0 |
| OpCodeLookupTable | Yes | 0x6E964D0 | EnableLoadModule | Yes | 0x8515B38 |
| TaskSchedulerTargetFps | Yes | 0x8227738 | GetLuaState | Yes | 0x42A6830 |
| KTable | Yes | 0x813A7A0 | PushInstance | Yes | 0x4202490 |
| CastArgs | Yes | 0x417B280 | InstanceNew | Yes | 0x43297B0 |
| TLS::Get_Tss_Data | Yes | 0x4250 | Identity::IdentityStruct | Yes | 0x81DDD08 |
| Capabilities::GetCapabilities | Yes | 0x1D14D50 | Capabilities::Capabilities | No | 0x30 |
| RequireBypass::RequireBypass | No | 0xA58 | RequireBypass::IsCoreScript | No | 0x168 |
| Crash::LockViolationScriptCrash | Yes | 0x8515898 | Crash::LockViolationInstanceCrash | Yes | 0x85C0F18 |
| SC::SCResumeOffset | Yes | 0x42C1E60 | SC::SC2Resume | No | 0xA18 |
| RakNet::Job2RakPeer | No | 0x1D8 | RakNet::RakPeerVTableSize | No | 0x3E0 |
| RakNet::idx_Connect | No | 13 | RakNet::idx_Send | No | 20 |
| RakNet::idx_Recieve | No | 25 | RakNet::convertItemEnumToString | Yes | 0x47C64C0 |
| TaskDefer::TaskSynchronize | Yes | 0x437DB00 | TaskDefer::TaskDesynchronize | Yes | 0x437DF10 |
| TaskDefer::TaskDefer | Yes | 0x437EAF0 | TaskDefer::TaskSpawn | Yes | 0x437EFB0 |
| TaskDefer::TaskDelay | Yes | 0x437F340 | TaskDefer::TaskWait | Yes | 0x437F640 |
| TaskDefer::TaskCancel | Yes | 0x437F8B0 | Luau::LoadModule | Yes | 0x42CFD70 |
| Luau::LuaVM_Load | Yes | 0x4211130 | Luau::Luau_Execute | Yes | 0x277A970 |
| Luau::LuaD_Throw | Yes | 0x2750300 | Luau::LuaH_dummynode | Yes | 0x6437098 |
| Luau::LuaO_nilobject | Yes | 0x6437A18 | Luau::luaC_step | Yes | 0x2764400 |
| Luau_Other::luaB_assert | Yes | 0x279BE30 | Luau_Other::luaB_print | Yes | 0x2795830 |
| Luau_Other::luaB_error | Yes | 0x2795C80 | Luau_Other::luaB_gcinfo | Yes | 0x279A770 |
| Luau_Other::luaB_getfenv | Yes | 0x2797260 | Luau_Other::luaB_getmetatable | Yes | 0x2796690 |
| Luau_Other::luaB_next | Yes | 0x279B380 | Luau_Other::luaB_newproxy | Yes | 0x279CD30 |
| Luau_Other::luaB_rawequal | Yes | 0x2797550 | Luau_Other::luaB_rawget | Yes | 0x2797660 |
| Luau_Other::luaB_rawset | Yes | 0x2798070 | Luau_Other::luaB_rawlen | Yes | 0x279A6D0 |
| Luau_Other::luaB_select | Yes | 0x279BEE0 | Luau_Other::luaB_setfenv | Yes | 0x2797320 |
| Luau_Other::luaB_setmetatable | Yes | 0x2796810 | Luau_Other::luaB_tonumber | Yes | 0x2795900 |
| Luau_Other::luaB_tostring | Yes | 0x279CCD0 | Luau_Other::luaB_type | Yes | 0x279A790 |
| Luau_Other::luaB_typeof | Yes | 0x279AD90 | Luau_Other::lua_typename | Yes | 0x273E6F0 |
| Luau_Other::LuaT_eventname | Yes | 0x6453D30 | Luau_Other::LuaT_typenames | Yes | 0x6453CC0 |
| Luau_Other::lua_yield | Yes | 0x164B4F0 | Luau_Other::lua_checkstack | Yes | 0x273DD50 |
| Luau_Other::pseudo2addr | Yes | 0x273DBB0 | Coroutine::close | Yes | 0x5694590 |
| Coroutine::create | Yes | 0x5693C10 | Coroutine::isyieldable | Yes | 0x5694510 |
| Coroutine::running | Yes | 0x56944A0 | Coroutine::status | Yes | 0x56921A0 |
| Coroutine::wrap | Yes | 0x56941D0 | Coroutine::yield | Yes | 0x5694440 |
| RayCast::WorldRoot_Raycast | Yes | 0xECDDF0 | RayCast::BlockCast | Yes | 0xECEFE0 |
| Instance::childrenEnd | No | 0x8 | Instance::Class | No | 0x18 |
| Instance::Parent | No | 0x68 | Instance::Name | No | 0x70 |
| Instance::Children | No | 0x78 | TaskScheduler::JobsStart | No | 0xC8 |
| TaskScheduler::JobsEnd | No | 0xD0 | TaskScheduler::ScriptContext | No | 0x1B8 |
| TaskSchedulerJob::JobName | No | 0x18 | TaskSchedulerJob::JobTypeName | No | 0xF8 |
| Scripts::LocalScriptByteCode | No | 0x190 | Scripts::ModuleScriptByteCode | No | 0x138 |
| DataModel::Workspace | No | 0x160 | FakeDataModel::Pointer | Yes | 0x8E42C98 |
| FakeDataModel::FakeDataModelToDataModel | No | 0x1F8 | Signal::Disconnect | Yes | 0x41DF210 |
| Input::FireMouseClick | Yes | 0x3B93BF0 | Input::FireRightMouseClick | Yes | 0x3B93D90 |
| Input::FireMouseHoverEnter | Yes | 0x3B951E0 | Input::FireMouseHoverLeave | Yes | 0x3B95380 |
| Input::FireProximityPrompt | Yes | 0x3140800 | Input::FireTouchInterest | Yes | 0xA74A50 |
| Hooks::NtCreateSection | No | 0xBD2810 | Hooks::RtlExitUserProcess | No | 0x27D420 |
| Hooks::NtAllocateVirtualMemory | No | 0xBE67F0 | Hooks::NtFreeVirtualMemory | No | 0x28DFB0 |
| Hooks::NtMapViewOfSection | No | 0xB98990 | Hooks::NtUnmapViewOfSection | No | 0x93F540 |
| Hooks::NtTerminateProcess | No | 0x9E8DB0 | Hooks::NtCreateThread | No | 0x15689B0 |
| Hooks::NtCreateThreadEx | No | 0xF83D40 | Hooks::NtRaiseException | No | 0xBCEBD0 |
| Hooks::NtSuspendThread | No | 0xB97670 | Hooks::NtQuerySystemInformation | No | 0x103B7A0 |
| Hooks::NtSetContextThread | No | 0xA95FA0 | Hooks::NtProtectVirtualMemory | No | 0xFDB1B0 |
| Hooks::NtQueryVirtualMemory | No | 0x10335C0 | Hooks::NtRaiseHardError | No | 0x10F4B20 |
| Hooks::KiUserExceptionDispatcher | No | 0xBCE490 | Hooks::KiUserCallbackDispatcher | No | 0xBCE4B0 |
| Hooks::KiUserApcDispatcher | No | 0xBCE5A0 | Hooks::LdrInitializeThunk | No | 0xBCE5B0 |
| Hooks::NtContinue | No | 0xFA5A20 | - | - | - |

# Credits
***Theo offsets***  
***Joseph offsets***  
***Offsets Club***  
***checkcaller***  
***thorioum***  
***realperox.ide***  
***urmoit***  
***mwaw.0***  
