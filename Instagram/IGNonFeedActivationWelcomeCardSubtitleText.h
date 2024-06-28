//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNonFeedActivationWelcomeCardSubtitleText_h
#define IGNonFeedActivationWelcomeCardSubtitleText_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSAttributedString, NSString;

@interface IGNonFeedActivationWelcomeCardSubtitleText : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSAttributedString *_attributedSubtitleStringKey_attributedSubtitleString;
  NSString *_subtitleStringKey_subtitleString;
}

/* class methods */
+ (id)attributedSubtitleStringKeyWithAttributedSubtitleString:(id)string;
+ (id)subtitleStringKeyWithSubtitleString:(id)string;

/* instance methods */
@end

#endif /* IGNonFeedActivationWelcomeCardSubtitleText_h */
