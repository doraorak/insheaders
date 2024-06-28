//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentCoverHideCommentNuxViewController_h
#define IGCommentCoverHideCommentNuxViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"

@class IGBottomButtonsView, IGCommentModel, IGDSHeadlineView, IGUserSession, NSDictionary, NSString, UIScrollView;

@interface IGCommentCoverHideCommentNuxViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGCommentModel *_comment;
  NSString *_mediaID;
  NSString *_commenterUsername;
  id /* block */ _undoCallback;
  id /* block */ _confirmCallback;
  IGDSHeadlineView *_headlineView;
  IGBottomButtonsView *_bottomButtonView;
  UIScrollView *_scrollView;
  NSDictionary *_loggingExtras;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session comment:(id)comment mediaID:(id)id loggingExtras:(id)extras confirmCallback:(id /* block */)callback undoCallback:(id /* block */)callback;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)modalSheetViewController;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGCommentCoverHideCommentNuxViewController_h */