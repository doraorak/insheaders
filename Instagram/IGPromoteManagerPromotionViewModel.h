//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteManagerPromotionViewModel_h
#define IGPromoteManagerPromotionViewModel_h
@import Foundation;

#include "IGValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGPromoteManagerPromotionViewModel : IGValueObject<IGListDiffable, NSCopying, NSCoding>
/* class methods */
+ (void)initialize;

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)metricName;
- (id)metricValue;
@end

#endif /* IGPromoteManagerPromotionViewModel_h */
