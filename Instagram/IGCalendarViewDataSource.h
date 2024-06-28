//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCalendarViewDataSource_h
#define IGCalendarViewDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGCalendarViewCellBinder, OS_dispatch_queue;

@interface IGCalendarViewDataSource : NSObject<IGListAdapterDataSource, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  NSMutableArray *_data;
  NSMutableDictionary *_datePositionMap;
  NSMutableDictionary *_dayContentLookupTable;
  NSMutableDictionary *_dateKeyFromDate;
  NSDateFormatter *_monthFormat;
  BOOL _calendarOptimizationsEnabled;
  NSObject<OS_dispatch_queue> *_queue;
  unsigned long long _type;
  NSObject<IGCalendarViewCellBinder> *_cellBinder;
  NSObject<UIScrollViewDelegate> *_scrollViewDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCalendarOptimizationsEnabled:(BOOL)enabled type:(unsigned long long)type;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidScrollToTop:(id)top;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGCalendarViewDataSource_h */
