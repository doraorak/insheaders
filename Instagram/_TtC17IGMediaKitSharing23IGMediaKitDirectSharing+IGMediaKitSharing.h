//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGMediaKitSharing23IGMediaKitDirectSharing_IGMediaKitSharing_h
#define _TtC17IGMediaKitSharing23IGMediaKitDirectSharing_IGMediaKitSharing_h
@import Foundation;

@interface _TtC17IGMediaKitSharing23IGMediaKitDirectSharing (IGMediaKitSharing) <IGDirectShareSheetControllerDelegate>
/* instance methods */
- (void)directShareSheetControllerDidDismissReshareSheet:(id)sheet willPresentConfirmationToast:(BOOL)toast hasShared:(BOOL)shared;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)toast;
- (void)directShareSheetController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)directShareSheetControllerDidSelect:(id)select sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text media:(id)media selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)toast;
- (void)directShareSheetControllerDidTapSave:(id)save;
- (void)directShareSheetControllerDidShareToStory:(id)story;
@end

#endif /* _TtC17IGMediaKitSharing23IGMediaKitDirectSharing_IGMediaKitSharing_h */