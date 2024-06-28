//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraEffectFeedNetworkDataProvider_h
#define IGCameraEffectFeedNetworkDataProvider_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGNetworkParser-Protocol.h"
#include "NSObject-Protocol.h"

@class IGCameraEffectGroupPreview, IGUserSession, NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol IGCameraEffectFeedDataSourceAnnouncer;

@interface IGCameraEffectFeedNetworkDataProvider : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGCameraEffectFeedDataSourceAnnouncer> *_announcer;
  IGUserSession *_userSession;
  NSString *_endpoint;
  unsigned long long _method;
  long long _instanceKey;
  NSString *_categoryIdentifier;
  NSString *_targetUserID;
  long long _productSurface;
  NSString *_pageCursor;
  double _cacheExpirationTime;
  NSObject<IGAPIClient> *_networker;
  NSObject<IGNetworkParser> *_parser;
}

@property (nonatomic) BOOL hasMoreAvailablePages;
@property (nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSString *loadingTitle;
@property (readonly, nonatomic) BOOL hidesResultsWhileLoading;
@property (readonly, nonatomic) BOOL hasNoResults;
@property (readonly, nonatomic) NSString *noResultsTitle;
@property (readonly, nonatomic) BOOL isShimmeringEnabled;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSArray *creators;
@property (readonly, nonatomic) IGCameraEffectGroupPreview *groupPreview;
@property (readonly, nonatomic) NSOrderedSet *sortedPreviewIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *sortedVOPreviewIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *sortedEffectAndVOPreviewIdentifiers;
@property (readonly, nonatomic) NSDictionary *unsortedPreviews;
@property (readonly, nonatomic) NSDictionary *unsortedVOPreviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session endpoint:(id)endpoint method:(unsigned long long)method parser:(id)parser cacheExpirationTime:(double)time loggingCategoryIdentifier:(id)identifier loggingTargetUserID:(id)id loggingProductSurface:(long long)surface;
- (void)dealloc;
- (void)fetch;
- (void)fetchMore;
- (void)prefetch;
- (id)paramsForPageCursor:(id)cursor;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGCameraEffectFeedNetworkDataProvider_h */
