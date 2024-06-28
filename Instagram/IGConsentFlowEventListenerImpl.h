//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGConsentFlowEventListenerImpl_h
#define IGConsentFlowEventListenerImpl_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGConsentFlowEventListenerImpl : NSObject<NSObject> {
  /* instance variables */
  id /* block */ _errorAction;
}

@property (copy, nonatomic) id /* block */ approvedAction;
@property (copy, nonatomic) id /* block */ deniedAction;
@property (copy, nonatomic) id /* block */ dismissedAction;
@property (copy, nonatomic) id /* block */ backedAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)onApproved;
- (void)onDismissed;
- (void)onDenied;
- (void)onBacked;
- (void)onErrorWithErrorType:(id)type errorMessage:(id)message;
@end

#endif /* IGConsentFlowEventListenerImpl_h */
