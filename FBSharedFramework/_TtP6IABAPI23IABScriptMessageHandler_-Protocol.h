//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP6IABAPI23IABScriptMessageHandler__Protocol_h
#define _TtP6IABAPI23IABScriptMessageHandler__Protocol_h
@import Foundation;

@protocol _TtP6IABAPI23IABScriptMessageHandler_ 

@property (nonatomic, readonly) NSArray *supportedMessageNames;
@property (nonatomic, readonly) NSArray *supportedMessageNamesWithReply;

/* instance methods */
- (void)handleScriptMessageWithName:(id)name webView:(id)view frameInfo:(id)info websiteURL:(id)url messageParams:(id)params;
- (void)handleScriptMessageWithReply:(id)reply webView:(id)view messageParams:(id)params replyHandler:(id /* block */)handler;
@optional
/* instance methods */
- (BOOL)shouldAvoidOriginHostCheck:(id)check;
@end

#endif /* _TtP6IABAPI23IABScriptMessageHandler__Protocol_h */
