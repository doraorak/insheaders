//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideItemSectionController_h
#define IGGuideItemSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGGuideLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListWorkingRangeDelegate-Protocol.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGSaveToCollectionsFeedDelegate-Protocol.h"
#include "IGShoppingSaveController.h"
#include "IGShoppingSessionTracking-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGGuide, IGListAdapter, IGLocationNetworker, IGPlaybackCoordinator, IGSessionTracker, IGUserSession, NSArray, NSString;
@protocol IGGuideItemSectionControllerDelegate;

@interface IGGuideItemSectionController : IGListGenericSectionController<IGListAdapterDataSource, IGListWorkingRangeDelegate, IGSaveToCollectionsFeedDelegate, IGMediaUpdatedListener, UIScrollViewDelegate, IGShoppingSessionTracking> {
  /* instance variables */
  IGUserSession *_userSession;
  long long _collectionType;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGGuide *_guide;
  NSString *_analyticsModule;
  IGGuideLogger *_logger;
  NSArray *_rowTypes;
  IGLocationNetworker *_locationNetworker;
  NSString *_editedTitle;
  NSString *_editedDetailText;
  IGListAdapter *_carouselListAdapter;
  IGActionableConfirmationToastController *_toastController;
  IGShoppingSaveController *_shoppingSaveController;
  long long _currentMediaItemIndex;
  NSObject<IGSubscriptionToken> *_locationSubscriptionToken;
}

@property (nonatomic) BOOL editingEnabled;
@property (weak, nonatomic) NSObject<IGGuideItemSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;

/* instance methods */
- (id)initWithUserSession:(id)session collectionType:(long long)type playbackCoordinator:(id)coordinator shoppingSessionTracker:(id)tracker guide:(id)guide analyticsModule:(id)module logger:(id)logger;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)guideTextCell:(id)cell textDidChange:(id)change;
- (void)guideTextCellDidEndEditing:(id)editing;
- (void)guideTextCell:(id)cell didTapLink:(id)link;
- (BOOL)guideTextCell:(id)cell shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)guideItemTitleCellDidTapMoreButton:(id)button;
- (void)guideItemTitleCell:(id)cell didUpdateToTitle:(id)title;
- (void)guideItemTitleCellDidEndEditing:(id)editing;
- (BOOL)guideItemTitleCell:(id)cell shouldChangeText:(id)text inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text numberOfLines:(long long)lines;
- (void)guideItemAttachmentCellDidTapSave:(id)save;
- (void)guideItemAttachmentCellDidTapEdit:(id)edit;
- (void)guideItemAttachmentCellDidLongPressSave:(id)save;
- (void)guideItemAttachmentPicker:(id)picker didSelectAttachment:(id)attachment;
- (void)guideItemMediaSectionController:(id)controller didSelectFeedItem:(id)item;
- (void)guideItemMediaSectionController:(id)controller didSelectProductRepresentation:(id)representation;
- (void)guideItemMediaSectionController:(id)controller didSelectRemoveMediaFromGuide:(id)guide;
- (void)guideItemMediaSectionController:(id)controller didSelectRemoveProductFromGuide:(id)guide;
- (void)guideItemMediaSectionControllerDidSelectEditSettings:(id)settings;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (void)saveCollectionsViewController:(id)controller didUpdateCollection:(id)collection withRemoveFromCollection:(BOOL)collection;
- (void)saveCollectionsViewController:(id)controller willUpdateCollection:(id)collection withRemoveFromCollection:(BOOL)collection;
- (BOOL)saveCollectionsViewController:(id)controller shouldPauseForCollectionWithTitle:(id)title continueHandler:(id /* block */)handler;
- (void)saveCollectionsViewController:(id)controller updateFailedWithCollection:(id)collection;
- (void)saveCollectionsViewControllerDidDismiss:(id)dismiss;
- (void)shoppingSaveControllerDidUpdateButtonState:(long long)state;
- (void)locationNetworker:(id)networker didCompleteReelRequest:(id)request withConfig:(id)config withDefaultImageURL:(id)url;
- (void)locationNetworker:(id)networker didFetchNetworkResponse:(id)response withConfig:(id)config;
- (void)locationNetworker:(id)networker didFetchInfoPageModel:(id)model withConfig:(id)config;
- (void)locationNetworker:(id)networker didFailRequestWithError:(id)error config:(id)config ofNetworkRequstType:(long long)type;
- (void)locationNetworker:(id)networker didFetchLocation:(id)location;
- (void)scrollViewDidScroll:(id)scroll;
- (void)listAdapter:(id)adapter sectionControllerWillEnterWorkingRange:(id)range;
- (void)listAdapter:(id)adapter sectionControllerDidExitWorkingRange:(id)range;
@end

#endif /* IGGuideItemSectionController_h */
