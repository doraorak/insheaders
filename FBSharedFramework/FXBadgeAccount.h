//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FXBadgeAccount_h
#define FXBadgeAccount_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FXBadgeAccount : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *accountType;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *instagramAccountID;
@property (readonly, copy, nonatomic) NSString *obfuscatedAccountID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *profilePictureURL;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) unsigned long long badgeCount;
@property (readonly, nonatomic) unsigned long long unfilteredBadgeCount;
@property (readonly, nonatomic) unsigned long long igL28;
@property (readonly, copy, nonatomic) NSString *unpackedNotifications;

/* instance methods */
- (id)initWithAccountType:(id)type accountID:(id)id instagramAccountID:(id)id obfuscatedAccountID:(id)id name:(id)name profilePictureURL:(id)url username:(id)username badgeCount:(unsigned long long)count unfilteredBadgeCount:(unsigned long long)count igL28:(unsigned long long)l28 unpackedNotifications:(id)notifications;
@end

#endif /* FXBadgeAccount_h */
