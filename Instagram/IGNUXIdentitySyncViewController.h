//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNUXIdentitySyncViewController_h
#define IGNUXIdentitySyncViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGNUXISContent.h"
#include "IGNUXIdentitySyncLoadingView.h"
#include "IGNUXIdentitySyncView.h"
#include "IGNUXLayoutSpec.h"
#include "NSObject-Protocol.h"

@class IGRegistrationLogger, NSString;
@protocol IGNUXIdentitySyncViewControllerDelegate;

@interface IGNUXIdentitySyncViewController : IGViewController<NSObject> {
  /* instance variables */
  IGNUXIdentitySyncView *_containerView;
  IGNUXLayoutSpec *_layoutSpec;
  IGNUXISContent *_content;
  IGRegistrationLogger *_logger;
  BOOL _isFBRegistration;
  IGNUXIdentitySyncLoadingView *_loadingView;
}

@property (weak, nonatomic) NSObject<IGNUXIdentitySyncViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLayoutSpec:(id)spec logger:(id)logger isFBRegistration:(BOOL)fbregistration;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)igNUXISViewDidTapPrimaryButton:(id)button;
- (void)igNUXISViewDidTapSecondaryButton:(id)button;
- (void)igNUXISView:(id)nuxisview didTapURL:(id)url;
@end

#endif /* IGNUXIdentitySyncViewController_h */
