//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC38IGFeedItemInvitedCoauthorCellViewModel38IGFeedItemInvitedCoauthorCellViewModel_h
#define _TtC38IGFeedItemInvitedCoauthorCellViewModel38IGFeedItemInvitedCoauthorCellViewModel_h
@import Foundation;

#include "IGFeedItemCellViewModelProtocol-Protocol.h"

@interface _TtC38IGFeedItemInvitedCoauthorCellViewModel38IGFeedItemInvitedCoauthorCellViewModel : NSObject<IGFeedItemCellViewModelProtocol> { // (Swift)
  /* instance variables */
   media;
   feedItemCellViewModelContext;
}

/* instance methods */
- (id)initWithMedia:(id)media feedItemCellViewModelContext:(id)context;
- (void)updateWithMedia:(id)media;
- (id)mediaPK;
- (id)mediaUserPK;
- (id)invitedCoauthorReminderStringWithUserSession:(id)session;
- (id)invitedCoauthor;
- (id)collaborativePostAcceptStringWithUserSession:(id)session;
- (void)collaborativePostTriggerAcceptOrDeclineAlertWithWindow:(id)window networker:(id)networker mediaStore:(id)store feedItemPostedAnnouncer:(id)announcer privacyStatus:(long long)status appNavigationHandler:(id)handler linkHandler:(id)handler userSession:(id)session;
- (void)collaborativePostTriggerAcceptWithWindow:(id)window networker:(id)networker mediaStore:(id)store feedItemPostedAnnouncer:(id)announcer appNavigationHandler:(id)handler;
- (id)loggingInfoModel;
- (id)init;
@end

#endif /* _TtC38IGFeedItemInvitedCoauthorCellViewModel38IGFeedItemInvitedCoauthorCellViewModel_h */