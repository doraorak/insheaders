//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPBasePresenter_h
#define IGQPBasePresenter_h
@import Foundation;

#include "IGQPPresenterProtocol-Protocol.h"
#include "IGQPPromotion.h"
#include "IGQPSurfaceID.h"
#include "IGQuickPromotionCoordinator.h"
#include "IGUserLauncherSet-Protocol.h"

@class IGQPServerContext, NSArray, NSString;
@protocol IGQPDelegate;

@interface IGQPBasePresenter : NSObject<IGQPPresenterProtocol> {
  /* instance variables */
  IGQuickPromotionCoordinator *_quickPromotionCoordinator;
}

@property (retain, nonatomic) IGQPServerContext *context;
@property (copy, nonatomic) NSArray *promotions;
@property (retain, nonatomic) IGQPPromotion *currentPromotion;
@property (readonly, nonatomic) NSObject<IGUserLauncherSet> *launcherSet;
@property (weak, nonatomic) NSObject<IGQPDelegate> *qpCoordinator;
@property (readonly, copy, nonatomic) IGQPSurfaceID *qpSurfaceID;
@property (readonly, nonatomic) int qpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQuickPromotionCoordinator:(id)coordinator launcherSet:(id)set;
- (void)dismissCurrentPromotion;
- (void)setBestPromotion:(id)promotion;
- (id)bestPromotionForTriggerID:(id)id triggerContext:(id)context;
@end

#endif /* IGQPBasePresenter_h */