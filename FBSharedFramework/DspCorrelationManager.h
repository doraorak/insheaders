//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef DspCorrelationManager_h
#define DspCorrelationManager_h
@import Foundation;

#include "DspCorrelationHolder.h"

@class NSString;

@interface DspCorrelationManager : NSObject {
  /* instance variables */
  long long _dspEventCountInNavigationSession;
  long long _navigationSeqNum;
  NSString *_appForegroundId;
  NSString *_correlationId;
  DspCorrelationHolder *_correlationHolder;
}

/* class methods */
+ (id)sharedInstance:(BOOL)instance;

/* instance methods */
- (id)init;
- (void)onNavigation;
- (void)onAppForeground:(id)foreground;
- (id)onDspEvent;
- (void)_resetDspEventCounter;
- (id)_generateNavigationBasedSessionId;
@end

#endif /* DspCorrelationManager_h */
