//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGNotesTrayController21IGNotesTrayController_IGNotesTrayController2_h
#define _TtC21IGNotesTrayController21IGNotesTrayController_IGNotesTrayController2_h
@import Foundation;

@interface _TtC21IGNotesTrayController21IGNotesTrayController (IGNotesTrayController2) <IGDirectNotesComposerViewControllerDelegate>
/* instance methods */
- (void)noteComposerViewControllerDidCreateNote:(id)note tapTarget:(long long)target destination:(id)destination;
- (void)noteComposerViewControllerDidAttemptFailedNoteMentionWithUsername:(id)username;
- (void)noteComposerViewControllerWillAppear;
- (void)noteComposerViewControllerWillDismissShouldShowBubble:(BOOL)bubble;
- (void)noteComposerViewControllerDidDismiss;
- (void)noteComposerViewControllerDidCompleteUploadForNote:(id)note;
@end

#endif /* _TtC21IGNotesTrayController21IGNotesTrayController_IGNotesTrayController2_h */
