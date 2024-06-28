//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectTagUpsellThreadMegaphoneIntegration_h
#define IGDirectTagUpsellThreadMegaphoneIntegration_h
@import Foundation;

#include "IGDirectTagUpsellService.h"
#include "IGDirectThreadMegaphoneIntegration-Protocol.h"

@class IGUserSession, NSString;

@interface IGDirectTagUpsellThreadMegaphoneIntegration : NSObject<IGDirectThreadMegaphoneIntegration> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectTagUpsellService *_tagUpsellService;
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
- (id)initWithUserSession:(id)session tagUpsellService:(id)service;
- (BOOL)isThreadMegaphoneIntegrationEnabled;
- (BOOL)shouldUseInCurrentThread;
- (id)createThreadMegaphoneActionHandlerWithContext:(id)context;
- (id)createThreadMegaphoneDataProvider;
- (id)createThreadMegaphoneLoggerWithContext:(id)context;
- (void)handleShowingMegaphoneAsComposerBlock:(id)block actionHandler:(id)handler hostingViewController:(id)controller userSession:(id)session context:(id)context;
- (void)updateThreadMetadataWithThreadMetadata:(id)metadata;
@end

#endif /* IGDirectTagUpsellThreadMegaphoneIntegration_h */