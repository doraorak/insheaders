//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ExpressoPhotoCaptureMode_h
#define ExpressoPhotoCaptureMode_h
@import Foundation;

#include "OCMCaptureModeOwning-Protocol.h"
#include "OCMComponentManagingContext-Protocol.h"

@class NSString;
@protocol FBCaptureMode;

@interface ExpressoPhotoCaptureMode : NSObject<OCMCaptureModeOwning> {
  /* instance variables */
  NSObject<FBCaptureMode> *_ar3DCaptureMode;
  NSObject<OCMComponentManagingContext> *_context;
  struct CGSize { double width; double height; } _imageSize;
}

@optional
@property (readonly, nonatomic) BOOL supportsBackgroundProcessing;
@optional
@property (readonly, nonatomic) BOOL isRotationLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })size;
- (id)componentID;
- (id)dependentComponentIDs;
- (long long)supportedControllerStates;
- (void)didAttachWithContext:(id)context;
- (void)willDetachWithContext:(id)context;
- (id)captureMode;
@end

#endif /* ExpressoPhotoCaptureMode_h */
