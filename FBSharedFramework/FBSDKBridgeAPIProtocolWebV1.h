//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKBridgeAPIProtocolWebV1_h
#define FBSDKBridgeAPIProtocolWebV1_h
@import Foundation;

#include "FBSDKBridgeAPIProtocol-Protocol.h"
#include "FBSDKInternalUtility-Protocol.h"

@class BOOL *, NSString;

@interface FBSDKBridgeAPIProtocolWebV1 : NSObject<FBSDKBridgeAPIProtocol>

@property (readonly, nonatomic) NSObject<FBSDKInternalUtility> *internalUtility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithInternalUtility:(id)utility;
- (id)requestURLWithActionID:(id)id scheme:(id)scheme methodName:(id)name parameters:(id)parameters error:(id *)error;
- (id)responseParametersForActionID:(id)id queryParameters:(id)parameters cancelled:(BOOL *)cancelled error:(id *)error;
@end

#endif /* FBSDKBridgeAPIProtocolWebV1_h */
