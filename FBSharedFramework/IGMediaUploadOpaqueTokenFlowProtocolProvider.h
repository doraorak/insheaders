//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaUploadOpaqueTokenFlowProtocolProvider_h
#define IGMediaUploadOpaqueTokenFlowProtocolProvider_h
@import Foundation;

#include "FBMediaUploadProtocolProvider-Protocol.h"

@class NSString;

@interface IGMediaUploadOpaqueTokenFlowProtocolProvider : NSObject<FBMediaUploadProtocolProvider> {
  /* instance variables */
  NSString *_customNamespace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNamespace:(id)namespace;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)getServerUrlForJobDetail:(id)detail jobId:(id)id phase:(id)phase;
- (id)defaultHeaders;
- (unsigned long long)authType;
- (id)parseResponse:(id)response error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGMediaUploadOpaqueTokenFlowProtocolProvider_h */
