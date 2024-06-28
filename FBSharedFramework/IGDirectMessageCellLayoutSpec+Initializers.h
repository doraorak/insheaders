//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageCellLayoutSpec_Initializers_h
#define IGDirectMessageCellLayoutSpec_Initializers_h
@import Foundation;

@interface IGDirectMessageCellLayoutSpec (Initializers)
/* instance methods */
- (id)initWithAlignment:(long long)alignment parentViewWidth:(double)width replyMessageLayoutSpec:(id)spec contentStringStyles:(id)styles bubbleLayoutSpec:(id)spec bubbleGroupingStyle:(unsigned long long)style collapseAvatarNegativeSpace:(BOOL)space quotedMessageBubbleLayoutSpec:(id)spec featureSetProvider:(id)provider;
- (id)initWithAlignment:(long long)alignment parentViewWidth:(double)width displaysAvatar:(BOOL)avatar collapseAvatarNegativeSpace:(BOOL)space displaysHeader:(BOOL)header displaysSendFailed:(BOOL)failed displaysSending:(BOOL)sending displaysScreenshot:(BOOL)screenshot replyMessageLayoutSpec:(id)spec contentStringStyles:(id)styles bubbleLayoutSpec:(id)spec footerLayoutSpec:(id)spec reactionsViewLayoutSpec:(id)spec commentsViewLayoutSpec:(id)spec bubbleGroupingStyle:(unsigned long long)style quotedMessageBubbleLayoutSpec:(id)spec shouldShowForwardShortcut:(BOOL)shortcut shouldShowAgentReactions:(BOOL)reactions agentsReactionLayoutSpec:(id)spec shouldUseFullWidth:(BOOL)width userInterfaceStyle:(long long)style featureSetProvider:(id)provider;
@end

#endif /* IGDirectMessageCellLayoutSpec_Initializers_h */
