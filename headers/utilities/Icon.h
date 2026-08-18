#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
namespace Windowing {
class Icon {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentIconHandle@Icon@Windowing@@SA?AW4IconHandle@Core@@W4WindowHandle@4@@Z
    static int GetCurrentIconHandle(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultIconHandle@Icon@Windowing@@SA?AW4IconHandle@Core@@W4WindowHandle@4@@Z
    static int GetDefaultIconHandle(int);
};
} // namespace Windowing
