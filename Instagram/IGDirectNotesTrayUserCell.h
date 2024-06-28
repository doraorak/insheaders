//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesTrayUserCell_h
#define IGDirectNotesTrayUserCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectNotesInteractionDelegate-Protocol.h"
#include "IGDirectNotesTrayUserCellDelegate-Protocol.h"
#include "IGDirectNotesTrayUserViewModel.h"
#include "IGDirectNotesUserCellView.h"
#include "IGHeartAnimator.h"

@class IGStackView, IGStoryFacepileView, IGTooltipView, IGUnseenIndicatorView, IGUserSession, UIImageView, UILabel;

@interface IGDirectNotesTrayUserCell : UICollectionViewCell<IGDirectNotesInteractionDelegate> {
  /* instance variables */
  IGDirectNotesTrayUserViewModel *_viewModel;
  long long _cellType;
  BOOL _isReactableNote;
  BOOL _activeNowOnlyTray;
  NSObject<IGDirectNotesTrayUserCellDelegate> *_delegate;
  IGUserSession *_userSession;
  UILabel *_nameLabel;
  IGStackView *_nameHorizontalStackView;
  IGStackView *_facepileHorizontalStackView;
  IGStoryFacepileView *_facepileView;
  IGDirectNotesUserCellView *_userNoteView;
  IGUnseenIndicatorView *_unseenPromptResponseIndicator;
  BOOL _useLargeTextContent;
  IGTooltipView *_tapToReplyTooltipView;
  IGHeartAnimator *_heartAnimator;
  UIImageView *_heartIconView;
  BOOL _isSelfPogCell;
}

@property (readonly, nonatomic) BOOL isSelfPogWithUnseenLike;
@property (readonly, nonatomic) BOOL hasReaction;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_configureWithViewModel:(id)model userSession:(id)session motionTranslator:(id)translator delegate:(id)delegate;
- (void)layoutSubviews;
- (long long)consumptionEntryPoint;
- (void)prepareForReuse;
- (id)avatarView;
- (void)didTapNote;
- (void)didDoubleTapNote;
- (void)didLongPressNote;
- (void)didTapHeartIconWithIsSelected:(BOOL)selected;
- (void)didTapBirthdayDot;
- (unsigned long long)accessibilityTraits;
- (void)_showTapToReplyTooltipIfNeeded:(id)needed topCenterPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)_shouldShowTapToReplyTooltip;
- (void)_updateTapToReplyTooltipData;
@end

#endif /* IGDirectNotesTrayUserCell_h */