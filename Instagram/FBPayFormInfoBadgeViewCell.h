//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFormInfoBadgeViewCell_h
#define FBPayFormInfoBadgeViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "FBPayCoreTextView.h"
#include "NSObject-Protocol.h"

@class FBPayFormInfoBadgeCellViewModel, NSString, UILabel, UIView;
@protocol FBPayCoreTextViewDelegate;

@interface FBPayFormInfoBadgeViewCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  UIView *_iconView;
  UILabel *_titleLabel;
  FBPayCoreTextView *_legalInfoLabel;
  NSObject<FBPayCoreTextViewDelegate> *_textViewDelegate;
  FBPayFormInfoBadgeCellViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
@end

#endif /* FBPayFormInfoBadgeViewCell_h */
