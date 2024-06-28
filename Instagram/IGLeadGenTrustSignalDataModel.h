//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenTrustSignalDataModel_h
#define IGLeadGenTrustSignalDataModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGLeadGenTrustSignalDataModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, nonatomic) long long signalType;
@property (readonly, copy, nonatomic) NSString *signalValue;
@property (readonly, copy, nonatomic) NSString *signalRank;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSignalType:(long long)type signalValue:(id)value signalRank:(id)rank;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGLeadGenTrustSignalDataModel_h */
