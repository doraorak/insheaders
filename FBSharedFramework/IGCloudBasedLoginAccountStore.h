//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCloudBasedLoginAccountStore_h
#define IGCloudBasedLoginAccountStore_h
@import Foundation;

#include "UICKeyChainStore.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IGCloudBasedLoginAccountStore : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_concurrentQueue;
  UICKeyChainStore *_keychainStore;
}

@property (readonly, copy, nonatomic) NSString *cloudIdentifier;

/* class methods */
+ (id)defaultStore;

/* instance methods */
- (id)initWithKeychainStore:(id)store;
- (void)clear;
@end

#endif /* IGCloudBasedLoginAccountStore_h */