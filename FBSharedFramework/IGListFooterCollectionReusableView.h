//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListFooterCollectionReusableView_h
#define IGListFooterCollectionReusableView_h
@import Foundation;

#include "UICollectionReusableView.h"
#include "IGListFooterView.h"

@class NSString;

@interface IGListFooterCollectionReusableView : UICollectionReusableView {
  /* instance variables */
  IGListFooterView *_footerView;
}

@property (retain, nonatomic) NSString *text;

/* class methods */
+ (double)heightWithText:(id)text contentWidth:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGListFooterCollectionReusableView_h */