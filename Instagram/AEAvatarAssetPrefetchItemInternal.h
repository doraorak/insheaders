//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEAvatarAssetPrefetchItemInternal_h
#define AEAvatarAssetPrefetchItemInternal_h
@import Foundation;

#include "FBValueObject.h"
#include "AEAvatarAssetPrefetchItem.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface AEAvatarAssetPrefetchItemInternal : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) AEAvatarAssetPrefetchItem *item;
@property (readonly, nonatomic) long long surfaceType;
@property (readonly, copy, nonatomic) NSString *trigger;
@property (readonly, copy, nonatomic) NSDate *addedToQueueTime;

/* instance methods */
- (id)initWithItem:(id)item surfaceType:(long long)type trigger:(id)trigger addedToQueueTime:(id)time;
@end

#endif /* AEAvatarAssetPrefetchItemInternal_h */