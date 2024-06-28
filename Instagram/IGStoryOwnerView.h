//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryOwnerView_h
#define IGStoryOwnerView_h
@import Foundation;

#include "UIButton.h"
#include "IGStoryOwnerViewLayoutSpec.h"
#include "IGStoryViewerEntryView-Protocol.h"

@class IGProfilePictureImageView, IGRingViewSpec, IGRingViewSpecFactory, IGStoryBadgeView, IGStoryGradientRingView, NSString;

@interface IGStoryOwnerView : UIButton<IGStoryViewerEntryView> {
  /* instance variables */
  IGProfilePictureImageView *_ownerPictureImageView;
  IGStoryGradientRingView *_ringView;
  IGStoryBadgeView *_storyBadgeView;
}

@property (readonly, nonatomic) IGRingViewSpec *ringSpec;
@property (readonly, nonatomic) IGRingViewSpecFactory *ringViewSpecFactory;
@property (readonly, nonatomic) IGStoryOwnerViewLayoutSpec *layoutSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutSpec:(id)spec ringViewSpecFactory:(id)factory;
- (void)layoutSubviews;
- (void)setSeen:(BOOL)seen;
- (void)setHighlighted:(BOOL)highlighted;
- (id)profilePicture;
- (id)gradientRingView;
- (id)previewImageView;
- (id)accessoryView;
- (void)setLoading:(BOOL)loading;
@end

#endif /* IGStoryOwnerView_h */