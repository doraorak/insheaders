//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC30IGDirectChannelCrosspostingNUX44IGDirectChannelCrosspostingNUXViewController_h
#define _TtC30IGDirectChannelCrosspostingNUX44IGDirectChannelCrosspostingNUXViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"

@interface _TtC30IGDirectChannelCrosspostingNUX44IGDirectChannelCrosspostingNUXViewController : IGViewController<IGGestureHandler> { // (Swift)
  /* instance variables */
   setUpCrosspostingButtonHandler;
   userSession;
   threadId;
   igThreadIdKey;
   layout;
   $__lazy_storage_$_titleLabel;
   $__lazy_storage_$_bulletPointsView;
   $__lazy_storage_$_bottomButtonsView;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (id)initWithUserSession:(id)session threadId:(id)id setUpCrosspostingButtonHandler:(id /* block */)handler;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC30IGDirectChannelCrosspostingNUX44IGDirectChannelCrosspostingNUXViewController_h */