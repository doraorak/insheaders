//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGDirectDetailRedesignViewKit43IGDirectThreadDetailsRedesignViewController_IGDirectDetailRedesignViewKit25_h
#define _TtC29IGDirectDetailRedesignViewKit43IGDirectThreadDetailsRedesignViewController_IGDirectDetailRedesignViewKit25_h
@import Foundation;

@interface _TtC29IGDirectDetailRedesignViewKit43IGDirectThreadDetailsRedesignViewController (IGDirectDetailRedesignViewKit25) <IGDirectMessageSendingListener>
/* instance methods */
- (void)outgoingMessagePayloadSuccessfullySent:(id)sent successResponseDict:(id)dict;
- (void)outgoingMessageWithPayload:(id)payload didFailToSendWithError:(id)error manualRetryPermitted:(BOOL)permitted;
- (void)outgoingSecureMessageWillSendForThreadTarget:(id)target content:(id)content;
@end

#endif /* _TtC29IGDirectDetailRedesignViewKit43IGDirectThreadDetailsRedesignViewController_IGDirectDetailRedesignViewKit25_h */