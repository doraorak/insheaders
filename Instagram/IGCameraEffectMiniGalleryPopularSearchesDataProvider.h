//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraEffectMiniGalleryPopularSearchesDataProvider_h
#define IGCameraEffectMiniGalleryPopularSearchesDataProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGGraphQLService, IGUserSession, NSArray, NSString;
@protocol IGCameraEffectMiniGalleryPopularSearchesDataProviderAnnouncer;

@interface IGCameraEffectMiniGalleryPopularSearchesDataProvider : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGCameraEffectMiniGalleryPopularSearchesDataProviderAnnouncer> *_announcer;
  IGGraphQLService *_graphQLService;
  IGUserSession *_userSession;
  NSArray *_popularSearches;
}

@property (readonly, nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)fetch;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (id)parseGraphQLResponseWithResult:(id)result error:(id *)error;
@end

#endif /* IGCameraEffectMiniGalleryPopularSearchesDataProvider_h */