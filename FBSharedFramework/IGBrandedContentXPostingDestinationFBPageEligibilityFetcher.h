//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandedContentXPostingDestinationFBPageEligibilityFetcher_h
#define IGBrandedContentXPostingDestinationFBPageEligibilityFetcher_h
@import Foundation;

#include "IGUser.h"
#include "PNPandoGraphQLService.h"

@protocol BrandedContentXPostingDestinationFBPageEligibilityQueryResponse;

@interface IGBrandedContentXPostingDestinationFBPageEligibilityFetcher : NSObject {
  /* instance variables */
  PNPandoGraphQLService *_pandoGraphQLService;
  IGUser *_user;
  NSObject<BrandedContentXPostingDestinationFBPageEligibilityQueryResponse> *_response;
}

/* instance methods */
- (id)initWithGraphQLService:(id)qlservice user:(id)user;
@end

#endif /* IGBrandedContentXPostingDestinationFBPageEligibilityFetcher_h */
