//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPConnectorPluginStoriesConfig_h
#define SUPConnectorPluginStoriesConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface SUPConnectorPluginStoriesConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long audioSampleRateHz;
@property (readonly, nonatomic) long long audioChannels;
@property (readonly, nonatomic) BOOL isEnabled;

/* instance methods */
- (id)initWithAudioSampleRateHz:(long long)hz audioChannels:(long long)channels isEnabled:(BOOL)enabled;
@end

#endif /* SUPConnectorPluginStoriesConfig_h */
