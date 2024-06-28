//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAssistantMessageAggregator_h
#define FBAssistantMessageAggregator_h
@import Foundation;

#include "FBAssistantConsoleLogging-Protocol.h"
#include "FBAssistantMessageAggregatorDelegate-Protocol.h"

@class NSMutableData;

@interface FBAssistantMessageAggregator : NSObject {
  /* instance variables */
  NSMutableData *_dataSoFar;
  struct { unsigned char version; unsigned short type; unsigned int size; unsigned short origin_app; unsigned short target_app; unsigned int xref_id; unsigned char status; } _header;
  int _bytesLeft;
  NSObject<FBAssistantConsoleLogging> *_logger;
}

@property (weak, nonatomic) NSObject<FBAssistantMessageAggregatorDelegate> *delegate;

/* instance methods */
- (id)initWithConsoleLogger:(id)logger;
@end

#endif /* FBAssistantMessageAggregator_h */