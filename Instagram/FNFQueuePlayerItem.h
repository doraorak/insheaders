//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFQueuePlayerItem_h
#define FNFQueuePlayerItem_h
@import Foundation;

@class NSString, NSURL;

@interface FNFQueuePlayerItem : NSObject

@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) NSURL *sdProgressiveURL;
@property (readonly, nonatomic) NSURL *hdProgressiveURL;
@property (readonly, nonatomic) NSString *dashManifest;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double expiry;
@property (readonly, nonatomic) NSString *videoID;
@property (readonly, nonatomic) BOOL isFallback;

/* instance methods */
- (id)initWithVideoID:(id)id isLocal:(BOOL)local sdProgressiveURL:(id)url hdProgressiveURL:(id)url dashManifest:(id)manifest duration:(double)duration expiry:(double)expiry isFallback:(BOOL)fallback;
@end

#endif /* FNFQueuePlayerItem_h */