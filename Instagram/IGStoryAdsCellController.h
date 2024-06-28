//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAdsCellController_h
#define IGStoryAdsCellController_h
@import Foundation;

#include "IGStoryAdsCellControllerDelegate-Protocol.h"
#include "IGStoryAdsCellControllerImplProtocol-Protocol.h"
#include "IGStoryFullscreenAdsCoordinatorContext.h"

@protocol IGStoryItemType><IGUnitItemInformationProviding;

@interface IGStoryAdsCellController : NSObject<IGStoryAdsCellControllerImplProtocol> { // (Swift)
  /* instance variables */
   viewModel;
   userSession;
   loggingContext;
   analyticsModule;
   textManager;
   currentStoryView;
}

@property (nonatomic, weak) NSObject<IGStoryAdsCellControllerDelegate> *delegate;
@property (nonatomic, retain) IGStoryFullscreenAdsCoordinatorContext *adsCoordinatorContext;
@property (nonatomic, retain) NSObject<IGStoryItemType><IGUnitItemInformationProviding> *currentStoryItem;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (id)init;
@end

#endif /* IGStoryAdsCellController_h */