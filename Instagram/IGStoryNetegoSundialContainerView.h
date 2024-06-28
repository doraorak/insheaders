//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryNetegoSundialContainerView_h
#define IGStoryNetegoSundialContainerView_h
@import Foundation;

#include "UIView.h"
#include "IGMultiVideoViewVideoContainer-Protocol.h"

@class IGClipsCoverMetadataOverlayContainerView, IGVideoView, UIView;

@interface IGStoryNetegoSundialContainerView : UIView<IGMultiVideoViewVideoContainer> {
  /* instance variables */
  IGClipsCoverMetadataOverlayContainerView *_metadataOverlayView;
}

@property (retain, nonatomic) IGVideoView *videoView;
@property (readonly, nonatomic) UIView *view;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame videoView:(id)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGStoryNetegoSundialContainerView_h */