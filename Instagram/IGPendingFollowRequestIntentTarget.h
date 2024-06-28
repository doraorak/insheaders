//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPendingFollowRequestIntentTarget_h
#define IGPendingFollowRequestIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString, UIViewController;

@interface IGPendingFollowRequestIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *forcedUserId;
@property (readonly, nonatomic) UIViewController *parentViewController;
@property (readonly, nonatomic) NSString *disclaimerString;
@property (readonly, nonatomic) BOOL deleteModeEnabled;
@property (readonly, nonatomic) BOOL disableListTruncation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithForcedUserId:(id)id parentViewController:(id)controller disclaimerString:(id)string deleteModeEnabled:(BOOL)enabled disableListTruncation:(BOOL)truncation;
@end

#endif /* IGPendingFollowRequestIntentTarget_h */