//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPreviewHandler_h
#define IGFeedPreviewHandler_h
@import Foundation;

#include "IGContentNotesActionHandler.h"
#include "IGDirectShareSheetControllerDelegate-Protocol.h"
#include "IGDirectShareSheetControlling-Protocol.h"
#include "IGFeedPreviewHandlerDelegate-Protocol.h"
#include "IGListDiffable-Protocol.h"
#include "IGPreviewPresentationDelegate-Protocol.h"
#include "IGPreviewingDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, IGViewController, NSIndexPath, NSString, UICollectionView;

@interface IGFeedPreviewHandler : NSObject<IGDirectShareSheetControllerDelegate, IGPreviewPresentationDelegate, IGPreviewingDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSIndexPath *_thumbnailIndexPath;
  NSObject<IGListDiffable> *_previewedObject;
  IGViewController *_controller;
  UICollectionView *_collectionView;
  IGListAdapter *_adapter;
  NSObject<IGDirectShareSheetControlling> *_reshareController;
  IGContentNotesActionHandler *_contentNotesActionHandler;
}

@property (nonatomic) BOOL isEnabled;
@property (weak, nonatomic) NSObject<IGFeedPreviewHandlerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session controller:(id)controller collectionView:(id)view listAdapter:(id)adapter;
- (id)previewingContext:(id)context viewControllerForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)previewingContext:(id)context commitViewController:(id)controller;
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)contextMenuConfigurationForCollectionViewCell:(id)cell collectionView:(id)view viewController:(id)controller location:(struct CGPoint { double x0; double x1; })location;
- (void)performViewControllerCommitForPreviewedItem;
- (void)previewControllerWillPresentDirectShareSheetController:(id)controller;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)sheet willPresentConfirmationToast:(BOOL)toast hasShared:(BOOL)shared;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)toast;
- (void)directShareSheetControllerDidSelect:(id)select sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text media:(id)media selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)directShareSheetController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)toast;
- (void)directShareSheetControllerDidTapSave:(id)save;
- (void)directShareSheetControllerDidShareToStory:(id)story;
- (id)previewActionsForFeedItemController:(id)controller defaultActionProvider:(id /* block */)provider;
- (void)shoppingProductPreviewViewController:(id)controller shouldSave:(BOOL)save productItem:(id)item;
- (void)showMultiAdsPreviewViewController:(id)controller;
- (void)dismissMultiAdsPreviewViewController:(id)controller;
- (void)directShareSheetDidTapExternalShare;
- (void)directShareSheetDidTapDownload;
- (void)directShareSheetDidTapAddNoteWithCarouselIndex:(id)index;
- (void)directShareSheetDidTapAddToSpotlight;
@end

#endif /* IGFeedPreviewHandler_h */
