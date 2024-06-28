//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCVideoCodecInfo_h
#define FB_RTCVideoCodecInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FB_RTCVideoCodecInfo : NSObject<NSCoding>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *parameters;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithName:(id)name parameters:(id)parameters;
- (BOOL)isEqualToCodecInfo:(id)info;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FB_RTCVideoCodecInfo_h */