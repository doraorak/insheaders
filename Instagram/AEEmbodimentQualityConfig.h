//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEEmbodimentQualityConfig_h
#define AEEmbodimentQualityConfig_h
@import Foundation;

@interface AEEmbodimentQualityConfig : NSObject {
  /* instance variables */
  long long _rawLod;
  BOOL _franzFallback;
  long long _textureSize;
}

@property (readonly, nonatomic) long long lod;

/* instance methods */
- (id)initWithLod:(long long)lod textureSize:(long long)size;
- (id)initWithFranzFallback;
@end

#endif /* AEEmbodimentQualityConfig_h */