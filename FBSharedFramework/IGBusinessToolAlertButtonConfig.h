//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBusinessToolAlertButtonConfig_h
#define IGBusinessToolAlertButtonConfig_h
@import Foundation;

@class NSString;

@interface IGBusinessToolAlertButtonConfig : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) long long style;

/* instance methods */
- (id)initWithTitle:(id)title action:(id /* block */)action style:(long long)style;
@end

#endif /* IGBusinessToolAlertButtonConfig_h */
