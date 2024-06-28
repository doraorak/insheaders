//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFColorFillComponent_h
#define KFColorFillComponent_h
@import Foundation;

#include "KFComponent.h"

@protocol {KFValue<UIColor *>="_value"{variant<bool, UIColor *, KFAnimation<UIColor *> *>="__impl_"{__impl<bool, UIColor *, KFAnimation<UIColor *> *>="__data"(__union<std::__variant_detail::_Trait::_Available, 0UL, bool, UIColor *, KFAnimation<UIColor *> *>="__dummy"c"__head"{__alt<0UL, bool>="__value"B}"__tail"(__union<std::__variant_detail::_Trait::_Available, 1UL, UIColor *, KFAnimation<UIColor *> *>="__dummy"c"__head"{__alt<1UL, UIColor *>="__value"@"UIColor"}"__tail"(__union<std::__variant_detail::_Trait::_Available, 2UL, KFAnimation<UIColor *> *>="__dummy"c"__head"{__alt<2UL, KFAnimation<UIColor *> *>="__value"^v}"__tail"(__union<std::__variant_detail::_Trait::_Available, 3UL>=))))"__index"I}}};

@interface KFColorFillComponent : KFComponent {
  /* instance variables */
  struct KFValue<UIColor *> { struct variant<bool, UIColor *, KFAnimation<UIColor *> *> { struct __impl<bool, UIColor *, KFAnimation<UIColor *> *> { union __union<std::__variant_detail::_Trait::_Available, 0UL, bool, UIColor *, KFAnimation<UIColor *> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, UIColor *, KFAnimation<UIColor *> *> { char __dummy; struct __alt<1UL, UIColor *> { UIColor *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL, KFAnimation<UIColor *> *> { char __dummy; struct __alt<2UL, KFAnimation<UIColor *> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } fillColor;
}

/* class methods */
+ (unsigned short)componentClassIdentifier;

/* instance methods */
@end

#endif /* KFColorFillComponent_h */