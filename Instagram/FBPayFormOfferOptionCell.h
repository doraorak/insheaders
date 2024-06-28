//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFormOfferOptionCell_h
#define FBPayFormOfferOptionCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "FBPayEditOfferButton.h"
#include "FBPayFormOfferOptionCellViewModel.h"
#include "NSObject-Protocol.h"

@class NSString, UILabel;
@protocol FBPayFormOfferOptionCellDelegate;

@interface FBPayFormOfferOptionCell : UITableViewCell<NSObject> {
  /* instance variables */
  FBPayFormOfferOptionCellViewModel *_viewModel;
  UILabel *_offerTitleLabel;
  UILabel *_offerSubtitleLabel;
  UILabel *_offerExpirationDateLabel;
  FBPayEditOfferButton *_editOfferButtonView;
}

@property (weak, nonatomic) NSObject<FBPayFormOfferOptionCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (id)identifier;
- (id)title;
- (void)layoutSubviews;
- (void)didTapEditOfferButton:(id)button;
@end

#endif /* FBPayFormOfferOptionCell_h */
