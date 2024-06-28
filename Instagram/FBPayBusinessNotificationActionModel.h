//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessNotificationActionModel_h
#define FBPayBusinessNotificationActionModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBPayBusinessNotificationActionModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSURL *redirectURL;
@property (readonly, copy, nonatomic) NSString *typeAttribute;

/* instance methods */
- (id)initWithRedirectURL:(id)url typeAttribute:(id)attribute;
@end

#endif /* FBPayBusinessNotificationActionModel_h */