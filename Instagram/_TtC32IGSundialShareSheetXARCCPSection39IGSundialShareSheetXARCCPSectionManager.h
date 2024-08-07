//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC32IGSundialShareSheetXARCCPSection39IGSundialShareSheetXARCCPSectionManager_h
#define _TtC32IGSundialShareSheetXARCCPSection39IGSundialShareSheetXARCCPSectionManager_h
@import Foundation;

#include "_TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging_-Protocol.h"
#include "_TtP32IGSundialShareSheetXARCCPSection47IGSundialShareSheetXARCCPSectionManagerDelegate_-Protocol.h"

@class FBXPostingValidationResult;

@interface _TtC32IGSundialShareSheetXARCCPSection39IGSundialShareSheetXARCCPSectionManager : NSObject<_TtP26IGSundialShareSheetContext34IGSundialShareSheetSectionManaging_> { // (Swift)
  /* instance variables */
   context;
   cellHeight;
}

@property (nonatomic, readonly) long long cameraTool;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) BOOL reelsXpostEnabledForCurrentReel;
@property (nonatomic) unsigned long long reelsXAREligibilityType;
@property (nonatomic, retain) FBXPostingValidationResult *xarEligibilityResults;
@property (nonatomic) unsigned long long reelsCCPEligibilityType;
@property (nonatomic, retain) FBXPostingValidationResult *ccpEligibilityResults;
@property (nonatomic, weak) NSObject<_TtP32IGSundialShareSheetXARCCPSection47IGSundialShareSheetXARCCPSectionManagerDelegate_> *delegate;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)registerCellsFor:(id)for;
- (id)collectionView:(id)view configureCell:(id)cell at:(id)at;
- (struct CGSize { double x0; double x1; })collectionView:(id)view sizeForItemAt:(id)at;
- (void)didSelectItemAt:(id)at;
- (void)configureCell:(id)cell;
- (id)init;
@end

#endif /* _TtC32IGSundialShareSheetXARCCPSection39IGSundialShareSheetXARCCPSectionManager_h */
