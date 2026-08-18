#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
class CFlat {
public:
    class Abandonment;
    class CFlatCultureData;
    class ComExportAdapterBase;
    class ComExportAdapterContainer;
    class ComImportAdapter;
    class ComMarshaling;
    class ContextLocals;
    class DelegateData;
    class DelegateOperations;
    class EntryExit;
    class ExceptionHandling;
    class ExceptionHolder;
    class Generics;
    class HashCode;
    class MemoryManagement;
    class SehSafe;
    class TypeId;
    class Win32ErrorHandling;
    class WinRTExportAdapterBase;
    class WinRTExportAdapterContainer;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationFactory$@CFlat@@YA?AU?$InterfacePtr@VIActivationFactory@CFlat@@@1@PEAVString@System@@@Z
    WindissectOpaque GetActivationFactory$(::System::String *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationFactory$@CFlat@@YAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z
    long GetActivationFactory$(HSTRING__*, IActivationFactory * *);
};
