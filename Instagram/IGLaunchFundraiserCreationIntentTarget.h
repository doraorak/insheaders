//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLaunchFundraiserCreationIntentTarget_h
#define IGLaunchFundraiserCreationIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;
@protocol IGFundraiserFeedSharingKitDelegate;

@interface IGLaunchFundraiserCreationIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, nonatomic) NSObject<IGFundraiserFeedSharingKitDelegate> *delegate;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) BOOL hasRaiseMoneyOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSourceName:(id)name delegate:(id)delegate sessionID:(id)id hasRaiseMoneyOptions:(BOOL)options;
@end

#endif /* IGLaunchFundraiserCreationIntentTarget_h */