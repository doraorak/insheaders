//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdPartnerPromotionIntentTarget_h
#define IGAdPartnerPromotionIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGAdPartnerPromotionMediaReference.h"

@class NSNumber, NSString;

@interface IGAdPartnerPromotionIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGAdPartnerPromotionMediaReference *mediaReference;
@property (readonly, nonatomic) long long promotionType;
@property (readonly, nonatomic) NSString *priorModule;
@property (readonly, nonatomic) NSNumber *priorNotificationStoryType;
@property (readonly, nonatomic) NSString *adGroupId;
@property (readonly, nonatomic) BOOL shouldHideInsights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMediaReference:(id)reference promotionType:(long long)type priorModule:(id)module priorNotificationStoryType:(id)type adGroupId:(id)id shouldHideInsights:(BOOL)insights;
@end

#endif /* IGAdPartnerPromotionIntentTarget_h */