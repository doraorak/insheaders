//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXDiscoverPeopleACUpsell_h
#define IGFXDiscoverPeopleACUpsell_h
@import Foundation;

#include "IGFXUpsellDataFetcher.h"
#include "IGFXUpsellServerImpressionLogger.h"

@class IGUserSessionProvider;

@interface IGFXDiscoverPeopleACUpsell : NSObject {
  /* instance variables */
  IGFXUpsellDataFetcher *_dataFetcher;
  IGFXUpsellServerImpressionLogger *_serverLogger;
  IGUserSessionProvider *_userSessionProvider;
  BOOL _isEligibleDiscoverPeopleUpsell;
  BOOL _isEligibleDiscoverPeopleNUXUpsell;
}

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider dataFetcher:(id)fetcher serverLogger:(id)logger;
@end

#endif /* IGFXDiscoverPeopleACUpsell_h */
