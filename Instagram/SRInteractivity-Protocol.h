//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SRInteractivity_Protocol_h
#define SRInteractivity_Protocol_h
@import Foundation;

@protocol SRInteractivity <NSObject>

@property (nonatomic, readonly) SRTouchEventHandlingListenerAnnouncer *touchEventAnnouncer;

/* instance methods */
- (void)resetInteractivity;
- (void)touchAtPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (void)touchAtPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (void)handleTouchWithContext:(id)context;
- (void)handleTouchWithContext:(id)context;
@end

#endif /* SRInteractivity_Protocol_h */
