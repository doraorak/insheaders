//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileBodyContentViewModel_h
#define IGProfileBodyContentViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGProfileBodyContentViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_titleSubtitleAndDetail_title;
  NSString *_titleSubtitleAndDetail_subtitle;
  NSString *_titleSubtitleAndDetail_detail;
  NSString *_titleSubtitleAndDetail_category;
  NSString *_titleSubtitleAndDetail_collaboratorStatus;
  BOOL _titleSubtitleAndDetail_showProfileCategory;
}

/* class methods */
+ (id)titleSubtitleAndDetailWithTitle:(id)title subtitle:(id)subtitle detail:(id)detail category:(id)category collaboratorStatus:(id)status showProfileCategory:(BOOL)category;

/* instance methods */
@end

#endif /* IGProfileBodyContentViewModel_h */