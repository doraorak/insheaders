//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBReactAppPerfLoggerProtocol_Protocol_h
#define FBReactAppPerfLoggerProtocol_Protocol_h
@import Foundation;

@protocol FBReactAppPerfLoggerProtocol <NSObject>

@property (readonly, nonatomic) int eventId;

/* instance methods */
- (void)didStartEventAtTime:(unsigned long long)time;
- (void)didCancelEvent;
- (void)didStopEventAtTime:(unsigned long long)time withExtras:(id /* block */)extras annotations:(id /* block */)annotations points:(id /* block */)points tag:(id)tag actionId:(id)id;
@end

#endif /* FBReactAppPerfLoggerProtocol_Protocol_h */