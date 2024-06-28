//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInterestPickerLogger_h
#define IGInterestPickerLogger_h
@import Foundation;

@class IGUserSession, NSString;

@interface IGInterestPickerLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_module;
  NSString *_entryPoint;
}

/* instance methods */
- (id)initWithModule:(id)module userSession:(id)session entryPoint:(id)point;
@end

#endif /* IGInterestPickerLogger_h */
