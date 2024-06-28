//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIStorySliderStickerDict_StickerExtras_h
#define IGAPIStorySliderStickerDict_StickerExtras_h
@import Foundation;

@interface IGAPIStorySliderStickerDict (StickerExtras) <IGSmartStickerModelType, IGStickerModelType>
/* instance methods */
- (id)pk;
- (void)setIsBoostEligible:(BOOL)eligible;
- (BOOL)includeInRecent;
- (id)stickerSection;
- (void)setStickerSection:(id)section;
- (unsigned long long)smartStickerType;
@end

#endif /* IGAPIStorySliderStickerDict_StickerExtras_h */
