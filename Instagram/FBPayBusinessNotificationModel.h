//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessNotificationModel_h
#define FBPayBusinessNotificationModel_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayBusinessNotificationActionModel.h"
#include "FBPayBusinessNotificationIconModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayBusinessNotificationModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) FBPayBusinessNotificationActionModel *action;
@property (readonly, copy, nonatomic) NSString *bodyContent;
@property (readonly, copy, nonatomic) NSString *buttonContent;
@property (readonly, copy, nonatomic) NSString *headerContent;
@property (readonly, copy, nonatomic) FBPayBusinessNotificationIconModel *icon;
@property (readonly, copy, nonatomic) NSString *notificationIdentifier;
@property (readonly, nonatomic) long long notificationSource;
@property (readonly, copy, nonatomic) NSString *notificationSourceString;

/* instance methods */
- (id)initWithAction:(id)action bodyContent:(id)content buttonContent:(id)content headerContent:(id)content icon:(id)icon notificationIdentifier:(id)identifier notificationSource:(long long)source notificationSourceString:(id)string;
@end

#endif /* FBPayBusinessNotificationModel_h */
