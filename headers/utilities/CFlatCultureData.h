#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 3 member(s).
namespace CFlat {
class CFlatCultureData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDigit@CFlatCultureData@CFlat@@SAHU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@2@HF@Z
    static int AppendDigit(WindissectOpaque, int, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteZerosTo@CFlatCultureData@CFlat@@SAHHU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@2@HH@Z
    static int WriteZerosTo(int, WindissectOpaque, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteTo@CFlatCultureData@CFlat@@CAHU?$StaticArray$1@_S@2@U?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@2@H@Z
    static int WriteTo(WindissectOpaque$1<char16_t>, WindissectOpaque, int);
};
} // namespace CFlat
