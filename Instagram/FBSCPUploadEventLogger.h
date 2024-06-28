//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSCPUploadEventLogger_h
#define FBSCPUploadEventLogger_h
@import Foundation;

#include "FBSCPEventLogger.h"

@class NSDictionary, NSString;

@interface FBSCPUploadEventLogger : FBSCPEventLogger {
  /* instance variables */
  NSString *_product;
  NSString *_sessionId;
  NSString *_submissionId;
  NSDictionary *_tags;
}

/* instance methods */
- (id)initWithProduct:(id)product submissionId:(id)id;
- (id)productName;
- (id)sessionId;
- (id)submissionId;
- (id)tags;
- (id)flowTypeName;
@end

#endif /* FBSCPUploadEventLogger_h */
