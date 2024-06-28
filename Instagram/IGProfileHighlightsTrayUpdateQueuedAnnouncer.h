//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileHighlightsTrayUpdateQueuedAnnouncer_h
#define IGProfileHighlightsTrayUpdateQueuedAnnouncer_h
@import Foundation;

@protocol IGProfileHighlightsTrayUpdateAnnouncer, OS_dispatch_queue;

@interface IGProfileHighlightsTrayUpdateQueuedAnnouncer : NSObject {
  /* instance variables */
  NSObject<IGProfileHighlightsTrayUpdateAnnouncer> *_announcer;
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _launchReelBlock;
}

/* instance methods */
- (id)init;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)dataSourceWasUpdated;
- (void)launchReel:(id)reel atPosition:(long long)position withFocusedReelMediaID:(id)id withViewerDelegate:(id)delegate;
@end

#endif /* IGProfileHighlightsTrayUpdateQueuedAnnouncer_h */