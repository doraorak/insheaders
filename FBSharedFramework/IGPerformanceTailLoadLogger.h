//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPerformanceTailLoadLogger_h
#define IGPerformanceTailLoadLogger_h
@import Foundation;

#include "IGPerformanceLoadingIndicatorAnnouncer.h"
#include "IGScrollViewAnnouncer.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IGPerformanceTailLoadLoggerDelegate;

@interface IGPerformanceTailLoadLogger : NSObject<IGScrollViewListener> {
  /* instance variables */
  unsigned long long _direction;
  unsigned long long _loggerTriggerEvent;
  BOOL _isCurrentlyLogging;
  BOOL _isActivePageRequestPresent;
  BOOL _isUserSampled;
  long long _currentScrollDistance;
  long long _maxScrollDistance;
  long long _scrollDistanceForCurrentTailLoadInterruption;
  long long _scrollDistanceAtLastTailLoadInterruption;
  int _markerID;
  int _instanceKey;
  NSString *_analyticsModule;
  NSObject<IGUserLauncherSet> *_launcherSet;
  NSMutableDictionary *_loggerAnnotations;
  IGPerformanceLoadingIndicatorAnnouncer *_loadingIndicatorAnnouncer;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  int _clientPage;
}

@property (weak, nonatomic) NSObject<IGPerformanceTailLoadLoggerDelegate> *delegate;
@property (nonatomic) int clientPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMarkerID:(int)id analyticsModule:(id)module launcherSet:(id)set;
- (id)initWithMarkerID:(int)id analyticsModule:(id)module launcherSet:(id)set loggerTriggerEvent:(unsigned long long)event;
- (id)initWithMarkerID:(int)id analyticsModule:(id)module launcherSet:(id)set appStateAnnouncer:(id)announcer loggerTriggerEvent:(unsigned long long)event;
- (void)addAnnotationKey:(id)key stringValue:(id)value;
- (void)scrollViewDidScroll:(id)scroll;
- (void)performanceLoadingIndicatorDidAppearWithLoggingExtras:(id)extras;
- (void)performanceLoadingIndicatorDidDisappear;
- (void)viewController:(id)controller viewWillDisappearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewDidDisappearAnimated:(BOOL)animated;
- (void)applicationDidEnterBackground:(id)background;
@end

#endif /* IGPerformanceTailLoadLogger_h */