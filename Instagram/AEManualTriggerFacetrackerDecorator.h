//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEManualTriggerFacetrackerDecorator_h
#define AEManualTriggerFacetrackerDecorator_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol AEFaceTracking, AESelfieCapturePresenting;

@interface AEManualTriggerFacetrackerDecorator : NSObject<NSObject> {
  /* instance variables */
  NSObject<AESelfieCapturePresenting> *_presenter;
  NSObject<AEFaceTracking> *_faceTracker;
  BOOL _isCaptureInitiated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithPresenter:(id)presenter faceTracker:(id)tracker;

/* instance methods */
- (id)initWithPresenter:(id)presenter faceTracker:(id)tracker;
- (void)processSampleBuffer:(struct __CVBuffer *)buffer width:(unsigned long long)width height:(unsigned long long)height normalizedBeginFaceAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect normalizedFailFaceAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect completion:(id /* block */)completion;
- (id)lastResult;
@end

#endif /* AEManualTriggerFacetrackerDecorator_h */
