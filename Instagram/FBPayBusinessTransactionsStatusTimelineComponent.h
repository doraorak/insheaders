//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessTransactionsStatusTimelineComponent_h
#define FBPayBusinessTransactionsStatusTimelineComponent_h
@import Foundation;

#include "UIView.h"
#include "FBPayBusinessViewConfiguring-Protocol.h"

@class NSArray, NSMutableArray, UIStackView;
@protocol FBPayCoreTextViewDelegate;

@interface FBPayBusinessTransactionsStatusTimelineComponent : UIView {
  /* instance variables */
  NSMutableArray *_constraints;
  UIStackView *_containerStackView;
  NSObject<FBPayBusinessViewConfiguring> *_viewConfig;
  NSArray *_timelineModels;
  NSMutableArray *_accessibilityElements;
  NSMutableArray *_textViews;
  NSMutableArray *_textViewHeightConstraints;
}

@property (weak, nonatomic) NSObject<FBPayCoreTextViewDelegate> *textViewDelegate;

/* instance methods */
- (id)initWithViewConfig:(id)config statusModel:(id)model;
- (void)layoutSubviews;
- (void)_setupContainerStackView;
- (void)_setupRowStackViewAtIndex:(long long)index;
- (void)_setupLeftStackViewAtIndex:(long long)index inStackView:(id)view;
- (void)_setupRightStackViewAtIndex:(long long)index inStackView:(id)view;
- (void)_setupStatusTitleAtIndex:(long long)index inStackView:(id)view;
- (void)_setupStatusDateAtIndex:(long long)index inStackView:(id)view;
- (void)_setupStatusDescriptionAtIndex:(long long)index inStackView:(id)view;
- (void)_setupIconWithIconStyle:(long long)style inStackView:(id)view;
- (id)_mapToColor:(long long)color;
- (void)_setupIconConnectorWithIconStyle:(long long)style inStackView:(id)view;
- (void)tapOnUrlAtRow:(id)row;
- (id)accessibilityElements;
@end

#endif /* FBPayBusinessTransactionsStatusTimelineComponent_h */
