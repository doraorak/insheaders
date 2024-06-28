//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSSegmentedPillBarView_h
#define IGDSSegmentedPillBarView_h
@import Foundation;

#include "UIView.h"
#include "IGDSSegmentedPillBarScrollView.h"
#include "IGDSSegmentedPillBarShimmerView.h"
#include "IGDSSegmentedPillBarViewDelegate-Protocol.h"
#include "IGDSSegmentedPillControlVisualStyle.h"
#include "IGStackLayout.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString, UIFont;
@protocol IGDSSegmentedPillBarViewImpressionDelegate;

@interface IGDSSegmentedPillBarView : UIView<NSObject> {
  /* instance variables */
  IGStackLayout *_stackLayout;
  IGDSSegmentedPillBarScrollView *_scrollView;
  IGDSSegmentedPillBarShimmerView *_loadingView;
  BOOL _adjustVisiblePillsWidthForLastPillPeaking;
  NSObject<IGDSSegmentedPillBarViewImpressionDelegate> *_impressionDelegate;
  IGDSSegmentedPillControlVisualStyle *_pillsVisualStyle;
  NSArray *_pillStyles;
}

@property (retain, nonatomic) NSArray *pills;
@property (nonatomic) BOOL loading;
@property (weak, nonatomic) NSObject<IGDSSegmentedPillBarViewDelegate> *delegate;
@property (nonatomic) long long selectionMode;
@property (nonatomic) BOOL expandPillsToFillWidth;
@property (nonatomic) BOOL disableScrollPillToBarLeftEdge;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double maxPreferredContentSizeWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isLoading;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)setScrollEnabled:(BOOL)enabled;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)_didTapPill:(id)pill;
- (void)_handleLongPress:(id)press;
- (void)willDeselectPill:(id)pill;
- (void)didDeselectPill:(id)pill;
- (void)willSelectPill:(id)pill;
- (void)didSelectPill:(id)pill;
- (void)setPercentCollapsed:(double)collapsed preservingHeight:(BOOL)height;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits expanded:(BOOL)expanded;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)scrollView;
- (id)accessibilityElements;
@end

#endif /* IGDSSegmentedPillBarView_h */