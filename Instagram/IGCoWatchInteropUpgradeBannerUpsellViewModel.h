//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchInteropUpgradeBannerUpsellViewModel_h
#define IGCoWatchInteropUpgradeBannerUpsellViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGCoWatchInteropUpgradeBannerUpsellViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_initiator_bannerText;
  NSString *_participant_initiatorName;
  NSString *_participant_bannerText;
}

/* class methods */
+ (id)initiatorWithBannerText:(id)text;
+ (id)participantWithInitiatorName:(id)name bannerText:(id)text;

/* instance methods */
@end

#endif /* IGCoWatchInteropUpgradeBannerUpsellViewModel_h */
