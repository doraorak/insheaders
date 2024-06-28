//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC37IGSundialShareSheetDiffableDataSource47IGSundialShareSheetDiffableDataSourceController_h
#define _TtC37IGSundialShareSheetDiffableDataSource47IGSundialShareSheetDiffableDataSourceController_h
@import Foundation;

#include "UICollectionViewDataSource-Protocol.h"

@interface _TtC37IGSundialShareSheetDiffableDataSource47IGSundialShareSheetDiffableDataSourceController : NSObject { // (Swift)
  /* instance variables */
   legacyDataSource;
   collectionView;
   diffableDataSource;
   ordering;
}

@property (nonatomic, readonly) NSObject<UICollectionViewDataSource> *dataSource;

/* instance methods */
- (id)initWithCollectionView:(id)view legacyDataSource:(id)source ordering:(id)ordering;
- (id)init;
@end

#endif /* _TtC37IGSundialShareSheetDiffableDataSource47IGSundialShareSheetDiffableDataSourceController_h */
