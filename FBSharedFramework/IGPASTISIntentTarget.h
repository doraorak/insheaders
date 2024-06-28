//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPASTISIntentTarget_h
#define IGPASTISIntentTarget_h
@import Foundation;

#include "BKObjectSet.h"
#include "FBIntentTarget-Protocol.h"
#include "IGUser.h"

@class NSString;

@interface IGPASTISIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) BOOL shouldPrefetch;
@property (readonly, nonatomic) IGUser *targetUser;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BKObjectSet *objectSet;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *linkEntrySource;
@property (readonly, nonatomic) BOOL isSecuredThread;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShouldPrefetch:(BOOL)prefetch targetUser:(id)user action:(long long)action objectSet:(id)set url:(id)url linkEntrySource:(id)source isSecuredThread:(BOOL)thread analyticsModule:(id)module;
@end

#endif /* IGPASTISIntentTarget_h */
