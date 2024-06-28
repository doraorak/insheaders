//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPlaybackComposableSession_IGFeedPlaybackEventRelay_h
#define IGFeedPlaybackComposableSession_IGFeedPlaybackEventRelay_h
@import Foundation;

#include "IGModernFeedVideoCellListener-Protocol.h"
#include "IGPlaybackCoordinatorUpdateListener-Protocol.h"

@interface IGFeedPlaybackComposableSession (IGFeedPlaybackEventRelay) <IGFeedPlaybackCompatible>
/* class methods */
+ (unsigned char)eventRelayKey;
+ (void)setEventRelayKey:(unsigned char)key;

/* instance methods */
- (id)managedFeedCell;
- (void)addVideoListener:(id)listener;
- (id)eventRelay;
@end

#endif /* IGFeedPlaybackComposableSession_IGFeedPlaybackEventRelay_h */
