//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IABWebNavigation21PopupInplaceNavigator_h
#define _TtC16IABWebNavigation21PopupInplaceNavigator_h
@import Foundation;

#include "_TtP6IABAPI17NavigationDecider_-Protocol.h"

@interface _TtC16IABWebNavigation21PopupInplaceNavigator : NSObject { // (Swift)
  /* instance variables */
   mainWebView;
   blankWebView;
}

@property (nonatomic, retain) NSObject<_TtP6IABAPI17NavigationDecider_> *navigationDecider;

/* instance methods */
- (id)navigatePopupAction:(id)action forWebView:(id)view withConfiguration:(id)configuration;
- (id)init;
@end

#endif /* _TtC16IABWebNavigation21PopupInplaceNavigator_h */
