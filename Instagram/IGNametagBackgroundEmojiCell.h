//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNametagBackgroundEmojiCell_h
#define IGNametagBackgroundEmojiCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGEmojiPickerTrayViewControllerDelegate-Protocol.h"
#include "IGNametagBackgroundModeConfiguration.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class IGUserSession, NSString, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController;
@protocol IGNametagBackgroundCellDelegate;

@interface IGNametagBackgroundEmojiCell : UICollectionViewCell<IGEmojiPickerTrayViewControllerDelegate, IGPartialModalSheetListener> {
  /* instance variables */
  UITapGestureRecognizer *_tapGesture;
  IGNametagBackgroundModeConfiguration *_configuration;
  UIView *_canvasView;
  IGUserSession *_userSession;
  UIViewController *_presentViewController;
  NSObject<IGNametagBackgroundCellDelegate> *_delegate;
  BOOL _isPresentingStickerTray;
  UISwipeGestureRecognizer *_swipeGesture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didTapBackground;
- (void)_didSwipeUp;
- (void)emojiPickerTrayViewController:(id)controller didSelectEmoji:(id)emoji fromEmojiView:(id)view fromSearch:(BOOL)search;
- (void)emojiPickerTrayViewControllerDidTapSearchCancel:(id)cancel;
- (void)emojiPickerTrayViewController:(id)controller didTapDoneForEmotionModerationWithSelectedEmojis:(id)emojis;
- (BOOL)emojiPickerTrayViewController:(id)controller shouldFilterOutEmoji:(id)emoji;
- (void)emojiPickerTrayViewController:(id)controller didTapActionButtonForType:(unsigned long long)type actionButton:(id)button;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
@end

#endif /* IGNametagBackgroundEmojiCell_h */
