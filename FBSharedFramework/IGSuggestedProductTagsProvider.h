//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedProductTagsProvider_h
#define IGSuggestedProductTagsProvider_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGRequestPolicy.h"
#include "IGSuggestedProductTagsPerformanceLogger.h"
#include "IGSuggestedProductTagsProviderConfiguration.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol IGSuggestedProductTagsProviderDelegate;

@interface IGSuggestedProductTagsProvider : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGRequestPolicy *_requestPolicy;
  NSString *_surface;
  BOOL _shouldFetch;
  BOOL _shouldIgnoreCache;
  double _uploadListenerStartTime;
  NSString *_waterfallId;
  IGSuggestedProductTagsProviderConfiguration *_providerConfiguration;
  IGSuggestedProductTagsPerformanceLogger *_suggestedTagsApiPerformanceLogger;
}

@property (readonly, nonatomic) NSArray *uploadIds;
@property (weak, nonatomic) NSObject<IGSuggestedProductTagsProviderDelegate> *delegate;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSDictionary *loggingParams;
@property (readonly, nonatomic) NSString *requestStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session launcherSetProvider:(id)provider providerConfiguration:(id)configuration surface:(id)surface waterfallId:(id)id;
- (void)uploadListenerDidReceiveUploadFinishNotifications:(id)notifications;
@end

#endif /* IGSuggestedProductTagsProvider_h */
