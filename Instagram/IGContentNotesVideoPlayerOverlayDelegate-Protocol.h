//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentNotesVideoPlayerOverlayDelegate_Protocol_h
#define IGContentNotesVideoPlayerOverlayDelegate_Protocol_h
@import Foundation;

@protocol IGContentNotesVideoPlayerOverlayDelegate <NSObject>
/* instance methods */
- (void)contentNotesVideoPlayerOverlay:(id)overlay didToggleContentNotesWithIsMinimized:(BOOL)minimized;
- (void)contentNotesVideoPlayerOverlay:(id)overlay didTapNoteWithNoteModel:(id)model presentationContext:(id)context;
- (void)contentNotesVideoPlayerOverlay:(id)overlay didTapOverflowPreviewWithSeenNoteID:(id)id;
- (void)contentNotesVideoPlayerOverlayDidTapAddNoteMimicryButton:(id)button;
- (void)contentNotesVideoPlayerOverlay:(id)overlay didTapContextMenuWithAction:(long long)action noteModel:(id)model;
@end

#endif /* IGContentNotesVideoPlayerOverlayDelegate_Protocol_h */
