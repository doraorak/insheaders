//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMapPin_h
#define IGMapPin_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPILocationDict.h"
#include "IGListDiffable-Protocol.h"
#include "IGLocationInfoPageModel.h"
#include "IGMedia.h"
#include "IGStory.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface IGMapPin : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pinType;
@property (readonly, copy, nonatomic) NSNumber *lat;
@property (readonly, copy, nonatomic) NSNumber *lng;
@property (readonly, copy, nonatomic) NSNumber *rank;
@property (readonly, copy, nonatomic) IGLocationInfoPageModel *pageInfo;
@property (readonly, copy, nonatomic) IGAPILocationDict *location;
@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, copy, nonatomic) NSString *thumbnailUrl;
@property (readonly, copy, nonatomic) NSArray *previewMedias;
@property (readonly, copy, nonatomic) NSString *mediaCountString;
@property (readonly, copy, nonatomic) IGStory *story;
@property (readonly, copy, nonatomic) IGMedia *media;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPinType:(id)type lat:(id)lat lng:(id)lng rank:(id)rank pageInfo:(id)info location:(id)location mediaId:(id)id thumbnailUrl:(id)url previewMedias:(id)medias mediaCountString:(id)string story:(id)story media:(id)media;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGMapPin_h */
