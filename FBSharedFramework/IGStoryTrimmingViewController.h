//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTrimmingViewController_h
#define IGStoryTrimmingViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGEDRViewType-Protocol.h"
#include "IGHDRDwellIndicatorView.h"
#include "IGStoryMediaAsset-Protocol.h"
#include "IGStoryMediaCompositionView.h"
#include "IGStoryVideoTrimState.h"
#include "IGTapButton.h"
#include "IGUserSession.h"
#include "IGVideoCachingTimelineView.h"

@class NSString, UIActivityIndicatorView;
@protocol IGStoryTrimmingViewControllerDelegate;

@interface IGStoryTrimmingViewController : UIViewController<IGEDRViewType> {
  /* instance variables */
  NSObject<IGStoryMediaAsset> *_asset;
  IGStoryVideoTrimState *_originalTrimState;
  IGStoryVideoTrimState *_trimState;
  long long _leftHeaderButtonType;
  UIActivityIndicatorView *_loadingIndicator;
  IGStoryMediaCompositionView *_mediaCompositionView;
  IGTapButton *_doneButton;
  IGTapButton *_cancelButton;
  IGUserSession *_userSession;
  BOOL _supportHDR;
  IGHDRDwellIndicatorView *_dwellIndicator;
  double _maxTrimLength;
}

@property (weak, nonatomic) NSObject<IGStoryTrimmingViewControllerDelegate> *delegate;
@property (readonly, nonatomic) IGVideoCachingTimelineView *videoTimeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAsset:(id)asset mediaCompositionView:(id)view trimState:(id)state leftHeaderButtonType:(long long)type supportHDR:(BOOL)hdr maxTrimLength:(double)length userSession:(id)session;
- (void)viewDidLoad;
- (void)setEDR:(BOOL)edr;
- (void)viewDidLayoutSubviews;
- (void)videoTimeline:(id)timeline didScrubPlayheadToProgress:(double)progress;
- (void)videoTimelineDidBeginScrubbing:(id)scrubbing;
- (void)videoTimelineDidEndScrubbing:(id)scrubbing;
- (void)videoTimelineDidGenerateThumbnails:(id)thumbnails;
- (void)videoTimeline:(id)timeline didChangeSelectedRange:(id)range;
- (void)_donePressed;
- (void)_cancelPressed;
- (void)_backPressed;
@end

#endif /* IGStoryTrimmingViewController_h */
