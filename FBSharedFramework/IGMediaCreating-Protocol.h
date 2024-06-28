//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaCreating_Protocol_h
#define IGMediaCreating_Protocol_h
@import Foundation;

@protocol IGMediaCreating <NSObject>
/* instance methods */
- (id)objectWithDict:(id)dict;
- (id)objectWithTree:(id)tree error:(id *)error;
- (id)objectWithStaleTree:(id)tree error:(id *)error;
@end

#endif /* IGMediaCreating_Protocol_h */