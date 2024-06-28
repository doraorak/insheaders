//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGWearablesPivotPageIntentTarget_h
#define IGWearablesPivotPageIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGSundialFeedSource-Protocol.h"

@class IGMedia, IGUserSession, NSString;

@interface IGWearablesPivotPageIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSObject<IGSundialFeedSource> *videoFeed;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) BOOL shouldShowCTA;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media videoFeed:(id)feed entryPoint:(long long)point shouldShowCTA:(BOOL)cta userSession:(id)session;
@end

#endif /* IGWearablesPivotPageIntentTarget_h */