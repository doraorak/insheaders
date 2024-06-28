//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC6IGOpal24IGOpalFeedViewController_IGOpal14_h
#define _TtC6IGOpal24IGOpalFeedViewController_IGOpal14_h
@import Foundation;

@interface _TtC6IGOpal24IGOpalFeedViewController (IGOpal14) <IGFeedPreviewHandlerDelegate>
/* instance methods */
- (id)previewHandler:(id)handler previewActionsForMedia:(id)media defaultActionProvider:(id /* block */)provider loggingExtra:(id)extra adProductItemPk:(id)pk;
- (id)previewHandler:(id)handler loggingExtrasForMedia:(id)media atIndexPath:(id)path;
- (id)hashtagModelForPreviewHandler:(id)handler;
- (id)promptStickerModelForPreviewHandler:(id)handler;
- (BOOL)previewHandlerShouldOmitProfilePinningAction:(id)action;
- (BOOL)previewHandlerPreviewEnabled:(id)enabled;
- (void)previewHandlerDidTapSaveOrUnsave:(id)unsave shouldSave:(BOOL)save productItem:(id)item;
- (void)previewHandlerDidLoad:(id)load;
- (void)previewHandlerDidDismiss:(id)dismiss;
@end

#endif /* _TtC6IGOpal24IGOpalFeedViewController_IGOpal14_h */
