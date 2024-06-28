//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingHeaderSectionController_h
#define IGShoppingHeaderSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGShoppingHeaderViewModel.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGShoppingHeaderSectionControllerDelegate;

@interface IGShoppingHeaderSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGShoppingHeaderViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGShoppingHeaderSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)placeholderSpecForObject:(id)object withContext:(id)context;
+ (id)defaultPlaceholderSpecWithContext:(id)context;

/* instance methods */
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)shoppingHeaderCellDidTapActionButton:(id)button;
- (void)shoppingHeaderCellDidTapSubtitleText:(id)text;
@end

#endif /* IGShoppingHeaderSectionController_h */
