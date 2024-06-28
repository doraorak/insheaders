//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadMegaphoneQPDataProvider_h
#define IGDirectThreadMegaphoneQPDataProvider_h
@import Foundation;

#include "IGDirectThreadMegaphoneDataProvider-Protocol.h"
#include "IGDirectThreadMegaphoneDataProviderDelegate-Protocol.h"
#include "IGDirectThreadMegaphoneQPPresenter.h"

@class IGDirectPublishedMessageSet, IGDirectThreadKey, IGDirectThreadMetadata, IGQuickPromotionCoordinator, IGUserSession, NSString;

@interface IGDirectThreadMegaphoneQPDataProvider : NSObject<IGDirectThreadMegaphoneDataProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectPublishedMessageSet *_threadPublishedMessageSet;
  IGDirectThreadMetadata *_threadMetadata;
  IGDirectThreadKey *_threadKey;
  IGQuickPromotionCoordinator *_qpCoordinator;
  IGDirectThreadMegaphoneQPPresenter *_qpPresenter;
  NSObject<IGDirectThreadMegaphoneDataProviderDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session threadPublishedMessageSet:(id)set threadMetadata:(id)metadata threadKey:(id)key qpPresenter:(id)presenter;
- (void)startListeningForThreadMegaphoneDataWithDelegate:(id)delegate;
- (void)stopListeningForThreadMegaphoneData;
- (id)currentRequestId;
- (void)prepareThreadMegaphoneData;
- (void)coPresenceManager:(id)manager didFinishUpdatingThreadPresenceStates:(id)states;
- (void)didLeaveThread;
@end

#endif /* IGDirectThreadMegaphoneQPDataProvider_h */