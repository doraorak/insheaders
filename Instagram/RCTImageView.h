//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTImageView_h
#define RCTImageView_h
@import Foundation;

#include "RCTView.h"
#include "RCTBridge.h"
#include "RCTImageLoaderWithAttributionProtocol-Protocol.h"
#include "RCTImageSource.h"
#include "RCTImageURLLoaderRequest.h"
#include "RCTUIImageViewAnimated.h"

@class NSArray, NSString, UIImage;

@interface RCTImageView : RCTView {
  /* instance variables */
  RCTBridge *_bridge;
  NSObject<RCTImageLoaderWithAttributionProtocol> *_imageLoader;
  RCTImageSource *_imageSource;
  RCTImageSource *_pendingImageSource;
  struct CGSize { double width; double height; } _targetSize;
  BOOL _needsReload;
  RCTUIImageViewAnimated *_imageView;
  RCTImageURLLoaderRequest *_loaderRequest;
}

@property (copy, nonatomic) id /* block */ onLoadStart;
@property (copy, nonatomic) id /* block */ onProgress;
@property (copy, nonatomic) id /* block */ onError;
@property (copy, nonatomic) id /* block */ onPartialLoad;
@property (copy, nonatomic) id /* block */ onLoad;
@property (copy, nonatomic) id /* block */ onLoadEnd;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } capInsets;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) long long renderingMode;
@property (copy, nonatomic) NSArray *imageSources;
@property (nonatomic) double blurRadius;
@property (nonatomic) long long resizeMode;
@property (copy, nonatomic) NSString *internal_analyticTag;

/* instance methods */
- (id)initWithBridge:(id)bridge;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateWithImage:(id)image;
- (void)setImage:(id)image;
- (id)image;
- (void)cancelImageLoad;
- (void)cancelAndClearImageLoad;
- (void)clearImageIfDetached;
- (BOOL)hasMultipleSources;
- (id)imageSourceForSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)shouldReloadImageSourceAfterResize;
- (BOOL)shouldChangeImageSource;
- (void)reloadImage;
- (void)imageLoaderLoadedImage:(id)image error:(id)error forImageSource:(id)source partial:(BOOL)partial;
- (void)reactSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didSetProps:(id)props;
- (void)didMoveToWindow;
- (void)dealloc;
@end

#endif /* RCTImageView_h */