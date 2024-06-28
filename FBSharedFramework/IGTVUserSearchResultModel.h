//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVUserSearchResultModel_h
#define IGTVUserSearchResultModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGSearchableItem-Protocol.h"
#include "IGTVChannelResponse.h"
#include "IGUser.h"

@class NSString;

@interface IGTVUserSearchResultModel : NSObject<IGListDiffable, IGSearchableItem>

@property (readonly, copy, nonatomic) IGUser *user;
@property (readonly, copy, nonatomic) IGTVChannelResponse *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user channel:(id)channel;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)searchID;
- (id)searchableContent;
@end

#endif /* IGTVUserSearchResultModel_h */
