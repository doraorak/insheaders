//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGAvatarsMentionableUsersTray50IGAvatarsMentionableUsersTrayViewSectionController_h
#define _TtC29IGAvatarsMentionableUsersTray50IGAvatarsMentionableUsersTrayViewSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@interface _TtC29IGAvatarsMentionableUsersTray50IGAvatarsMentionableUsersTrayViewSectionController : IGListSectionController { // (Swift)
  /* instance variables */
   mentionableUser;
   delegate;
}

/* instance methods */
- (id)init;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* _TtC29IGAvatarsMentionableUsersTray50IGAvatarsMentionableUsersTrayViewSectionController_h */
