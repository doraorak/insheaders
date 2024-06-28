//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BigFootInstagramReporter_h
#define BigFootInstagramReporter_h
@import Foundation;

#include "BigFootReporterBaseImpl.h"
#include "BigFootInstagramSanitisation.h"
#include "FBAnalyticsLogging-Protocol.h"

@class IGUserSession;

@interface BigFootInstagramReporter : BigFootReporterBaseImpl {
  /* instance variables */
  IGUserSession *_session;
  NSObject<FBAnalyticsLogging> *_logger;
  BigFootInstagramSanitisation *_sanitiser;
}

/* instance methods */
- (id)initWithSession:(id)session logger:(id)logger;
- (id)initWithSession:(id)session;
- (void)cancel:(id)cancel;
- (id)dataProviders;
- (void)reportData:(id)data;
- (void)measureAndReportIfSampled;
@end

#endif /* BigFootInstagramReporter_h */