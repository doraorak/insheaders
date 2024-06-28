//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPrefetchManaging_Protocol_h
#define IGPrefetchManaging_Protocol_h
@import Foundation;

@protocol IGPrefetchManaging <NSObject>
/* instance methods */
- (void)prefetchMediaForItems:(id)items module:(id)module lazyLoadAudioTrack:(BOOL)track;
- (void)prefetchMediaForItems:(id)items module:(id)module lazyLoadAudioTrack:(BOOL)track;
- (void)prefetchMediaForItems:(id)items module:(id)module isReload:(BOOL)reload offset:(unsigned long long)offset lazyLoadAudioTrack:(BOOL)track;
- (void)prefetchMediaForItems:(id)items module:(id)module isReload:(BOOL)reload offset:(unsigned long long)offset lazyLoadAudioTrack:(BOOL)track;
- (void)bulkPrefetchVideos:(id)videos module:(id)module organicPrefetchConfig:(id)config adsPrefetchConfig:(id)config lazyLoadAudioTrack:(BOOL)track callsite:(Class)callsite isImmersive:(BOOL)immersive trackingWith:(id)with completionHandler:(id /* block */)handler;
- (void)cancelLoadingVideo:(id)video;
@end

#endif /* IGPrefetchManaging_Protocol_h */
