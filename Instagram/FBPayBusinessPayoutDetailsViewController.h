//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessPayoutDetailsViewController_h
#define FBPayBusinessPayoutDetailsViewController_h
@import Foundation;

#include "UIViewController.h"
#include "FBPayBusinessContext.h"
#include "FBPayBusinessNotificationViewController.h"
#include "FBPayBusinessPayoutDetailsViewBuilder-Protocol.h"
#include "FBPayBusinessPayoutsModel.h"
#include "FBPayBusinessTransactionEarningDetailsTableViewModelDelegate-Protocol.h"

@class NSArray, NSString, UIView;
@protocol FBPayBusinessPayoutDetailsViewControllerDelegate;

@interface FBPayBusinessPayoutDetailsViewController : UIViewController<FBPayBusinessTransactionEarningDetailsTableViewModelDelegate> {
  /* instance variables */
  FBPayBusinessPayoutsModel *_dataModel;
  FBPayBusinessContext *_context;
  NSString *_financialEntityID;
  NSString *_managedMerchantAccountId;
  NSString *_payoutStatus;
  NSObject<FBPayBusinessPayoutDetailsViewBuilder> *_viewBuilder;
  UIView *_contentView;
  FBPayBusinessNotificationViewController *_notificationViewController;
  NSArray *_contentViewConstraints;
  NSArray *_notificationConstraints;
}

@property (weak, nonatomic) NSObject<FBPayBusinessPayoutDetailsViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPayoutDetailsModel:(id)model payoutId:(id)id merchantServicesContext:(id)context detailsViewBuilder:(id)builder financialEntityID:(id)id managedMerchantAccountId:(id)id notificationViewController:(id)controller;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (void)notificationViewControllerDidUpdate:(id)update;
- (id)notificationViewControllerGetFEID:(id)feid;
- (unsigned long long)notificationViewControllerGetViewName:(id)name;
- (id)notificationViewControllerGetSubtypesToFilter;
- (void)showEarningsDetailsView:(id)view;
@end

#endif /* FBPayBusinessPayoutDetailsViewController_h */
