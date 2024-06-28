//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicCollectionView_h
#define IGDynamicCollectionView_h
@import Foundation;

#include "UIView.h"
#include "IGPanGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class CADisplayLink, NSMapTable, NSMutableArray, NSString, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;
@protocol IGDynamicCollectionViewDatasource, IGDynamicCollectionViewDelegate;

@interface IGDynamicCollectionView : UIView<UIScrollViewDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  BOOL _autoscrollDisabled;
  BOOL _rightToLeftDirection;
  UILongPressGestureRecognizer *_touchRecognizer;
  IGPanGestureRecognizer *_velocityRecognizer;
  UITapGestureRecognizer *_tapRecognizer;
  NSMapTable *_centerAnimators;
  NSMapTable *_transformAnimators;
  UIView *_trackingView;
  long long _trackingViewIndex;
  long long _trackingViewPotentialLandingIndex;
  NSMutableArray *_viewCenters;
  CADisplayLink *_autoscrollDisplayLink;
  long long _autoscrollDirection;
  double _lastAutoscrollTime;
  double _autoscrollStartTime;
}

@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) NSObject<IGDynamicCollectionViewDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGDynamicCollectionViewDatasource> *dataSource;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (nonatomic) BOOL alwaysBounceHorizontal;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame andMaxWidth:(double)width;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)scroll;
- (void)_autoscroll:(id)_autoscroll;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_tap:(id)_tap;
- (void)_pan:(id)_pan;
- (void)_touch:(id)_touch;
@end

#endif /* IGDynamicCollectionView_h */