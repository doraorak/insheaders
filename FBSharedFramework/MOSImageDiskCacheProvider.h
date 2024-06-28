//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MOSImageDiskCacheProvider_h
#define MOSImageDiskCacheProvider_h
@import Foundation;

#include "MOSDiskCacheProvider-Protocol.h"
#include "MOSDiskCaching-Protocol.h"

@class NSString;

@interface MOSImageDiskCacheProvider : NSObject<MOSDiskCacheProvider> {
  /* instance variables */
  NSObject<MOSDiskCaching> *_diskCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDiskCache:(id)cache;
- (id)diskCache;
@end

#endif /* MOSImageDiskCacheProvider_h */
