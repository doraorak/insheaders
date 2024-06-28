//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGIABSafeBrowsingController27IGIABSafeBrowsingController_h
#define _TtC27IGIABSafeBrowsingController27IGIABSafeBrowsingController_h
@import Foundation;

#include "_TtP27IGIABSafeBrowsingController35IGIABSafeBrowsingControllerDelegate_-Protocol.h"

@interface _TtC27IGIABSafeBrowsingController27IGIABSafeBrowsingController : NSObject { // (Swift)
  /* instance variables */
   _userDefaults;
}

@property (nonatomic, weak) NSObject<_TtP27IGIABSafeBrowsingController35IGIABSafeBrowsingControllerDelegate_> *delegate;
@property (nonatomic) BOOL isSafeBrowsingEnabled;

/* class methods */
+ (id)helpCenterURLWithUserSession:(id)session;
+ (void)showIABSafeBrowsingLearnMoreViewWithUserSession:(id)session presentingViewController:(id)controller;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)init;
@end

#endif /* _TtC27IGIABSafeBrowsingController27IGIABSafeBrowsingController_h */
