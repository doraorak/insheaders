//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAudienceSelectionIntentTarget_h
#define IGStoryAudienceSelectionIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGStoryAudienceSelectionIntentTargetConfiguration.h"

@class IGUserSession, NSString;

@interface IGStoryAudienceSelectionIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) long long audienceSelectionType;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) unsigned long long presentationMethod;
@property (readonly, nonatomic) IGStoryAudienceSelectionIntentTargetConfiguration *targetConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAudienceSelectionType:(long long)type entryPoint:(long long)point userSession:(id)session presentationMethod:(unsigned long long)method targetConfiguration:(id)configuration;
@end

#endif /* IGStoryAudienceSelectionIntentTarget_h */
