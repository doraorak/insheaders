//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAREffectAgeRestrictedDisclaimerView_h
#define IGAREffectAgeRestrictedDisclaimerView_h
@import Foundation;

@class IGBannerView, IGUserSession;

@interface IGAREffectAgeRestrictedDisclaimerView : NSObject {
  /* instance variables */
  IGUserSession *_session;
  IGBannerView *_ageRestrictionNoticeBannerView;
}

/* instance methods */
- (id)initWithSession:(id)session;
@end

#endif /* IGAREffectAgeRestrictedDisclaimerView_h */