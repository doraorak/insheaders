//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPEligibilityEvaluatorV2_h
#define QPEligibilityEvaluatorV2_h
@import Foundation;

#include "_TtC24QuickPromotionSDKV2Swift23QpSdkReliabilityQplImpl.h"

@class NSArray;

@interface QPEligibilityEvaluatorV2 : NSObject {
  /* instance variables */
  BOOL _shouldLogEligibilityWaterfall;
  _TtC24QuickPromotionSDKV2Swift23QpSdkReliabilityQplImpl *_qpl;
}

@property (readonly, copy) NSArray *validators;

/* class methods */
+ (void)_logEligibilityResult:(id)result forQP:(id)qp eligibilityContext:(id)context step:(id)step;

/* instance methods */
- (id)initWithEvaluatorType:(long long)type qpl:(id)qpl;
- (id)evaluateForQP:(id)qp eligibilityContext:(id)context;
- (id)evaluateForQP:(id)qp eligibilityContext:(id)context validator:(id)validator;
@end

#endif /* QPEligibilityEvaluatorV2_h */