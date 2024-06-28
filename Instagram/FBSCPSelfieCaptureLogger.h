//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSCPSelfieCaptureLogger_h
#define FBSCPSelfieCaptureLogger_h
@import Foundation;

#include "FBSCPEventLogger.h"
#include "NSObject-Protocol.h"

@class NSDictionary, NSMutableArray, NSNumberFormatter, NSString;

@interface FBSCPSelfieCaptureLogger : FBSCPEventLogger<NSObject> {
  /* instance variables */
  int _faceAlignmentChangeIndex;
  NSString *_product;
  NSString *_sessionId;
  NSString *_submissionId;
  NSDictionary *_tags;
  NSNumberFormatter *_numberFormatter;
  double _referenceCaptureSessionTime;
}

@property (retain, nonatomic) NSMutableArray *currentCaptureSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)productName;
- (id)sessionId;
- (id)submissionId;
- (id)tags;
- (id)flowTypeName;
- (id)initWithProduct:(id)product sessionId:(id)id submissionId:(id)id tags:(id)tags;
- (void)logFlowStateChangeFrom:(id)from to:(id)to;
- (void)addCaptureSessionState:(id)state;
- (void)logFaceAlignmentChange:(id)change;
- (void)logCaptureSessionEnd;
- (void)logButtonClicked:(id)clicked;
- (void)logCaptureFlowTimedOut;
- (void)logModelDownloadError:(id)error downloader:(id)downloader;
@end

#endif /* FBSCPSelfieCaptureLogger_h */