//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxThreadCellViewModel_Convenience_h
#define IGDirectInboxThreadCellViewModel_Convenience_h
@import Foundation;

@interface IGDirectInboxThreadCellViewModel (Convenience)
/* instance methods */
- (id)initWithThread:(id)thread messageForDigest:(id)digest sender:(id)sender currentUser:(id)user featureSetProvider:(id)provider shouldShowPlayButtonWithText:(BOOL)text userIsActiveNow:(BOOL)now userIsInQuietMode:(BOOL)mode lastActiveTime:(id)time presenceDigest:(id)digest typingDigest:(id)digest isLoadingMedia:(BOOL)media isSwipeEnabled:(BOOL)enabled isMultiSelectable:(BOOL)selectable isSelected:(BOOL)selected didViewNewVisualMessages:(BOOL)messages hasReplayableVisualMessages:(BOOL)messages hasUnseenVisualMessages:(BOOL)messages isEligibleForUnseenMessages:(BOOL)messages restrictStatusEnabled:(BOOL)enabled moveToFolderEnabled:(BOOL)enabled threadIndex:(unsigned long long)index contentTheme:(id)theme avatarState:(id)state storyStatus:(unsigned long long)status threadsAppStatuses:(id)statuses avatarViewSpec:(id)spec tableLayoutSpec:(id)spec accessibilityIdentifier:(id)identifier module:(id)module activeVideoCall:(BOOL)call isAudioCall:(BOOL)call showSeenStatesInInbox:(BOOL)inbox messageStateDateFormatter:(id)formatter loggingInfo:(id)info disabledContextButtonsForInteropThread:(id)thread isBusinessMessagingHighVolumeRateLimit:(BOOL)limit lastVisibleMessageId_DEPRECATED:(id)deprecated lastVisibleMessageProvider:(id)provider draftMessage:(id)message selectedTab:(id)tab nudgeType:(long long)type isMsysGroupInvite:(BOOL)invite userDefaults:(id)defaults sessionId:(id)id directImpressionManager:(id)manager directPrivacySettings:(id)settings threadIsSenderReplyReminderEligible:(BOOL)eligible threadIsReceiverReplyReminderEligible:(BOOL)eligible;
@end

#endif /* IGDirectInboxThreadCellViewModel_Convenience_h */
