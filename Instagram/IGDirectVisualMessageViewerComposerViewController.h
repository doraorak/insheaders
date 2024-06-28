//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVisualMessageViewerComposerViewController_h
#define IGDirectVisualMessageViewerComposerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGDirectComposer, IGDirectDjangoThreadSubscriptionService, IGDirectThreadKey;

@interface IGDirectVisualMessageViewerComposerViewController : UIViewController {
  /* instance variables */
  IGDirectThreadKey *_threadKey;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  IGDirectDjangoThreadSubscriptionService *_threadSubscriptionService;
  NSObject<IGSubscriptionToken> *_token;
  IGDirectComposer *_composer;
}

/* instance methods */
- (id)initWithThreadKey:(id)key threadSubscriptionService:(id)service launcherSetProvider:(id)provider;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
@end

#endif /* IGDirectVisualMessageViewerComposerViewController_h */
