//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFTextComponent_h
#define KFTextComponent_h
@import Foundation;

#include "KFComponent.h"

@class NSString;
@protocol {KFValue<UIColor *>="_value"{variant<bool, UIColor *, KFAnimation<UIColor *> *>="__impl_"{__impl<bool, UIColor *, KFAnimation<UIColor *> *>="__data"(__union<std::__variant_detail::_Trait::_Available, 0UL, bool, UIColor *, KFAnimation<UIColor *> *>="__dummy"c"__head"{__alt<0UL, bool>="__value"B}"__tail"(__union<std::__variant_detail::_Trait::_Available, 1UL, UIColor *, KFAnimation<UIColor *> *>="__dummy"c"__head"{__alt<1UL, UIColor *>="__value"@"UIColor"}"__tail"(__union<std::__variant_detail::_Trait::_Available, 2UL, KFAnimation<UIColor *> *>="__dummy"c"__head"{__alt<2UL, KFAnimation<UIColor *> *>="__value"^v}"__tail"(__union<std::__variant_detail::_Trait::_Available, 3UL>=))))"__index"I}}}, {KFValue<double>="_value"{variant<bool, double, KFAnimation<double> *>="__impl_"{__impl<bool, double, KFAnimation<double> *>="__data"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *>="__dummy"c"__head"{__alt<0UL, bool>="__value"B}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *>="__dummy"c"__head"{__alt<1UL, double>="__value"d}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *>="__dummy"c"__head"{__alt<2UL, KFAnimation<double> *>="__value"^v}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL>=))))"__index"I}}};

@interface KFTextComponent : KFComponent {
  /* instance variables */
  NSString *_text;
  NSString *_typeface;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } _size;
  struct KFValue<UIColor *> { struct variant<bool, UIColor *, KFAnimation<UIColor *> *> { struct __impl<bool, UIColor *, KFAnimation<UIColor *> *> { union __union<std::__variant_detail::_Trait::_Available, 0UL, bool, UIColor *, KFAnimation<UIColor *> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, UIColor *, KFAnimation<UIColor *> *> { char __dummy; struct __alt<1UL, UIColor *> { UIColor *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL, KFAnimation<UIColor *> *> { char __dummy; struct __alt<2UL, KFAnimation<UIColor *> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } _color;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } _align;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } _vAlign;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } _tracking;
  struct KFValue<double> { struct variant<bool, double, KFAnimation<double> *> { struct __impl<bool, double, KFAnimation<double> *> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, bool, double, KFAnimation<double> *> { char __dummy; struct __alt<0UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, double, KFAnimation<double> *> { char __dummy; struct __alt<1UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, KFAnimation<double> *> { char __dummy; struct __alt<2UL, KFAnimation<double> *> { void *__value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _value; } _leading;
  BOOL _italic;
  unsigned long long _weight;
  struct CGSize { double width; double height; } _textboxSize;
}

/* class methods */
+ (unsigned short)componentClassIdentifier;

/* instance methods */
- (id)init;
@end

#endif /* KFTextComponent_h */
