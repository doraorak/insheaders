//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPictureInPictureVideoStore_h
#define IGPictureInPictureVideoStore_h
@import Foundation;

@interface IGPictureInPictureVideoStore : NSObject { // (Swift)
  /* instance variables */
   featureSets;
   videoFetcher;
   videosInStore;
   queue;
   videoCountLeftInStoreThresholdToFetchMoreVideos;
}

/* instance methods */
- (id)initWithFeatureSets:(id)sets networker:(id)networker mediaStore:(id)store;
- (void)asyncSaveVideosToStoreWith:(id)with;
- (void)saveVideosToStoreWith:(id)with;
- (void)fetchAndSaveVideosToStoreWithCompletion:(id /* block */)completion;
- (void)getNextVideoFor:(id)for completion:(id /* block */)completion;
- (void)getPreviousVideoFor:(id)for completion:(id /* block */)completion;
- (id)init;
@end

#endif /* IGPictureInPictureVideoStore_h */
