//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductTaggingFeedIntentTarget_h
#define IGShoppingProductTaggingFeedIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGShoppingProductTaggingFeedState, IGTaggingProductUserFlowLogger, NSArray, NSString;
@protocol IGShoppingProductTaggingFeedViewControllerDelegate;

@interface IGShoppingProductTaggingFeedIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSObject<IGShoppingProductTaggingFeedViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSString *priorModule;
@property (readonly, nonatomic) NSString *priorSubmodule;
@property (readonly, nonatomic) long long surfaceType;
@property (readonly, nonatomic) IGShoppingProductTaggingFeedState *taggingState;
@property (readonly, nonatomic) NSArray *suggestedItemIds;
@property (readonly, nonatomic) NSString *suggestedItemRequestStatus;
@property (readonly, nonatomic) NSString *uploadId;
@property (readonly, nonatomic) NSString *waterfallId;
@property (readonly, nonatomic) NSArray *visualSearchDetectedProductModels;
@property (readonly, nonatomic) BOOL shouldClearSelectionsOnCancel;
@property (readonly, nonatomic) BOOL isOrganicProductTagging;
@property (readonly, nonatomic) IGTaggingProductUserFlowLogger *taggingProductUserFlowLogger;
@property (readonly, nonatomic) NSArray *mentionedMerchantIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate priorModule:(id)module priorSubmodule:(id)submodule surfaceType:(long long)type taggingState:(id)state suggestedItemIds:(id)ids suggestedItemRequestStatus:(id)status uploadId:(id)id waterfallId:(id)id visualSearchDetectedProductModels:(id)models shouldClearSelectionsOnCancel:(BOOL)cancel isOrganicProductTagging:(BOOL)tagging taggingProductUserFlowLogger:(id)logger mentionedMerchantIds:(id)ids;
@end

#endif /* IGShoppingProductTaggingFeedIntentTarget_h */
