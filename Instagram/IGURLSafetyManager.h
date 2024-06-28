//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGURLSafetyManager_h
#define IGURLSafetyManager_h
@import Foundation;

#include "IGMsysBlackHoleManager.h"
#include "NSObject-Protocol.h"

@class IGLinkshimService, IGUserSessionProvider, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface IGURLSafetyManager : NSObject<NSObject> {
  /* instance variables */
  IGMsysBlackHoleManager *_msysManager;
  NSMutableArray *_completionList;
  IGUserSessionProvider *_userSessionProvider;
  BOOL _currentlyProcessing;
  NSLock *_cachedLinkshimURLsLock;
  NSMutableDictionary *_cachedLinkshimURLs;
  IGLinkshimService *_linkshimService;
  NSArray *_blackholeList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserScopedObjects:(id)objects;
- (void)_handleApplicationDidReceiveMemoryWarningNotification:(id)notification;
- (BOOL)_isLinkshimSafetyEnabledForSource:(unsigned long long)source;
- (id)_linkshimCacheForURL:(id)url;
- (void)updateChunkList:(id)list;
- (void)setLinkshimService_do_not_use_for_tests_only:(id)service_do_not_use_for_tests_only;
@end

#endif /* IGURLSafetyManager_h */
