//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCameraCaptureModeRecordingEventAnnouncer_h
#define FBCameraCaptureModeRecordingEventAnnouncer_h
@import Foundation;

#include "FBCameraCaptureModeRecordingEventListeningAnnouncer.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBCameraCaptureModeRecordingEventAnnouncer : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_announceQueue;
  FBCameraCaptureModeRecordingEventListeningAnnouncer *_announcer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)addRecordingEventListener:(id)listener;
- (void)removeRecordingEventListener:(id)listener;
- (void)cameraCaptureModeDidFinishRecordingWithMaxDurationWithAsset:(id)asset devicePosition:(long long)position;
@end

#endif /* FBCameraCaptureModeRecordingEventAnnouncer_h */
