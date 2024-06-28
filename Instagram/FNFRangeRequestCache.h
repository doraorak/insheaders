//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFRangeRequestCache_h
#define FNFRangeRequestCache_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSCache, NSString;

@interface FNFRangeRequestCache : NSObject<NSObject> {
  /* instance variables */
  struct { unsigned long long memoryCacheCapacity; NSString *diskCacheDir; } _config;
  NSCache *_cache;
}

@property (nonatomic) BOOL diskCacheEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedCache;

/* instance methods */
- (id)init;
- (id)initWithConfig:(struct { unsigned long long x0; id x1; })config;
- (void)cacheData:(id)data videoUrl:(id)url range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range totalLength:(unsigned long long)length;
- (void)dataWithVideoUrl:(id)url range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range completionBlock:(id /* block */)block;
- (id)folderPathWithURL:(id)url;
- (id)filePathWithURL:(id)url range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* FNFRangeRequestCache_h */