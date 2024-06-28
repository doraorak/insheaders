//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveViewerShareSheetController_h
#define IGLiveViewerShareSheetController_h
@import Foundation;

#include "IGDirectShareSheetControllerDelegate-Protocol.h"
#include "IGDirectShareSheetControlling-Protocol.h"
#include "IGLiveBroadcastInviteLoggingContext.h"

@class IGLiveBroadcast, IGUserSession, NSString;

@interface IGLiveViewerShareSheetController : NSObject<IGDirectShareSheetControllerDelegate> {
  /* instance variables */
  NSObject<IGDirectShareSheetControlling> *_inviteController;
  IGUserSession *_userSession;
  IGLiveBroadcastInviteLoggingContext *_inviteLoggingContext;
  NSString *_analyticsModule;
  IGLiveBroadcast *_currentBroadcast;
}

@property (copy, nonatomic) NSString *viewMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sourceViewController:(id)controller analyticsModule:(id)module;
- (void)directShareSheetControllerDidSelect:(id)select sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text media:(id)media selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)sheet willPresentConfirmationToast:(BOOL)toast hasShared:(BOOL)shared;
- (void)directShareSheetController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)toast;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)toast;
- (id)directShareSheetWarningMessage;
- (void)directShareSheetControllerDidTapSave:(id)save;
- (void)directShareSheetControllerDidShareToStory:(id)story;
@end

#endif /* IGLiveViewerShareSheetController_h */
