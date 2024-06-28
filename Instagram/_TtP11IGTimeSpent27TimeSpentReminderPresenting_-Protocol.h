//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP11IGTimeSpent27TimeSpentReminderPresenting__Protocol_h
#define _TtP11IGTimeSpent27TimeSpentReminderPresenting__Protocol_h
@import Foundation;

@protocol _TtP11IGTimeSpent27TimeSpentReminderPresenting_ 

@property (nonatomic, retain) NSObject<_TtP22IGTimeSpentSwiftModels17TimeSpentReminder_> *presentedReminder;

/* instance methods */
- (void)presentReminder:(id)reminder completion:(id /* block */)completion;
- (void)dismissReminder:(id)reminder completion:(id /* block */)completion;
@end

#endif /* _TtP11IGTimeSpent27TimeSpentReminderPresenting__Protocol_h */