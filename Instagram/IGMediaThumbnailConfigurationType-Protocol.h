//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaThumbnailConfigurationType_Protocol_h
#define IGMediaThumbnailConfigurationType_Protocol_h
@import Foundation;

@protocol IGMediaThumbnailConfigurationType <NSObject>
/* instance methods */
- (BOOL)allowSelection;
- (BOOL)showHighlight;
- (BOOL)showPendingFeaturedProductOverlay;
- (unsigned long long)supportedGlyphTypes;
- (unsigned long long)carouselIndex:(id)index;
- (unsigned long long)checkmarkPosition;
- (long long)metadataTypeForMedia:(id)media;
- (unsigned long long)metadataPosition;
- (BOOL)showMetadataOnSelectionVisible;
- (BOOL)showLoadingSpinner;
- (BOOL)isDisabled;
- (BOOL)isCheckmarkTappable;
- (BOOL)shouldShowUnselectedShadowToggle;
@end

#endif /* IGMediaThumbnailConfigurationType_Protocol_h */