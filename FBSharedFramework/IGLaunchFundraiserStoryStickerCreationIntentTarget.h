//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLaunchFundraiserStoryStickerCreationIntentTarget_h
#define IGLaunchFundraiserStoryStickerCreationIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;
@protocol IGFundraiserStoryStickerCreationDelegate;

@interface IGLaunchFundraiserStoryStickerCreationIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSObject<IGFundraiserStoryStickerCreationDelegate> *delegate;
@property (readonly, nonatomic) NSString *promotedSection;
@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, nonatomic) NSString *loggingSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate promotedSection:(id)section sourceName:(id)name loggingSessionId:(id)id;
@end

#endif /* IGLaunchFundraiserStoryStickerCreationIntentTarget_h */
