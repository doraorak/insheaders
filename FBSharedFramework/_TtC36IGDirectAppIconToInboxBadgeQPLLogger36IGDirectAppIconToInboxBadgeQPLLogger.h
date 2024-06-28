//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC36IGDirectAppIconToInboxBadgeQPLLogger36IGDirectAppIconToInboxBadgeQPLLogger_h
#define _TtC36IGDirectAppIconToInboxBadgeQPLLogger36IGDirectAppIconToInboxBadgeQPLLogger_h
@import Foundation;

@interface _TtC36IGDirectAppIconToInboxBadgeQPLLogger36IGDirectAppIconToInboxBadgeQPLLogger : NSObject { // (Swift)
  /* instance variables */
   _launcherSet;
   _directBadgeCount;
   _updateStarted;
   _startupKind;
   _badgeSettingEnabled;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)markStartWarm;
- (void)markStartCold;
- (void)markSuccessWithDirectTotalBadgeCount:(id)count directOpenBadgeCount:(id)count directE2EEBadgeCount:(id)count;
- (void)markCancellationIfNeededWithReason:(id)reason;
- (void)setLauncher:(id)launcher;
@end

#endif /* _TtC36IGDirectAppIconToInboxBadgeQPLLogger36IGDirectAppIconToInboxBadgeQPLLogger_h */
