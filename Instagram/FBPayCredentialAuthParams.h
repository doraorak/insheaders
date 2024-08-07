//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayCredentialAuthParams_h
#define FBPayCredentialAuthParams_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayCredentialAuthParams : NSObject<NSCopying> {
  /* instance variables */
  NSString *_paypalAuthUrl;
}

@property (readonly, copy, nonatomic) NSString *credentialTitle;
@property (readonly, copy, nonatomic) NSString *credentialId;
@property (readonly, copy, nonatomic) NSString *targetAccountID;

/* instance methods */
- (id)initWithCredentialTitle:(id)title credentialId:(id)id targetAccountID:(id)id paypalAuthUrl:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBPayCredentialAuthParams_h */
