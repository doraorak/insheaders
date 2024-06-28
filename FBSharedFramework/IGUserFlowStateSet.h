//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserFlowStateSet_h
#define IGUserFlowStateSet_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IGUserFlowStateSetDelegate;

@interface IGUserFlowStateSet : NSObject<NSObject> {
  /* instance variables */
  NSMutableDictionary *_states;
  NSMutableDictionary *_nestedStateSets;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
}

@property (weak, nonatomic) NSObject<IGUserFlowStateSetDelegate> *delegate;
@property (readonly, nonatomic) NSString *prefix;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPrefix:(id)prefix;
- (id)stateSetNestedInState:(id)state;
- (id)_nestedStateSetWithPrefix:(id)prefix;
- (id)nestableStateSet;
@end

#endif /* IGUserFlowStateSet_h */
