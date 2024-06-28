//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEEmbodimentSharedCDLCacheKey_h
#define AEEmbodimentSharedCDLCacheKey_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AEEmbodimentSharedCDLCacheKey : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *sessionId;
@property (readonly, copy, nonatomic) NSString *avatarRevisionId;
@property (readonly, copy, nonatomic) NSString *profileName;
@property (readonly, copy, nonatomic) NSString *deliverySpecId;
@property (readonly, nonatomic) BOOL shouldRenderUsingLegacyAssets;
@property (readonly, nonatomic) BOOL isALE;

/* instance methods */
- (id)initWithSessionId:(id)id avatarRevisionId:(id)id profileName:(id)name deliverySpecId:(id)id shouldRenderUsingLegacyAssets:(BOOL)assets isALE:(BOOL)ale;
@end

#endif /* AEEmbodimentSharedCDLCacheKey_h */