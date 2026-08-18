#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
namespace System::Text {
class StringBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@StringBuilder@Text@System@@QEAA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@PEAVString@3@@Z
    WindissectOpaque Append(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@StringBuilder@Text@System@@QEAA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@_S@Z
    WindissectOpaque Append(char16_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@StringBuilder@Text@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@StringBuilder@Text@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@StringBuilder@Text@System@@AEAAXHH@Z
    void Init$(int, int);
};
} // namespace System::Text
