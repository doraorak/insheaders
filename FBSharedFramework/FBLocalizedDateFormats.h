//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLocalizedDateFormats_h
#define FBLocalizedDateFormats_h
@import Foundation;

@class NSArray, NSDictionary, NSLocale, NSString;
@protocol OS_dispatch_group;

@interface FBLocalizedDateFormats : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_group> *_formatsInitializingGroup;
  NSLocale *_locale;
  NSArray *_templates;
  NSString *_cacheKey;
}

@property (retain) NSDictionary *formats;

/* instance methods */
- (id)initWithTemplates:(id)templates overrideLocale:(id)locale;
- (void)_onCalendarChanged:(id)changed;
- (void)_rebuildFormatTemplates;
@end

#endif /* FBLocalizedDateFormats_h */
