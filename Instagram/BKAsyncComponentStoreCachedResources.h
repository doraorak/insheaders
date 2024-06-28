//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKAsyncComponentStoreCachedResources_h
#define BKAsyncComponentStoreCachedResources_h
@import Foundation;

#include "BKAsyncComponentStoreCachedEntry-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface BKAsyncComponentStoreCachedResources : NSObject<NSCoding, BKAsyncComponentStoreCachedEntry>

@property (readonly, nonatomic) NSArray *acqResources;
@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isFreshForCacheTTL:(double)ttl;
- (id)cacheResponse;
@end

#endif /* BKAsyncComponentStoreCachedResources_h */
