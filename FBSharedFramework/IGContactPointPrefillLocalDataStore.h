//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContactPointPrefillLocalDataStore_h
#define IGContactPointPrefillLocalDataStore_h
@import Foundation;

#include "IGContactPointPrefill.h"

@class NSString;

@interface IGContactPointPrefillLocalDataStore : NSObject

@property (readonly, copy, nonatomic) NSString *fbPhoneNumber;
@property (readonly, copy, nonatomic) NSString *fbEmail;
@property (readonly, copy, nonatomic) IGContactPointPrefill *phoneNumber;
@property (readonly, copy, nonatomic) IGContactPointPrefill *email;
@property (readonly, copy, nonatomic) NSString *fullName;

@end

#endif /* IGContactPointPrefillLocalDataStore_h */