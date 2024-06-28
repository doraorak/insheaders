//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductCollectionIntentTarget_h
#define IGShoppingProductCollectionIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGShoppingProductCollectionIntentTargetInfo.h"
#include "IGShoppingProductCollectionIntentTargetTitleConfiguration.h"

@class FBViewpointLevelOverride, IGMedia, IGSessionTracker, IGShoppingAdMetadata, IGShoppingSearchAnalyticsContext, NSString;

@interface IGShoppingProductCollectionIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *priorModule;
@property (readonly, nonatomic) NSString *priorSubmodule;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) IGShoppingProductCollectionIntentTargetInfo *targetInfo;
@property (readonly, nonatomic) IGShoppingProductCollectionIntentTargetTitleConfiguration *titleConfiguration;
@property (readonly, nonatomic) IGShoppingAdMetadata *adsMetadata;
@property (readonly, nonatomic) BOOL canUseBloksSurface;
@property (readonly, nonatomic) long long surfaceNavigationTraits;
@property (readonly, nonatomic) FBViewpointLevelOverride *viewpointLevelOverride;
@property (readonly, nonatomic) NSString *position;
@property (readonly, nonatomic) IGShoppingSearchAnalyticsContext *searchAnalyticsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPriorModule:(id)module priorSubmodule:(id)submodule shoppingSessionTracker:(id)tracker media:(id)media targetInfo:(id)info titleConfiguration:(id)configuration adsMetadata:(id)metadata canUseBloksSurface:(BOOL)surface surfaceNavigationTraits:(long long)traits viewpointLevelOverride:(id)override position:(id)position searchAnalyticsContext:(id)context;
@end

#endif /* IGShoppingProductCollectionIntentTarget_h */