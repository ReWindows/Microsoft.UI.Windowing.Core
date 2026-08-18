#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 14 member(s).
namespace Core {
class Util {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckWin32Api@Util@Core@@SAX_N@Z
    static void CheckWin32Api(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandle@Util@Core@@SA?AW4Handle@2@PEAVObject@System@@@Z
    static int CreateHandle(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeHandle@Util@Core@@SA?AV?$SmartPtr@VObject@System@@@CFlat@@W4Handle@2@PEAVType@System@@W4AllowMissing@2@W4Win32Error@2@@Z
    static WindissectOpaque DecodeHandle(int, ::System::Type *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DllExceptionFilter@Util@Core@@SAJPEAVException@System@@@Z
    static long DllExceptionFilter(::System::Exception *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFast@Util@Core@@SAXXZ
    static void FailFast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLowestBitIndex@Util@Core@@SAHG@Z
    static int FindLowestBitIndex(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@Util@Core@@SA?AV?$SmartPtr@VType@System@@@CFlat@@PEAVObject@System@@@Z
    static WindissectOpaque GetType(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitContextStatics@Util@Core@@SAXXZ
    static void InitContextStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFreeThreadedContext@Util@Core@@SAXXZ
    static void InitializeFreeThreadedContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCondition@Util@Core@@SAX_NW4Win32Error@2@PEAVString@System@@@Z
    static void ValidateCondition(bool, int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSuccess@Util@Core@@SAXJ@Z
    static void ValidateSuccess(long);
};
} // namespace Core
