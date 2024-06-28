//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayAddShopPayHeaderCell_h
#define FBPayAddShopPayHeaderCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "FBPayAddShopPayHeaderCellViewModel.h"
#include "FBPayCoreTextView.h"
#include "NSObject-Protocol.h"

@class NSString, UILabel;
@protocol FBPayAddShopPayHeaderCellDelegate;

@interface FBPayAddShopPayHeaderCell : UITableViewCell<NSObject> {
  /* instance variables */
  FBPayAddShopPayHeaderCellViewModel *_viewModel;
  UILabel *_headerLabel;
  FBPayCoreTextView *_summaryTextView;
}

@property (weak, nonatomic) NSObject<FBPayAddShopPayHeaderCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
@end

#endif /* FBPayAddShopPayHeaderCell_h */
