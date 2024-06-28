//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMusicOnProfileSettingsTextSectionController_h
#define IGMusicOnProfileSettingsTextSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@class NSString, UIColor, UIFont, UILabel, UIView;

@interface IGMusicOnProfileSettingsTextSectionController : IGListSectionController {
  /* instance variables */
  UIView *_wrapperView;
  UILabel *_wrapperLabel;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;

/* instance methods */
- (id)init;
- (long long)numberOfItems;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
@end

#endif /* IGMusicOnProfileSettingsTextSectionController_h */
