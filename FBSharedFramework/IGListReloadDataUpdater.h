//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListReloadDataUpdater_h
#define IGListReloadDataUpdater_h
@import Foundation;

#include "IGListUpdatingDelegate-Protocol.h"

@class NSString;

@interface IGListReloadDataUpdater : NSObject<IGListUpdatingDelegate> {
  /* instance variables */
  BOOL _isInDataUpdateBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionViewBlock:(id /* block */)block animated:(BOOL)animated sectionDataBlock:(id /* block */)block applySectionDataBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)performUpdateWithCollectionViewBlock:(id /* block */)block animated:(BOOL)animated itemUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (void)performDataSourceChange:(id /* block */)change;
- (void)reloadDataWithCollectionViewBlock:(id /* block */)block reloadUpdateBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)insertItemsIntoCollectionView:(id)view indexPaths:(id)paths;
- (void)deleteItemsFromCollectionView:(id)view indexPaths:(id)paths;
- (void)moveItemInCollectionView:(id)view fromIndexPath:(id)path toIndexPath:(id)path;
- (void)reloadItemInCollectionView:(id)view fromIndexPath:(id)path toIndexPath:(id)path;
- (void)moveSectionInCollectionView:(id)view fromIndex:(long long)index toIndex:(long long)index;
- (void)reloadCollectionView:(id)view sections:(id)sections;
- (void)_synchronousReloadDataWithCollectionView:(id)view;
- (BOOL)isInDataUpdateBlock;
@end

#endif /* IGListReloadDataUpdater_h */