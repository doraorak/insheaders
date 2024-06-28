//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserTrie_h
#define IGUserTrie_h
@import Foundation;

@class NSMutableDictionary;

@interface IGUserTrie : NSObject {
  /* instance variables */
  NSMutableDictionary *_buckets;
}

/* instance methods */
- (id)init;
- (void)removeUser:(id)user;
- (id)allUsers;
@end

#endif /* IGUserTrie_h */