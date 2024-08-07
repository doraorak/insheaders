//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC30IGDCustomNotificationPresenter30IGDCustomNotificationPresenter_h
#define _TtC30IGDCustomNotificationPresenter30IGDCustomNotificationPresenter_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP38IGDCustomNotificationPresenterProtocol38IGDCustomNotificationPresenterProtocol_-Protocol.h"

@interface _TtC30IGDCustomNotificationPresenter30IGDCustomNotificationPresenter : _TtCs12_SwiftObject<_TtP38IGDCustomNotificationPresenterProtocol38IGDCustomNotificationPresenterProtocol_> { // (Swift)
  /* instance variables */
   userSession;
   actionHandler;
}

/* class methods */
+ (id)inAppNotificationErrorDomain;

/* instance methods */
- (void)presentCustomWithNotification:(id)notification threadId:(id)id allowsQuickReply:(BOOL)reply completion:(id /* block */)completion;
@end

#endif /* _TtC30IGDCustomNotificationPresenter30IGDCustomNotificationPresenter_h */
