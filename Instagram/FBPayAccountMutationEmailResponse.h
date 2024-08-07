//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayAccountMutationEmailResponse_h
#define FBPayAccountMutationEmailResponse_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayUserFacingError.h"
#include "FBPaymentsContactInfoEmailDataModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FBPayAccountMutationEmailResponse : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) FBPaymentsContactInfoEmailDataModel *emailAddress;
@property (readonly, copy, nonatomic) FBPayUserFacingError *userFacingError;

/* instance methods */
- (id)initWithEmailAddress:(id)address userFacingError:(id)error;
@end

#endif /* FBPayAccountMutationEmailResponse_h */
