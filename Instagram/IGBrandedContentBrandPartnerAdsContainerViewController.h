//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandedContentBrandPartnerAdsContainerViewController_h
#define IGBrandedContentBrandPartnerAdsContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBrandedContentBrandPartnerView.h"
#include "IGTabPageViewController.h"

@class IGUserReference, IGUserSession, NSString;

@interface IGBrandedContentBrandPartnerAdsContainerViewController : IGViewController {
  /* instance variables */
  IGTabPageViewController *_tabPageViewController;
  IGBrandedContentBrandPartnerView *_brandPartnerHeaderView;
  IGUserSession *_userSession;
  NSString *_priorModule;
  IGUserReference *_brandPartnerReference;
}

/* instance methods */
- (id)initWithUserSession:(id)session brandPartnerReference:(id)reference adStatusTypeToFocusOn:(long long)on priorModule:(id)module;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
@end

#endif /* IGBrandedContentBrandPartnerAdsContainerViewController_h */