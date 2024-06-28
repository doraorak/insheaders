//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGroupedTableViewWithJewelCell_h
#define IGGroupedTableViewWithJewelCell_h
@import Foundation;

#include "IGGroupedTableViewCell.h"
#include "IGUnreadBubbleView.h"
#include "IGUnreadBubbleViewConfig.h"
#include "IGUnseenIndicatorView.h"

@interface IGGroupedTableViewWithJewelCell : IGGroupedTableViewCell {
  /* instance variables */
  IGUnreadBubbleView *_largeUnreadBubbleView;
  IGUnseenIndicatorView *_unseenIndicatorView;
  long long _jewelCount;
  unsigned long long _jewelStyle;
  IGUnreadBubbleViewConfig *_jewelConfig;
  BOOL _showUnseenIndicator;
  BOOL _showCountLabel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setListRedesignOn:(BOOL)on;
@end

#endif /* IGGroupedTableViewWithJewelCell_h */
