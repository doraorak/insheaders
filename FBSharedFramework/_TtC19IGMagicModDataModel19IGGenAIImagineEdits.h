//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGMagicModDataModel19IGGenAIImagineEdits_h
#define _TtC19IGMagicModDataModel19IGGenAIImagineEdits_h
@import Foundation;

#include "IGMagicModToolEdits.h"

@class NSArray, NSString;

@interface _TtC19IGMagicModDataModel19IGGenAIImagineEdits : IGMagicModToolEdits // (Swift)

@property (nonatomic, copy) NSArray *pinnedPrompts;
@property (nonatomic, readonly) NSString *participationMediaId;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)splittedPrompts;
- (id)initWithOriginalAsset:(id)asset type:(long long)type originalPreviewImage:(id)image prompt:(id)prompt authorOfSharedStory:(id)story topic:(id)topic editedAssets:(id)assets selectedEditedAsset:(id)asset;
@end

#endif /* _TtC19IGMagicModDataModel19IGGenAIImagineEdits_h */