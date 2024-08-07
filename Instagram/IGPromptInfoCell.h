//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromptInfoCell_h
#define IGPromptInfoCell_h
@import Foundation;

#include "IGCollectionViewCell.h"
#include "IGPromptInfoCellDelegate-Protocol.h"
#include "IGPromptInfoCellModel.h"
#include "IGPromptInfoDetailView.h"
#include "NSObject-Protocol.h"

@class IGBadgeNewView, IGDSSwitch, NSString, UILabel, UIView;

@interface IGPromptInfoCell : IGCollectionViewCell<NSObject> {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGDSSwitch *_switchControl;
  IGPromptInfoCellModel *_model;
  UIView *_leftAccessoryView;
  IGPromptInfoDetailView *_promptDetailView;
  IGBadgeNewView *_newBadgeView;
  long long _cellMode;
}

@property (weak, nonatomic) NSObject<IGPromptInfoCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithModel:(id)model;
- (void)_didTapSubtitleLabel:(id)label;
- (void)layoutSubviews;
- (void)didTapPromptInfoDetailViewWithPromptText:(id)text;
- (void)didTapPromptInfoDetailViewClearButton;
@end

#endif /* IGPromptInfoCell_h */
