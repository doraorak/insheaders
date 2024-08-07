//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBeforeAndAfterStickerView_h
#define IGBeforeAndAfterStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGBeforeAndAfterStickerView.h"
#include "IGBouncyButton.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGEditableStickerViewType-Protocol.h"
#include "IGMultiStickerDeletableType-Protocol.h"
#include "IGPromptlessPromptStickerView.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGTextView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSArray, NSString, UIImage, UIImageView, UIView;
@protocol IGBeforeAndAfterStickerViewDelegate;

@interface IGBeforeAndAfterStickerView : UIView<UITextViewDelegate, IGStickerViewType, IGEditableStickerViewType, IGConstrainedSizeStickerViewType, IGStoryStickerDeletable, IGMultiStickerDeletableType> {
  /* instance variables */
  NSString *_pk;
  UIView *_labelContainer;
  UIImageView *_mediaImageView;
  IGTextView *_textView;
  UIView *_mediaDarkeningView;
  IGBouncyButton *_plusButton;
  UIImageView *_plusIconImageView;
  BOOL _hasEditedText;
  long long _currentAspectRatio;
  BOOL _isTextEditable;
  IGBeforeAndAfterStickerView *_complementarySticker;
}

@property (weak, nonatomic) NSObject<IGBeforeAndAfterStickerViewDelegate> *delegate;
@property (readonly, nonatomic) long long position;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *text;
@property (weak, nonatomic) IGPromptlessPromptStickerView *promptSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly, nonatomic) unsigned long long editableStickerType;
@property (nonatomic) BOOL isNonDeletable;
@property (readonly, copy, nonatomic) NSArray *additionalStickersForDeletion;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initForCreationWithLabelText:(id)text position:(long long)position isTextEditable:(BOOL)editable;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)textViewDidChange:(id)change;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidEndEditing:(id)editing;
- (id)promptTextForPromptStickerView:(id)view;
- (id)storyTemplateCreationModelForPromptStickerView:(id)view;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (BOOL)isCurrentlyEditableAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (void)_didTapPlusButton;
@end

#endif /* IGBeforeAndAfterStickerView_h */
