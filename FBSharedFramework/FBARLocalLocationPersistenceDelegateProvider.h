//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARLocalLocationPersistenceDelegateProvider_h
#define FBARLocalLocationPersistenceDelegateProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol struct shared_ptr<arfx::services::persistence::IPersistenceServiceDelegate> { struct IPersistenceServiceDelegate * x0; struct __shared_weak_count * x1; }, {shared_ptr<arfx::delivery::ILocalEffectStateStore>="__ptr_"^{ILocalEffectStateStore}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<arfx::services::persistence::IPersistenceServiceDelegate>="__ptr_"^{IPersistenceServiceDelegate}"__cntrl_"^{__shared_weak_count}};

@interface FBARLocalLocationPersistenceDelegateProvider : NSObject<NSObject> {
  /* instance variables */
  struct shared_ptr<arfx::delivery::ILocalEffectStateStore> { struct ILocalEffectStateStore *__ptr_; struct __shared_weak_count *__cntrl_; } _localStorage;
  NSString *_effectIdentifier;
}

@property (readonly, nonatomic) struct shared_ptr<arfx::services::persistence::IPersistenceServiceDelegate> { struct IPersistenceServiceDelegate * x0; struct __shared_weak_count * x1; } cxxDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithLocalStorage:(struct shared_ptr<arfx::delivery::ILocalEffectStateStore> { struct ILocalEffectStateStore * x0; struct __shared_weak_count * x1; })storage effectIdentifier:(id)identifier;

/* instance methods */
- (id)initWithLocalStorage:(struct shared_ptr<arfx::delivery::ILocalEffectStateStore> { struct ILocalEffectStateStore * x0; struct __shared_weak_count * x1; })storage effectIdentifier:(id)identifier;
@end

#endif /* FBARLocalLocationPersistenceDelegateProvider_h */