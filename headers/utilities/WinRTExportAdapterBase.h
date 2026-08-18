#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
namespace CFlat {
class WinRTExportAdapterBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTExportAdapterBase@CFlat@@QEAAJPEAKPEAPEAU_GUID@@PEAVObject@System@@PEAX@Z
    long GetIids(unsigned long *, _GUID * *, ::System::Object *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTExportAdapterBase@CFlat@@QEAAJPEAPEAUHSTRING__@@PEAVWinRTExportAdapterContainer@2@PEAX@Z
    long GetRuntimeClassName(HSTRING__* *, WindissectOpaque *, void *);
};
} // namespace CFlat
