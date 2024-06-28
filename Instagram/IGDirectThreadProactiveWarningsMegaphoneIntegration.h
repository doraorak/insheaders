//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadProactiveWarningsMegaphoneIntegration_h
#define IGDirectThreadProactiveWarningsMegaphoneIntegration_h
@import Foundation;

#include "IGDirectThreadMegaphoneIntegration-Protocol.h"

@class IGBloksAsyncActionHandler, IGDirectThreadMetadata, IGIXTAsyncEvent, IGUserSession, NSString;

@interface IGDirectThreadProactiveWarningsMegaphoneIntegration : NSObject<IGDirectThreadMegaphoneIntegration> {
  /* instance variables */
  NSString *_threadIdV2ForInboxPaging;
  IGDirectThreadMetadata *_threadMetadata;
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGBloksAsyncActionHandler *_bloksAsyncActionHandler;
  IGIXTAsyncEvent *_ixtAsyncEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)threadMegaphoneType;
+ (id)threadMegaphoneTypes;

/* instance methods */
- (id)initWithUserSession:(id)session threadIdV2ForInboxPaging:(id)paging threadMetadata:(id)metadata analyticsModule:(id)module;
- (BOOL)shouldUseInCurrentThread;
- (BOOL)isThreadMegaphoneIntegrationEnabled;
- (id)createThreadMegaphoneDataProvider;
- (id)createThreadMegaphoneLoggerWithContext:(id)context;
- (id)createThreadMegaphoneActionHandlerWithContext:(id)context;
- (void)handleShowingMegaphoneAsComposerBlock:(id)block actionHandler:(id)handler hostingViewController:(id)controller userSession:(id)session context:(id)context;
- (void)updateThreadMetadataWithThreadMetadata:(id)metadata;
@end

#endif /* IGDirectThreadProactiveWarningsMegaphoneIntegration_h */