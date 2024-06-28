//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStandaloneFundraiserCellModel_h
#define IGStandaloneFundraiserCellModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface IGStandaloneFundraiserCellModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *fundraiserId;
@property (readonly, copy, nonatomic) NSString *fundraiserTitle;
@property (readonly, nonatomic) BOOL showFundraiserOwnerAttribution;
@property (readonly, nonatomic) BOOL canViewerDonate;
@property (readonly, copy, nonatomic) NSString *ownerUsername;
@property (readonly, copy, nonatomic) NSString *formattedProgressInfoText;
@property (readonly, copy, nonatomic) NSNumber *percentRaised;
@property (readonly, copy, nonatomic) NSDate *endTime;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFundraiserId:(id)id fundraiserTitle:(id)title showFundraiserOwnerAttribution:(BOOL)attribution canViewerDonate:(BOOL)donate ownerUsername:(id)username formattedProgressInfoText:(id)text percentRaised:(id)raised endTime:(id)time;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGStandaloneFundraiserCellModel_h */