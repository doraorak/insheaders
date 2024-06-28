//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGEditProfileHeaderView23IGEditProfileHeaderView_IGEditProfileHeaderView5_h
#define _TtC23IGEditProfileHeaderView23IGEditProfileHeaderView_IGEditProfileHeaderView5_h
@import Foundation;

@interface _TtC23IGEditProfileHeaderView23IGEditProfileHeaderView (IGEditProfileHeaderView5) <IGProfileUserCoinFlipStatusListener>
/* instance methods */
- (void)coinFlipManager:(id)manager didUpdateBackgroundChoice:(id)choice;
- (void)coinFlipManager:(id)manager didUpdatePoseAnimation:(id)animation;
- (void)coinFlipManager:(id)manager didUpdateCoinFlipStatus:(long long)status animated:(BOOL)animated;
@end

#endif /* _TtC23IGEditProfileHeaderView23IGEditProfileHeaderView_IGEditProfileHeaderView5_h */