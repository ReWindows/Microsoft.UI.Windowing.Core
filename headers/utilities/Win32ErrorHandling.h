#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
namespace CFlat {
class Win32ErrorHandling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertHRToWin32Error@Win32ErrorHandling@CFlat@@SAIH@Z
    static unsigned int ConvertHRToWin32Error(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWin32LastErrorForHR@Win32ErrorHandling@CFlat@@SAXH@Z
    static void SetWin32LastErrorForHR(int);
};
} // namespace CFlat
