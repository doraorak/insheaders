//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAutoCreatedReelHighlightProcessor_h
#define IGSundialAutoCreatedReelHighlightProcessor_h
@import Foundation;

#include "IGStoryOwnStoryMediaLoaderDelegate-Protocol.h"

@interface IGSundialAutoCreatedReelHighlightProcessor : NSObject<IGStoryOwnStoryMediaLoaderDelegate> { // (Swift)
  /* instance variables */
   maxStoriesPerAutoCreatedReel;
   completion;
   userSession;
   reelsFetcher;
   mediaLoaders;
   effects;
   clips;
   mediaOrder;
   cameraPosition;
   analyticsSource;
   mediaPKtoReelPK;
}

/* instance methods */
- (id)initWithUserSession:(id)session cameraPosition:(long long)position analyticsSource:(long long)source;
- (void)prefetchWithReels:(id)reels;
- (void)cancel;
- (void)createSundialCompositionWithReelPK:(id)pk completion:(id /* block */)completion;
- (void)createSundialCompositionWith:(id)with completion:(id /* block */)completion;
- (void)createSundialCompositionWithList:(id)list completion:(id /* block */)completion;
- (void)createSundialCompositionWithMedia:(id)media reelPK:(id)pk completion:(id /* block */)completion;
- (void)storyMediaLoader:(id)loader didLoadVideoData:(id)data;
- (void)storyMediaLoader:(id)loader didLoadImage:(id)image;
- (void)storyMediaLoader:(id)loader didFailCanRetry:(BOOL)retry;
- (id)init;
@end

#endif /* IGSundialAutoCreatedReelHighlightProcessor_h */