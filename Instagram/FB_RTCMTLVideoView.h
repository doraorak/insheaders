//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCMTLVideoView_h
#define FB_RTCMTLVideoView_h
@import Foundation;

#include "UIView.h"
#include "FB_RTCMTLI420Renderer.h"
#include "FB_RTCMTLNV12Renderer.h"
#include "FB_RTCMTLRGBRenderer.h"
#include "FB_RTCObservableVideoRenderer-Protocol.h"
#include "FB_RTCVideoFrame.h"
#include "FB_RTCVideoViewDelegate-Protocol.h"
#include "MTKViewDelegate-Protocol.h"

@class MTKView, NSMutableArray, NSString, NSValue;

@interface FB_RTCMTLVideoView : UIView<MTKViewDelegate, FB_RTCObservableVideoRenderer> {
  /* instance variables */
  NSMutableArray *_frameRenderedListeners;
}

@property (retain, nonatomic) FB_RTCMTLI420Renderer *rendererI420;
@property (retain, nonatomic) FB_RTCMTLNV12Renderer *rendererNV12;
@property (retain, nonatomic) FB_RTCMTLRGBRenderer *rendererRGB;
@property (retain, nonatomic) MTKView *metalView;
@property (retain) FB_RTCVideoFrame *videoFrame;
@property (nonatomic) struct CGSize { double x0; double x1; } videoFrameSize;
@property (nonatomic) long long lastFrameTimeNs;
@property (weak, nonatomic) NSObject<FB_RTCVideoViewDelegate> *delegate;
@property (nonatomic) long long videoContentMode;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSValue *rotationOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ errorCallback;

/* class methods */
+ (BOOL)isMetalAvailable;
+ (id)createMetalView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view;
+ (id)createNV12Renderer;
+ (id)createI420Renderer;
+ (id)createRGBRenderer;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (BOOL)isEnabled;
- (void)configure;
- (void)setMultipleTouchEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (void)drawInMTKView:(id)mtkview;
- (void)mtkView:(id)view drawableSizeWillChange:(struct CGSize { double x0; double x1; })change;
- (long long)frameRotation;
- (struct CGSize { double x0; double x1; })drawableSize;
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)renderFrame:(id)frame;
- (void)addFrameRenderedListener:(id /* block */)listener;
- (void)removeFrameRenderedListener:(id /* block */)listener;
- (void)_notifyFrameRenderedListeners:(id)listeners;
@end

#endif /* FB_RTCMTLVideoView_h */