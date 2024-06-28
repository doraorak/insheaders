//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOCMediaHandler_h
#define IGOCMediaHandler_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "OCMMediaManager.h"

@class NSString, UIImage;
@protocol OCMMediaManagerProtocol, OS_dispatch_queue;

@interface IGOCMediaHandler : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_mediaHandlerQueue;
  unsigned long long _displayBufferType;
  id /* block */ _pixelBufferProducingCompletion;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSObject<OCMMediaManagerProtocol> *mediaManager;

/* instance methods */
- (id)init;
- (void)attachCaptureGestureRecognizersToView:(id)view translatingToView:(id)view;
- (void)exportFilterConfigsWithCompletion:(id /* block */)completion;
- (void)mediaDidOutputPixelBuffer:(struct __CVBuffer *)buffer bufferType:(unsigned long long)type;
- (void)produceWithSourcePixelBuffer:(struct __CVBuffer *)buffer time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completion:(id /* block */)completion;
@end

#endif /* IGOCMediaHandler_h */
