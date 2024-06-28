//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXIGPCUpsellViewController_h
#define IGFXIGPCUpsellViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFXIGPCUpsellView.h"
#include "IGFXIGPCUpsellViewV2.h"
#include "NSObject-Protocol.h"

@class IGUserSessionProvider, NSString;
@protocol IGFXIGPCUpsellViewControllerDelegate;

@interface IGFXIGPCUpsellViewController : IGViewController<NSObject> {
  /* instance variables */
  IGFXIGPCUpsellView *_containerView;
  IGFXIGPCUpsellViewV2 *_containerViewV2;
  IGUserSessionProvider *_userSessionProvider;
}

@property (weak, nonatomic) NSObject<IGFXIGPCUpsellViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)igpcUpsellViewDidTapPrimaryButton:(id)button;
- (void)igpcUpsellViewDidTapSecondaryButton:(id)button;
@end

#endif /* IGFXIGPCUpsellViewController_h */