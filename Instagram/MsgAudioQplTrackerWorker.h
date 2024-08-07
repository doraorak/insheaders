//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MsgAudioQplTrackerWorker_h
#define MsgAudioQplTrackerWorker_h
@import Foundation;

#include "MsgAudioQplTrackerInterface-Protocol.h"

@class NSString;

@interface MsgAudioQplTrackerWorker : NSObject<MsgAudioQplTrackerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (void)MsgAudioRecordingQplTrackerStart:(id)start;
- (void)MsgAudioRecordingQplTrackerMarkPoint:(const char *)point;
- (void)MsgAudioRecordingQplTrackerAnnotate:(const char *)annotate value:(id)value;
- (void)MsgAudioRecordingQplTrackerEnd;
- (void)MsgAudioRecordingQplTrackerCancel:(id)cancel;
- (void)MsgAudioPlaybackQplTrackerStart:(id)start;
- (void)MsgAudioPlaybackQplTrackerMarkPoint:(const char *)point;
- (void)MsgAudioPlaybackQplTrackerAnnotate:(const char *)annotate value:(id)value;
- (void)MsgAudioPlaybackQplTrackerEnd;
- (void)MsgAudioPlaybackQplTrackerCancel:(id)cancel;
@end

#endif /* MsgAudioQplTrackerWorker_h */
