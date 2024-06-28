//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentWarningIndicatorCell_h
#define IGContentWarningIndicatorCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCommentOffense.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGScopedListener-Protocol.h"

@class CAShapeLayer, IGCoreTextView, NSString, UIButton, UIProgressView;
@protocol IGContentWarningIndicatorCellDelegate;

@interface IGContentWarningIndicatorCell : UICollectionViewCell<IGCoreTextLinkHandler, IGScopedListener> {
  /* instance variables */
  IGCoreTextView *_warningCoreTextView;
  UIButton *_undoButton;
  UIProgressView *_progressView;
  IGCommentOffense *_offenseComment;
  CAShapeLayer *_topDividerShape;
  unsigned long long _layoutStyle;
  BOOL _translucentStyleEnabled;
}

@property (weak, nonatomic) NSObject<IGContentWarningIndicatorCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)_didTapUndoButton;
- (void)contentWarningProgressManagerDidUpdateToProgress:(double)progress;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* IGContentWarningIndicatorCell_h */
