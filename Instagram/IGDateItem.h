//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDateItem_h
#define IGDateItem_h
@import Foundation;

#include "FBValueObject.h"
#include "IGCalendarEntry-Protocol.h"
#include "IGDayContent-Protocol.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface IGDateItem : FBValueObject<IGListDiffable, IGCalendarEntry, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *day;
@property (readonly, nonatomic) NSObject<IGDayContent> *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDate:(id)date day:(id)day content:(id)content;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGDateItem_h */
