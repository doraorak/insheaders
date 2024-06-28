//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationEmailConfirmationViewControllerContext_h
#define IGRegistrationEmailConfirmationViewControllerContext_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPIClient-Protocol.h"
#include "IGNUXLayoutSpec.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGRegistrationEmailConfirmationViewControllerContext : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGNUXLayoutSpec *layoutSpec;
@property (readonly, copy, nonatomic) NSString *email;
@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;

/* instance methods */
- (id)initWithLayoutSpec:(id)spec email:(id)email networker:(id)networker;
@end

#endif /* IGRegistrationEmailConfirmationViewControllerContext_h */