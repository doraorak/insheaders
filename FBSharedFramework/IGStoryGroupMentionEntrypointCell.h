//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryGroupMentionEntrypointCell_h
#define IGStoryGroupMentionEntrypointCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryFacepileView.h"

@class UILabel, UIView;

@interface IGStoryGroupMentionEntrypointCell : UICollectionViewCell {
  /* instance variables */
  UIView *_pillContainerView;
  IGStoryFacepileView *_facepileView;
  UILabel *_titleLabel;
}

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setUpEntrypointPill;
- (void)_setUpTitleLabel;
- (void)_setupFacepileViewWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
@end

#endif /* IGStoryGroupMentionEntrypointCell_h */
