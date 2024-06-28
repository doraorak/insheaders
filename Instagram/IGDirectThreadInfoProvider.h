//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadInfoProvider_h
#define IGDirectThreadInfoProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGDirectThreadKey, IGDirectThreadMetadata, IGWeakSet, NSString;

@interface IGDirectThreadInfoProvider : NSObject<NSObject> {
  /* instance variables */
  IGDirectThreadKey *_threadKey;
  IGDirectThreadMetadata *_threadMetadata;
  IGWeakSet *_subscriptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithThreadKey:(id)key threadMetadata:(id)metadata;
- (id)threadKey;
- (id)threadId;
- (id)threadMetadata;
- (id)subscribeToUpdatesWithBlock:(id /* block */)block callUpdateBlockOnSubscribe:(BOOL)subscribe;
@end

#endif /* IGDirectThreadInfoProvider_h */