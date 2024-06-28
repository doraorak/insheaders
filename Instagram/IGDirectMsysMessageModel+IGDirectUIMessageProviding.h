//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysMessageModel_IGDirectUIMessageProviding_h
#define IGDirectMsysMessageModel_IGDirectUIMessageProviding_h
@import Foundation;

@interface IGDirectMsysMessageModel (IGDirectUIMessageProviding) <IGDirectUIMessageProviding>
/* instance methods */
- (unsigned long long)messageType;
- (void)setMessageType:(unsigned long long)type;
- (id)contentTypeString;
- (id)message;
- (id)replyable;
- (id)actionSummaryProvider;
- (BOOL)hideInThread;
- (id)powerupsMetadata;
- (id)auxiliaryContent;
- (id)paidPartnershipMetadata;
@end

#endif /* IGDirectMsysMessageModel_IGDirectUIMessageProviding_h */