//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationChainManager_h
#define IGNavigationChainManager_h
@import Foundation;

#include "FBGNVALClickEventData.h"
#include "IGNavigationChainItem.h"
#include "IGProfileSessionModel.h"
#include "NSObject-Protocol.h"
#include "NavChainHolder.h"

@class NSDate, NSMapTable, NSObject, NSString, UIViewController;
@protocol IGNavigationChainManagerDelegate;

@interface IGNavigationChainManager : NSObject<NSObject> {
  /* instance variables */
  NSString *_currentTabName;
  NSMapTable *_tabbedNavigationChainMap;
  IGNavigationChainItem *_appearingChainItem;
  IGNavigationChainItem *_disappearingChainItem;
  NSMapTable *_viewToTabMap;
  int _sequence;
  FBGNVALClickEventData *_lastClickEventData;
  NSDate *_lastClickEventDate;
  BOOL _shouldAutoGenNavChainForNonConformedVC;
  NSMapTable *_legacyToV2ModuleMap;
  NSString *_previousChainTopModule;
  NSString *_currentChainTopModule;
  NSObject *_cacheAndMapLock;
  NavChainHolder *_navChainHolder;
  long long _characterLimit;
  BOOL _enableLastVisitTimestamp;
  BOOL _isProfileSessionLoggingEnabled;
  BOOL _enableRespondsToSelectorForAnalyticsModule;
  NSString *_navigationChain;
  NSString *_previousNavigationChain;
}

@property (readonly, weak, nonatomic) UIViewController *currentEndpointViewController;
@property (readonly, nonatomic) NSString *currentEndpoint;
@property (readonly, nonatomic) NSString *previousEndpoint;
@property (readonly, nonatomic) IGProfileSessionModel *currentProfileSessionModel;
@property (readonly, nonatomic) long long lastUpdateTimestampMs;
@property (weak, nonatomic) NSObject<IGNavigationChainManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)didSendALClickEvent:(id)event;
- (void)didSendNonALClickEvent:(id)event;
- (void)didSendNavigationEvent:(id)event;
- (void)didReportExtraTrackingNode:(id)node;
@end

#endif /* IGNavigationChainManager_h */
