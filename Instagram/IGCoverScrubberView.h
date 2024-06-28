//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoverScrubberView_h
#define IGCoverScrubberView_h
@import Foundation;

#include "UIControl.h"
#include "IGCoverScrubberThumbnailView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class FBShimmeringView, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer, UIView;

@interface IGCoverScrubberView : UIControl<UICollectionViewDataSource, UIGestureRecognizerDelegate> {
  /* instance variables */
  BOOL _shimmeringThumbnailsEnabled;
  UIView *_maskedContainerView;
  UIView *_dimmingOverlay;
  UICollectionViewFlowLayout *_collectionViewLayout;
  FBShimmeringView *_shimmeringView;
  UICollectionView *_thumbnailPreviewCollectionView;
  UILongPressGestureRecognizer *_scrubberGesture;
  IGCoverScrubberThumbnailView *_scrubberThumbnailView;
  long long _scrubberStyle;
  struct CGSize { double width; double height; } _initialAspectRatioSize;
  BOOL _selectedThumbnailIndicatorHidden;
  NSArray *_thumbnailImages;
}

@property (nonatomic) double keyPosition;
@property (nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIglContext:(id)context config:(id)config;
- (void)layoutSubviews;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)traitCollectionDidChange:(id)change;
- (void)_handlePanGesture:(id)gesture;
@end

#endif /* IGCoverScrubberView_h */
