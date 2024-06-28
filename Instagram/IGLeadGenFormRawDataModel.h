//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenFormRawDataModel_h
#define IGLeadGenFormRawDataModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGLeadGenDeepLinkDataModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGLeadGenFormRawDataModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGLeadGenDeepLinkDataModel *deeplinkDataModel;
@property (readonly, copy, nonatomic) NSString *photoUrl;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithDeeplinkDataModel:(id)model photoUrl:(id)url;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGLeadGenFormRawDataModel_h */
