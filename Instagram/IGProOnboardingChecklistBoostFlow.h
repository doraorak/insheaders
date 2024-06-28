//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProOnboardingChecklistBoostFlow_h
#define IGProOnboardingChecklistBoostFlow_h
@import Foundation;

#include "IGPromoteFlowEventListener-Protocol.h"

@class IG4BLogger, IGProFlowNavigationPresenter, IGUserSession, NSString;
@protocol IGProOnboardingChecklistBoostFlowDelegate;

@interface IGProOnboardingChecklistBoostFlow : NSObject<IGPromoteFlowEventListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IG4BLogger *_flowLogger;
  IGProFlowNavigationPresenter *_flowPresenter;
  NSObject<IGProOnboardingChecklistBoostFlowDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFlowPresenter:(id)presenter userSession:(id)session logger:(id)logger delegate:(id)delegate;
- (void)start;
- (void)promoteFlowCompleted;
@end

#endif /* IGProOnboardingChecklistBoostFlow_h */