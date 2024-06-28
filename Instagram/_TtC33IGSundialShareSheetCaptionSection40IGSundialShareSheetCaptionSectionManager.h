//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGSundialShareSheetCaptionSection40IGSundialShareSheetCaptionSectionManager_h
#define _TtC33IGSundialShareSheetCaptionSection40IGSundialShareSheetCaptionSectionManager_h
@import Foundation;

#include "_TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging_-Protocol.h"

@class IGKeyboardObserver;

@interface _TtC33IGSundialShareSheetCaptionSection40IGSundialShareSheetCaptionSectionManager : NSObject<_TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging_> { // (Swift)
  /* instance variables */
   context;
}

@property (nonatomic, readonly) IGKeyboardObserver *keyboardObserver;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrame;
@property (nonatomic, readonly) long long cameraTool;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)registerCellsFor:(id)for;
- (id)collectionView:(id)view configureCell:(id)cell at:(id)at;
- (struct CGSize { double x0; double x1; })collectionView:(id)view sizeForItemAt:(id)at;
- (void)didSelectItemAt:(id)at;
- (void)setUpKeyboardObserver;
- (id)init;
@end

#endif /* _TtC33IGSundialShareSheetCaptionSection40IGSundialShareSheetCaptionSectionManager_h */