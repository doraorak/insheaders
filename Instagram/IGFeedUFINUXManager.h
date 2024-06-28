//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedUFINUXManager_h
#define IGFeedUFINUXManager_h
@import Foundation;

#include "IGFeedItemUFICell.h"

@class IGMedia, IGUserSession, NSMutableArray, UICollectionView;

@interface IGFeedUFINUXManager : NSObject {
  /* instance variables */
  IGMedia *_latestVisibleMedia;
  NSMutableArray *_nuxes;
}

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) IGFeedItemUFICell *latestVisibleUFICell;

/* instance methods */
- (id)initWithCollectionView:(id)view userSession:(id)session;
@end

#endif /* IGFeedUFINUXManager_h */
