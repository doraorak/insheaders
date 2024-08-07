//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARCommerceFLMConsentController_h
#define IGARCommerceFLMConsentController_h
@import Foundation;

#include "IGScopedListener-Protocol.h"

@class IGBloksAsyncActionHandler, IGUserSession, NSString, UIViewController;
@protocol SparkARFLMConsentManager;

@interface IGARCommerceFLMConsentController : NSObject<IGScopedListener> {
  /* instance variables */
  UIViewController *_vc;
  NSString *_entryPoint;
  IGUserSession *_userSession;
  NSString *_currentExperienceId;
  IGBloksAsyncActionHandler *_asyncActionHandler;
  NSObject<SparkARFLMConsentManager> *_sparkFlmConsentManager;
  id /* block */ _onGrantedCallback;
  id /* block */ _onDeniedCallback;
  id /* block */ _onErrorCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller userSession:(id)session entryPoint:(id)point;
- (void)didAcceptConsentWithId:(id)id;
- (void)didDenyConsentWithId:(id)id;
- (void)didDismissWithId:(id)id;
@end

#endif /* IGARCommerceFLMConsentController_h */
