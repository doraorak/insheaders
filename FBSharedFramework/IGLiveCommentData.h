//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveCommentData_h
#define IGLiveCommentData_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGLiveCommentData : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _actionCommentData_selected;
  NSString *_actionCommentData_buttonTitle;
  NSString *_actionCommentData_commentTitle;
  long long _systemCommentData_supportTier;
  long long _systemCommentData_badgeCount;
  BOOL _joinCommentData_hasWaved;
  long long _joinCommentData_joinCount;
  long long _userCommentData_supportTier;
  long long _userCommentData_badgeCount;
  BOOL _userCommentData_shouldProfilePictureGlow;
}

/* class methods */
+ (id)actionCommentDataWithSelected:(BOOL)selected buttonTitle:(id)title commentTitle:(id)title;
+ (id)debugLiveSwapAction;
+ (id)joinCommentDataWithHasWaved:(BOOL)waved joinCount:(long long)count;
+ (id)systemCommentDataWithSupportTier:(long long)tier badgeCount:(long long)count;
+ (id)userCommentDataWithSupportTier:(long long)tier badgeCount:(long long)count shouldProfilePictureGlow:(BOOL)glow;

/* instance methods */
@end

#endif /* IGLiveCommentData_h */