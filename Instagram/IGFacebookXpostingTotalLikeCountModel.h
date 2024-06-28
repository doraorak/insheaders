//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFacebookXpostingTotalLikeCountModel_h
#define IGFacebookXpostingTotalLikeCountModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class NSNumber;

@interface IGFacebookXpostingTotalLikeCountModel : NSObject<IGListDiffable>

@property (readonly, nonatomic) NSNumber *likeCount;
@property (readonly, nonatomic) NSNumber *fbLikeCount;

/* instance methods */
- (id)initWithLikeCount:(id)count fbLikeCount:(id)count;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGFacebookXpostingTotalLikeCountModel_h */
