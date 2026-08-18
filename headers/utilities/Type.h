#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 10 member(s).
namespace System {
class Type {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Type@System@@SA?AV?$SmartPtr@VType@System@@@CFlat@@PEAUTypeId@4@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Type@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Type@System@@QEAA_NPEAV12@@Z
    bool Equals(::System::Type *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Type@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Type@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfaces@Type@System@@QEAA?AV?$SmartPtr@V?$Array$2@V?$SmartPtr@VType@System@@@CFlat@@$00@CFlat@@@CFlat@@XZ
    WindissectOpaque GetInterfaces();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssignableFrom@Type@System@@QEAA_NPEAV12@@Z
    bool IsAssignableFrom(::System::Type *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Type@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Type@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque get_Name();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImplementsInterface@Type@System@@AEAA_NPEAV12@@Z
    bool ImplementsInterface(::System::Type *);
};
} // namespace System
