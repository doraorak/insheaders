//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaUploadFlowLoggingInfo_h
#define FBMediaUploadFlowLoggingInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FBMediaUploadFlowLoggingInfo : NSObject<NSCoding>

@property (readonly, copy, nonatomic) NSString *moduleName;
@property (readonly, copy, nonatomic) NSString *waterfallID;
@property (readonly, copy, nonatomic) NSString *sourceType;
@property (readonly, copy, nonatomic) NSString *mediaType;
@property (readonly, copy, nonatomic) NSDictionary *extraLoggingData;

/* instance methods */
- (id)initWithModuleName:(id)name waterfallID:(id)id sourceType:(id)type mediaType:(id)type extraLoggingData:(id)data;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* FBMediaUploadFlowLoggingInfo_h */
