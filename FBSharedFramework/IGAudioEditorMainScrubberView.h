//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioEditorMainScrubberView_h
#define IGAudioEditorMainScrubberView_h
@import Foundation;

#include "UIView.h"
#include "IGGradientView.h"
#include "IGUserSession.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class CALayer, CAShapeLayer, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol IGAudioEditorMainScrubberViewDelegate;

@interface IGAudioEditorMainScrubberView : UIView<UICollectionViewDataSource, UICollectionViewDelegate> {
  /* instance variables */
  BOOL _outerBorderEnabled;
  CALayer *_backgroundLayer;
  CAShapeLayer *_greyBorder;
  IGGradientView *_gradientBorder;
  CAShapeLayer *_gradientBorderMask;
  IGGradientView *_gradientProgressView;
  CAShapeLayer *_gradientProgressMask;
  UICollectionView *_musicBarCollectionView;
  UICollectionViewFlowLayout *_flowLayout;
  long long _selectedHighlightIndex;
  IGUserSession *_userSession;
  BOOL _avoidNan;
  BOOL _showGradientBorder;
  BOOL _showColorsForLightMode;
  NSArray *_highlightsInSeconds;
  double _windowProgress;
}

@property (weak, nonatomic) NSObject<IGAudioEditorMainScrubberViewDelegate> *delegate;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (nonatomic) double totalDuration;
@property (nonatomic) double clipDuration;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOuterBorderEnabled:(BOOL)enabled userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)touchDetector:(id)detector touchesBegan:(id)began withEvent:(id)event;
- (void)touchDetector:(id)detector touchesMoved:(id)moved withEvent:(id)event;
- (void)touchDetector:(id)detector touchesEnded:(id)ended withEvent:(id)event;
- (void)touchDetector:(id)detector touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)traitCollectionDidChange:(id)change;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
@end

#endif /* IGAudioEditorMainScrubberView_h */