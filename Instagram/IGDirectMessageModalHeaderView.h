//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageModalHeaderView_h
#define IGDirectMessageModalHeaderView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectMessageModalTitleView.h"
#include "IGDirectMessageModalTitleViewModel.h"
#include "IGDirectNotesTrayUserViewModel.h"
#include "IGDirectTextMessageBubbleView.h"
#include "IGStoryViewerListAvatarReactionBadge.h"
#include "IGStoryViewerListEmojiReactionBadge.h"
#include "IGTranslationNetworkDataSourceDelegate-Protocol.h"
#include "IGUserAvatarStatusListener-Protocol.h"
#include "_TtC14IGHeartOverlay18IGHeartOverlayView.h"

@class CAShapeLayer, IGALTapGestureRecognizer, IGDirectAvatarView, IGDirectComposerMusicStatusReplyXMAView, IGDirectComposerMusicStatusReplyXMAViewModel, IGDirectMessageModalShareContent, IGImageView, IGTapButton, IGTranslationNetworkDataSource, IGUserSession, NSString, UIActivityIndicatorView, UILabel, UIScrollView, UIView;
@protocol IGDirectComposerMusicStatusReplyXMAViewDelegate, IGDirectMessageModalHeaderViewDelegate, IGDirectReplyToAuthorViewControllerAnnouncer;

@interface IGDirectMessageModalHeaderView : UIView<IGTranslationNetworkDataSourceDelegate, IGUserAvatarStatusListener> {
  /* instance variables */
  CAShapeLayer *_backgroundLayer;
  IGDirectAvatarView *_avatarView;
  IGDirectAvatarView *_avatarViewWelcomeMessage;
  IGImageView *_imageView;
  CAShapeLayer *_imageViewMask;
  IGDirectMessageModalShareContent *_shareContent;
  UILabel *_welcomeMessageTimestampLabel;
  UILabel *_businessResponseTimeLabel;
  UIView *_headerViewHorizontalLine;
  BOOL _displayHeaderForTrustSignalsOrWelcomeMessage;
  BOOL _displayHeaderForTrustSignals;
  IGDirectTextMessageBubbleView *_welcomeMessage;
  IGUserSession *_userSession;
  IGALTapGestureRecognizer *_avatarViewTapGestureRecognizer;
  UIView *_bannerView;
  IGDirectMessageModalTitleViewModel *_titleViewModel;
  UIScrollView *_titleScrollView;
  UILabel *_messageFeedbackLabel;
  UIView *_storyLikeHeart;
  IGStoryViewerListEmojiReactionBadge *_reactionStickerBadge;
  IGStoryViewerListAvatarReactionBadge *_avatarReactionBadge;
  IGStoryViewerListEmojiReactionBadge *_emojiReactionBadge;
  IGDirectComposerMusicStatusReplyXMAView *_musicXMAView;
  IGDirectComposerMusicStatusReplyXMAViewModel *_musicViewModel;
  UIActivityIndicatorView *_loadingIndicator;
  IGTranslationNetworkDataSource *_translationNetworkDataSource;
  IGDirectNotesTrayUserViewModel *_trayUserModel;
  IGTapButton *_notesActionMenuButton;
  long long _source;
  _TtC14IGHeartOverlay18IGHeartOverlayView *_heartOverlayView;
  BOOL _isMusicXMALoaded;
  NSObject<IGDirectComposerMusicStatusReplyXMAViewDelegate> *_musicXMAViewDelegate;
}

@property (weak, nonatomic) NSObject<IGDirectMessageModalHeaderViewDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGDirectReplyToAuthorViewControllerAnnouncer> *announcer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGDirectMessageModalTitleView *titleView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateAvatarStoryRingViewSpec:(id)spec;
- (void)_didPressAvatarView:(id)view;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)_didTapNotesActionMenuButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)titleViewDidTapTitleOrSubtitle:(id)subtitle;
- (void)titleViewDidTapSeeTranslation:(id)translation;
- (void)titleView:(id)view didTapLink:(id)link;
- (void)titleViewDidTapMusicPlaybackButton:(BOOL)button audioClusterId:(id)id;
- (void)titleViewDidTapMusicAttributionWithAudioClusterID:(id)id;
- (void)layoutTitleView:(id)view;
- (void)titleView:(id)view didBeginSeekGestureWithProgress:(double)progress;
- (void)titleView:(id)view didFinishSeekGestureWithProgress:(double)progress;
- (void)titleView:(id)view didTapLocationWithViewModel:(id)model;
- (void)titleViewDidTapBirthdaySettings:(id)settings;
- (void)translationNetworkDataSource:(id)source didLoadTranslations:(id)translations;
- (void)translationNetworkDataSource:(id)source didFailWithError:(id)error;
- (void)translationNetworkDataSource:(id)source didFailToLoadTranslationForCommentIds:(id)ids;
- (void)setIceBreakerViewDisabled:(BOOL)disabled;
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
@end

#endif /* IGDirectMessageModalHeaderView_h */
