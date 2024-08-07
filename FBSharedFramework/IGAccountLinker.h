//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountLinker_h
#define IGAccountLinker_h
@import Foundation;

#include "IGAccountLinkingCache.h"
#include "IGAccountLinkingInfoLookup.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGUserReading;

@interface IGAccountLinker : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGUserReading> *_userReader;
  IGAccountLinkingInfoLookup *_linkingInfoLookup;
  IGAccountLinkingCache *_accountLinkingCache;
  NSObject<IGMultipleAccountHandling> *_multipleAccountHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserReader:(id)reader linkingInfoLookup:(id)lookup multipleAccountHandler:(id)handler;
- (void)createAccountLinkingGroupWithMainAccount:(id)account childAccounts:(id)accounts completion:(id /* block */)completion;
- (void)updateAccountLinkingStateForLoggedInUsersIgnoringTTL:(BOOL)ttl;
- (long long)linkingEligibilityForAccount:(id)account;
- (BOOL)passwordlessChildCanUnlinkFromMainWithChildAccountPK:(id)pk;
@end

#endif /* IGAccountLinker_h */
