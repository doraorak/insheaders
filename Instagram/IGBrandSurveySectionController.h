//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandSurveySectionController_h
#define IGBrandSurveySectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGNetegoSurveyItem.h"
#include "IGNetegoSurveyLogger.h"
#include "IGStoryResearchPollActionsController.h"

@class IGActionableConfirmationToastController, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGBrandSurveySectionController : IGListSectionController<IGListAdapterDataSource, IGListDisplayDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGNetegoSurveyItem *_surveyItem;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  NSString *_module;
  IGActionableConfirmationToastController *_toastController;
  IGStoryResearchPollActionsController *_learnMoreController;
  BOOL _surveyComplete;
  BOOL _surveyDidAppear;
  IGNetegoSurveyLogger *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)didSelectAnswers:(id)answers;
- (void)didSelectMoreMenu;
- (void)inFeedSurveyDidHideUnit;
- (void)storyResearchPollActionsControllerDidHideUnit:(id)unit;
- (void)storyResearchPollActionsControllerDidFinish:(id)finish;
- (void)storyResearchPollActionsControllerDidDisplayBottomSheet;
@end

#endif /* IGBrandSurveySectionController_h */
