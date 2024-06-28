//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPContextualFilterHelper_h
#define QPContextualFilterHelper_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSMutableDictionary;

@interface QPContextualFilterHelper : NSObject {
  /* instance variables */
  NSMutableDictionary *_filterOverrideMap;
}

@property (readonly, copy, nonatomic) NSObject<NSObject> *session;

/* instance methods */
- (id)initWithSession:(id)session;
- (id)getFiltersEligibilityResultForPromotion:(id)promotion withContext:(id)context;
- (id)checkFilter:(id)filter withContext:(id)context forPromotion:(id)promotion;
- (void)resetFilterOverrides;
- (void)setFilterOverrideForFilterTypeKey:(id)key override:(long long)override;
- (long long)filterOverrideForFilterTypeKey:(id)key;
@end

#endif /* QPContextualFilterHelper_h */
