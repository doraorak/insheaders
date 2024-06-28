//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMyWeekPostCaptureFooterView_h
#define IGStoryMyWeekPostCaptureFooterView_h
@import Foundation;

#include "UIView.h"
#include "IGPillButton.h"
#include "IGStoryPreviewFooterViewType-Protocol.h"

@class NSString, UIButton, UIControl, UILabel;
@protocol IGStoryPreviewFooterViewDelegate;

@interface IGStoryMyWeekPostCaptureFooterView : UIView<IGStoryPreviewFooterViewType> {
  /* instance variables */
  IGPillButton *_shareMoreButton;
  IGPillButton *_latelyOnlyButton;
}

@property (weak, nonatomic) NSObject<IGStoryPreviewFooterViewDelegate> *delegate;
@property (readonly, nonatomic) UIControl *storyButton;
@property (readonly, nonatomic) UIControl *favoritesButton;
@property (readonly, nonatomic) UIControl *chevronButton;
@property (readonly, nonatomic) UIControl *overflowButton;
@property (readonly, nonatomic) UIButton *sendButton;
@property (readonly, nonatomic) UILabel *audienceHelperLabel;
@property (nonatomic) BOOL isShareToFacebookShortCutEnabled;
@property (nonatomic) BOOL shareToStoryShortcutEnabled;
@property (copy, nonatomic) NSString *favoritesButtonText;
@property (nonatomic) BOOL closeFriendsShortcutEnabled;
@property (nonatomic) BOOL isShareToCloseFriendsFacebookShortcutEnabled;
@property (nonatomic) BOOL fanClubShortcutEnabled;
@property (nonatomic) BOOL sendToButtonEnabled;
@property (nonatomic) BOOL storiesSharingShortcutsVisible;
@property (readonly, nonatomic) double bottomPadding;
@property (nonatomic) BOOL closeFriendsShortcutAndListButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setButtonsEnabled:(BOOL)enabled;
- (void)setPostingEnabled:(BOOL)enabled;
- (void)_didTapShareMoreButton:(id)button;
- (void)_didTapMyWeekOnlyButton:(id)button;
@end

#endif /* IGStoryMyWeekPostCaptureFooterView_h */