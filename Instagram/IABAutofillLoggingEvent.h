//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAutofillLoggingEvent_h
#define IABAutofillLoggingEvent_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface IABAutofillLoggingEvent : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *userAction;
@property (readonly, copy, nonatomic) NSString *currentUrl;
@property (readonly, copy, nonatomic) NSString *formSessionId;
@property (readonly, copy, nonatomic) NSString *iabSessionId;
@property (readonly, copy, nonatomic) NSString *availableFields;
@property (readonly, copy, nonatomic) NSString *editedFields;
@property (readonly, copy, nonatomic) NSString *fieldsToUpdate;
@property (readonly, copy, nonatomic) NSString *requestedFields;
@property (readonly, copy, nonatomic) NSString *allFields;
@property (readonly, copy, nonatomic) NSString *selectedFieldTag;
@property (readonly, copy, nonatomic) NSString *times;
@property (readonly, copy, nonatomic) NSNumber *timeSpend;
@property (readonly, copy, nonatomic) NSNumber *formCompletionDuration;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *originHost;
@property (readonly, copy, nonatomic) NSString *paymentAutofillCredentialIDs;
@property (readonly, nonatomic) BOOL withAdsDisclosure;
@property (readonly, copy, nonatomic) NSDictionary *enhancedRegexNewFieldsMetadata;
@property (readonly, copy, nonatomic) NSString *userCredentialStatus;
@property (readonly, nonatomic) BOOL isPaymentOptIn;
@property (readonly, nonatomic) BOOL isContactOptIn;

/* instance methods */
- (id)initWithUserAction:(id)action currentUrl:(id)url formSessionId:(id)id iabSessionId:(id)id availableFields:(id)fields editedFields:(id)fields fieldsToUpdate:(id)update requestedFields:(id)fields allFields:(id)fields selectedFieldTag:(id)tag times:(id)times timeSpend:(id)spend formCompletionDuration:(id)duration type:(id)type originHost:(id)host paymentAutofillCredentialIDs:(id)ids withAdsDisclosure:(BOOL)disclosure enhancedRegexNewFieldsMetadata:(id)metadata userCredentialStatus:(id)status isPaymentOptIn:(BOOL)in isContactOptIn:(BOOL)in;
@end

#endif /* IABAutofillLoggingEvent_h */
