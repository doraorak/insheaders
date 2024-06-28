//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPaginatedFeedFocusCoordinator_h
#define IGPaginatedFeedFocusCoordinator_h
@import Foundation;

#include "IGPaginatedFeedCollectionViewDelegateProxy.h"
#include "IGPaginatedFeedFocusCoordinatorDimmingConfiguration.h"
#include "IGPaginatedFeedFocusState.h"
#include "NSObject-Protocol.h"

@class NSString, UICollectionView;
@protocol IGPaginatedFeedFocusProvider, IGPaginatedFeedPageDefinition;

@interface IGPaginatedFeedFocusCoordinator : NSObject<NSObject> {
  /* instance variables */
  UICollectionView *_collectionView;
  NSObject<IGPaginatedFeedFocusProvider> *_focusProvider;
  NSObject<IGPaginatedFeedPageDefinition> *_pageDefinition;
  IGPaginatedFeedCollectionViewDelegateProxy *_collectionViewDelegateProxy;
  IGPaginatedFeedFocusState *_focusState;
  IGPaginatedFeedFocusCoordinatorDimmingConfiguration *_dimmingConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCollectionView:(id)view dimmingConfiguration:(id)configuration focusProvider:(id)provider pageDefinition:(id)definition;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
@end

#endif /* IGPaginatedFeedFocusCoordinator_h */