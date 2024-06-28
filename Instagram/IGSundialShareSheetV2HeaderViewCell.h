//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialShareSheetV2HeaderViewCell_h
#define IGSundialShareSheetV2HeaderViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGSundialShareSheetV2CoverPhotoView.h"
#include "IGSundialShareSheetV2HeaderViewCellDelegate-Protocol.h"
#include "UITextPasteDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString;

@interface IGSundialShareSheetV2HeaderViewCell : UICollectionViewCell<UITextPasteDelegate, UITextViewDelegate>

@property (weak, nonatomic) NSObject<IGSundialShareSheetV2HeaderViewCellDelegate> *delegate;
@property (readonly, nonatomic) IGSundialShareSheetV2CoverPhotoView *coverPhotoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)sundialShareSheetV2CoverPhotoViewDidTapEditCoverButton:(id)button;
- (void)sundialShareSheetV2CoverPhotoViewDidTapPreviewButton:(id)button;
@end

#endif /* IGSundialShareSheetV2HeaderViewCell_h */