//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGApplicationWillEnterForegroundAnnouncerHelper_h
#define IGApplicationWillEnterForegroundAnnouncerHelper_h
@import Foundation;

@class NSMutableArray;

@interface IGApplicationWillEnterForegroundAnnouncerHelper : NSObject {
  /* instance variables */
  NSMutableArray *_items;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addIGApplicationWillEnteroregroundListenerToArray:(id)array;
- (void)addItemsInArrayAsListenersForIGApplicationWillEnterForegroundAnnouncer;
@end

#endif /* IGApplicationWillEnterForegroundAnnouncerHelper_h */