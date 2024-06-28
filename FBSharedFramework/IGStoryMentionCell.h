//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMentionCell_h
#define IGStoryMentionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryMentionUserView.h"

@class NSString;

@interface IGStoryMentionCell : UICollectionViewCell {
  /* instance variables */
  IGStoryMentionUserView *_userView;
  NSString *_username;
  BOOL _userIsNotMentionable;
}

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithUser:(id)user module:(id)module userIsNotMentionable:(BOOL)mentionable;
- (void)configureWithImage:(id)image title:(id)title;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)selected;
- (void)setHighlighted:(BOOL)highlighted;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)_updateRingVisibility;
@end

#endif /* IGStoryMentionCell_h */
