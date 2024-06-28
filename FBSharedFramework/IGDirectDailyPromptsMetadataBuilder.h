//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectDailyPromptsMetadataBuilder_h
#define IGDirectDailyPromptsMetadataBuilder_h
@import Foundation;

@class NSString, NSURL;

@interface IGDirectDailyPromptsMetadataBuilder : NSObject {
  /* instance variables */
  NSString *_promptId;
  NSString *_promptTitle;
  BOOL _isActive;
  BOOL _hasCreatorReplied;
  long long _countDownTimeStampInSeconds;
  NSURL *_gridViewURL;
  NSString *_itemId;
}

/* class methods */
+ (id)directDailyPromptsMetadataFromExistingDirectDailyPromptsMetadata:(id)metadata;

/* instance methods */
- (id)initWithPromptId:(id)id promptTitle:(id)title itemId:(id)id;
- (id)build;
- (id)withPromptId:(id)id;
- (id)withPromptTitle:(id)title;
- (id)withIsActive:(BOOL)active;
- (id)withHasCreatorReplied:(BOOL)replied;
- (id)withCountDownTimeStampInSeconds:(long long)seconds;
- (id)withGridViewURL:(id)url;
- (id)withItemId:(id)id;
@end

#endif /* IGDirectDailyPromptsMetadataBuilder_h */
