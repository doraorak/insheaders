//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGZoomHandlerDelegate_Protocol_h
#define IGZoomHandlerDelegate_Protocol_h
@import Foundation;

@protocol IGZoomHandlerDelegate <NSObject>
/* instance methods */
- (BOOL)shouldLaunchZoomingWithZoomController:(id)controller gestureRecognizer:(id)recognizer;
- (id)presentingController;
- (double)headerHeightForZoomController:(id)controller;
- (id)zoomViewControllerForZoomController:(id)controller frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)willStartZoomWithZoomController:(id)controller zoomPresenter:(id)presenter;
- (void)didStartZoomWithZoomController:(id)controller zoomPresenter:(id)presenter;
- (void)didEndZoomWithZoomController:(id)controller zoomPresenter:(id)presenter;
@end

#endif /* IGZoomHandlerDelegate_Protocol_h */