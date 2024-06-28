//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTI18nAssets_h
#define RCTI18nAssets_h
@import Foundation;

#include "RCTCxxModule.h"
#include "RCTTurboModule-Protocol.h"

@class NSString;

@interface RCTI18nAssets : RCTCxxModule<RCTTurboModule> {
  /* instance variables */
  id /* block */ _providerBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)moduleName;

/* instance methods */
- (id)initWithProviderBlock:(id /* block */)block;
- (struct unique_ptr<facebook::xplat::module::CxxModule, std::default_delete<facebook::xplat::module::CxxModule>> { struct __compressed_pair<facebook::xplat::module::CxxModule *, std::default_delete<facebook::xplat::module::CxxModule>> { struct CxxModule * x0; } x0; })createModule;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* RCTI18nAssets_h */
