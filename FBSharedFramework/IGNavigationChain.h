//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationChain_h
#define IGNavigationChain_h
@import Foundation;

@class NSMutableArray, NSString;

@interface IGNavigationChain : NSObject {
  /* instance variables */
  NSMutableArray *_chain;
  NSString *_cached;
  long long _maxItemsKeptFromBottom;
  long long _maxItemsKeptFromTop;
  long long _characterLimit;
  BOOL _lastVisitTimestampEnabled;
}

/* instance methods */
- (id)initWithCharacterLimit:(long long)limit lastVisitTimestampEnabled:(BOOL)enabled;
- (void)push:(id)push;
- (void)clearCache;
@end

#endif /* IGNavigationChain_h */