//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTModuleMethod_h
#define RCTModuleMethod_h
@import Foundation;

#include "RCTBridgeMethod-Protocol.h"

@class NSArray, NSInvocation, NSMutableArray, NSString;

@interface RCTModuleMethod : NSObject<RCTBridgeMethod> {
  /* instance variables */
  const struct RCTMethodInfo * _methodInfo;
  NSInvocation *_invocation;
  NSArray *_argumentBlocks;
  NSMutableArray *_retainedObjects;
}

@property (readonly, nonatomic) Class moduleClass;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) const char * JSMethodName;
@property (readonly, nonatomic) long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithExportedMethod:(const struct RCTMethodInfo *)method moduleClass:(Class)class;
- (void)processMethodSignature;
- (id)invokeWithBridge:(id)bridge module:(id)module arguments:(id)arguments;
- (id)methodName;
@end

#endif /* RCTModuleMethod_h */
