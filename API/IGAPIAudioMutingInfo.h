//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIAudioMutingInfo_h
#define IGAPIAudioMutingInfo_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIAudioMutingInfo : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAllowAudioEditing:(id)editing muteAudio:(id)audio muteReason:(id)reason muteReasonStr:(id)str showMutedAudioToast:(id)toast;
@end

#endif /* IGAPIAudioMutingInfo_h */
