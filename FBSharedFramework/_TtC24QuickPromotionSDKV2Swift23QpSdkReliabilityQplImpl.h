//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24QuickPromotionSDKV2Swift23QpSdkReliabilityQplImpl_h
#define _TtC24QuickPromotionSDKV2Swift23QpSdkReliabilityQplImpl_h
@import Foundation;

#include "_TtC24QuickPromotionSDKV2Swift31QpSurfaceQplSessionlessImplBase.h"

@interface _TtC24QuickPromotionSDKV2Swift23QpSdkReliabilityQplImpl : _TtC24QuickPromotionSDKV2Swift31QpSurfaceQplSessionlessImplBase // (Swift)
/* instance methods */
- (id)initWithInstanceKey:(int)key;
- (void)markCheckCacheForNuxId:(id)id;
- (void)markChooseBestPromotionStartInQpEligibilityChecker:(id)checker;
- (void)markChooseBestPromotionEndInQpEligibilityChecker:(id)checker;
- (void)markValidPromotionCountForCount:(id)count;
- (void)markEligiblePromotionCountForCount:(id)count;
- (void)markBestPromotionForPromotionId:(id)id;
- (void)markEligibleWaterfallForPromotionId:(id)id;
- (void)markIneligibleWaterfallForPromotionId:(id)id failureWaterfallStep:(id)step failureReason:(id)reason;
- (id)initWithSurfaceEvent:(int)event instanceKey:(int)key;
@end

#endif /* _TtC24QuickPromotionSDKV2Swift23QpSdkReliabilityQplImpl_h */
