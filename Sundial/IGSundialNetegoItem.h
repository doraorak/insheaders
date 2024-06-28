//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialNetegoItem_h
#define IGSundialNetegoItem_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAdPlatformGapRules.h"
#include "IGListDiffable-Protocol.h"
#include "IGMedia.h"
#include "IGSundialNetegoThreadsItem.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGSundialNetegoItem : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *mediaID;
@property (readonly, copy, nonatomic) NSString *netegoType;
@property (readonly, nonatomic) long long viewStateItemType;
@property (readonly, copy, nonatomic) NSString *trackingToken;
@property (readonly, copy, nonatomic) IGAdPlatformGapRules *gapRules;
@property (readonly, copy, nonatomic) IGMedia *media;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, copy, nonatomic) NSString *buttonBloksAction;
@property (readonly, copy, nonatomic) NSString *buttonBloksParams;
@property (readonly, nonatomic) BOOL isDismissable;
@property (readonly, copy, nonatomic) NSString *iconUrl;
@property (readonly, copy, nonatomic) NSArray *suggestedUsers;
@property (readonly, copy, nonatomic) NSArray *clipsMedia;
@property (readonly, copy, nonatomic) IGSundialNetegoThreadsItem *threadsPosts;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMediaID:(id)id netegoType:(id)type viewStateItemType:(long long)type trackingToken:(id)token gapRules:(id)rules media:(id)media title:(id)title message:(id)message buttonText:(id)text buttonBloksAction:(id)action buttonBloksParams:(id)params isDismissable:(BOOL)dismissable iconUrl:(id)url suggestedUsers:(id)users clipsMedia:(id)media threadsPosts:(id)posts;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGSundialNetegoItem_h */