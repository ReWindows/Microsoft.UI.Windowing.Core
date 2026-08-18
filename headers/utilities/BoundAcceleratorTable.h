#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
namespace Filters {
class BoundAcceleratorTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BoundAcceleratorTable@Filters@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@BoundAcceleratorTable@Filters@@SA?AV?$SmartPtr@VBoundAcceleratorTable@Filters@@@CFlat@@W4WindowHandle@Core@@W4AccelHandle@6@@Z
    static WindissectOpaque CopyFrom(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BoundAcceleratorTable@Filters@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@BoundAcceleratorTable@Filters@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPreTranslate@BoundAcceleratorTable@Filters@@UEAA_NPEAVContentNode@Content@@PEAUMsgStruct@Core@@W4MessageModifiers@6@@Z
    virtual bool DoPreTranslate(WindissectOpaque *, WindissectOpaque *, int);
};
} // namespace Filters
