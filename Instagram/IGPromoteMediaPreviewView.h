//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteMediaPreviewView_h
#define IGPromoteMediaPreviewView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface IGPromoteMediaPreviewView : UIView

@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UIView *mediaView;

/* instance methods */
- (id)initWithMedia:(id)media mediaView:(id)view width:(double)width;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGPromoteMediaPreviewView_h */
