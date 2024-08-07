//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysThreadUnsendMitigationMegaphoneDataProvider_h
#define IGDirectMsysThreadUnsendMitigationMegaphoneDataProvider_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "IGDirectThreadMegaphoneDataProvider-Protocol.h"
#include "IGDirectThreadMegaphoneDataProviderDelegate-Protocol.h"

@class IGUserSession, MDCDataSubscriptionPipe, NSString;

@interface IGDirectMsysThreadUnsendMitigationMegaphoneDataProvider : NSObject<IGDirectThreadMegaphoneDataProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  MDCDataSubscriptionPipe *_bannersPipe;
  NSObject<IGDirectThreadMegaphoneDataProviderDelegate> *_delegate;
  NSObject<FBCancelable> *_cancelable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session bannersPipe:(id)pipe;
- (void)startListeningForThreadMegaphoneDataWithDelegate:(id)delegate;
- (void)stopListeningForThreadMegaphoneData;
- (id)currentRequestId;
- (void)prepareThreadMegaphoneData;
- (void)handleMessageUnsentFromSender;
@end

#endif /* IGDirectMsysThreadUnsendMitigationMegaphoneDataProvider_h */
