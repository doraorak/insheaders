//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNudgingViewController_h
#define IGNudgingViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGImageViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGCommentModel, IGDSHeadlineView, IGStackLayout, IGUser, IGUserSession, NSString;

@interface IGNudgingViewController : IGViewController<IGImageViewDelegate, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDSHeadlineView *_headlineView;
  IGBottomButtonsView *_bottomButtonsView;
  IGStackLayout *_stackLayout;
  IGCommentModel *_comment;
  NSString *_mediaId;
  IGUser *_mediaOwner;
  unsigned long long _nudgeType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session comment:(id)comment media:(id)media nudgeType:(unsigned long long)type;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGNudgingViewController_h */
