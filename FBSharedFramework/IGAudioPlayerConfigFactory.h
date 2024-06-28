//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioPlayerConfigFactory_h
#define IGAudioPlayerConfigFactory_h
@import Foundation;

@interface IGAudioPlayerConfigFactory : NSObject // (Swift)
/* class methods */
+ (id)audioPlayerConfigForLicensedMusicWithAudioClusterId:(id)id audioDerivedContentId:(id)id artistId:(id)id viewerSessionId:(id)id analyticsModule:(id)module;
+ (id)audioPlayerConfigForLicensedMusicWithAudioClusterId:(id)id audioDerivedContentId:(id)id artistId:(id)id analyticsModule:(id)module;
+ (id)audioPlayerConfigWithAudioAsset:(id)asset analyticsModule:(id)module;
+ (id)audioPlayerConfigWithAudioModel:(id)model analyticsModule:(id)module;

/* instance methods */
- (id)init;
@end

#endif /* IGAudioPlayerConfigFactory_h */