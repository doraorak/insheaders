//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpdatesHubCalendarEntry_h
#define IGUpdatesHubCalendarEntry_h
@import Foundation;

#include "IGValueObject.h"
#include "IGDayContent-Protocol.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGUpdatesHubCalendarEntry : IGValueObject<IGListDiffable, IGDayContent, NSCopying, NSCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGUpdatesHubCalendarEntry_h */
