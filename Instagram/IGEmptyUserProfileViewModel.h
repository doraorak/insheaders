//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmptyUserProfileViewModel_h
#define IGEmptyUserProfileViewModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@interface IGEmptyUserProfileViewModel : NSObject<IGListDiffable>

@property (readonly, nonatomic) long long status;

/* instance methods */
- (id)initWithEmptyProfileFollowStatus:(long long)status;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGEmptyUserProfileViewModel_h */
