//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBottomSheetInfoCell_h
#define FBPayBottomSheetInfoCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "FBPayBottomSheetInfoCellModel.h"
#include "FBPayCoreTextView.h"
#include "FBPayFullScreenLoadingView.h"
#include "NSObject-Protocol.h"

@class NSString, UILabel;
@protocol FBPayBottomSheetInfoCellDelegate;

@interface FBPayBottomSheetInfoCell : UITableViewCell<NSObject> {
  /* instance variables */
  FBPayBottomSheetInfoCellModel *_cellModel;
  UILabel *_headerLabel;
  UILabel *_subheaderLabel;
  UILabel *_descriptionLabel;
  FBPayCoreTextView *_descriptionTextView;
  FBPayFullScreenLoadingView *_fullScreenLoadingView;
}

@property (weak, nonatomic) NSObject<FBPayBottomSheetInfoCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)dismissLoadingState;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
@end

#endif /* FBPayBottomSheetInfoCell_h */
