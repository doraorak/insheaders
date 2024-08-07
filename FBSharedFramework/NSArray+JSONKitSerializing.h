//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSArray_JSONKitSerializing_h
#define NSArray_JSONKitSerializing_h
@import Foundation;

@interface NSArray (JSONKitSerializing)
/* instance methods */
- (id)fb_JSONData;
- (id)fb_JSONDataWithOptions:(unsigned long long)options error:(id *)error;
- (id)fb_JSONDataWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id *)error;
- (id)fb_JSONString;
- (id)fb_JSONStringWithOptions:(unsigned long long)options error:(id *)error;
- (id)fb_JSONStringWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id *)error;
- (id)JSONData;
- (id)JSONDataWithOptions:(unsigned long long)options error:(id *)error;
- (id)JSONDataWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id *)error;
- (id)JSONString;
- (id)JSONStringWithOptions:(unsigned long long)options error:(id *)error;
- (id)JSONStringWithOptions:(unsigned long long)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id *)error;
@end

#endif /* NSArray_JSONKitSerializing_h */
