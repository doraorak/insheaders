//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocalizedStringAttributionDetector_h
#define IGLocalizedStringAttributionDetector_h
@import Foundation;

@class NSArray, NSMutableArray, NSString;

@interface IGLocalizedStringAttributionDetector : NSObject {
  /* instance variables */
  NSArray *_appSupportedLocalesForLocalization;
  NSArray *_argumentCaptureGroups;
  NSArray *_argumentCaptureGroupNames;
  NSString *_escapedRegexArgumentCaptureGroupPrefix;
  NSString *_escapedRegexArgumentCaptureGroupSuffix;
  NSMutableArray *_everMatchedLocales;
}

/* instance methods */
- (id)initWithTranslationsBundle:(id)bundle;
@end

#endif /* IGLocalizedStringAttributionDetector_h */