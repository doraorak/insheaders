//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CTAudioSync_h
#define CTAudioSync_h
@import Foundation;

@protocol {unique_ptr<facebook::xplat::cvat::audiosync::AudioSync, std::default_delete<facebook::xplat::cvat::audiosync::AudioSync>>="__ptr_"{__compressed_pair<facebook::xplat::cvat::audiosync::AudioSync *, std::default_delete<facebook::xplat::cvat::audiosync::AudioSync>>="__value_"^{AudioSync}}};

@interface CTAudioSync : NSObject {
  /* instance variables */
  struct unique_ptr<facebook::xplat::cvat::audiosync::AudioSync, std::default_delete<facebook::xplat::cvat::audiosync::AudioSync>> { struct __compressed_pair<facebook::xplat::cvat::audiosync::AudioSync *, std::default_delete<facebook::xplat::cvat::audiosync::AudioSync>> { struct AudioSync *__value_; } __ptr_; } _audioSync;
  BOOL _wasPerformed;
  double _processingTime;
}

/* instance methods */
- (id)initWithBaseSamples:(int)samples baseSampleRate:(double)rate refSamples:(int)samples refSampleRate:(double)rate;
- (id)status;
@end

#endif /* CTAudioSync_h */
