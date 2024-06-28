//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectWriteWithAIIntentTarget_h
#define IGDirectWriteWithAIIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGDirectWriteWithAIComposerDelegate-Protocol.h"

@class NSString;

@interface IGDirectWriteWithAIIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSObject<IGDirectWriteWithAIComposerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessage:(id)message delegate:(id)delegate;
@end

#endif /* IGDirectWriteWithAIIntentTarget_h */
