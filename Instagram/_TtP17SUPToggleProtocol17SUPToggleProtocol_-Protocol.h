//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP17SUPToggleProtocol17SUPToggleProtocol__Protocol_h
#define _TtP17SUPToggleProtocol17SUPToggleProtocol__Protocol_h
@import Foundation;

@protocol _TtP17SUPToggleProtocol17SUPToggleProtocol_ 

@property (nonatomic, copy) id /* block */ onToggle;
@property (nonatomic, copy) id /* block */ onMuteMedia;
@property (nonatomic, copy) id /* block */ onPauseBroadcast;
@property (nonatomic, copy) id /* block */ onRequestCapturePrompt;
@property (nonatomic, copy) id /* block */ onOpenURL;
@property (nonatomic, copy) id /* block */ onVisibilityChanged;

/* instance methods */
- (void)showToolTipWithText:(id)text;
- (void)removeToolTip;
@end

#endif /* _TtP17SUPToggleProtocol17SUPToggleProtocol__Protocol_h */