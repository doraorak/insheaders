//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging__Protocol_h
#define _TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging__Protocol_h
@import Foundation;

@protocol _TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging_ 

@property (nonatomic, readonly) long long cameraTool;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)registerCellsFor:(id)for;
- (id)collectionView:(id)view configureCell:(id)cell at:(id)at;
- (struct CGSize { double x0; double x1; })collectionView:(id)view sizeForItemAt:(id)at;
- (void)didSelectItemAt:(id)at;
@end

#endif /* _TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging__Protocol_h */