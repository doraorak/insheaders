//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayMIBToCIBPayPalStepUp_h
#define FBPayMIBToCIBPayPalStepUp_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayMIBToCIBPayPalConsentBottomSheetModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayMIBToCIBPayPalStepUp : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *paypalId;
@property (readonly, copy, nonatomic) FBPayMIBToCIBPayPalConsentBottomSheetModel *consentBottomSheetModel;
@property (readonly, copy, nonatomic) NSString *stepUpType;

/* instance methods */
- (id)initWithPaypalId:(id)id consentBottomSheetModel:(id)model stepUpType:(id)type;
@end

#endif /* FBPayMIBToCIBPayPalStepUp_h */