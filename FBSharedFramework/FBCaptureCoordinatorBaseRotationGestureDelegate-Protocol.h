//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCaptureCoordinatorBaseRotationGestureDelegate_Protocol_h
#define FBCaptureCoordinatorBaseRotationGestureDelegate_Protocol_h
@import Foundation;

@protocol FBCaptureCoordinatorBaseRotationGestureDelegate <NSObject>
/* instance methods */
- (BOOL)captureCoordinator:(id)coordinator shouldProduceRotationGestureDataFromRotationGestureRecognizer:(id)recognizer;
- (void)captureCoordinator:(id)coordinator didProduceRotationGestureData:(id)data fromCaptureView:(id)view;
@end

#endif /* FBCaptureCoordinatorBaseRotationGestureDelegate_Protocol_h */