//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSendHighlightShareSheetInteractor_h
#define IGSendHighlightShareSheetInteractor_h
@import Foundation;

#include "IGDirectShareSheetControllerDelegate-Protocol.h"
#include "IGHighlightReelFetcher.h"

@class IGMedia, IGUserSession, IGViewController, NSString;

@interface IGSendHighlightShareSheetInteractor : NSObject<IGDirectShareSheetControllerDelegate> {
  /* instance variables */
  NSString *_reelPK;
  IGUserSession *_userSession;
  IGViewController *_viewController;
  IGMedia *_media;
  IGHighlightReelFetcher *_reelFetcher;
  id /* block */ _feedItemSetCompletionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReelPK:(id)pk userSession:(id)session viewController:(id)controller;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)toast;
- (void)directShareSheetController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)sheet willPresentConfirmationToast:(BOOL)toast hasShared:(BOOL)shared;
- (void)directShareSheetControllerDidSelect:(id)select sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text media:(id)media selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)toast;
- (id)directShareSheetWarningMessage;
- (void)directShareSheetControllerDidTapSave:(id)save;
- (void)directShareSheetControllerDidShareToStory:(id)story;
@end

#endif /* IGSendHighlightShareSheetInteractor_h */
