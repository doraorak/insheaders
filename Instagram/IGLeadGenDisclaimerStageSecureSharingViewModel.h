//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenDisclaimerStageSecureSharingViewModel_h
#define IGLeadGenDisclaimerStageSecureSharingViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGLeadGenDisclaimerStageSecureSharingViewModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *platformSecurityText;
@property (readonly, copy, nonatomic) NSString *platformSecurityURL;
@property (readonly, copy, nonatomic) NSString *secureSharingText;
@property (readonly, copy, nonatomic) NSString *advertiserSecurityText;
@property (readonly, copy, nonatomic) NSString *advertiserSecurityURL;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPlatformSecurityText:(id)text platformSecurityURL:(id)url secureSharingText:(id)text advertiserSecurityText:(id)text advertiserSecurityURL:(id)url;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGLeadGenDisclaimerStageSecureSharingViewModel_h */
