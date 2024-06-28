//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioClipMediaSourceId_h
#define IGAudioClipMediaSourceId_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGAudioClipMediaSourceId : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_licensedMusic_audioClusterId;
  NSString *_licensedMusic_audioAssetId;
  NSString *_originalAudio_originalSoundId;
}

/* class methods */
+ (id)licensedMusicWithAudioClusterId:(id)id audioAssetId:(id)id;
+ (id)originalAudioWithOriginalSoundId:(id)id;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGAudioClipMediaSourceId_h */