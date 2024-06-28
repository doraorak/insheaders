//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadViewControllerLoader_h
#define IGDirectThreadViewControllerLoader_h
@import Foundation;

#include "IGDirectThreadEntryAdsContext.h"
#include "IGDirectThreadLoggingContext.h"
#include "NSObject-Protocol.h"

@class IGDirectDjangoThreadSubscriptionService, IGDirectOutgoingMessagePrivateReplyPayload, IGDirectSearchContext, IGDirectThreadNavigationPerfComponents, IGDirectThreadService, IGDirectThreadViewControllerInitialParams, IGDirectThreadViewMessageIslandContext, IGMainAppControllerDirectThreadItem, IGUserSession, IGUserStore, NSString;
@protocol IGDirectThreadNavigationDelegate, IGDirectThreadViewControllerDelegate;

@interface IGDirectThreadViewControllerLoader : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMainAppControllerDirectThreadItem *_threadItem;
  IGDirectThreadService *_threadService;
  IGDirectDjangoThreadSubscriptionService *_djangoThreadSubscriptionService;
  IGUserStore *_userStore;
  NSString *_entryPoint;
  IGDirectThreadEntryAdsContext *_adsContext;
  IGDirectThreadNavigationPerfComponents *_threadNavigationPerfComponents;
  IGDirectOutgoingMessagePrivateReplyPayload *_privateReplyPayload;
  IGDirectThreadLoggingContext *_threadLoggingContext;
  IGDirectSearchContext *_searchContext;
  NSString *_messageIdToScrollTo;
  IGDirectThreadViewMessageIslandContext *_messageIslandContext;
  NSObject<IGDirectThreadViewControllerDelegate> *_directThreadViewControllerDelegate;
  NSObject<IGDirectThreadNavigationDelegate> *_directThreadNavigationDelegate;
  long long _initialThreadAppearance;
  IGDirectThreadViewControllerInitialParams *_initialParams;
  long long _threadLayoutType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session threadSubscriptionService:(id)service threadService:(id)service userStore:(id)store threadItem:(id)item entryPoint:(id)point adsContext:(id)context privateReplyPayload:(id)payload threadLoggingContext:(id)context searchContext:(id)context messageIdToScrollTo:(id)to delegate:(id)delegate navigationDelegate:(id)delegate messageIslandContext:(id)context initialThreadAppearance:(long long)appearance initialParams:(id)params;
- (id)analyticsModule;
- (void)loadViewControllerWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (long long)preferredTabBarBehavior;
- (id)title;
- (id)objectToLoad;
- (id)performanceListener;
- (void)loadingCancelled;
@end

#endif /* IGDirectThreadViewControllerLoader_h */
