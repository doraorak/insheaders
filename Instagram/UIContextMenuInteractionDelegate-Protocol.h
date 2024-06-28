//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIContextMenuInteractionDelegate_Protocol_h
#define UIContextMenuInteractionDelegate_Protocol_h
@import Foundation;

@protocol UIContextMenuInteractionDelegate <NSObject>
/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
@optional
/* instance methods */
- (id)contextMenuInteraction:(id)interaction configuration:(id)configuration highlightPreviewForItemWithIdentifier:(id)identifier;
- (id)contextMenuInteraction:(id)interaction configuration:(id)configuration dismissalPreviewForItemWithIdentifier:(id)identifier;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willDisplayMenuForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willDisplayMenuForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willEndForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willEndForConfiguration:(id)configuration animator:(id)animator;
- (id)contextMenuInteraction:(id)interaction previewForHighlightingMenuWithConfiguration:(id)configuration;
- (id)contextMenuInteraction:(id)interaction previewForDismissingMenuWithConfiguration:(id)configuration;
@end

#endif /* UIContextMenuInteractionDelegate_Protocol_h */