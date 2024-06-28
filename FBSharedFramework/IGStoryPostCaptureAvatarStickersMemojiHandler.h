//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryPostCaptureAvatarStickersMemojiHandler_h
#define IGStoryPostCaptureAvatarStickersMemojiHandler_h
@import Foundation;

#include "IGTooltipView.h"
#include "IGTooltipViewDelegate-Protocol.h"
#include "IGUserAvatarStatusListener-Protocol.h"
#include "IGUserSession.h"

@class NSString, UIViewController;
@protocol IGStoryPostCaptureAvatarStickersMemojiHandlerDelegate;

@interface IGStoryPostCaptureAvatarStickersMemojiHandler : NSObject<IGTooltipViewDelegate, IGUserAvatarStatusListener> {
  /* instance variables */
  IGUserSession *_userSession;
  UIViewController *_context;
  NSObject<IGStoryPostCaptureAvatarStickersMemojiHandlerDelegate> *_delegate;
  BOOL _didCreateAvatarFromDialog;
  IGTooltipView *_tryAvatarsTooltip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session context:(id)context delegate:(id)delegate;
- (void)didTapTooltipView:(id)view;
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
@end

#endif /* IGStoryPostCaptureAvatarStickersMemojiHandler_h */