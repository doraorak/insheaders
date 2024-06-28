//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNPlayerDebugOverlayStateManager_h
#define SNPlayerDebugOverlayStateManager_h
@import Foundation;

@class NSMutableArray;

@interface SNPlayerDebugOverlayStateManager : NSObject {
  /* instance variables */
  NSMutableArray *_playbackStatesHistory;
  unsigned long long _itemCount;
}

/* instance methods */
- (id)initWithStateHistoryItemCount:(unsigned long long)count;
- (void)setPlaybackState:(unsigned long long)state;
@end

#endif /* SNPlayerDebugOverlayStateManager_h */