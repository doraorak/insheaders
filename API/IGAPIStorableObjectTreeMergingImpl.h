//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIStorableObjectTreeMergingImpl_h
#define IGAPIStorableObjectTreeMergingImpl_h
@import Foundation;

#include "IGAPIStoreProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGAPIStorableObjectTreeMergingImpl : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGAPIStoreProviding> *_APIStoreProviding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAPIStoreProviding:(id)providing;
- (BOOL)treeMergingEnabled;
- (id)mergeStorableObjectsFromTree:(id)tree;
- (id)mergeStorableObjectsFromStaleTree:(id)tree;
@end

#endif /* IGAPIStorableObjectTreeMergingImpl_h */