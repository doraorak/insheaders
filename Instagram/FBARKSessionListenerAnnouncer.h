//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARKSessionListenerAnnouncer_h
#define FBARKSessionListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "ARSessionDelegate-Protocol.h"

@class NSString;

@interface FBARKSessionListenerAnnouncer : FBAnnouncerBase<ARSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)session:(id)session didFailWithError:(id)error;
- (void)session:(id)session cameraDidChangeTrackingState:(id)state;
- (void)sessionWasInterrupted:(id)interrupted;
- (void)sessionInterruptionEnded:(id)ended;
- (void)session:(id)session didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)session:(id)session didUpdateFrame:(id)frame;
- (void)session:(id)session didAddAnchors:(id)anchors;
- (void)session:(id)session didUpdateAnchors:(id)anchors;
- (void)session:(id)session didRemoveAnchors:(id)anchors;
@end

#endif /* FBARKSessionListenerAnnouncer_h */
