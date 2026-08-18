#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 16 member(s).
namespace System {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@0@Z
    static WindissectOpaque Concat(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV?$Array$2@_S$00@4@HH@Z
    static WindissectOpaque Create$(WindissectOpaque$2<char16_t, 1> *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_S@Z
    static WindissectOpaque Create$(char16_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_SHH@Z
    static WindissectOpaque Create$(char16_t *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_WHH@Z
    static WindissectOpaque Create$(wchar_t *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@String@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FastAllocateString@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@H@Z
    static WindissectOpaque FastAllocateString(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@String@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalTo$@String@System@@QEAAXU?$Ref@PEA_W@CFlat@@@Z
    void MarshalTo$(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@String@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUninitialized@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@H@Z
    static WindissectOpaque _CreateUninitialized(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Equality@String@System@@SA_NPEAV12@0@Z
    static bool op_Equality(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@String@System@@SA_NPEAV12@0@Z
    static bool op_Inequality(::System::String *, ::System::String *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsHelper@String@System@@CA_NPEAV12@0@Z
    static bool EqualsHelper(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillStringChecked@String@System@@CAXPEAV12@H0@Z
    static void FillStringChecked(::System::String *, int, ::System::String *);
};
} // namespace System
