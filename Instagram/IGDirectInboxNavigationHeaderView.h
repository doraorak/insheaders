//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxNavigationHeaderView_h
#define IGDirectInboxNavigationHeaderView_h
@import Foundation;

#include "IGCustomHeaderView.h"
#include "IGDirectInboxConfig.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGBadgeButton, IGDirectInboxTab, IGStackLayout, IGUserSession, NSString, UIButton, UILabel, UIView;
@protocol IGDirectInboxNavigationHeaderViewDelegate;

@interface IGDirectInboxNavigationHeaderView : IGCustomHeaderView<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIButton *_backButton;
  UILabel *_titleLabel;
  UIView *_titleView;
  UIButton *_multiSelectButton;
  UIButton *_cancelButton;
  UIButton *_editButton;
  UIButton *_searchButton;
  UIView *_separatorView;
  UIButton *_settingEntrypointButton;
  UIButton *_adsEntrypointButton;
  UIButton *_aiChatsEntrypointButton;
  IGUserSession *_userSession;
  IGDirectInboxConfig *_inboxConfig;
  IGDirectInboxTab *_currentTab;
  IGStackLayout *_rightButtonsLayout;
  BOOL _showAdsEnrypointButtonInTopLevel;
  IGBadgeButton *_inboxChannelsDirectoryButton;
}

@property (weak, nonatomic) NSObject<IGDirectInboxNavigationHeaderViewDelegate> *delegate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double separatorAlpha;
@property (readonly, nonatomic) UIButton *messageButton;
@property (readonly, nonatomic) UIButton *cameraButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title titleView:(id)view directInboxConfig:(id)config userSession:(id)session;
- (void)layoutSubviews;
- (void)_editButtonTapped;
- (void)_backButtonTapped;
- (void)_multiSelectButtonTapped;
- (void)_searchButtonTapped;
- (void)_messageButtonTapped;
- (void)_cancelButtonTapped;
- (void)_messagingToolsButtonTapped;
- (void)_adsEntrypointButtonTapped;
- (void)_manageFoldersButtonTapped;
- (void)_manageChannelsDirectoryButtonTapped;
- (void)_aiChatsEntrypointButtonTapped;
- (void)_cameraButtonTapped;
- (void)_titleLabelLongPressed:(id)pressed;
- (void)_presentIGDirectInboxSettingEntrypointButtonMenuItemGroup;
@end

#endif /* IGDirectInboxNavigationHeaderView_h */
