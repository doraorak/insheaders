//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdItemPreviewView_h
#define IGAdItemPreviewView_h
@import Foundation;

#include "FBViewpointAlwaysOnscreenView.h"

@class IGGradientView, IGLabel, IGProfilePictureImageView, NSString, UIImageView, UIView;

@interface IGAdItemPreviewView : FBViewpointAlwaysOnscreenView {
  /* instance variables */
  NSString *_module;
  IGGradientView *_topGradientView;
  UIImageView *_userBadge;
}

@property (retain, nonatomic) IGProfilePictureImageView *profileImageView;
@property (retain, nonatomic) IGLabel *titleLabel;
@property (retain, nonatomic) IGLabel *sponsoredLabel;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UIView *mediaView;

/* instance methods */
- (id)initWithMedia:(id)media mediaView:(id)view width:(double)width module:(id)module userSession:(id)session adMedia:(id)media;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGAdItemPreviewView_h */
