//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenDelaySkipFooterBannerView_h
#define IGStoryFullscreenDelaySkipFooterBannerView_h
@import Foundation;

#include "UIView.h"
#include "IGDelaySkipStatusListener-Protocol.h"
#include "_TtC11IGDelaySkip19IGDelaySkipPillView.h"
#include "_TtC11IGDelaySkip25IGDelaySkipPillController.h"

@class IGUserSession, NSString;

@interface IGStoryFullscreenDelaySkipFooterBannerView : UIView<IGDelaySkipStatusListener> {
  /* instance variables */
  IGUserSession *_userSession;
  _TtC11IGDelaySkip19IGDelaySkipPillView *_delaySkipPillView;
}

@property (readonly, nonatomic) _TtC11IGDelaySkip25IGDelaySkipPillController *delaySkipPillController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)configureWithCurrentStoryItem:(id)item viewModel:(id)model;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)delaySkipTimerCompleted;
- (void)delaySkipPillDestroyed;
@end

#endif /* IGStoryFullscreenDelaySkipFooterBannerView_h */
