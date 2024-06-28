//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC44IGDirectBroadcastChannelPushabilityMegaphone55IGDirectBroadcastChannelPushabilityMegaphoneIntegration_h
#define _TtC44IGDirectBroadcastChannelPushabilityMegaphone55IGDirectBroadcastChannelPushabilityMegaphoneIntegration_h
@import Foundation;

#include "IGDirectThreadMegaphoneIntegration-Protocol.h"

@interface _TtC44IGDirectBroadcastChannelPushabilityMegaphone55IGDirectBroadcastChannelPushabilityMegaphoneIntegration : NSObject<IGDirectThreadMegaphoneIntegration> { // (Swift)
  /* instance variables */
   userSession;
   threadMetadata;
   threadId;
   threadKey;
}

/* class methods */
+ (id)threadMegaphoneType;
+ (id)threadMegaphoneTypes;

/* instance methods */
- (id)initWithUserSession:(id)session threadMetadata:(id)metadata threadId:(id)id;
- (BOOL)isThreadMegaphoneIntegrationEnabled;
- (BOOL)shouldUseInCurrentThread;
- (id)createThreadMegaphoneActionHandlerWithContext:(id)context;
- (id)createThreadMegaphoneDataProvider;
- (id)createThreadMegaphoneLoggerWithContext:(id)context;
- (void)handleShowingMegaphoneAsComposerBlock:(id)block actionHandler:(id)handler hostingViewController:(id)controller userSession:(id)session context:(id)context;
- (void)updateThreadMetadataWithThreadMetadata:(id)metadata;
- (id)init;
@end

#endif /* _TtC44IGDirectBroadcastChannelPushabilityMegaphone55IGDirectBroadcastChannelPushabilityMegaphoneIntegration_h */