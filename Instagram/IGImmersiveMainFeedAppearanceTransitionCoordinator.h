//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImmersiveMainFeedAppearanceTransitionCoordinator_h
#define IGImmersiveMainFeedAppearanceTransitionCoordinator_h
@import Foundation;

@protocol IGImmersiveFeedAppearanceHandler;

@interface IGImmersiveMainFeedAppearanceTransitionCoordinator : NSObject {
  /* instance variables */
  NSObject<IGImmersiveFeedAppearanceHandler> *_handler;
}

@property (readonly, nonatomic) unsigned long long mode;

/* instance methods */
- (id)initWithMode:(unsigned long long)mode hasTopStoryTray:(BOOL)tray;
- (long long)preferredStatusBarStyle;
- (long long)preferredBarAppearance;
- (void)viewWillAppear:(BOOL)appear;
@end

#endif /* IGImmersiveMainFeedAppearanceTransitionCoordinator_h */
