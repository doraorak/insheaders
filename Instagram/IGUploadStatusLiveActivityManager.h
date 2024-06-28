//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadStatusLiveActivityManager_h
#define IGUploadStatusLiveActivityManager_h
@import Foundation;

@interface IGUploadStatusLiveActivityManager : NSObject { // (Swift)
  /* instance variables */
   uploadStatusLiveActivityTracker;
   postShareAdapter;
   directMutationAdapter;
}

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (void)subscribeToNewPostFrom:(id)from;
- (void)subscribeToNewDirectMessageFrom:(id)from;
- (id)init;
@end

#endif /* IGUploadStatusLiveActivityManager_h */
