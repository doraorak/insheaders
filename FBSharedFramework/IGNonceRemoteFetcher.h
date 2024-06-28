//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNonceRemoteFetcher_h
#define IGNonceRemoteFetcher_h
@import Foundation;

#include "IGAccountStoreCoordinator.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGNonceRemoteFetcher : NSObject<NSObject> {
  /* instance variables */
  IGAccountStoreCoordinator *_accountStoreCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountStoreCoordinator:(id)coordinator;
- (void)accountStoreCoordinator:(id)coordinator didFindEnabledUser:(id)user withMultipleAccountHandler:(id)handler onetapSavingSurface:(long long)surface nonceSavingSurface:(long long)surface analyticsLogger:(id)logger shouldIncludeLinkedProfiles:(BOOL)profiles;
@end

#endif /* IGNonceRemoteFetcher_h */