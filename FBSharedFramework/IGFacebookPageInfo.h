//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFacebookPageInfo_h
#define IGFacebookPageInfo_h
@import Foundation;

#include "IGBusinessConversionPageInvalidState.h"
#include "IGFacebookPageAddress.h"
#include "IGFacebookPageCity.h"
#include "IGFacebookPageLocation.h"
#include "IGFacebookPagePhoneNumber.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL;

@interface IGFacebookPageInfo : NSObject<NSCopying, NSObject> {
  /* instance variables */
  BOOL _isProfileAudioCallingEnabled;
}

@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *publicEmail;
@property (copy, nonatomic) IGFacebookPagePhoneNumber *phoneNumber;
@property (nonatomic) unsigned long long contactPreference;
@property (nonatomic) long long categoryAccountType;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSURL *profilePictureURL;
@property (retain, nonatomic) IGFacebookPageAddress *address;
@property (retain, nonatomic) IGFacebookPageCity *city;
@property (retain, nonatomic) IGFacebookPageLocation *location;
@property (retain, nonatomic) NSArray *connectedInstagramAccountIDs;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *igUserId;
@property (copy, nonatomic) NSString *igUsername;
@property (nonatomic) BOOL isCallToActionEnabled;
@property (retain, nonatomic) NSNumber *globalLikersCount;
@property (retain, nonatomic) IGBusinessConversionPageInvalidState *invalidState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_stringValueFromArrayForKey:(id)key inDict:(id)dict;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithUser:(id)user;
- (id)initWithQuickConversionSetting:(id)setting;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGFacebookPageInfo_h */
