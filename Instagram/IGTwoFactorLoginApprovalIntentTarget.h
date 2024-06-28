//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTwoFactorLoginApprovalIntentTarget_h
#define IGTwoFactorLoginApprovalIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGTwoFactorLoginApprovalModel, NSString;

@interface IGTwoFactorLoginApprovalIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGTwoFactorLoginApprovalModel *loginApprovalModel;
@property (readonly, nonatomic) unsigned long long loginApprovalAction;
@property (readonly, nonatomic) unsigned long long loginApprovalStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLoginApprovalModel:(id)model loginApprovalAction:(unsigned long long)action loginApprovalStatus:(unsigned long long)status;
@end

#endif /* IGTwoFactorLoginApprovalIntentTarget_h */
