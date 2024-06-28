//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveModeratorViewerWarningViewController_h
#define IGLiveModeratorViewerWarningViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGImageViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGImageView, IGStackLayout, NSString, UILabel;

@interface IGLiveModeratorViewerWarningViewController : IGViewController<IGImageViewDelegate, IGGestureHandler> {
  /* instance variables */
  UILabel *_titleLabel;
  IGCoreTextView *_bodyTextView;
  IGImageView *_imageView;
  IGBottomButtonsView *_bottomButtonsView;
  IGStackLayout *_stackLayout;
  NSString *_hostName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHostName:(id)name;
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

#endif /* IGLiveModeratorViewerWarningViewController_h */