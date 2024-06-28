//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveToCollectionsIntentTarget_h
#define IGSaveToCollectionsIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGSaveToCollectionsFeedDelegate-Protocol.h"

@class IGSavedMediaCollection, IGSessionTracker, IGSponsoredSupportConfiguration, IGViewController, NSArray, NSDictionary, NSString;

@interface IGSaveToCollectionsIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSArray *medias;
@property (readonly, nonatomic) NSObject<IGSaveToCollectionsFeedDelegate> *feedDelegate;
@property (readonly, nonatomic) IGViewController *parentVC;
@property (readonly, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate> *loggingProvider;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly, nonatomic) long long tapType;
@property (readonly, nonatomic) long long currentMediaIndex;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly, nonatomic) IGSavedMediaCollection *collectionToBeMovedFrom;
@property (readonly, nonatomic) BOOL containsMultipleItems;
@property (readonly, nonatomic) NSDictionary *loggingExtras;
@property (readonly, nonatomic) BOOL disableAutoNewCollectionVCAfterLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedias:(id)medias feedDelegate:(id)delegate parentVC:(id)vc loggingProvider:(id)provider sponsoredSupportConfiguration:(id)configuration tapType:(long long)type currentMediaIndex:(long long)index shoppingSessionTracker:(id)tracker collectionToBeMovedFrom:(id)from containsMultipleItems:(BOOL)items loggingExtras:(id)extras disableAutoNewCollectionVCAfterLoading:(BOOL)loading;
@end

#endif /* IGSaveToCollectionsIntentTarget_h */