//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTCxxMethod_h
#define RCTCxxMethod_h
@import Foundation;

#include "RCTBridgeMethod-Protocol.h"

@class NSString;
@protocol {unique_ptr<facebook::xplat::module::CxxModule::Method, std::default_delete<facebook::xplat::module::CxxModule::Method>>="__ptr_"{__compressed_pair<facebook::xplat::module::CxxModule::Method *, std::default_delete<facebook::xplat::module::CxxModule::Method>>="__value_"^{Method}}};

@interface RCTCxxMethod : NSObject<RCTBridgeMethod> {
  /* instance variables */
  struct unique_ptr<facebook::xplat::module::CxxModule::Method, std::default_delete<facebook::xplat::module::CxxModule::Method>> { struct __compressed_pair<facebook::xplat::module::CxxModule::Method *, std::default_delete<facebook::xplat::module::CxxModule::Method>> { struct Method *__value_; } __ptr_; } _method;
}

@property (readonly, nonatomic) const char * JSMethodName;
@property (readonly, nonatomic) long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCxxMethod:(const void *)method;
- (id)invokeWithBridge:(id)bridge module:(id)module arguments:(id)arguments;
@end

#endif /* RCTCxxMethod_h */