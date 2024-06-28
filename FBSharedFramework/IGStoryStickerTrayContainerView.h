//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryStickerTrayContainerView_h
#define IGStoryStickerTrayContainerView_h
@import Foundation;

#include "UIView.h"
#include "IGSearchBarWithCancel.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UIPageControl, UIView, UIVisualEffectView;
@protocol IGStoryStickerTrayContainerViewDelegate;

@interface IGStoryStickerTrayContainerView : UIView {
  /* instance variables */
  UIVisualEffectView *_blurEffectView;
  UIView *_searchActivityContainerView;
  UILabel *_searchLabel;
  UILabel *_emojiModerationLabel;
  UILabel *_emojiModerationDisclaimerLabel;
  UILabel *_titleLabel;
  UIActivityIndicatorView *_searchActivityIndicator;
  UIButton *_doneButton;
  BOOL _searchActivityIndicatorVisible;
  BOOL _emojiModerationForBCVisible;
  BOOL _emojiModerationDisclaimerForBCVisible;
  UIButton *_chevronView;
  UIPageControl *_pageControl;
  long long _backgroundBlurStyle;
  unsigned long long _searchBarConfigStyle;
  UIView *_trayContentView;
  UIView *_searchResultsView;
  UIActivityIndicatorView *_loadingMoreActivityIndicatorView;
}

@property (weak, nonatomic) NSObject<IGStoryStickerTrayContainerViewDelegate> *delegate;
@property (readonly, nonatomic) IGSearchBarWithCancel *searchBarWithCancel;
@property (retain, nonatomic) NSString *trayTitle;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setBlurBackgroundHidden:(BOOL)hidden;
- (void)_updateEmojiModerationViews;
- (void)_showEmojiModerationDisclaimer;
- (void)_didTapDoneButton:(id)button;
- (void)_didTapChevronButton:(id)button;
- (void)_didChangePageControl:(id)control;
@end

#endif /* IGStoryStickerTrayContainerView_h */
