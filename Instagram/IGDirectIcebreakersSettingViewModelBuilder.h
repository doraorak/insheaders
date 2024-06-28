//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectIcebreakersSettingViewModelBuilder_h
#define IGDirectIcebreakersSettingViewModelBuilder_h
@import Foundation;

@class NSString;

@interface IGDirectIcebreakersSettingViewModelBuilder : NSObject {
  /* instance variables */
  NSString *_ibId;
  NSString *_questionText;
  NSString *_responseText;
}

/* class methods */
+ (id)directIcebreakersSettingViewModelFromExistingDirectIcebreakersSettingViewModel:(id)model;

/* instance methods */
- (id)initWithIbId:(id)id questionText:(id)text;
- (id)build;
- (id)withIbId:(id)id;
- (id)withQuestionText:(id)text;
- (id)withResponseText:(id)text;
@end

#endif /* IGDirectIcebreakersSettingViewModelBuilder_h */