//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGSundialDraftReminder32IGSundialDraftReminderController_IGSundialDraftReminder_h
#define _TtC22IGSundialDraftReminder32IGSundialDraftReminderController_IGSundialDraftReminder_h
@import Foundation;

@interface _TtC22IGSundialDraftReminder32IGSundialDraftReminderController (IGSundialDraftReminder)
/* class methods */
+ (void)scheduleReminderNotificationWithUserSession:(IGUserSession *)session draftIdentifier:(NSUUID *)identifier modificationDate:(NSDate *)date previewImageURI:(NSString *)uri isDraftAutoSaved:(BOOL)saved completionHandler:(id /* block */)handler;
@end

#endif /* _TtC22IGSundialDraftReminder32IGSundialDraftReminderController_IGSundialDraftReminder_h */