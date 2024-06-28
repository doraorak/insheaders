//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsMoreOptionsThankYouViewController_h
#define IGAdsMoreOptionsThankYouViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAdsMoreOptionsActionModel.h"
#include "IGAdsMoreOptionsThankYouView.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGAdsMoreOptionsThankYouViewControllerDelegate;

@interface IGAdsMoreOptionsThankYouViewController : IGViewController<NSObject> {
  /* instance variables */
  IGAdsMoreOptionsActionModel *_adsAction;
  IGAdsMoreOptionsThankYouView *_thankYouView;
}

@property (weak, nonatomic) NSObject<IGAdsMoreOptionsThankYouViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdsAction:(id)action;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (void)adsMoreOptionsThankYouView:(id)view didTapAboutAdsButton:(id)button;
@end

#endif /* IGAdsMoreOptionsThankYouViewController_h */