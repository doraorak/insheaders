//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFNFLiveTraceManagers_h
#define IGFNFLiveTraceManagers_h
@import Foundation;

@class NSMutableDictionary, NSString;

@interface IGFNFLiveTraceManagers : NSObject {
  /* instance variables */
  NSMutableDictionary *_liveTraceManagers;
  NSString *_userId;
}

/* instance methods */
- (id)initWithUserId:(id)id;
@end

#endif /* IGFNFLiveTraceManagers_h */