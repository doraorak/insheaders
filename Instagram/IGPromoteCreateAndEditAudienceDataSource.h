//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteCreateAndEditAudienceDataSource_h
#define IGPromoteCreateAndEditAudienceDataSource_h
@import Foundation;

#include "IGPromoteAudiencePotentialReachFetcher.h"
#include "IGPromoteCreateAndEditAudienceStore.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGPromoteAudiencePotentialPeopleReachedUpdateAnnouncer;

@interface IGPromoteCreateAndEditAudienceDataSource : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_session;
  NSObject<IGPromoteAudiencePotentialPeopleReachedUpdateAnnouncer> *_peopleReachAnnouncer;
  IGPromoteAudiencePotentialReachFetcher *_potentialReachFetcher;
}

@property (readonly, nonatomic) IGPromoteCreateAndEditAudienceStore *createAndEditAudienceStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session createAndEditAudienceStore:(id)store;
- (id)peopleReachAnnouncer;
- (void)fetchPotentialReachWithOverrideParameters:(id)parameters flowID:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
@end

#endif /* IGPromoteCreateAndEditAudienceDataSource_h */
