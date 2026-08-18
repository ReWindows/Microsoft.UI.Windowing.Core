#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Filters {
class LocalAcceleratorTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@LocalAcceleratorTable@Filters@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@LocalAcceleratorTable@Filters@@SA?AV?$SmartPtr@VLocalAcceleratorTable@Filters@@@CFlat@@W4AccelHandle@Core@@H@Z
    static WindissectOpaque CopyFrom(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@LocalAcceleratorTable@Filters@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPreTranslate@LocalAcceleratorTable@Filters@@UEAA_NPEAVContentNode@Content@@PEAUMsgStruct@Core@@W4MessageModifiers@6@@Z
    virtual bool DoPreTranslate(WindissectOpaque *, WindissectOpaque *, int);
};
} // namespace Filters
