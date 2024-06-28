//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCondensedProductDetailsView_h
#define IGShoppingCondensedProductDetailsView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGRatingsAndReviewsStarsView.h"
#include "IGShoppingPDPAmplifiedReasonToShopView.h"
#include "IGShoppingProductDetailsMerchantTitleView.h"
#include "IGShoppingProductDetailsViewModel.h"
#include "NSObject-Protocol.h"

@class IGCoreTextView, IGUserSession, NSString, UIButton, UILabel;
@protocol IGShoppingProductDetailsViewDelegate;

@interface IGShoppingCondensedProductDetailsView : UIView<NSObject> {
  /* instance variables */
  IGShoppingProductDetailsViewModel *_viewModel;
  IGShoppingProductDetailsMerchantTitleView *_merchantTitleView;
  IGCoreTextView *_nameLabel;
  UILabel *_merchantNameBelowProductName;
  UILabel *_informationLabel;
  UILabel *_perUnitPriceLabel;
  IGCoreTextView *_discountTextView;
  IGCoreTextView *_loyaltyTextView;
  IGRatingsAndReviewsStarsView *_ratingView;
  UIButton *_shareButton;
  IGShoppingPDPAmplifiedReasonToShopView *_amplifiedReasonsToShopView;
  IGUserSession *_userSession;
}

@property (readonly, nonatomic) UIButton *saveButton;
@property (weak, nonatomic) NSObject<IGCoreTextLinkHandler> *linkHandler;
@property (weak, nonatomic) NSObject<IGShoppingProductDetailsViewDelegate> *delegate;
@property (readonly, nonatomic) BOOL supportsNameExpansion;
@property (nonatomic) BOOL isNameExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model userSession:(id)session consumptionLogger:(id)logger maxWidth:(double)width;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)updateSaveButtonWithHasSaved:(BOOL)saved animated:(BOOL)animated;
- (void)_onMerchantButtonPressed;
- (void)_onRatingButtonPressed;
- (void)_onSaveButtonPressed;
- (void)_onShareButtonPressed;
- (void)_onProductNamePressed;
@end

#endif /* IGShoppingCondensedProductDetailsView_h */