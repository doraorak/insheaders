//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKImageComponentSpecifier_h
#define BKImageComponentSpecifier_h
@import Foundation;

#include "NSObject-Protocol.h"

@class BKContext, FBImageRenderState, NSArray, NSString;
@protocol FBImagePerfComponentListener, FBWebImageSpecifier, {MRCImageViewOptions="imageContentMode"q"imageClipsToBounds"B"showLoadingIndicator"B"enableRetries"B"tintColor"@"UIColor""progressRingOptions"{MRCProgressRingOptions="ringDiameter"{MRCProgressRingDiameter="type"Q"value"d}"width"d"tintColor"@"UIColor"}"placeholderOptions"{MRCImagePlaceholderOptions="placeholderImage"@"UIImage""placeholderTintColor"@"UIColor""placeholderAnimation"@"CAAnimation""placeholderContentMode"q}"explicitAttributionContext"@"<FBFeatureAttributionContextProtocol>""imageListener"@"<FBWebImageViewListener>""analyticsTag"@"NSString""layoutDelegate"@"<FBWebImageViewLayoutDelegate>""transitionType"Q"disablesImageInstrumentation"B"enableSmartFetchFrameworkForNTPrefetches"B"enableSmartFetchFramework"B};

@interface BKImageComponentSpecifier : NSObject<NSObject> {
  /* instance variables */
  struct MRCImageViewOptions { long long imageContentMode; BOOL imageClipsToBounds; BOOL showLoadingIndicator; BOOL enableRetries; UIColor *tintColor; struct MRCProgressRingOptions { struct MRCProgressRingDiameter { unsigned long long type; double value; } ringDiameter; double width; UIColor *tintColor; } progressRingOptions; struct MRCImagePlaceholderOptions { UIImage *placeholderImage; UIColor *placeholderTintColor; CAAnimation *placeholderAnimation; long long placeholderContentMode; } placeholderOptions; <FBFeatureAttributionContextProtocol> *explicitAttributionContext; <FBWebImageViewListener> *imageListener; NSString *analyticsTag; <FBWebImageViewLayoutDelegate> *layoutDelegate; unsigned long long transitionType; BOOL disablesImageInstrumentation; BOOL enableSmartFetchFrameworkForNTPrefetches; BOOL enableSmartFetchFramework; } _options;
  NSObject<FBWebImageSpecifier> *_lightImageSpecifier;
  NSObject<FBWebImageSpecifier> *_darkImageSpecifier;
  NSArray *_imageListeners;
  NSObject<FBImagePerfComponentListener> *_imagePerfLogger;
  FBImageRenderState *_imageRenderState;
}

@property (readonly, weak, nonatomic) BKContext *bloksContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)lightImageSpecifier;
- (id)darkImageSpecifier;
- (id)imageListeners;
- (id)imagePerfLogger;
- (id)imageRenderState;
- (struct MRCImageViewOptions { long long x0; BOOL x1; BOOL x2; BOOL x3; id x4; struct MRCProgressRingOptions { struct MRCProgressRingDiameter { unsigned long long x0; double x1; } x0; double x1; id x2; } x5; struct MRCImagePlaceholderOptions { id x0; id x1; id x2; long long x3; } x6; id x7; id x8; id x9; id x10; unsigned long long x11; BOOL x12; BOOL x13; BOOL x14; })options;
- (id)attributionContext;
- (id)appSpecificImageModel;
@end

#endif /* BKImageComponentSpecifier_h */
