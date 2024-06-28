//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksTooltipView_h
#define BKBloksTooltipView_h
@import Foundation;

#include "UIView.h"

@class UIColor;

@interface BKBloksTooltipView : UIView

@property (nonatomic) long long arrowType;
@property (nonatomic) unsigned long long tooltipPosition;
@property (nonatomic) unsigned long long arrowMetaData;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } arrowFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *tooltipBackgroundColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

/* instance methods */
- (id)init;
- (double)getRadians:(double)radians;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* BKBloksTooltipView_h */