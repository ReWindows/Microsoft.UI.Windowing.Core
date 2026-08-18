#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 3 member(s).
class GDIHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorizeBitmap@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@KK@Z
    HBITMAP__* ColorizeBitmap(HBITMAP__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorizeBitmapFromResource@GDIHelpers@@YAJPEAUHINSTANCE__@@PEB_W1_NKKPEAPEAUHBITMAP__@@@Z
    long ColorizeBitmapFromResource(HINSTANCE__*, wchar_t const *, wchar_t const *, bool, unsigned long, unsigned long, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z
    void FillRectARGB(HDC__*, tagRECT const *, unsigned char, unsigned long, bool);
};
