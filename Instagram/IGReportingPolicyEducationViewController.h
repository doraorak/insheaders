//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReportingPolicyEducationViewController_h
#define IGReportingPolicyEducationViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGReportingComponentPolicyEducationView.h"
#include "IGReportingController.h"
#include "IGReportingPolicyEducationViewModel.h"

@class IGBottomButtonsView, IGUserSession, NSString, UILabel;
@protocol IGReportingPageDelegate;

@interface IGReportingPolicyEducationViewController : IGViewController<IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGReportingController *_reportingController;
  IGReportingPolicyEducationViewModel *_viewModel;
  UILabel *_subtitleLabel;
  UILabel *_detailsLabel;
  IGReportingComponentPolicyEducationView *_policyEducationView;
  IGBottomButtonsView *_buttonsView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) NSObject<IGReportingPageDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session reportingController:(id)controller performanceListener:(id)listener;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (BOOL)isUserInteractionEnabled;
@end

#endif /* IGReportingPolicyEducationViewController_h */