//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MPESettingsSubscriptionBuilderForIGD_h
#define MPESettingsSubscriptionBuilderForIGD_h
@import Foundation;

#include "MPESettingsSubscriptionPandoBuilder.h"
#include "NSObject-Protocol.h"

@class FBGraphQLServiceToken, NSString;

@interface MPESettingsSubscriptionBuilderForIGD : NSObject<NSObject> {
  /* instance variables */
  MPESettingsSubscriptionPandoBuilder *_internalQueryBuilder;
  FBGraphQLServiceToken *_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)handleWithService:(id)service updateCallback:(id /* block */)callback failureCallback:(id /* block */)callback;
@end

#endif /* MPESettingsSubscriptionBuilderForIGD_h */