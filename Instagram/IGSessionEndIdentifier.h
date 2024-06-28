//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSessionEndIdentifier_h
#define IGSessionEndIdentifier_h
@import Foundation;

@class NSString;
@protocol IGSessionEndIdentifierDelegate;

@interface IGSessionEndIdentifier : NSObject {
  /* instance variables */
  NSObject<IGSessionEndIdentifierDelegate> *_delegate;
  NSString *_reason;
}

/* instance methods */
- (id)initWithReason:(id)reason delegate:(id)delegate;
- (id)reason;
- (void)dealloc;
@end

#endif /* IGSessionEndIdentifier_h */
