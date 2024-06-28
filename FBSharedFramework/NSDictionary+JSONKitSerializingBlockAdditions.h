//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSDictionary_JSONKitSerializingBlockAdditions_h
#define NSDictionary_JSONKitSerializingBlockAdditions_h
@import Foundation;

@interface NSDictionary (JSONKitSerializingBlockAdditions)
/* instance methods */
- (id)fb_JSONDataWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingBlock:(id /* block */)block error:(id *)error;
- (id)fb_JSONStringWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingBlock:(id /* block */)block error:(id *)error;
- (id)JSONDataWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingBlock:(id /* block */)block error:(id *)error;
- (id)JSONStringWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingBlock:(id /* block */)block error:(id *)error;
@end

#endif /* NSDictionary_JSONKitSerializingBlockAdditions_h */
