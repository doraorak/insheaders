//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEEmbodimentQPLAnnotationHelper_Protocol_h
#define AEEmbodimentQPLAnnotationHelper_Protocol_h
@import Foundation;

@protocol AEEmbodimentQPLAnnotationHelper <NSObject>
/* instance methods */
- (void)annotateWithKey:(const char *)key stringValue:(id)value;
- (void)annotateWithKey:(const char *)key boolValue:(BOOL)value;
- (void)annotateWithKey:(const char *)key intValue:(long long)value;
- (void)annotateWithKey:(const char *)key doubleValue:(double)value;
- (void)annotateWithKey:(const char *)key intArray:(id)array;
- (void)annotateWithKey:(const char *)key stringArray:(id)array;
@end

#endif /* AEEmbodimentQPLAnnotationHelper_Protocol_h */
