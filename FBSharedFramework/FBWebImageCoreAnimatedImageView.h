//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWebImageCoreAnimatedImageView_h
#define FBWebImageCoreAnimatedImageView_h
@import Foundation;

#include "UIView.h"
#include "FBWebImageEnhancedImageViewProtocol-Protocol.h"
#include "FLAnimatedImageView.h"

@class NSString, UIImage, UIImageView;

@interface FBWebImageCoreAnimatedImageView : UIView<FBWebImageEnhancedImageViewProtocol> {
  /* instance variables */
  UIImageView *_staticImageView;
  FLAnimatedImageView *_animatedImageView;
}

@property (nonatomic) long long preferredImageDynamicRange;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)activeImageView;
- (void)setImage:(id)image tintColor:(id)color cachedImageHolder:(id)holder;
- (void)_switchToAnimatedImageView;
- (void)_switchToStaticImageView;
- (void)setContentMode:(long long)mode;
- (long long)contentMode;
@end

#endif /* FBWebImageCoreAnimatedImageView_h */
