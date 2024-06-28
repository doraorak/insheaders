//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ODZeroDayLanguageMutationRequest_h
#define ODZeroDayLanguageMutationRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "ODZeroDayLanguageDeviceSignals.h"

@interface ODZeroDayLanguageMutationRequest : NSObject<NSCopying> // (Swift)

@property (nonatomic, readonly) ODZeroDayLanguageDeviceSignals *deviceSignals;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (id)init;
@end

#endif /* ODZeroDayLanguageMutationRequest_h */
