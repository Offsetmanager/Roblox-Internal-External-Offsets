#include <cstdint>

namespace Offsets
{
    const uintptr_t Print = REBASE(0x4BE0790);
    const uintptr_t PushInstance = REBASE(0x1D58820);
    const uintptr_t OpCodeLookUpTable = REBASE(0x6358A60);
    const uintptr_t ScriptContextResume = REBASE(0x1E2D8E0);
    const uintptr_t KTable = REBASE(0x836C500);
    const uintptr_t GetGlobalState = REBASE(0x1D5F230);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x4B24200);
        const uintptr_t LuaO_NilObject = REBASE(0x6B76F08);
        const uintptr_t LuaH_DummyNode = REBASE(0x6B76D98);
        const uintptr_t LuaD_Throw = REBASE(0x4B210C0);
    }

    namespace DataModel
    {
        const uintptr_t Children = 0x70;
        const uintptr_t GameLoaded = 0x578;
        const uintptr_t ScriptContext = 0x440;
        const uintptr_t FakeDataModelToDataModel = 0x1D0;

        const uintptr_t FakeDataModelPointer = REBASE(0x7DCCD88);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerPointer = REBASE(0x836AAE8);

        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobEnd = 0xD0;
        const uintptr_t JobName = 0x18;
    }

    namespace ExtraSpace
    {
        const uintptr_t ScriptContextToResume = 0x7E8;
        const uintptr_t RequireBypass = 0x818;
        const uintptr_t isCoreScript = 0x168;
    }
}
