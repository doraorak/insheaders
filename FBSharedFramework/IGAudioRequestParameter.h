//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioRequestParameter_h
#define IGAudioRequestParameter_h
@import Foundation;

@class NSString;

@interface IGAudioRequestParameter : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;

/* instance methods */
- (id)initWithName:(id)name value:(id)value;
@end

#endif /* IGAudioRequestParameter_h */
