#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
namespace Cn {
class Process {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCallbackError@Process@Cn@@SAXHPEAX@Z
    static void NotifyCallbackError(int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOutOfMemory@Process@Cn@@SAX_K@Z
    static void NotifyOutOfMemory(uint64_t);
};
} // namespace Cn
