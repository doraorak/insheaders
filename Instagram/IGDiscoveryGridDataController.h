//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryGridDataController_h
#define IGDiscoveryGridDataController_h
@import Foundation;

#include "IGDiscoveryGridDataListener-Protocol.h"
#include "IGDiscoveryGridNetworker.h"
#include "NSObject-Protocol.h"

@class IGDiscoveryGridDataStore, IGDiscoveryGridDataValidationBehavior, IGUserSession, NSString;
@protocol IGDiscoveryGridDataAnnouncer;

@interface IGDiscoveryGridDataController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDiscoveryGridDataValidationBehavior *_validationBehavior;
  NSObject<IGDiscoveryGridDataListener> *_listener;
  NSObject<IGDiscoveryGridDataAnnouncer> *_announcer;
  IGDiscoveryGridNetworker *_networker;
}

@property (readonly, nonatomic) BOOL fetching;
@property (readonly, nonatomic) IGDiscoveryGridDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session validationBehavior:(id)behavior networkContextProvider:(id)provider listener:(id)listener dataStore:(id)store;
- (BOOL)requestData;
- (void)fetchMediaMetadata:(id)metadata;
- (BOOL)isFetching;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)discoveryGridNetworker:(id)networker didCompleteGridRequestWithResponse:(id)response;
- (void)discoveryGridNetworker:(id)networker didFailGridRequestWithError:(id)error;
@end

#endif /* IGDiscoveryGridDataController_h */
