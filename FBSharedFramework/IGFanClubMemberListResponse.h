//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFanClubMemberListResponse_h
#define IGFanClubMemberListResponse_h
@import Foundation;

#include "IGLoadMoreResponseType-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGFanClubMemberListResponse : NSObject<IGLoadMoreResponseType> {
  /* instance variables */
  NSString *_maxId;
  NSArray *_displayedMembers;
  NSDictionary *_memberDates;
}

@property (readonly, nonatomic) BOOL moreAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDisplayedMembers:(id)members memberDates:(id)dates maxId:(id)id moreAvailable:(BOOL)available;
- (id)maxId;
- (BOOL)isMoreAvailable;
@end

#endif /* IGFanClubMemberListResponse_h */