//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadsFilter_h
#define IGDirectThreadsFilter_h
@import Foundation;

@class NSString;

@interface IGDirectThreadsFilter : NSObject

@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) NSString *filterName;

/* instance methods */
- (id)initWithType:(long long)type;
@end

#endif /* IGDirectThreadsFilter_h */
