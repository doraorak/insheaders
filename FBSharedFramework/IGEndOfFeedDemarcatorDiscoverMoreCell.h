//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEndOfFeedDemarcatorDiscoverMoreCell_h
#define IGEndOfFeedDemarcatorDiscoverMoreCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGEndOfFeedDemarcatorViewStandardLayoutConfig.h"
#include "IGImageView.h"
#include "NSObject-Protocol.h"

@class NSString, UILabel;
@protocol IGEndOfFeedDemarcatorCellDelegate;

@interface IGEndOfFeedDemarcatorDiscoverMoreCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  IGEndOfFeedDemarcatorViewStandardLayoutConfig *_layoutConfig;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGImageView *_iconView;
}

@property (weak, nonatomic) NSObject<IGEndOfFeedDemarcatorCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)heightForWidth:(double)width title:(id)title titleFont:(id)font subtitle:(id)subtitle subtitleFont:(id)font hasAction:(BOOL)action hasSecondaryAction:(BOOL)action expandedBottomMargin:(BOOL)margin layoutConfig:(id)config;
+ (double)minimumVisiblePercentageForImpressionForWidth:(double)width title:(id)title titleFont:(id)font subtitle:(id)subtitle subtitleFont:(id)font hasAction:(BOOL)action hasSecondaryAction:(BOOL)action expandedBottomMargin:(BOOL)margin layoutConfig:(id)config;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithViewConfig:(id)config;
- (void)animateCell;
- (BOOL)isAccessibilityElement;
@end

#endif /* IGEndOfFeedDemarcatorDiscoverMoreCell_h */
