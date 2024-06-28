//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoBroadcastSessionResult_Protocol_h
#define FBVideoBroadcastSessionResult_Protocol_h
@import Foundation;

#include "FBVideoBroadcastSessionResult-Protocol.h"

@class NSString;
@protocol struct Either<NSError *, FBDiskVideoRecorderDiskResults *> { id x0; id x1; BOOL x2; }, {Either<NSError *, FBDiskVideoRecorderDiskResults *>="_left"@"NSError""_right"@"FBDiskVideoRecorderDiskResults""_isLeft"B};

@protocol FBVideoBroadcastSessionResult <NSObject>
/* instance methods */
- (struct Either<NSError *, FBDiskVideoRecorderDiskResults *> { id x0; id x1; BOOL x2; })diskRecordingResult;
- (struct FBVideoBroadcastSessionLoggingInfo { id x0; id x1; BOOL x2; })loggingInfo;
@end

#endif /* FBVideoBroadcastSessionResult_Protocol_h */
