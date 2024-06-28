//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveAutoAcceptCountdownViewController_h
#define IGLiveAutoAcceptCountdownViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGCameraViewController.h"
#include "IGLiveRoomAutoAcceptCountdownView.h"
#include "NSObject-Protocol.h"

@class IGProfilePictureImageView, IGUserSession, NSString;
@protocol IGLiveRoomAutoAcceptCountdownViewControllerDelegate;

@interface IGLiveAutoAcceptCountdownViewController : UIViewController<NSObject> {
  /* instance variables */
  NSString *_module;
  IGCameraViewController *_cameraViewController;
  IGLiveRoomAutoAcceptCountdownView *_autoAcceptView;
  IGProfilePictureImageView *_avatarView;
  NSString *_broadcastOwnerUsername;
  IGUserSession *_userSession;
  NSObject<IGLiveRoomAutoAcceptCountdownViewControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session broadcastOwnerUsername:(id)username cameraViewController:(id)controller delegate:(id)delegate module:(id)module;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (id)delegate;
- (void)autoAcceptCountdownViewCancelButtonTapped:(id)tapped;
@end

#endif /* IGLiveAutoAcceptCountdownViewController_h */
