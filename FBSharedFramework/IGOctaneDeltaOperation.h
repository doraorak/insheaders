//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOctaneDeltaOperation_h
#define IGOctaneDeltaOperation_h
@import Foundation;

#include "NSOperation.h"
#include "FBMQTTEncodedMessage.h"

@class NSNumber;
@protocol IGOctaneOperationDelegate;

@interface IGOctaneDeltaOperation : NSOperation {
  /* instance variables */
  NSObject<IGOctaneOperationDelegate> *_delegate;
  FBMQTTEncodedMessage *_message;
  BOOL _useHoleDetection;
  BOOL _shouldProcessOnlyForCurrentThread;
}

@property (retain, nonatomic) NSNumber *threadSequenceId;

/* instance methods */
- (id)initWithMessage:(id)message useHoleDetection:(BOOL)detection verifyThreadId:(BOOL)id delegate:(id)delegate;
- (void)main;
@end

#endif /* IGOctaneDeltaOperation_h */
