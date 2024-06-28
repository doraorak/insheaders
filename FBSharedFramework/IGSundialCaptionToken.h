//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCaptionToken_h
#define IGSundialCaptionToken_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IGSundialCaptionToken : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSString *editedText;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) BOOL isBleep;
@property (readonly, nonatomic) BOOL isProfanity;
@property (readonly, nonatomic) BOOL characterBased;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid originalText:(id)text editedText:(id)text startTime:(double)time endTime:(double)time isBleep:(BOOL)bleep isProfanity:(BOOL)profanity characterBased:(BOOL)based;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGSundialCaptionToken_h */
