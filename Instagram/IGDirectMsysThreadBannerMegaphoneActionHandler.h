//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysThreadBannerMegaphoneActionHandler_h
#define IGDirectMsysThreadBannerMegaphoneActionHandler_h
@import Foundation;

#include "IGDirectThreadMegaphoneActionHandler-Protocol.h"
#include "IGDirectThreadMegaphoneActionHandlerDelegate-Protocol.h"

@class IGDirectMsysMessagingMailbox, IGDirectThreadBanner, NSString;

@interface IGDirectMsysThreadBannerMegaphoneActionHandler : NSObject<IGDirectThreadMegaphoneActionHandler> {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_mailboxProvider;
  IGDirectThreadBanner *_threadBanner;
  NSObject<IGDirectThreadMegaphoneActionHandlerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMailboxProvider:(id)provider threadBanner:(id)banner;
- (void)megaphoneDidDismiss:(id)dismiss;
- (void)megaphoneDidSelectButton:(id)button;
- (void)megaphoneDidShown:(id)shown;
- (void)setDelegate:(id)delegate;
@end

#endif /* IGDirectMsysThreadBannerMegaphoneActionHandler_h */