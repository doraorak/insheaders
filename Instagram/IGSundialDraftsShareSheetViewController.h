//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialDraftsShareSheetViewController_h
#define IGSundialDraftsShareSheetViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGSundialDraftsShareSheetViewControllerDelegate-Protocol.h"
#include "IGSundialShareSheetViewController.h"
#include "NSObject-Protocol.h"

@class IGAudioSessionClient, IGSundialComposition, IGUserSession, NSString, UIImage;

@interface IGSundialDraftsShareSheetViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSundialShareSheetViewController *_sundialShareSheet;
  IGAudioSessionClient *_audioSession;
  long long _entryPoint;
  BOOL _didLogDraftLoad;
  BOOL _shouldDisplaySavedDraftToast;
  UIImage *_compositionSnapshot;
}

@property (copy, nonatomic) NSString *analyticsModule;
@property (weak, nonatomic) NSObject<IGSundialDraftsShareSheetViewControllerDelegate> *delegate;
@property (readonly, nonatomic) IGSundialComposition *composition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDraftComposition:(id)composition compositionSnapshot:(id)snapshot userSession:(id)session postCaptureConfiguration:(id)configuration entryPoint:(long long)point;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)_didTapCancelButton:(id)button;
- (void)_didTapEditButton:(id)button;
- (void)draftEditingViewController:(id)controller didTapConfirmEditsForDraftComposition:(id)composition compositionSnapshot:(id)snapshot;
- (void)draftEditingViewControllerDidCloseDraft:(id)draft;
- (void)draftEditingViewControllerDidSaveDraft:(id)draft;
- (void)sundialShareSheetViewController:(id)controller willBeginUploadingComposition:(id)composition withPostId:(id)id;
- (void)sundialShareSheetViewController:(id)controller didSaveDraft:(id)draft;
- (void)sundialShareSheetViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences;
- (void)sundialShareSheetViewController:(id)controller didUpdateCaption:(id)caption;
- (void)sundialShareSheetViewController:(id)controller didUpdateCaptionAddOn:(id)on;
- (void)sundialShareSheetViewController:(id)controller didUpdateShareToFeed:(BOOL)feed;
- (void)sundialShareSheetViewController:(id)controller didUpdateShareToReels:(BOOL)reels;
- (void)sundialShareSheetViewControllerDidTapBackButton:(id)button;
- (void)sundialShareSheetViewControllerDidTapCancelButton:(id)button;
- (void)sundialShareSheetViewControllerDidTapEditButton:(id)button;
- (void)sundialShareSheetViewController:(id)controller didUpdateSponsorPartner:(id)partner;
- (void)sundialShareSheetViewController:(id)controller didUpdateBrandedContent:(id)content;
- (void)sundialShareSheetViewController:(id)controller didUpdateShoppingMetadata:(id)metadata;
- (void)sundialShareSheetViewController:(id)controller didUpdateContentFunding:(id)funding;
- (void)sundialShareSheetViewControllerDidTapRemoveMusic:(id)music;
- (void)sundialShareSheetViewController:(id)controller didToggleFullscreenCaptionMode:(BOOL)mode;
- (long long)preferredTabBarBehavior;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)templateViewControllerDidTapConfirmEditsForDraftComposition:(id)composition;
@end

#endif /* IGSundialDraftsShareSheetViewController_h */