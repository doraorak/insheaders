//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13AutofillSwift24AutofillInteractionEvent_h
#define _TtC13AutofillSwift24AutofillInteractionEvent_h
@import Foundation;

@class NSDictionary, NSNumber, NSString;

@interface _TtC13AutofillSwift24AutofillInteractionEvent : NSObject // (Swift)

@property (nonatomic, readonly) NSString *editedFields;
@property (nonatomic, readonly) NSDictionary *enhancedRegexNewFieldsMetadata;
@property (nonatomic, readonly) NSNumber *formCompletionDuration;
@property (nonatomic, readonly) BOOL isContactOptIn;
@property (nonatomic, readonly) BOOL isPaymentOptIn;
@property (nonatomic, readonly) NSString *newFields;
@property (nonatomic, readonly) NSString *credentialIDs;
@property (nonatomic, readonly) NSNumber *timeSpend;
@property (nonatomic, readonly) NSString *times;
@property (nonatomic, readonly) NSString *userCredentialsStatus;
@property (nonatomic, readonly) BOOL withAdsDisclosure;

/* instance methods */
- (id)initWithAdsDisclosure:(BOOL)disclosure isContactOptIn:(BOOL)in isPaymentOptIn:(BOOL)in editedFields:(id)fields enhancedRegexNewFieldsMetadata:(id)metadata formCompletionDuration:(id)duration newFields:(id)fields credentialIDs:(id)ids timeSpend:(id)spend times:(id)times userCredentialsStatus:(id)status;
- (id)init;
@end

#endif /* _TtC13AutofillSwift24AutofillInteractionEvent_h */