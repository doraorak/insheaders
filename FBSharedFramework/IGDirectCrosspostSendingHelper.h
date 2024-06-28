//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCrosspostSendingHelper_h
#define IGDirectCrosspostSendingHelper_h
@import Foundation;

@interface IGDirectCrosspostSendingHelper : NSObject
/* class methods */
+ (BOOL)shouldCrosspostMessage:(id)message userSession:(id)session threadMetadata:(id)metadata threadID:(id)id;
+ (BOOL)_sharedAttachmentIsSupportedForCrossposting:(id)crossposting;
+ (BOOL)_linkTypeIsSupportedForCrossposting:(long long)crossposting;
+ (BOOL)_isMediaSupported:(id)supported;
+ (BOOL)_messageTypeIsSupportedForCrossposting:(id)crossposting;
@end

#endif /* IGDirectCrosspostSendingHelper_h */
