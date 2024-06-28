//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedOpenCarouselNuxIntentTargetInfo_h
#define IGFeedOpenCarouselNuxIntentTargetInfo_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGFeedOpenCarouselNuxIntentTargetInfo : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _consumerNuxInfo_isPrivateAccount;
  NSString *_consumerNuxInfo_primaryButtonText;
  NSString *_consumerNuxInfo_secondaryButtonText;
  id /* block */ _consumerNuxInfo_primaryButtonActionHandler;
  id /* block */ _consumerNuxInfo_secondaryButtonActionHandler;
  BOOL _producerNuxInfo_isPrivateAccount;
  NSString *_producerNuxInfo_primaryButtonText;
  NSString *_producerNuxInfo_secondaryButtonText;
  id /* block */ _producerNuxInfo_primaryButtonActionHandler;
  id /* block */ _producerNuxInfo_secondaryButtonActionHandler;
  BOOL _approveMediaNuxInfo_isPrivateAccount;
  NSString *_approveMediaNuxInfo_primaryButtonText;
  NSString *_approveMediaNuxInfo_secondaryButtonText;
  id /* block */ _approveMediaNuxInfo_primaryButtonActionHandler;
  id /* block */ _approveMediaNuxInfo_secondaryButtonActionHandler;
}

/* class methods */
+ (id)approveMediaNuxInfoWithIsPrivateAccount:(BOOL)account primaryButtonText:(id)text secondaryButtonText:(id)text primaryButtonActionHandler:(id /* block */)handler secondaryButtonActionHandler:(id /* block */)handler;
+ (id)consumerNuxInfoWithIsPrivateAccount:(BOOL)account primaryButtonText:(id)text secondaryButtonText:(id)text primaryButtonActionHandler:(id /* block */)handler secondaryButtonActionHandler:(id /* block */)handler;
+ (id)producerNuxInfoWithIsPrivateAccount:(BOOL)account primaryButtonText:(id)text secondaryButtonText:(id)text primaryButtonActionHandler:(id /* block */)handler secondaryButtonActionHandler:(id /* block */)handler;

/* instance methods */
@end

#endif /* IGFeedOpenCarouselNuxIntentTargetInfo_h */