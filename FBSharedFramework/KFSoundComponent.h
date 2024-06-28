//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFSoundComponent_h
#define KFSoundComponent_h
@import Foundation;

#include "KFComponent.h"

@class AVAudioPlayer;
@protocol {KFValue<double>="_value"{variant<bool, double, KFAnimation<double> *>="__impl_"{__impl<bool, double, KFAnimation<double> *>="__data"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *>="__dummy"c"__head"{__alt<0UL, bool>="__value"B}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *>="__dummy"c"__head"{__alt<1UL, double>="__value"d}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *>="__dummy"c"__head"{__alt<2UL, KFAnimation<double> *>="__value"^v}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL>=))))"__index"I}}};

@interface KFSoundComponent : KFComponent {
  /* instance variables */
  unsigned long long audioAssetResourceID;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } audioLevelLeft;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } audioLevelRight;
  AVAudioPlayer *_audioPlayer;
}

/* class methods */
+ (unsigned short)componentClassIdentifier;

/* instance methods */
- (void)setupForPlaybackWithAssetsComponent:(id)component;
@end

#endif /* KFSoundComponent_h */
