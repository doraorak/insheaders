//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOdinStorySessionRecord_h
#define IGOdinStorySessionRecord_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface IGOdinStorySessionRecord : FBValueObject<NSCopying, NSCoding, NSSecureCoding>

@property (readonly, nonatomic) long long numberOfTotalItemsConsumedInSession;
@property (readonly, nonatomic) long long numberOfTotalAdsConsumedInSession;
@property (readonly, nonatomic) double storySessionEnded;
@property (readonly, nonatomic) double storySessionLength;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNumberOfTotalItemsConsumedInSession:(long long)session numberOfTotalAdsConsumedInSession:(long long)session storySessionEnded:(double)ended storySessionLength:(double)length;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGOdinStorySessionRecord_h */
