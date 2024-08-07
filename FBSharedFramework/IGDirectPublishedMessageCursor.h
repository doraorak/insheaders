//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedMessageCursor_h
#define IGDirectPublishedMessageCursor_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface IGDirectPublishedMessageCursor : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSDate *serverTimestamp;
@property (readonly, copy, nonatomic) NSString *serverId;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithServerTimestamp:(id)timestamp serverId:(id)id;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectPublishedMessageCursor_h */
