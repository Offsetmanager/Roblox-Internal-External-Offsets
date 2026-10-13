const ULONGLONG Print = REBASE(0x1C65A30);
const ULONGLONG ScriptContextResume = REBASE(0x423C6F0);
const ULONGLONG GetPropertyDescriptor = REBASE(0x1CA05A0);
const ULONGLONG SetFFlag = REBASE(0x498CE30);
const ULONGLONG CurrentThreadIdentifier = REBASE(0x646EA0);
const ULONGLONG convertItemEnumToString = REBASE(0x47AFFC0);
const ULONGLONG EnableLoadModule = REBASE(0x869DBC8);
const ULONGLONG LockViolationInstanceCrash = REBASE(0x8749848);
const ULONGLONG LockViolationScriptCrash = REBASE(0x869D9D8);
const ULONGLONG FLogHookPtr = REBASE(0x8A948E0);
const ULONGLONG KTable = REBASE(0x827B210);
const ULONGLONG TLS_IDENTITYSTRUCT = REBASE(0x835AD38);
const ULONGLONG vftNetworkStream = REBASE(0x6CEB2D8);
const ULONGLONG vftMessageScriptSlot = REBASE(0x6DD7810);
const ULONGLONG vftWaitScriptSlot = REBASE(0x6DD7660);
const ULONGLONG vftFuncScriptSlot0 = REBASE(0x6DD78A0);
const ULONGLONG vftFuncScriptSlot1 = REBASE(0x6DD7A00);
const ULONGLONG GlobalPrint = REBASE(0x4243A90);
const ULONGLONG GlobalWait = REBASE(0x4245A60);
const ULONGLONG GlobalDelay = REBASE(0x4242620);
const ULONGLONG GlobalSpawn = REBASE(0x4244580);
const ULONGLONG GlobalLoadstring = REBASE(0x4242ED0);
const ULONGLONG GlobalRequire = REBASE(0x4243BA0);
const ULONGLONG GlobalWarn = REBASE(0x4245C10);
const ULONGLONG GlobalTick = REBASE(0x42452B0);
const ULONGLONG GlobalCollectGarbage = REBASE(0x4241DF0);
const ULONGLONG GlobalGetFenv = REBASE(0x4246430);
const ULONGLONG GlobalSetFenv = REBASE(0x4246570);

namespace Instance {
  const ULONGLONG PushInstance = REBASE(0x417A040);
  const ULONGLONG CastArgs = REBASE(0x40ED3F0);
  const ULONGLONG FireTouchInterest = REBASE(0x4CC9690);
  const ULONGLONG FireProximityPrompt = REBASE(0x30E9D90);
  const ULONGLONG FireMouseClick = REBASE(0x705270);
  const ULONGLONG FireRightMouseClick = REBASE(0x705270);
  const ULONGLONG FireServer = REBASE(0x34496E0);
  const ULONGLONG FireClient = REBASE(0x3449880);
  const ULONGLONG FireAllClients = REBASE(0x3449AD0);
}

namespace Task {
  const ULONGLONG TaskSynchronize = REBASE(0x43042E0);
  const ULONGLONG TaskDesynchronize = REBASE(0x4304750);
  const ULONGLONG TaskSpawn = REBASE(0x4305880);
  const ULONGLONG TaskDelay = REBASE(0x4305C20);
  const ULONGLONG TaskWait = REBASE(0x4305F30);
  const ULONGLONG TaskCancel = REBASE(0x4306140);
  const ULONGLONG TaskDefer = REBASE(0x4305390);
  const ULONGLONG pTaskScheduler = REBASE(0x8B79128);
  const ULONGLONG TaskSchedulerTargetFps = REBASE(0x83E7808);
}

namespace Lua {
  const ULONGLONG LuaVM_Load = REBASE(0x4188AF0);
  const ULONGLONG luaC_step = REBASE(0x25B0430);
  const ULONGLONG LuaD_Throw = REBASE(0x259B470);
  const ULONGLONG luaA_toobject = REBASE(0x2587880);
  const ULONGLONG LuaT_typenames = REBASE(0x6526340);
  const ULONGLONG LuaH_dummynode = REBASE(0x6500E48);
  const ULONGLONG luaT_objtypenamestr = REBASE(0x25C61B0);
  const ULONGLONG LuaO_nilobject = REBASE(0x6504708);
  const ULONGLONG OpCodeLookupTable = REBASE(0x6F7FC40);
  const ULONGLONG lua_pushfstring = REBASE(0x2588C50);
  const ULONGLONG lua_newstate = REBASE(0x258EFB0);
  const ULONGLONG lua_error = REBASE(0x258B520);
}

namespace RakNet {
  const ULONGLONG RakNetReceive = REBASE(0x27DAEE0);
  const ULONGLONG RaknetReportNetworkError = REBASE(0x4750120);
  const ULONGLONG RaknetHandleConnectionState = REBASE(0x4762BF0);
  const ULONGLONG RakNetReliabilityLayerSend = REBASE(0x27DDA00);
  const ULONGLONG RakNetSend = REBASE(0x27B9440);
  const ULONGLONG RakNetProcessNetworkPacket = REBASE(0x27C5640);
  const ULONGLONG UpdateNetworkLoop = REBASE(0x27AB230);
  const ULONGLONG SendPacketsToSelf = REBASE(0x27AF010);
  const ULONGLONG RakPeerReceive = REBASE(0x27B0A20);
  const ULONGLONG RakPeerVirtualTable = REBASE(0x6D03FC8);
  const ULONGLONG RakNetRecvFromLoop = REBASE(0x27C61B0);
  const ULONGLONG RakNetEncrypt = REBASE(0x27E12BC);
}

namespace Lua_Coroutine {
  const ULONGLONG lua_coroutine_create = REBASE(0x578B250);
  const ULONGLONG lua_coroutine_running = REBASE(0x578BAE0);
  const ULONGLONG lua_coroutine_status = REBASE(0x57897D0);
  const ULONGLONG lua_coroutine_wrap = REBASE(0x578B810);
  const ULONGLONG lua_coroutine_yield = REBASE(0x578BA80);
  const ULONGLONG lua_coroutine_isyieldable = REBASE(0x578BB50);
  const ULONGLONG lua_coroutine_finally = REBASE(0x578D1B0);
}
