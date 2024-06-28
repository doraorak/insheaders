//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialIntentAwareAdsQuantumSignalsHandler_h
#define IGSundialIntentAwareAdsQuantumSignalsHandler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol IGSundialIntentAwareAdsQuantumSignalsHandlerDelegate;

@interface IGSundialIntentAwareAdsQuantumSignalsHandler : NSObject<NSObject> {
  /* instance variables */
  NSArray *_eligibleSignals;
}

@property (weak, nonatomic) NSObject<IGSundialIntentAwareAdsQuantumSignalsHandlerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)handleQuantumSignalsWithSurface:(unsigned long long)surface signalType:(unsigned long long)type model:(id)model;
@end

#endif /* IGSundialIntentAwareAdsQuantumSignalsHandler_h */