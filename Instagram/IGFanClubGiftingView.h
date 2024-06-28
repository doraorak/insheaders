//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFanClubGiftingView_h
#define IGFanClubGiftingView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGFanClubGiftingViewModel.h"
#include "_TtC16IGFanClubUISwift19IGFanClubHeaderView.h"

@class IGCoreTextView, NSArray, NSString, UIActivityIndicatorView, UIScrollView;
@protocol IGFanClubGiftingViewDelegate;

@interface IGFanClubGiftingView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  IGFanClubGiftingViewModel *_viewModel;
  UIScrollView *_scrollView;
  _TtC16IGFanClubUISwift19IGFanClubHeaderView *_headerView;
  NSArray *_giftingOptionButtons;
  IGCoreTextView *_learnMoreTextView;
  UIActivityIndicatorView *_loadingIndicator;
}

@property (weak, nonatomic) NSObject<IGFanClubGiftingViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)configureWithViewModel:(id)model;
- (void)_didTapGiftingPriceOptionButton:(id)button;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGFanClubGiftingView_h */
