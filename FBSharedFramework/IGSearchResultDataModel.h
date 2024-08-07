//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchResultDataModel_h
#define IGSearchResultDataModel_h
@import Foundation;

#include "IGSearchableItem-Protocol.h"

@class NSString;

@interface IGSearchResultDataModel : NSObject

@property (readonly, nonatomic) NSObject<IGSearchableItem> *searchableItem;
@property (readonly, copy, nonatomic) NSString *sectionType;
@property (readonly, copy, nonatomic) NSString *subtitle;

/* instance methods */
- (id)initWithSearchableItem:(id)item sectionType:(id)type subtitle:(id)subtitle;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* IGSearchResultDataModel_h */
