//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialDraftGallerySelectionController_h
#define IGSundialDraftGallerySelectionController_h
@import Foundation;

#include "IGSundialDraftsShareSheetViewControllerDelegate-Protocol.h"
#include "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGSundialDraftGallerySelectionControllerDelegate;

@interface IGSundialDraftGallerySelectionController : NSObject<IGSundialDraftsShareSheetViewControllerDelegate, IGSundialPostCaptureEditingViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
}

@property (weak, nonatomic) NSObject<IGSundialDraftGallerySelectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (void)sundialPostCaptureEditingViewController:(id)controller didCancelWithComposition:(id)composition isNavigationHandledByPresenter:(BOOL)presenter deselectAssets:(BOOL)assets;
- (BOOL)sundialPostCaptureEditingViewControllerMustExitTimelineEditorBeforeCancelling:(id)cancelling;
- (void)sundialPostCaptureEditingViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewController:(id)controller didSaveDraft:(id)draft fromPostCapture:(BOOL)capture isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewControllerDidResume:(id)resume;
- (void)sundialPostCaptureEditingViewControllerDidDismiss:(id)dismiss;
- (void)sundialDraftsShareSheet:(id)sheet didShareComposition:(id)composition toDestination:(long long)destination;
- (void)sundialDraftShareSheetDidExitShareComposition:(id)composition;
@end

#endif /* IGSundialDraftGallerySelectionController_h */
