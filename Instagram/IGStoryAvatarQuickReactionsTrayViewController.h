//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAvatarQuickReactionsTrayViewController_h
#define IGStoryAvatarQuickReactionsTrayViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAvatarGridViewControllerDelegate-Protocol.h"

@class IGUserSession, NSString, UIVisualEffectView;
@protocol IGStoryAvatarQuickReactionsTrayViewControllerDelegate, IGViewController<IGAvatarGridViewControllerProtocol;

@interface IGStoryAvatarQuickReactionsTrayViewController : IGViewController<IGAvatarGridViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGViewController<IGAvatarGridViewControllerProtocol> *_grid;
  long long _entryPoint;
  BOOL _didSendAvatar;
  UIVisualEffectView *_blurEffectView;
}

@property (weak, nonatomic) NSObject<IGStoryAvatarQuickReactionsTrayViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session entryPoint:(long long)point;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)avatarGridDidTapClose:(id)close;
- (void)avatarGridShouldNavigateToAvatarEditor:(id)editor;
- (void)avatarGrid:(id)grid didSelectAvatar:(id)avatar staticSticker:(id)sticker;
- (void)avatarGrid:(id)grid didSelectAvatar:(id)avatar animatedSticker:(id)sticker;
- (void)avatarGrid:(id)grid shouldNavigateToAvatarGridOfUser:(id)user pogPosition:(long long)position source:(long long)source;
- (void)avatarGrid:(id)grid willHitImpression:(id)impression;
- (void)avatarGrid:(id)grid hasStickers:(BOOL)stickers;
- (void)avatarGrid:(id)grid searchWithText:(id)text;
- (void)avatarGrid:(id)grid error:(id)error;
- (void)avatarGrid:(id)grid didLongPressStickerWithId:(id)id enableReportingOptions:(BOOL)options enableFavoriteOptions:(BOOL)options useContextMenuReportFlow:(BOOL)flow cellContentView:(id)view;
- (void)avatarGridShouldNavigateToAvatarEmotesListView:(id)view avatarEmotesListVC:(id)vc;
- (BOOL)prefersNavigationBarHidden;
@end

#endif /* IGStoryAvatarQuickReactionsTrayViewController_h */