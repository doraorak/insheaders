//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutConfirmationViewController_h
#define FBPayExpressCheckoutConfirmationViewController_h
@import Foundation;

#include "FBPayExpressCheckoutBaseViewController.h"
#include "FBPayActionButtonView.h"
#include "FBPayCoreTextView.h"
#include "FBPayExpressCheckoutConfirmationConfiguration.h"
#include "FBPayExpressCheckoutConfirmationProductSummaryView.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UITableView, UIView;
@protocol FBPayExpressCheckoutConfirmationViewControllerDelegate;

@interface FBPayExpressCheckoutConfirmationViewController : FBPayExpressCheckoutBaseViewController<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  FBPayExpressCheckoutConfirmationConfiguration *_confirmationConfiguration;
  UIImageView *_checkmarkCircleImageView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  FBPayCoreTextView *_receiptCoreTextView;
  FBPayCoreTextView *_pinCoreTextView;
  UITableView *_upsellTableView;
  UIView *_upperSeparatorView;
  UIView *_lowerSeparatorView;
  FBPayExpressCheckoutConfirmationProductSummaryView *_productSummaryView;
  FBPayActionButtonView *_primaryButtonView;
  FBPayActionButtonView *_secondaryButtonView;
  FBPayCoreTextView *_bottomTermView;
  NSString *_receiptURL;
  NSString *_pinURL;
  NSString *_bottomTermURL;
  NSString *_productId;
  NSObject<FBPayUPLLoggingAPI> *_logger;
}

@property (weak, nonatomic) NSObject<FBPayExpressCheckoutConfirmationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfirmationConfiguration:(id)configuration navigationBarConfig:(id)config productId:(id)id logger:(id)logger;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)totalViewHeight;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
@end

#endif /* FBPayExpressCheckoutConfirmationViewController_h */
