//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CLNoticeLauncherExposer_h
#define CLNoticeLauncherExposer_h
@import Foundation;

@protocol {shared_ptr<mobileconfig::FBMobileConfigManager>="__ptr_"^{FBMobileConfigManager}"__cntrl_"^{__shared_weak_count}};

@interface CLNoticeLauncherExposer : NSObject {
  /* instance variables */
  struct shared_ptr<mobileconfig::FBMobileConfigManager> { struct FBMobileConfigManager *__ptr_; struct __shared_weak_count *__cntrl_; } _mcManager;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
@end

#endif /* CLNoticeLauncherExposer_h */