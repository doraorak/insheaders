//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutUIProcessor_h
#define FBPayExpressCheckoutUIProcessor_h
@import Foundation;

#include "FBPayExpressCheckoutUIProcessorUpdate.h"
#include "FBPayExpressCheckoutViewController.h"

@class NSTimer;
@protocol FBPayBottomSheetControlling;

@interface FBPayExpressCheckoutUIProcessor : NSObject {
  /* instance variables */
  FBPayExpressCheckoutViewController *_ecpPuxViewController;
  NSObject<FBPayBottomSheetControlling> *_bottomSheetController;
  FBPayExpressCheckoutUIProcessorUpdate *_latestUpdate;
  NSTimer *_taskExecutionTimer;
  double _maxBottomSheetHeight;
  double _maxPuxHeight;
  double _footerTableViewHeight;
}

/* instance methods */
- (id)initWithExpressCheckoutViewController:(id)controller bottomSheetController:(id)controller;
- (void)endUpdates;
- (void)_executeLatestUpdate;
@end

#endif /* FBPayExpressCheckoutUIProcessor_h */