//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallCaptureCoordinatorAREffectProtocol_Protocol_h
#define IGVideoCallCaptureCoordinatorAREffectProtocol_Protocol_h
@import Foundation;

@protocol IGVideoCallCaptureCoordinatorAREffectProtocol <IGVideoCallCaptureCoordinatorInterface>
/* instance methods */
- (id)arEffectApplicator;
- (void)setAREffectDelegate:(id)delegate;
- (id)captureManager;
- (void)onDidSelectEffect:(id)effect;
@end

#endif /* IGVideoCallCaptureCoordinatorAREffectProtocol_Protocol_h */
