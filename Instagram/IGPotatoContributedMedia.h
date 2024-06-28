//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPotatoContributedMedia_h
#define IGPotatoContributedMedia_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGUser, NSString;
@protocol IGPotatoMediaAsset;

@interface IGPotatoContributedMedia : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, nonatomic) NSObject<IGPotatoMediaAsset> *asset;
@property (readonly, copy, nonatomic) IGUser *author;

/* instance methods */
- (id)initWithPk:(id)pk asset:(id)asset author:(id)author;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGPotatoContributedMedia_h */
