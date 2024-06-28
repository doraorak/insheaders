//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOAPollStickerView_h
#define FOAPollStickerView_h
@import Foundation;

#include "UIView.h"
#include "FOAPollStickerEditableVoteView.h"
#include "FOAPollStickerProvider.h"
#include "FOAStickerProvider.h"
#include "FOAStoryTextEntryTextView.h"
#include "FOAStoryTextEntryTextViewDelegate-Protocol.h"

@class NSString;
@protocol FOAPollStickerViewDismissDelegate, FOAPollStickerViewTitleTextViewDelegate;

@interface FOAPollStickerView : UIView<FOAStoryTextEntryTextViewDelegate> {
  /* instance variables */
  FOAStickerProvider *_provider;
}

@property (weak, nonatomic) NSObject<FOAPollStickerViewTitleTextViewDelegate> *titleDelegate;
@property (weak, nonatomic) NSObject<FOAPollStickerViewDismissDelegate> *dismissDelegate;
@property (readonly, nonatomic) FOAPollStickerProvider *pollStickerProvider;
@property (readonly, nonatomic) FOAStoryTextEntryTextView *textView;
@property (readonly, nonatomic) FOAPollStickerEditableVoteView *voteView;
@property (retain, nonatomic) id modelRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *currentQuestion;

/* instance methods */
- (id)initWithPollStickerProvider:(id)provider;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)configureWithModelProvider;
- (void)setTextInputEnabled:(BOOL)enabled;
- (void)setPlaceholderHidden:(BOOL)hidden;
- (BOOL)textEntryTextViewShouldBeginEditing:(id)editing;
- (void)textEntryTextViewDidEndEditing:(id)editing;
- (BOOL)textEntryTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textEntryTextViewDidChange:(id)change;
- (void)pollStickerVoteView:(id)view willBeginEditingTextView:(id)view;
- (void)pollStickerVoteViewDidRequestDismiss:(id)dismiss;
- (id)outlinePath;
- (id)loggingId;
- (id)stickerView;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
@end

#endif /* FOAPollStickerView_h */
