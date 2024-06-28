//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualAdsPivotBrowseCardSectionController_h
#define IGContextualAdsPivotBrowseCardSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGContextualAdPivotViewModel.h"
#include "IGListDisplayDelegate-Protocol.h"

@class IGUserSession, NSArray, NSString;
@protocol IGContextualAdsPivotPivotBrowseCardSectionControllerDelegate;

@interface IGContextualAdsPivotBrowseCardSectionController : IGListSectionController<IGListDisplayDelegate> {
  /* instance variables */
  NSString *_analyticsModule;
  NSArray *_adItems;
  IGUserSession *_userSession;
  IGContextualAdPivotViewModel *_contextualAdPivotModel;
  long long _adItemIndex;
  NSObject<IGContextualAdsPivotPivotBrowseCardSectionControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate contextualAdPivotModel:(id)model adItemIndex:(long long)index analyticsModule:(id)module;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (id)displayDelegate;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGContextualAdsPivotBrowseCardSectionController_h */
