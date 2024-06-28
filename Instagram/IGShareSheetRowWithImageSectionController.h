//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareSheetRowWithImageSectionController_h
#define IGShareSheetRowWithImageSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@class NSString, UIImage;
@protocol IGShareSheetRowWithImageSectionControllerDelegate;

@interface IGShareSheetRowWithImageSectionController : IGListSectionController {
  /* instance variables */
  long long _subtitleToLeftAccessoryImagePadding;
  UIImage *_leftAccessoryImage;
}

@property (weak, nonatomic) NSObject<IGShareSheetRowWithImageSectionControllerDelegate> *delegate;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *subtitleAccessibilityHint;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) BOOL disabledAndGrey;
@property (nonatomic) BOOL showSeparator;
@property (retain, nonatomic) UIImage *rightAccessoryImage;

/* instance methods */
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGShareSheetRowWithImageSectionController_h */
