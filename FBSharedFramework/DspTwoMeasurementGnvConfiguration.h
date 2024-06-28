//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef DspTwoMeasurementGnvConfiguration_h
#define DspTwoMeasurementGnvConfiguration_h
@import Foundation;

@class NSNumber, NSSet, NSString;

@interface DspTwoMeasurementGnvConfiguration : NSObject

@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) BOOL checkOnlyOneTouch;
@property (readonly, nonatomic) BOOL checkOnlyTouchUp;
@property (readonly, nonatomic) BOOL checkAtWillSendTouch;
@property (readonly, nonatomic) BOOL enableGnvNavCheck;
@property (readonly, nonatomic) BOOL enableGnvTracking;
@property (readonly, nonatomic) BOOL enableImpressionTracking;
@property (readonly, nonatomic) BOOL enableTouchListener;
@property (readonly, nonatomic) BOOL shouldEnableComponentTracing;
@property (readonly, nonatomic) BOOL shouldGenerateLinkClick;
@property (readonly, nonatomic) BOOL traceGestureSession;
@property (readonly, nonatomic) BOOL useFirstObjectForModule;
@property (readonly, nonatomic) BOOL useTracingWithMultiModule;
@property (readonly, nonatomic) NSNumber *maxNavCheckCount;
@property (readonly, nonatomic) NSNumber *maxNavCheckRepeatCount;
@property (readonly, nonatomic) NSNumber *checkDelayTime;
@property (readonly, nonatomic) NSNumber *gestureExpireTime;
@property (readonly, nonatomic) NSNumber *navCheckDelayTime;
@property (readonly, nonatomic) NSSet *allowlist;

/* instance methods */
- (id)initWithMode:(id)mode checkOnlyOneTouch:(BOOL)touch checkOnlyTouchUp:(BOOL)up checkAtWillSendTouch:(BOOL)touch enableGnvNavCheck:(BOOL)check enableGnvTracking:(BOOL)tracking enableImpressionTracking:(BOOL)tracking enableTouchListener:(BOOL)listener shouldEnableComponentTracing:(BOOL)tracing shouldGenerateLinkClick:(BOOL)click traceGestureSession:(BOOL)session useFirstObjectForModule:(BOOL)module useTracingWithMultiModule:(BOOL)module maxNavCheckCount:(id)count maxNavCheckRepeatCount:(id)count checkDelayTime:(id)time gestureExpireTime:(id)time navCheckDelayTime:(id)time allowlist:(id)allowlist;
@end

#endif /* DspTwoMeasurementGnvConfiguration_h */
