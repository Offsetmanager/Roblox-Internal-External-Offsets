# Roblox Offsets 2026
> [!CAUTION]
> ***Argus Dumper experimental so you need verify all struct and internal offsets from them.***

# API (Windows Only)
> [!TIP]
> ***Tested on windows 10 and 11***  
> _You can use api example for auto offsets updater or anything else_  

# Links
***Windows:*** _[Future](https://github.com/Offsetmanager/Roblox-Internal-External-Offsets/tree/main/Windows/version-4310300497aa4917)_  
***Windows:*** _[Current](https://github.com/Offsetmanager/Roblox-Internal-External-Offsets/tree/main/Windows/version-c5aecda2245e4fae)_  

# Windows
***Current player version:*** _version-c5aecda2245e4fae_  
***Previous player version:*** _version-e7d81637d42c4b23_  

# Latest offsets in tables
| Offset | Rebased | Value | Offset | Rebased | Value |
| :--- | :---: | ---: | :--- | :---: | ---: |
| Print | Yes | 0x1CAB4B0 | OpCodeLookupTable | Yes | 0x6E26C70 |
| EnableLoadModule | Yes | 0x8496288 | TaskSchedulerTargetFps | Yes | 0x81A8D78 |
| GetLuaState | Yes | 0x4248600 | KTable | Yes | 0x80BBE20 |
| ScriptContextResume | Yes | 0x4260F50 | CastArgs | Yes | 0x4124670 |
| InstanceNew | Yes | 0x42C7170 | Identity::GetCapabilities | Yes | 0x1CE6760 |
| RequireBypass::RequireBypass | No | 0xBB4 | RequireBypass::IsCoreScript | No | 0x168 |
| TaskDefer::TaskSynchronize | Yes | 0x4318B60 | TaskDefer::TaskDesynchronize | Yes | 0x4318F70 |
| TaskDefer::TaskDefer | Yes | 0x4319B60 | TaskDefer::TaskSpawn | Yes | 0x431A020 |
| TaskDefer::TaskDelay | Yes | 0x431A3B0 | TaskDefer::TaskWait | Yes | 0x431A6B0 |
| TaskDefer::TaskCancel | Yes | 0x4318580 | Luau::LuaVM_Load | Yes | 0x41B3B50 |
| Luau::Luau_Execute | Yes | 0x272A260 | Luau::LuaD_Throw | Yes | 0x2709720 |
| Luau::LuaH_dummynode | Yes | 0x63CAB08 | Luau::LuaO_nilobject | Yes | 0x63CDF48 |
| Luau::luaC_step | Yes | 0x2719020 | Luau_Other::luaB_assert | Yes | 0x27486D0 |
| Luau_Other::luaB_print | Yes | 0x2743020 | Luau_Other::luaB_error | Yes | 0x2743480 |
| Luau_Other::luaB_gcinfo | Yes | 0x2747020 | Luau_Other::luaB_getfenv | Yes | 0x2744A60 |
| Luau_Other::luaB_getmetatable | Yes | 0x2743E90 | Luau_Other::luaB_next | Yes | 0x2747C20 |
| Luau_Other::luaB_newproxy | Yes | 0x27495D0 | Luau_Other::luaB_rawequal | Yes | 0x2744D40 |
| Luau_Other::luaB_rawget | Yes | 0x2744E50 | Luau_Other::luaB_rawset | Yes | 0x27453A0 |
| Luau_Other::luaB_rawlen | Yes | 0x2746F80 | Luau_Other::luaB_select | Yes | 0x2748780 |
| Luau_Other::luaB_setfenv | Yes | 0x2744B20 | Luau_Other::luaB_setmetatable | Yes | 0x2744010 |
| Luau_Other::luaB_tonumber | Yes | 0x27430F0 | Luau_Other::luaB_tostring | Yes | 0x2749570 |
| Luau_Other::luaB_type | Yes | 0x2747040 | Luau_Other::luaB_typeof | Yes | 0x2747630 |
| Luau_Other::lua_typename | Yes | 0x26F84B0 | Luau_Other::LuaT_eventname | Yes | 0x63EABD0 |
| Luau_Other::LuaT_typenames | Yes | 0x63EAB60 | Luau_Other::lua_yield | Yes | 0x2562DB0 |
| Luau_Other::lua_checkstack | Yes | 0x26F7B00 | Luau_Other::pseudo2addr | Yes | 0x26F7960 |
| Coroutine::close | Yes | 0x5626CA0 | Coroutine::create | Yes | 0x5626310 |
| Coroutine::isyieldable | Yes | 0x5626C10 | Coroutine::running | Yes | 0x5626BA0 |
| Coroutine::status | Yes | 0x56248E0 | Coroutine::wrap | Yes | 0x56268D0 |
| Coroutine::yield | Yes | 0x5626B40 | RayCast::WorldRoot_Raycast | Yes | 0xEC5D60 |
| RayCast::BlockCast | Yes | 0xEC6F50 | Instance::childrenEnd | No | 0x8 |
| Instance::Class | No | 0x18 | Instance::Parent | No | 0x68 |
| Instance::Name | No | 0x70 | Instance::Children | No | 0x78 |
| TaskScheduler::JobsStart | No | 0xC8 | TaskScheduler::JobsEnd | No | 0xD0 |
| TaskScheduler::ScriptContext | No | 0x1B8 | TaskSchedulerJob::JobName | No | 0x18 |
| TaskSchedulerJob::JobTypeName | No | 0xF8 | Scripts::LocalScriptByteCode | No | 0x190 |
| Scripts::ModuleScriptByteCode | No | 0x138 | DataModel::Workspace | No | 0x158 |
| FakeDataModel::Pointer | Yes | 0x8DC2258 | FakeDataModel::FakeDataModelToDataModel | No | 0x1F8 |
| Input::FireMouseClick | Yes | 0x3B4D9F0 | Input::FireRightMouseClick | Yes | 0x3B4DB90 |
| Input::FireMouseHoverEnter | Yes | 0x3B4EFE0 | Input::FireMouseHoverLeave | Yes | 0x3B4F180 |
| Input::FireProximityPrompt | Yes | 0x3102650 | Input::FireTouchInterest | Yes | 0xA6DFA0 |
| Hooks::NtCreateSection | No | 0x6BC8C0 | Hooks::RtlExitUserProcess | No | 0x13FDCE0 |
| Hooks::NtAllocateVirtualMemory | No | 0x9AD980 | Hooks::NtFreeVirtualMemory | No | 0x684E10 |
| Hooks::NtMapViewOfSection | No | 0xD798F0 | Hooks::NtUnmapViewOfSection | No | 0x31A400 |
| Hooks::NtTerminateProcess | No | 0x13FB6E0 | Hooks::NtCreateThread | No | 0x2A5940 |
| Hooks::NtCreateThreadEx | No | 0x256AA0 | Hooks::NtRaiseException | No | 0x1405880 |
| Hooks::NtSuspendThread | No | 0x2918D0 | Hooks::NtQuerySystemInformation | No | 0x324B20 |
| Hooks::NtSetContextThread | No | 0xC6B550 | Hooks::NtProtectVirtualMemory | No | 0x293FD0 |
| Hooks::NtQueryVirtualMemory | No | 0x9B40F0 | Hooks::NtRaiseHardError | No | 0xD80060 |
| Hooks::KiUserExceptionDispatcher | No | 0x6F7DF0 | Hooks::KiUserCallbackDispatcher | No | 0x6F7E10 |
| Hooks::KiUserApcDispatcher | No | 0x6F7F00 | Hooks::LdrInitializeThunk | No | 0x6F7F10 |
| Hooks::NtContinue | No | 0x102A000 | - | - | - |

# Credits
***Theo offsets***  
***Joseph offsets***  
***Offsets Club***  
***checkcaller***  
***thorioum***  
***realperox.ide***  
***urmoit***  
***mwaw.0***  
