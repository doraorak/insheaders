//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBadgesSupporterThankYouStickerView_h
#define IGBadgesSupporterThankYouStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGBadgesSupporterThankYouStickerModel.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGEditableStickerViewType-Protocol.h"
#include "IGImageView.h"
#include "IGSpecialBurnedInContentStickerViewType-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGTextView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UIView;
@protocol IGBadgesSupporterThankYouStickerViewDelegate;

@interface IGBadgesSupporterThankYouStickerView : UIView<UITextViewDelegate, IGStickerViewType, IGEditableStickerViewType, IGSpecialBurnedInContentStickerViewType, IGConstrainedZPositionStickerViewType> {
  /* instance variables */
  UIView *_profilePictureBorderView;
  IGImageView *_profilePictureImageView;
  IGImageView *_badgeIconImageView;
  IGTextView *_textView;
  UIView *_containerView;
  UILabel *_hintLabel;
}

@property (weak, nonatomic) NSObject<IGBadgesSupporterThankYouStickerViewDelegate> *delegate;
@property (readonly, nonatomic) IGBadgesSupporterThankYouStickerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly, nonatomic) unsigned long long editableStickerType;
@property (readonly, nonatomic) long long zIndexConstraint;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textViewDidChange:(id)change;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidEndEditing:(id)editing;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)isDraftSupported;
- (BOOL)isCurrentlyEditableAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (void)updateContentForBurnIn:(BOOL)in;
- (void)restoreContentFromBurnIn;
@end

#endif /* IGBadgesSupporterThankYouStickerView_h */