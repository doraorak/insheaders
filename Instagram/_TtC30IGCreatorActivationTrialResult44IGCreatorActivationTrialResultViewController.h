//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC30IGCreatorActivationTrialResult44IGCreatorActivationTrialResultViewController_h
#define _TtC30IGCreatorActivationTrialResult44IGCreatorActivationTrialResultViewController_h
@import Foundation;

#include "IGGenericDataProviderViewController.h"

@interface _TtC30IGCreatorActivationTrialResult44IGCreatorActivationTrialResultViewController : IGGenericDataProviderViewController { // (Swift)
  /* instance variables */
   delegate;
   userSession;
   media;
   trialResultDataProvider;
   entrypoint;
   $__lazy_storage_$_bottomButton;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (void)viewDidLoad;
- (void)didShowContent;
- (void)viewDidLayoutSubviews;
- (id)analyticsModule;
- (BOOL)prefersNavigationBarHidden;
- (id)initWithDataProvider:(id)provider dataSource:(id)source userSession:(id)session;
- (id)initForSwiftWithDataProvider:(id)provider userSession:(id)session;
@end

#endif /* _TtC30IGCreatorActivationTrialResult44IGCreatorActivationTrialResultViewController_h */
