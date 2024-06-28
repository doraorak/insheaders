//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectTagUpsellThreadMegaphoneActionHandler_h
#define IGDirectTagUpsellThreadMegaphoneActionHandler_h
@import Foundation;

#include "IGContextualNudgesTagSettingLogger.h"
#include "IGDirectTagUpsellService.h"
#include "IGDirectThreadMegaphoneActionHandler-Protocol.h"
#include "IGDirectThreadMegaphoneActionHandlerDelegate-Protocol.h"

@class IGUserSession, NSString;

@interface IGDirectTagUpsellThreadMegaphoneActionHandler : NSObject<IGDirectThreadMegaphoneActionHandler> {
  /* instance variables */
  NSObject<IGDirectThreadMegaphoneActionHandlerDelegate> *_delegate;
  IGDirectTagUpsellService *_tagUpsellService;
  IGUserSession *_userSession;
  IGContextualNudgesTagSettingLogger *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session tagUpsellService:(id)service;
- (void)megaphoneDidDismiss:(id)dismiss;
- (void)megaphoneDidSelectButton:(id)button;
- (void)megaphoneDidShown:(id)shown;
- (void)setDelegate:(id)delegate;
@end

#endif /* IGDirectTagUpsellThreadMegaphoneActionHandler_h */
