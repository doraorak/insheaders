//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGDirectDeidentifiedRequestProvider19IGDirectACSProvider_h
#define _TtC35IGDirectDeidentifiedRequestProvider19IGDirectACSProvider_h
@import Foundation;

#include "ACSRedemptionDelegate-Protocol.h"

@interface _TtC35IGDirectDeidentifiedRequestProvider19IGDirectACSProvider : NSObject<ACSRedemptionDelegate> { // (Swift)
  /* instance variables */
   projectName;
   anonCredProvider;
   continuations;
   userDefaults;
   prefetchingInProgress;
   prefetchConfig;
}

/* instance methods */
- (void)redeemDidSucceedWithRedeemableToken:(id)token;
- (void)redeemDidFailWithError:(id)error;
- (id)init;
@end

#endif /* _TtC35IGDirectDeidentifiedRequestProvider19IGDirectACSProvider_h */