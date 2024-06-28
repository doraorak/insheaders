//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmojiSelectionView_h
#define IGEmojiSelectionView_h
@import Foundation;

#include "UIView.h"
#include "IGEmojiSelectionViewModel.h"
#include "IGEmojiSkinTonePickerController.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString, UILabel, UIView;
@protocol IGEmojiSelectionViewDelegate;

@interface IGEmojiSelectionView : UIView<NSObject> {
  /* instance variables */
  NSArray *_emojiViews;
  IGEmojiSkinTonePickerController *_skinTonePickerController;
  long long _selectedSkinToneEmojiIndex;
  UIView *_containerView;
  UILabel *_titleLabel;
  IGEmojiSelectionViewModel *_viewModel;
  BOOL _enableEmojiGNVLogging;
}

@property (weak, nonatomic) NSObject<IGEmojiSelectionViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)emojiButton:(id)button didTapWithEmojiModel:(id)model;
- (void)emojiButton:(id)button didLongPressWithGestureRecognizer:(id)recognizer emojiModel:(id)model;
- (void)emojiSkinTonePickerController:(id)controller didSelectEmoji:(id)emoji emojiView:(id)view;
- (void)emojiSkinTonePickerControllerDidDismiss:(id)dismiss;
- (void)emojiSkinTonePickerControllerDidPresent:(id)present;
- (void)emojiSkinTonePickerControllerDismissViewTapped:(id)tapped;
@end

#endif /* IGEmojiSelectionView_h */