//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastActionSheetController_h
#define IGLiveBroadcastActionSheetController_h
@import Foundation;

#include "IGLiveBroadcastLogger.h"
#include "NSObject-Protocol.h"

@class IGUser, IGUserSession, NSString, UIViewController;
@protocol IGLiveBroadcastActionSheetControllerDelegate;

@interface IGLiveBroadcastActionSheetController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGUser *_liveVideoSystemUser;
  UIViewController *_viewController;
  IGLiveBroadcastLogger *_logger;
}

@property (weak, nonatomic) NSObject<IGLiveBroadcastActionSheetControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session liveVideoSystemUser:(id)user viewController:(id)controller logger:(id)logger;
- (void)liveInviteModeratorViewController:(id)controller didAddModerator:(id)moderator;
@end

#endif /* IGLiveBroadcastActionSheetController_h */
