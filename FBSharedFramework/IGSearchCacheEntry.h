//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchCacheEntry_h
#define IGSearchCacheEntry_h
@import Foundation;

#include "IGSearchResultsResponse.h"

@class NSDictionary, NSOrderedSet, NSString;

@interface IGSearchCacheEntry : NSObject {
  /* instance variables */
  IGSearchResultsResponse *_resultsResponse;
  NSOrderedSet *_localSuggestions;
}

@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly, copy, nonatomic) NSDictionary *additionalParams;
@property (copy, nonatomic) NSOrderedSet *suggestions;
@property unsigned long long state;
@property (readonly, copy, nonatomic) NSString *rankToken;
@property (readonly, copy, nonatomic) NSDictionary *analyticsInfo;

/* instance methods */
- (id)initWithQueryString:(id)string additionalParams:(id)params;
- (void)reset;
@end

#endif /* IGSearchCacheEntry_h */
