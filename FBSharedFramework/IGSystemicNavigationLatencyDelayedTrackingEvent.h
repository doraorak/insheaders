//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSystemicNavigationLatencyDelayedTrackingEvent_h
#define IGSystemicNavigationLatencyDelayedTrackingEvent_h
@import Foundation;

@class NSString, NSURL, UIView;

@interface IGSystemicNavigationLatencyDelayedTrackingEvent : NSObject

@property (readonly, nonatomic) long long message;
@property (readonly, nonatomic) BOOL animated;
@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, weak, nonatomic) id player;

/* class methods */
+ (id)viewEventWithMessage:(long long)message animated:(BOOL)animated;
+ (id)mediaEventWithMessage:(long long)message key:(id)key url:(id)url view:(id)view player:(id)player timestamp:(double)timestamp;

/* instance methods */
@end

#endif /* IGSystemicNavigationLatencyDelayedTrackingEvent_h */
