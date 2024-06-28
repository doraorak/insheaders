//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGalleryHeaderFilterCell_h
#define IGGalleryHeaderFilterCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"
#include "IGGalleryHeaderFilterCellDelegate-Protocol.h"
#include "IGTapButton.h"

@interface IGGalleryHeaderFilterCell : IGBaseCollectionViewCell {
  /* instance variables */
  IGTapButton *_tapButton;
  long long _tabType;
}

@property (weak, nonatomic) NSObject<IGGalleryHeaderFilterCellDelegate> *delegate;

/* class methods */
+ (id)_createTapButtonWithTabType:(long long)type;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits tabType:(long long)type;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithTabType:(long long)type selected:(BOOL)selected;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_tappedButton;
@end

#endif /* IGGalleryHeaderFilterCell_h */
