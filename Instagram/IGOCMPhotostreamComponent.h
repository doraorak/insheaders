//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOCMPhotostreamComponent_h
#define IGOCMPhotostreamComponent_h
@import Foundation;

#include "OCMComponentConfigurating-Protocol.h"
#include "OCMComponentManagingContext-Protocol.h"
#include "OCMComponentProtocol-Protocol.h"

@class NSString;
@protocol FBCaptureDeviceFormatControlling;

@interface IGOCMPhotostreamComponent : NSObject<OCMComponentConfigurating, OCMComponentProtocol> {
  /* instance variables */
  NSObject<OCMComponentManagingContext> *_context;
  NSString *_previousSessionPreset;
  struct CGSize { double width; double height; } _targetCaptureBufferSize;
  BOOL _isInsideSetMultiplePropertiesBlock;
  BOOL _needsInvalidation;
  BOOL _allowHighResolutionFormats;
  BOOL _allowHighFPSCapture;
  BOOL _isMulticamCompatibilityRequired;
  BOOL _shouldSortFormatsByFOV;
  BOOL _isHLGVideoDesired;
  NSObject<FBCaptureDeviceFormatControlling> *_deviceFormatManager;
  long long _maxCaptureResolution;
  unsigned long long _desiredVideoFrameRate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)componentID;
- (id)dependentComponentIDs;
- (long long)supportedControllerStates;
- (void)didAttachWithContext:(id)context;
- (void)willDetachWithContext:(id)context;
- (BOOL)makeChangesToConfiguration:(struct FBCaptureCoordinatorConfiguration *)configuration;
- (BOOL)revertChangesToConfiguration:(struct FBCaptureCoordinatorConfiguration *)configuration;
- (id)desiredFormatForCaptureDevice:(id)device;
- (BOOL)shouldOutputPreviewSizedBuffersForCaptureDevice:(id)device;
@end

#endif /* IGOCMPhotostreamComponent_h */