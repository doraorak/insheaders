//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARInstructionServiceHandler_h
#define IGARInstructionServiceHandler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSSet, NSString;
@protocol IGARInstructionServiceDelegate, IGCurrentAREffectProvider, OS_dispatch_queue;

@interface IGARInstructionServiceHandler : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGARInstructionServiceDelegate> *_delegate;
  NSObject<IGCurrentAREffectProvider> *_currentEffectProvider;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  unsigned long long _visibleAutomaticInstructionType;
  NSSet *_currentInstructionImages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate currentEffectProvider:(id)provider callbackQueue:(id)queue;
- (void)instructionServiceForEffectDescriptor:(id)descriptor didChangeAutomaticInstructionType:(unsigned long long)type targetImageData:(id)data;
- (void)instructionServiceForEffectDescriptor:(id)descriptor showInstructionOfType:(unsigned long long)type forDuration:(double)duration;
- (void)instructionServiceForEffectDescriptor:(id)descriptor showInstructionForToken:(id)token;
- (void)instructionServiceForEffectDescriptor:(id)descriptor showInstructionWithCustomText:(id)text;
- (void)instructionServiceHideInstructionForEffectDescriptor:(id)descriptor;
@end

#endif /* IGARInstructionServiceHandler_h */
