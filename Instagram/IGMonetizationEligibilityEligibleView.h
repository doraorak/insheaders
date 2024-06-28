//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationEligibilityEligibleView_h
#define IGMonetizationEligibilityEligibleView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGMonetizationEligibilityEligibleViewModel.h"

@class IGBottomButtonsView, IGCoreTextView, NSString, UIImageView, UILabel, UIScrollView, UIStackView, UIView;
@protocol IGMonetizationEligibilityEligibleViewDelegate;

@interface IGMonetizationEligibilityEligibleView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  UIScrollView *_scrollView;
  UIView *_contentView;
  UIImageView *_imageView;
  UILabel *_title;
  IGCoreTextView *_descriptionTextView;
  UIView *_contentTopSeparator;
  UILabel *_tipsSectionTitle;
  UIStackView *_doTipsStack;
  UIStackView *_dontTipsStack;
  IGBottomButtonsView *_ctaButton;
  IGMonetizationEligibilityEligibleViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGMonetizationEligibilityEligibleViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)_didTapCTAButton;
@end

#endif /* IGMonetizationEligibilityEligibleView_h */
