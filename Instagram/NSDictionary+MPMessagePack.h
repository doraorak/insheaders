//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSDictionary_MPMessagePack_h
#define NSDictionary_MPMessagePack_h
@import Foundation;

@interface NSDictionary (MPMessagePack)
/* instance methods */
- (id)mp_messagePack;
- (id)mp_messagePack:(long long)pack;
- (id)mp_messagePack:(long long)pack error:(id *)error;
@end

#endif /* NSDictionary_MPMessagePack_h */