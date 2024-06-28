//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentSUPMediaInputToggle_h
#define OCMComponentSUPMediaInputToggle_h
@import Foundation;

#include "FBMPInput-Protocol.h"
#include "OCMComponentSUPMediaInputToggleProtocol-Protocol.h"
#include "OCMControllerProtocol-Protocol.h"
#include "SUPCameraCaptureInput.h"

@class FBMPSession, NSString;
@protocol OS_dispatch_queue;

@interface OCMComponentSUPMediaInputToggle : NSObject<OCMComponentSUPMediaInputToggleProtocol> {
  /* instance variables */
  NSObject<OCMControllerProtocol> *_context;
  NSObject<FBMPInput> *_primaryInput;
  SUPCameraCaptureInput *_supInput;
  FBMPSession *_mediaSession;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL isSUPToggledOn;
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
- (void)prepare;
- (void)stop:(BOOL)stop allowSessionStop:(BOOL)stop;
- (void)toggle:(BOOL)toggle completion:(id /* block */)completion;
- (void)setMicrophoneEnabled:(BOOL)enabled;
- (void)setAudioDecodingEnabled:(BOOL)enabled;
- (void)toggle:(BOOL)toggle stopSession:(BOOL)session completion:(id /* block */)completion;
- (void)replaceInputs:(id)inputs newInput:(id)input stopSession:(BOOL)session completion:(id /* block */)completion;
- (id)replacePrimaryPorts;
@end

#endif /* OCMComponentSUPMediaInputToggle_h */
