//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenOwnerFooterView_h
#define IGStoryFullscreenOwnerFooterView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryViewerFacepileViewersButton.h"

@class IGStoryViewerLabeledFooterButton, IGUserSession;
@protocol IGStoryFullscreenOwnerFooterViewDelegate><IGStoryMediaControlling;

@interface IGStoryFullscreenOwnerFooterView : UIView {
  /* instance variables */
  IGStoryViewerLabeledFooterButton *_archiveReshareButton;
  IGStoryViewerLabeledFooterButton *_directButton;
  IGUserSession *_userSession;
  BOOL _footerHDREnabled;
  IGStoryViewerLabeledFooterButton *_highlightButton;
  IGStoryViewerLabeledFooterButton *_facebookButton;
  IGStoryViewerLabeledFooterButton *_groupButton;
  IGStoryViewerLabeledFooterButton *_labeledMoreOptionsButton;
  IGStoryViewerFacepileViewersButton *_facepileViewersButton;
  IGStoryViewerLabeledFooterButton *_systemShareButton;
  IGStoryViewerLabeledFooterButton *_linkCopyButton;
  IGStoryViewerLabeledFooterButton *_archiveNavLabeledButton;
  IGStoryViewerLabeledFooterButton *_convertToReelButton;
  IGStoryViewerLabeledFooterButton *_addToSharedListButton;
  IGStoryViewerLabeledFooterButton *_sharedListCommentButton;
  IGStoryViewerLabeledFooterButton *_carouselScrubberButton;
  IGStoryViewerLabeledFooterButton *_shareAsPostButton;
  IGStoryViewerLabeledFooterButton *_latelyButton;
}

@property (weak, nonatomic) NSObject<IGStoryFullscreenOwnerFooterViewDelegate><IGStoryMediaControlling> *delegate;
@property (readonly, nonatomic) IGStoryViewerLabeledFooterButton *promoteButton;
@property (readonly, nonatomic) IGStoryViewerLabeledFooterButton *insightsButton;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)_didTapViewersButton:(id)button;
- (void)_didTapMoreOptionButton:(id)button;
- (void)_didTapFacebookButton:(id)button;
- (void)_didTapHighlightButton:(id)button;
- (void)_didTapCarouselScrubberButton:(id)button;
- (void)_didTapShareAsPostButton:(id)button;
- (void)_didTapArchiveReshareButton:(id)button;
- (void)_didTapDirectButton:(id)button;
- (void)_didTapPromoteButton:(id)button;
- (void)_didTapInsightsButton:(id)button;
- (void)_didTapArchiveNavButton:(id)button;
- (void)_didTapConvertToReelButton:(id)button;
- (void)_didTapAddToSharedListButton:(id)button;
- (void)_didTapSharedListCommentButton:(id)button;
- (void)_didTapLatelyButton:(id)button;
@end

#endif /* IGStoryFullscreenOwnerFooterView_h */