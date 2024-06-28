//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SRWebSocketDelegate_Protocol_h
#define SRWebSocketDelegate_Protocol_h
@import Foundation;

@protocol SRWebSocketDelegate <NSObject>
@optional
/* instance methods */
- (void)webSocket:(id)socket didReceiveMessage:(id)message;
- (void)webSocket:(id)socket didReceiveMessageWithString:(id)string;
- (void)webSocket:(id)socket didReceiveMessageWithData:(id)data;
- (void)webSocketDidOpen:(id)open;
- (void)webSocket:(id)socket didFailWithError:(id)error;
- (void)webSocket:(id)socket didCloseWithCode:(long long)code reason:(id)reason wasClean:(BOOL)clean;
- (void)webSocket:(id)socket didReceivePingWithData:(id)data;
- (void)webSocket:(id)socket didReceivePong:(id)pong;
- (BOOL)webSocketShouldConvertTextFrameToString:(id)string;
@end

#endif /* SRWebSocketDelegate_Protocol_h */