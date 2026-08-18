#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 8 member(s).
namespace System {
class ThrowHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentException@ThrowHelper@System@@SAXW4ExceptionResource@2@@Z
    static void ThrowArgumentException(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentNullException@ThrowHelper@System@@SAXW4ExceptionArgument@2@@Z
    static void ThrowArgumentNullException(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentOutOfRangeException@ThrowHelper@System@@SAXW4ExceptionArgument@2@@Z
    static void ThrowArgumentOutOfRangeException(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentOutOfRangeException@ThrowHelper@System@@SAXW4ExceptionArgument@2@W4ExceptionResource@2@@Z
    static void ThrowArgumentOutOfRangeException(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentOutOfRange_IndexException@ThrowHelper@System@@SAXXZ
    static void ThrowArgumentOutOfRange_IndexException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowInvalidOperationException@ThrowHelper@System@@SAXW4ExceptionResource@2@@Z
    static void ThrowInvalidOperationException(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowKeyNotFoundException@ThrowHelper@System@@SAXXZ
    static void ThrowKeyNotFoundException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowNotSupportedException@ThrowHelper@System@@SAXW4ExceptionResource@2@@Z
    static void ThrowNotSupportedException(int);
};
} // namespace System
