//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGSundialStackedTimelineSharedUIKit41IGSundialStackedTimelineAudioWaveformView_h
#define _TtC35IGSundialStackedTimelineSharedUIKit41IGSundialStackedTimelineAudioWaveformView_h
@import Foundation;

#include "UIScrollView.h"

@interface _TtC35IGSundialStackedTimelineSharedUIKit41IGSundialStackedTimelineAudioWaveformView : UIScrollView { // (Swift)
  /* instance variables */
   audioElement;
   interactionDelegate;
   isAudioTrimEnabled;
   instanceKey;
   expanded;
   selected;
   isTranslating;
   titleLabel;
   iconImage;
   kGradientLabelOffset;
   audioLabelGradient;
   minX;
   maxX;
   outlineLayer;
   didFinishFirstLayout;
   kTitleLabelXInset;
   kTitleLabelYInset;
   needRedrawWaveForm;
   isLoading;
   loadingView;
   displayedHighlightViews;
   highlightCoordinator;
   alignmentDelegate;
   isScrolling;
   speed;
   pointsPerSecond;
   visibleRect;
}

@property (nonatomic) BOOL scrollEnabled;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (BOOL)isScrollEnabled;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC35IGSundialStackedTimelineSharedUIKit41IGSundialStackedTimelineAudioWaveformView_h */