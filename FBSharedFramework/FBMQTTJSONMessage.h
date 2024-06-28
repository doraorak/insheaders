//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTJSONMessage_h
#define FBMQTTJSONMessage_h
@import Foundation;

@class NSDictionary, NSString;

@interface FBMQTTJSONMessage : NSObject

@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, copy, nonatomic) NSDictionary *payloadDictionary;
@property (readonly, nonatomic) int qos;

/* class methods */
+ (id)messageWithTopic:(id)topic payloadDictionary:(id)dictionary qos:(int)qos;

/* instance methods */
- (id)initWithTopic:(id)topic payloadDictionary:(id)dictionary qos:(int)qos;
- (id)description;
@end

#endif /* FBMQTTJSONMessage_h */