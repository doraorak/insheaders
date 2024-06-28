//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectShhModeReplayMessageSectionController_h
#define IGDirectShhModeReplayMessageSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGDirectShhModeReplayMessageViewModel.h"
#include "IGDirectThreadAnalyticsLogger.h"
#include "IGListDisplayDelegate-Protocol.h"

@class NSString;
@protocol IGDirectShhModeReplayMessageSectionControllerDelegate;

@interface IGDirectShhModeReplayMessageSectionController : IGListBindingSingleSectionController<IGListDisplayDelegate> {
  /* instance variables */
  IGDirectThreadAnalyticsLogger *_analyticsLogger;
}

@property (weak, nonatomic) NSObject<IGDirectShhModeReplayMessageSectionControllerDelegate> *delegate;
@property (readonly, nonatomic) IGDirectShhModeReplayMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)didUpdateToObject:(id)object;
- (void)messageListCellDidTapLink:(id)link;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGDirectShhModeReplayMessageSectionController_h */