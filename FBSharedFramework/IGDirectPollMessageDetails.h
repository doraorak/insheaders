//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPollMessageDetails_h
#define IGDirectPollMessageDetails_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGDirectPollMessageDetails : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pollId;
@property (readonly, copy, nonatomic) NSString *question;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) BOOL hasViewerVoted;
@property (readonly, copy, nonatomic) NSArray *options;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPollId:(id)id question:(id)question accessibilityLabel:(id)label hasViewerVoted:(BOOL)voted options:(id)options;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectPollMessageDetails_h */