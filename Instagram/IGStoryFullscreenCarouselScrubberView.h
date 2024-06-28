//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenCarouselScrubberView_h
#define IGStoryFullscreenCarouselScrubberView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryCarouselView.h"
#include "NSObject-Protocol.h"

@class IGStoryViewerViewModel, NSString, UIScrollView;
@protocol IGStoryFullscreenCarouselScrubberViewDelegate;

@interface IGStoryFullscreenCarouselScrubberView : UIView<NSObject> {
  /* instance variables */
  IGStoryViewerViewModel *_currentViewerViewModel;
  unsigned long long _initialStoryItemIndex;
  UIScrollView *_containerScrollView;
  unsigned long long _totalItemsScrolledCount;
}

@property (readonly, nonatomic) NSString *entryPoint;
@property (weak, nonatomic) NSObject<IGStoryFullscreenCarouselScrubberViewDelegate> *delegate;
@property (readonly, nonatomic) IGStoryCarouselView *carouselView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)carouselView:(id)view didSelectItemAtIndex:(unsigned long long)index;
- (void)carouselView:(id)view didScrollToIndex:(unsigned long long)index;
- (void)carouselView:(id)view didEndScrollingAtIndex:(unsigned long long)index;
- (void)carouselViewWillBeginDragging:(id)dragging;
- (void)carouselViewDidEndDecelerating:(id)decelerating;
@end

#endif /* IGStoryFullscreenCarouselScrubberView_h */