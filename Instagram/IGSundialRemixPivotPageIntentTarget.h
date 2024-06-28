//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialRemixPivotPageIntentTarget_h
#define IGSundialRemixPivotPageIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGSundialRemixLogger.h"

@class IGUser, NSString;

@interface IGSundialRemixPivotPageIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *originalMediaId;
@property (readonly, nonatomic) NSString *remixesCountString;
@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) NSString *parentMPk;
@property (readonly, nonatomic) NSString *viewerSessionId;
@property (readonly, nonatomic) IGSundialRemixLogger *remixPivotPageLogger;
@property (readonly, nonatomic) BOOL shouldPinFriendsAtTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOriginalMediaId:(id)id remixesCountString:(id)string user:(id)user parentMPk:(id)mpk viewerSessionId:(id)id remixPivotPageLogger:(id)logger shouldPinFriendsAtTop:(BOOL)top;
@end

#endif /* IGSundialRemixPivotPageIntentTarget_h */
