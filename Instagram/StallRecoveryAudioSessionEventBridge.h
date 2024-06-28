//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef StallRecoveryAudioSessionEventBridge_h
#define StallRecoveryAudioSessionEventBridge_h
@import Foundation;

#include "FB_RTCAudioSessionDelegate-Protocol.h"

@class NSString;
@protocol {scoped_refptr<facebook::rtc::StallRecoveryADMListener>="ptr_"^{StallRecoveryADMListener}};

@interface StallRecoveryAudioSessionEventBridge : NSObject<FB_RTCAudioSessionDelegate> {
  /* instance variables */
  struct scoped_refptr<facebook::rtc::StallRecoveryADMListener> { struct StallRecoveryADMListener *ptr_; } listener_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithListener:(struct scoped_refptr<facebook::rtc::StallRecoveryADMListener> { struct StallRecoveryADMListener * x0; })listener;
- (void)dealloc;
- (void)audioSessionDidBeginInterruption:(id)interruption;
- (void)audioSessionMediaServerTerminated:(id)terminated;
@end

#endif /* StallRecoveryAudioSessionEventBridge_h */
