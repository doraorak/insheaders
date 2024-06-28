//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBusinessPersistentMenuViewControllerPresenter_h
#define IGDirectBusinessPersistentMenuViewControllerPresenter_h
@import Foundation;

#include "IGPartialModalSheetListener-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGDirectBusinessPersistentMenu, IGDirectThreadKey, IGPartialModalSheetViewController, IGUser, IGUserSession, NSString;

@interface IGDirectBusinessPersistentMenuViewControllerPresenter : NSObject<IGPartialModalSheetListener, UIScrollViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGUser *_businessUser;
  IGDirectBusinessPersistentMenu *_persistentMenuViewModel;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  IGPartialModalSheetViewController *_businessPersistentMenuViewController;
  double _originalHeight;
  BOOL _isAtMaxHeight;
  IGDirectThreadKey *_threadKey;
  NSString *_threadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session businessUser:(id)user viewModel:(id)model launcherSet:(id)set threadKey:(id)key threadID:(id)id;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)scrollViewDidScroll:(id)scroll;
@end

#endif /* IGDirectBusinessPersistentMenuViewControllerPresenter_h */