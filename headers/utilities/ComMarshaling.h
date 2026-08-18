#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace CFlat {
class ComMarshaling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupNativeInterface@ComMarshaling@CFlat@@SAXPEAUIUnknown@@@Z
    static void CleanupNativeInterface(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixRefCounts@ComMarshaling@CFlat@@SAPEAXPEAUIUnknown@@PEAX_N@Z
    static void * FixRefCounts(IUnknown *, void *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToManagedInterface@ComMarshaling@CFlat@@SA?AV?$SmartPtr@VObject@System@@@2@PEAUIUnknown@@PEBUComInterfaceTypeId@2@@Z
    static WindissectOpaque ToManagedInterface(IUnknown *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToNativeInterface@ComMarshaling@CFlat@@SAPEAXPEAVObject@System@@PEAUIUnknown@@PEBUComInterfaceTypeId@2@AEBU_GUID@@@Z
    static void * ToNativeInterface(::System::Object *, IUnknown *, WindissectOpaque const *, _GUID const &);
};
} // namespace CFlat
