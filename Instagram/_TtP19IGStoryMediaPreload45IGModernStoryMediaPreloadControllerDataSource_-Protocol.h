//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP19IGStoryMediaPreload45IGModernStoryMediaPreloadControllerDataSource__Protocol_h
#define _TtP19IGStoryMediaPreload45IGModernStoryMediaPreloadControllerDataSource__Protocol_h
@import Foundation;

@protocol _TtP19IGStoryMediaPreload45IGModernStoryMediaPreloadControllerDataSource_ 
/* instance methods */
- (BOOL)shouldPreloadFrom:(long long)from preloadController:(id)controller;
- (BOOL)shouldPrefetch:(id)prefetch rootStoryIndex:(long long)index preloadController:(id)controller;
- (BOOL)shouldWarmup:(id)warmup rootStoryIndex:(long long)index preloadController:(id)controller;
- (id)storyItemAt:(long long)at offsetFromCurrent:(long long)current preloadController:(id)controller;
- (id)videoConfigFor:(long long)for storyItem:(id)item preloadController:(id)controller;
@end

#endif /* _TtP19IGStoryMediaPreload45IGModernStoryMediaPreloadControllerDataSource__Protocol_h */
