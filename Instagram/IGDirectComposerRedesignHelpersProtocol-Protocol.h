//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerRedesignHelpersProtocol_Protocol_h
#define IGDirectComposerRedesignHelpersProtocol_Protocol_h
@import Foundation;

@protocol IGDirectComposerRedesignHelpersProtocol <NSObject>

@property (nonatomic, readonly) long long redesignStyle;

/* instance methods */
- (BOOL)isRedesignControlExperience;
- (BOOL)isTestOverrideStyleOverflowOnLHS;
- (BOOL)isTestOverrideStyleOverflowOnRHS;
- (BOOL)isTestOverrideStyleStickerOnComposer;
- (BOOL)isTestOverrideStyleStickerShiftedLHS;
- (BOOL)isTestOverrideStyleGalleryInOverflow;
@end

#endif /* IGDirectComposerRedesignHelpersProtocol_Protocol_h */
