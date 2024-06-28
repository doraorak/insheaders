//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCanvasTextInlineStyle_h
#define IGCanvasTextInlineStyle_h
@import Foundation;

#include "NSCoding-Protocol.h"

@interface IGCanvasTextInlineStyle : NSObject<NSCoding>

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long length;
@property (readonly, nonatomic) unsigned long long type;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithType:(unsigned long long)type offset:(long long)offset length:(long long)length;
@end

#endif /* IGCanvasTextInlineStyle_h */