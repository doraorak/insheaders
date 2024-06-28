//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPictureInPictureVideoFetcher_h
#define IGPictureInPictureVideoFetcher_h
@import Foundation;

@interface IGPictureInPictureVideoFetcher : NSObject { // (Swift)
  /* instance variables */
   featureSets;
   networker;
   mediaStore;
   sessionTracker;
   nextMaxID;
   isFetching;
}

/* instance methods */
- (id)initWithFeatureSets:(id)sets networker:(id)networker mediaStore:(id)store;
- (void)fetchMoreVideosWithCompletion:(id /* block */)completion;
- (void)updateNextMaxIDFromResponseObjectWithResponseObject:(id)object;
- (id)getVideosFromResponseObjectWithResponseObject:(id)object;
- (id)init;
@end

#endif /* IGPictureInPictureVideoFetcher_h */
