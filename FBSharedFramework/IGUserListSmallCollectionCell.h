//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserListSmallCollectionCell_h
#define IGUserListSmallCollectionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGTableLayoutSpec.h"
#include "IGUser.h"
#include "IGUserListSelectableCellType-Protocol.h"
#include "_TtC22IGUserContentViewSwift17IGUserContentView.h"

@class NSString, UIImage, UIImageView, UIView;

@interface IGUserListSmallCollectionCell : UICollectionViewCell<IGUserListSelectableCellType> {
  /* instance variables */
  IGUser *_user;
  _TtC22IGUserContentViewSwift17IGUserContentView *_userContentView;
  UIImageView *_checkmarkImageView;
  UIImage *_checkmarkImage;
  UIView *_bottomSeparatorLineView;
  BOOL _userSelected;
  IGTableLayoutSpec *_tableInterface;
  double _userContentIndentation;
  BOOL _shouldGreyOutContentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureCellWithUser:(id)user displayNameType:(long long)type module:(id)module;
- (void)setUserSelected:(BOOL)selected;
@end

#endif /* IGUserListSmallCollectionCell_h */
