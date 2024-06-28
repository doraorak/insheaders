//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksReconsiderationTileComponentController_h
#define IGBloksReconsiderationTileComponentController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "IGBloksReconsiderationTileView.h"
#include "IGShoppingProductCheckerDefaultLoggingProvider.h"
#include "IGShoppingProductCheckerViewModel.h"
#include "IGShoppingReconsiderationDataController.h"
#include "NSObject-Protocol.h"

@class IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGUser, IGUserSession, NSString;

@interface IGBloksReconsiderationTileComponentController : BKBloksComponentController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGShoppingReconsiderationDataController *_dataController;
  IGBloksReconsiderationTileView *_view;
  IGShoppingProductCheckerViewModel *_viewModel;
  IGUser *_merchant;
  IGShoppingProductCheckerDefaultLoggingProvider *_loggingProvider;
  IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
  NSString *_shopsSessionEntryPoint;
  IGSessionTracker *_shoppingSessionTracker;
  NSString *_shopsProfileEntryIgid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)didAcquireView:(id)view;
- (void)_tapped;
- (void)shoppingReconsiderationDataController:(id)controller sourceProvider:(id)provider didUpdateItems:(id)items withUpdateType:(id)type;
- (void)shoppingReconsiderationDataController:(id)controller sourceProvider:(id)provider didUpdateFetchState:(id)state;
@end

#endif /* IGBloksReconsiderationTileComponentController_h */
