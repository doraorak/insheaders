//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemInfoCardInteractiveViewDelegate_Protocol_h
#define IGFeedItemInfoCardInteractiveViewDelegate_Protocol_h
@import Foundation;

@protocol IGFeedItemInfoCardInteractiveViewDelegate <NSObject>
/* instance methods */
- (void)infoCardDidDoubleTapToLikeWithLocationInfo:(id)info;
- (void)infoCardDidSingleTapOnPosition:(struct CGPoint { double x0; double x1; })position;
- (void)infoCardViewDidShowTagWithReason:(unsigned long long)reason;
- (void)infoCardViewDidHideTagWithReason:(unsigned long long)reason;
@end

#endif /* IGFeedItemInfoCardInteractiveViewDelegate_Protocol_h */
