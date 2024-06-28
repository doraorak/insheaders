//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PNPandoGraphQLConnectionConfig_h
#define PNPandoGraphQLConnectionConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PNPandoGraphQLConnectionConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *parentFieldTypeName;
@property (readonly, copy, nonatomic) NSString *pluralField;
@property (readonly, copy, nonatomic) NSString *rawConnectionFieldName;
@property (readonly, copy, nonatomic) NSString *generatedPaginationQueryClientDocId;
@property (readonly, copy, nonatomic) NSString *connectionQueryName;
@property (readonly, copy, nonatomic) NSString *beforeQV;
@property (readonly, copy, nonatomic) NSString *afterQV;
@property (readonly, copy, nonatomic) NSString *firstQV;
@property (readonly, copy, nonatomic) NSString *lastQV;
@property (readonly, copy, nonatomic) NSString *streamEnabledQV;
@property (readonly, copy, nonatomic) NSString *streamInitialCountQV;
@property (readonly, nonatomic) BOOL paginateOnEdge;

/* instance methods */
- (id)initWithParentFieldTypeName:(id)name pluralField:(id)field rawConnectionFieldName:(id)name generatedPaginationQueryClientDocId:(id)id connectionQueryName:(id)name beforeQV:(id)qv afterQV:(id)qv firstQV:(id)qv lastQV:(id)qv streamEnabledQV:(id)qv streamInitialCountQV:(id)qv paginateOnEdge:(BOOL)edge;
@end

#endif /* PNPandoGraphQLConnectionConfig_h */
