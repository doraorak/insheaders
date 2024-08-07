//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVFeedItemCollectionViewCell_h
#define IGTVFeedItemCollectionViewCell_h
@import Foundation;

#include "IGDelayedBouncyCollectionViewCell.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGTVBlurredOverlayCompactView.h"
#include "IGTVFeedItemCollectionViewCellDetailsView.h"
#include "IGTVFeedItemCollectionViewCellNowPlayingView.h"
#include "IGTVVideoProgressHeaderView.h"

@class IGGradientView, IGImageView, NSString;
@protocol IGTVFeedItemCollectionViewCellDelegate;

@interface IGTVFeedItemCollectionViewCell : IGDelayedBouncyCollectionViewCell<IGImageViewDelegate> {
  /* instance variables */
  IGImageView *_coverPhotoImageView;
  IGTVFeedItemCollectionViewCellNowPlayingView *_nowPlayingOverlay;
  IGGradientView *_topGradientView;
  IGTVVideoProgressHeaderView *_headerView;
  IGTVFeedItemCollectionViewCellDetailsView *_labelView;
  IGTVBlurredOverlayCompactView *_blurredOverlayView;
}

@property (weak, nonatomic) NSObject<IGTVFeedItemCollectionViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)change;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (void)_handleLongPressGesture:(id)gesture;
@end

#endif /* IGTVFeedItemCollectionViewCell_h */
