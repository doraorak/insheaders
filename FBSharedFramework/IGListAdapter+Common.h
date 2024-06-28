//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListAdapter_Common_h
#define IGListAdapter_Common_h
@import Foundation;

@interface IGListAdapter (Common)
/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module viewController:(id)controller;
- (id)initWithUserSession:(id)session module:(id)module viewController:(id)controller workingRange:(unsigned long long)range;
- (id)initWithUserSession:(id)session module:(id)module viewController:(id)controller workingRange:(unsigned long long)range sectionMovesAsDeletesInserts:(BOOL)inserts;
- (id)visibleObjectsWithCellPassingTest:(id /* block */)test;
- (void)deselectAllItemsAnimated:(BOOL)animated;
@end

#endif /* IGListAdapter_Common_h */
