//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserListSelectableCollectionCell_h
#define IGUserListSelectableCollectionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGTableLayoutSpec.h"
#include "IGUser.h"
#include "IGUserListSelectableCellType-Protocol.h"
#include "_TtC22IGUserContentViewSwift17IGUserContentView.h"
#include "_TtP22IGUserContentViewSwift25IGUserContentViewDelegate_-Protocol.h"

@class NSString, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UIView;
@protocol IGUserListSelectableCollectionCellDelegate;

@interface IGUserListSelectableCollectionCell : UICollectionViewCell<_TtP22IGUserContentViewSwift25IGUserContentViewDelegate_, IGUserListSelectableCellType> {
  /* instance variables */
  UIActivityIndicatorView *_spinnerView;
  BOOL _isPrismEnabled;
  BOOL _useDisabledCheckboxTint;
  BOOL _checkmarkHidden;
  BOOL _userSelected;
  _TtC22IGUserContentViewSwift17IGUserContentView *_userContentView;
  UIImageView *_checkmarkImageView;
  UIImage *_selectedCheckBox;
  UIImage *_emptyCheckBox;
  UIView *_bottomSeparatorLineView;
  UIColor *_checkmarkColor;
}

@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) IGTableLayoutSpec *tableInterface;
@property (readonly, nonatomic) BOOL showBottomSeparator;
@property (weak, nonatomic) NSObject<IGUserListSelectableCollectionCellDelegate> *delegate;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureCellWithUser:(id)user displayNameType:(long long)type module:(id)module;
- (void)configureCellWithUser:(id)user displayNameType:(long long)type showBottomSeparator:(BOOL)separator module:(id)module useDisplayNameAsSubtitle:(BOOL)subtitle showSocialContext:(BOOL)context useDisabledCheckboxTint:(BOOL)tint followController:(id)controller;
- (void)setUserSelected:(BOOL)selected;
- (void)prepareForReuse;
- (void)userContentView:(id)view didTapStoryViewerEntryView:(id)view;
- (void)layoutSubviews;
@end

#endif /* IGUserListSelectableCollectionCell_h */
