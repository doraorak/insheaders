//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXIGPCUpsell_h
#define IGFXIGPCUpsell_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSessionProvider, NSString, UIViewController;

@interface IGFXIGPCUpsell : NSObject<NSObject> {
  /* instance variables */
  IGUserSessionProvider *_userSessionProvider;
  UIViewController *_presentingVC;
  UIViewController *_hostingVC;
  id /* block */ _continuingBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider;
- (void)igpcUpsellViewControllerDidTapPrimaryButton:(id)button;
- (void)igpcUpsellViewControllerDidTapSecondaryButton:(id)button;
- (void)createPasswordViewController:(id)controller didCreatePasswordForAccount:(id)account;
@end

#endif /* IGFXIGPCUpsell_h */
