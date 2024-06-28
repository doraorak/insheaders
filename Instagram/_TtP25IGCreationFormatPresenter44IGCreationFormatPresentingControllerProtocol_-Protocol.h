//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP25IGCreationFormatPresenter44IGCreationFormatPresentingControllerProtocol__Protocol_h
#define _TtP25IGCreationFormatPresenter44IGCreationFormatPresentingControllerProtocol__Protocol_h
@import Foundation;

@protocol _TtP25IGCreationFormatPresenter44IGCreationFormatPresentingControllerProtocol_ 

@property (nonatomic, readonly) UIViewController<IGStoryCameraOverlayViewControlling> *overlayViewController;
@property (nonatomic, retain) IGCameraViewController *cameraViewController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCaptureFrame;
@property (nonatomic, readonly) double contentCornerRadius;
@property (nonatomic, retain) UIViewController<IGStoryFormatViewControllerProtocol> *presentedFormatViewController;

/* instance methods */
- (void)addFormatView:(id)view;
- (void)addCameraView:(id)view;
- (void)addOverlayView:(id)view;
- (void)addTransitionView:(id)view;
- (void)creationFormat:(id)format willAppear:(BOOL)appear;
- (void)creationFormat:(id)format didAppear:(BOOL)appear;
- (void)creationFormat:(id)format willDisappear:(BOOL)disappear;
- (void)creationFormat:(id)format didDisappear:(BOOL)disappear;
@end

#endif /* _TtP25IGCreationFormatPresenter44IGCreationFormatPresentingControllerProtocol__Protocol_h */