#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 3 member(s).
class Windowing {
public:
    class AppWindowTitleBar;
    class AppWindowTitleBarFeature;
    class AppWindowTitleBarStatics;
    class DefaultFeature;
    class ExternalFeature;
    class ExternalFeatureType;
    class Feature;
    class FeatureCallContext;
    class FeatureCallManager;
    class FeatureType;
    class FeatureTypeBuilder;
    class FeatureTypeData;
    class Icon;
    class InternalFeatureType;
    class MessageFilterBuilder;
    class Window;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureSubclassProc@Windowing@@YA_JPEAUHWND__@@I_K_J@Z
    int64_t FeatureSubclassProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureWindowCreationProc@Windowing@@YA_JPEAUHWND__@@I_K_J@Z
    int64_t FeatureWindowCreationProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureWindowProc@Windowing@@YA_JPEAUHWND__@@I_K_J@Z
    int64_t FeatureWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
};
