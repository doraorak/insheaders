//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRealtimeMessageOperation_h
#define IGDirectRealtimeMessageOperation_h
@import Foundation;

@class NSString;

@interface IGDirectRealtimeMessageOperation : NSObject {
  /* instance variables */
  id /* block */ _successHandler;
  id /* block */ _failureHandler;
}

@property (readonly, copy, nonatomic) NSString *messageKey;
@property (readonly, copy, nonatomic) NSString *message;

/* instance methods */
- (id)initWithMessageKey:(id)key message:(id)message successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
@end

#endif /* IGDirectRealtimeMessageOperation_h */