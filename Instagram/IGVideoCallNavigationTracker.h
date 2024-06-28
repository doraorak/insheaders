//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallNavigationTracker_h
#define IGVideoCallNavigationTracker_h
@import Foundation;

#include "IGNavigationEventListener-Protocol.h"

@class NSArray, NSString;
@protocol IGVideoCallNavigationTrackerDelegate;

@interface IGVideoCallNavigationTracker : NSObject<IGNavigationEventListener> {
  /* instance variables */
  NSString *_module;
  BOOL _videoDisabled;
  NSArray *_videoDisabledModules;
  NSObject<IGVideoCallNavigationTrackerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)start;
- (void)end;
- (void)viewControllerDidAppear:(id)appear withEventData:(id)data;
- (void)viewControllerWillAppear:(id)appear;
- (void)viewControllerWillDisappear:(id)disappear;
- (void)viewControllerDidDisappear:(id)disappear withEventData:(id)data;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)module;
- (void)viewControllerDidUpdate:(id)update updateExtras:(id)extras;
@end

#endif /* IGVideoCallNavigationTracker_h */
