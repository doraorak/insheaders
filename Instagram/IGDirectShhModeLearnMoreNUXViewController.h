//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectShhModeLearnMoreNUXViewController_h
#define IGDirectShhModeLearnMoreNUXViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGGestureHandler-Protocol.h"

@class IGInterstitialView, NSString;

@interface IGDirectShhModeLearnMoreNUXViewController : UIViewController<IGGestureHandler, IGAnalyticsModule> {
  /* instance variables */
  IGInterstitialView *_interstitialView;
  BOOL _replayableMessagesEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session replayableMessagesEnabled:(BOOL)enabled;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)_dismiss;
- (id)analyticsModule;
@end

#endif /* IGDirectShhModeLearnMoreNUXViewController_h */