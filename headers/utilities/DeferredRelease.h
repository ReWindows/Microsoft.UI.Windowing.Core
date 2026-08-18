#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
namespace Cn::Com {
class DeferredRelease {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Callback_ProcessItems@DeferredRelease@Com@Cn@@SAXPEAUDeferredReleaseEntry@123@@Z
    static void NoContext_Callback_ProcessItems(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommonCreate@DeferredRelease@Com@Cn@@AEAAXPEAUIUnknown@@P6AXPEAX@ZUDeferredAction@123@1@Z
    void CommonCreate(IUnknown *, void ( *)(void *), WindissectOpaque, void *);
};
} // namespace Cn::Com
