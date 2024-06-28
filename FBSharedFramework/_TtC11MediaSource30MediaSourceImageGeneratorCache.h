//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11MediaSource30MediaSourceImageGeneratorCache_h
#define _TtC11MediaSource30MediaSourceImageGeneratorCache_h
@import Foundation;

@interface _TtC11MediaSource30MediaSourceImageGeneratorCache : NSObject { // (Swift)
  /* instance variables */
   cache;
   encodingType;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)initWithMemoryCapacity:(long long)capacity diskCapacity:(long long)capacity directory:(id)directory encodingType:(long long)type;
- (id)init;
@end

#endif /* _TtC11MediaSource30MediaSourceImageGeneratorCache_h */
