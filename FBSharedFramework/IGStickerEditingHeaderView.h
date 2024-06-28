//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStickerEditingHeaderView_h
#define IGStickerEditingHeaderView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGStickerEditingHeaderViewDismissalDelegate-Protocol.h"
#include "IGStickerEditingHeaderViewLayoutSpec.h"
#include "IGStoryColorPaletteGradientWheel.h"
#include "IGStoryTextEmphasisToggleButton.h"
#include "IGTapButton.h"

@class NSMutableArray;
@protocol IGStickerEditingHeaderViewEditingDelegate;

@interface IGStickerEditingHeaderView : IGPassthroughView {
  /* instance variables */
  IGStickerEditingHeaderViewLayoutSpec *_layoutSpec;
  IGStoryColorPaletteGradientWheel *_colorWheel;
  IGTapButton *_textSelectorButton;
  IGTapButton *_textToolButton;
  IGTapButton *_tagUserButton;
  NSMutableArray *_currentlyVisibleMiddleButtonIndexes;
  NSObject<IGStickerEditingHeaderViewDismissalDelegate> *_dismissalDelegate;
  NSObject<IGStickerEditingHeaderViewEditingDelegate> *_editingDelegate;
}

@property (readonly, nonatomic) IGTapButton *doneButton;
@property (readonly, nonatomic) IGTapButton *cancelButton;
@property (readonly, nonatomic) IGStoryTextEmphasisToggleButton *textEmphasisToggleButton;

/* instance methods */
- (id)initWithHeaderSpec:(id)spec;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapDoneButton;
- (void)_didTapCancelButton;
- (void)_didTapColorWheel;
- (void)_didTapTextEmphasisToggleButton;
- (void)_didTapTextSelectorButton;
- (void)_didTapTextToolButton;
- (void)_didTapTagUserButton;
@end

#endif /* IGStickerEditingHeaderView_h */
