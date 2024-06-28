//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryHypePreviewView_h
#define IGStoryHypePreviewView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryCommentPreviewCellView.h"
#include "IGStoryCommentPreviewCellViewDelegate-Protocol.h"
#include "IGTooltipViewDelegate-Protocol.h"

@class IGStackView, IGTooltipView, IGUser, IGUserSession, NSMutableArray, NSString, UILabel, UITapGestureRecognizer;
@protocol IGStoryHypePreviewDelegate;

@interface IGStoryHypePreviewView : UIView<IGStoryCommentPreviewCellViewDelegate, IGTooltipViewDelegate> {
  /* instance variables */
  NSMutableArray *_commentCellViews;
  IGStackView *_verticalStack;
  NSMutableArray *_horizontalStackViews;
  UILabel *_hypeEducationLabel;
  UITapGestureRecognizer *_dismissTapGesture;
  IGStoryCommentPreviewCellView *_currentReportCandidate;
  IGUser *_currentProfileTapCandidate;
  IGUserSession *_userSession;
  IGTooltipView *_reportTooltip;
  IGTooltipView *_profileTooltip;
  UILabel *_limitedCommentsLabel;
}

@property (weak, nonatomic) NSObject<IGStoryHypePreviewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)layoutSubviews;
- (void)_didTapOnDismissView;
- (void)didTapTooltipView:(id)view;
- (void)storyCommentPreviewCellViewDidTap:(id)tap commentBubble:(id)bubble comment:(id)comment;
- (void)storyCommentPreviewCellViewDidDoubleTap:(id)tap comment:(id)comment;
- (void)storyCommentPreviewCellViewDidTapHeart:(id)heart comment:(id)comment;
@end

#endif /* IGStoryHypePreviewView_h */