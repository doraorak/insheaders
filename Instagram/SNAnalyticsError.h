//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnalyticsError_h
#define SNAnalyticsError_h
@import Foundation;

@class NSDictionary, NSString;

@interface SNAnalyticsError : NSObject

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDictionary *data;

/* instance methods */
- (id)initWithCategory:(id)category name:(id)name code:(long long)code message:(id)message data:(id)data;
@end

#endif /* SNAnalyticsError_h */