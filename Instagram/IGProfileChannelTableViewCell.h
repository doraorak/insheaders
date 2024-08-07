//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileChannelTableViewCell_h
#define IGProfileChannelTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"

@class IGImageTitleSubtitleView;

@interface IGProfileChannelTableViewCell : UITableViewCell {
  /* instance variables */
  IGImageTitleSubtitleView *_coreView;
}

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)configureWithViewModel:(id)model;
- (void)layoutSubviews;
@end

#endif /* IGProfileChannelTableViewCell_h */
