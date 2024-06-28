//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaCustomActionInfo_h
#define IGMediaCustomActionInfo_h
@import Foundation;

@interface IGMediaCustomActionInfo : NSObject

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) id /* block */ actionHandler;

/* instance methods */
- (id)initWithActionType:(unsigned long long)type actionHandler:(id /* block */)handler;
@end

#endif /* IGMediaCustomActionInfo_h */
