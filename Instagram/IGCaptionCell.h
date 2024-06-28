//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCaptionCell_h
#define IGCaptionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGAutocompleteControllerTextInput-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class IGGradientView, IGProfilePictureImageView, IGSimpleFrameButton, IGTableLayoutSpec, IGTapButton, NSString, UIImageView, UILabel, UITextInputPasswordRules, UITextView, UIView;
@protocol IGCaptionCellDelegate;

@interface IGCaptionCell : UICollectionViewCell<UITextViewDelegate, IGAutocompleteControllerTextInput> {
  /* instance variables */
  BOOL _shouldShowPlaceholderText;
  NSString *_placeholderText;
  BOOL _shouldShowProfileInCaption;
  IGProfilePictureImageView *_profilePictureImageView;
  IGSimpleFrameButton *_photoFrameView;
  UILabel *_addOnIndicator;
  IGGradientView *_topGradientView;
  IGGradientView *_bottomGradientView;
}

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIView *bottomLine;
@property (readonly, nonatomic) IGTapButton *editButton;
@property (readonly, nonatomic) IGTableLayoutSpec *tableInterface;
@property (nonatomic) double offsetY;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) NSString *text;
@property (weak, nonatomic) NSObject<IGCaptionCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@optional
@property (nonatomic) long long autocapitalizationType;
@optional
@property (nonatomic) long long autocorrectionType;
@optional
@property (nonatomic) long long spellCheckingType;
@optional
@property (nonatomic) long long smartQuotesType;
@optional
@property (nonatomic) long long smartDashesType;
@optional
@property (nonatomic) long long smartInsertDeleteType;
@optional
@property (nonatomic) long long inlinePredictionType;
@optional
@property (nonatomic) long long keyboardType;
@optional
@property (nonatomic) long long keyboardAppearance;
@optional
@property (nonatomic) long long returnKeyType;
@optional
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@optional
@property (nonatomic) BOOL secureTextEntry;
@optional
@property (copy, nonatomic) NSString *textContentType;
@optional
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

/* class methods */
+ (double)captionPhotoWidth;

/* instance methods */
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldShowProfile:(BOOL)profile shouldShowPlaceholderText:(BOOL)text;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)selectAll;
- (void)_onMediaTap;
- (void)_didTapEdit;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (BOOL)textViewShouldEndEditing:(id)editing;
- (void)textViewDidBeginEditing:(id)editing;
- (BOOL)textViewShouldBeginEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (void)textViewDidEndEditing:(id)editing;
- (void)layoutSubviews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)beginningOfDocument;
- (id)positionFromPosition:(id)position offset:(long long)offset;
- (id)textRangeFromPosition:(id)position toPosition:(id)position;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setSelectedTextRange:(id)range;
- (long long)offsetFromPosition:(id)position toPosition:(id)position;
- (id)inputTextView;
@end

#endif /* IGCaptionCell_h */