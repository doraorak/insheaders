//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVideoView_h
#define IGDirectVideoView_h
@import Foundation;

#include "UIView.h"
#include "IGImageProgressViewDelegate-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoIndicatorView.h"

@class IGImageProgressView, IGPhoto, IGSimpleButton, NSString;
@protocol IGDirectVideoViewDelegate;

@interface IGDirectVideoView : UIView<IGImageProgressViewDelegate> {
  /* instance variables */
  BOOL _showPlayIconIfThumbnailUnavailable;
  IGVideoIndicatorView *_indicatorView;
  IGSimpleButton *_largeCenteredPlayButton;
}

@property (retain, nonatomic) IGPhoto *photo;
@property (retain, nonatomic) IGImageProgressView *photoImageView;
@property (nonatomic) BOOL loading;
@property (weak, nonatomic) NSObject<IGDirectVideoViewDelegate> *delegate;
@property (retain, nonatomic) NSObject<IGUserLauncherSetProviding> *launcherSetProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setShowPlayIconIfThumbnailUnavailable:(BOOL)unavailable;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (BOOL)isLoading;
@end

#endif /* IGDirectVideoView_h */