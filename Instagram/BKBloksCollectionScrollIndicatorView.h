//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksCollectionScrollIndicatorView_h
#define BKBloksCollectionScrollIndicatorView_h
@import Foundation;

#include "UIView.h"

@class CALayer, NSTimer, UICollectionView;

@interface BKBloksCollectionScrollIndicatorView : UIView {
  /* instance variables */
  CALayer *_availableContentLayer;
  CALayer *_currentProgressLayer;
  double _kScrollBarSize;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _kScrollBarInsets;
  unsigned long long _scrollDirection;
  struct { double offset; double length; } _currentScrollPosition;
  NSTimer *_disappearTimer;
  BOOL _isVisible;
  BOOL _alwaysOn;
  UICollectionView *_collectionView;
}

/* instance methods */
- (id)initWithOptions:(const struct BKCollectionScrollIndicatorViewOptions *)options forCollectionView:(id)view;
- (void)layoutSubviews;
- (void)_fadeOutIndicator;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)dealloc;
@end

#endif /* BKBloksCollectionScrollIndicatorView_h */
