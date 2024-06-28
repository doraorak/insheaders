//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPrivacyUIIScannerURL_h
#define FBPrivacyUIIScannerURL_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface FBPrivacyUIIScannerURL : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_scannerQueue;
}

/* class methods */
+ (id)newWithHeuristicTypes:(unsigned long long)types;

/* instance methods */
- (id)init;
- (id)initWithHeuristicTypes:(unsigned long long)types;
- (void)runWithURL:(id)url source:(id)source skippedParams:(id)params sourceStackTrace:(id)trace callback:(id /* block */)callback;
@end

#endif /* FBPrivacyUIIScannerURL_h */