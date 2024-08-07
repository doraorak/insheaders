//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPPresenterProtocol_Protocol_h
#define IGQPPresenterProtocol_Protocol_h
@import Foundation;

@protocol IGQPPresenterProtocol <NSObject>

@property (readonly, copy, nonatomic) IGQPSurfaceID *qpSurfaceID;
@property (readonly, nonatomic) IGQPPromotion *currentPromotion;
@property (readonly, nonatomic) int qpType;
@property (weak, nonatomic) NSObject<IGQPDelegate> *qpCoordinator;

/* instance methods */
- (id)bestPromotionForTriggerID:(id)id triggerContext:(id)context;
- (void)setBestPromotion:(id)promotion;
- (void)dismissCurrentPromotion;
@optional
/* instance methods */
- (BOOL)presentForTriggerID:(id)id fromViewController:(id)controller;
@end

#endif /* IGQPPresenterProtocol_Protocol_h */
