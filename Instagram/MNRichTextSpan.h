//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MNRichTextSpan_h
#define MNRichTextSpan_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSURL;

@interface MNRichTextSpan : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) long long nestingLevel;
@property (readonly, copy, nonatomic) NSURL *url;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range style:(unsigned long long)style nestingLevel:(long long)level url:(id)url;
@end

#endif /* MNRichTextSpan_h */