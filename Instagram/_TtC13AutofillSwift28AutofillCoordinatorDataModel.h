//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13AutofillSwift28AutofillCoordinatorDataModel_h
#define _TtC13AutofillSwift28AutofillCoordinatorDataModel_h
@import Foundation;

@interface _TtC13AutofillSwift28AutofillCoordinatorDataModel : NSObject { // (Swift)
  /* instance variables */
   adID;
   iabSessionID;
   isURLSourceE2EEThread;
   isURLSourceOpenThread;
   iawPolicyZonesEnabled;
   paymentsBillingAddressLevel;
   fetchCardsErrorDescription;
   paymentCredentialIDToLog;
   timeElapsedInMs;
   saveDialogStartTime;
   hasLoggedPaymentFormCompletion;
   succeededCVVVerification;
   userOptedSaveContactAsBilling;
   didShowHybridPrompt;
   isEligibleForCombinedPromptAndVerification;
   didShowCombinedPromptAndVerification;
   isPaymentAutofillFlow;
   didDetectPaymentClassifierVersion;
   didShowContactNameInPaymentUsage;
   didFailPaymentSave;
   didShowPaymentSoftKeyboard;
   isPaymentAutofillSoftKeyboardFlow;
   isShowingIABBlockingExperience;
   didLogPromptedAutofillForSoftKeyboard;
   didLogAcceptedAutofillForSoftKeyboard;
   didLogDeclinedAutofillForSoftKeyboard;
   didLogPromptedAutofillForContactSoftKeyboard;
   didLogAcceptedAutofillForContactSoftKeyboard;
   didLogDeclinedAutofillForContactSoftKeyboard;
}

/* instance methods */
- (id)initWithAdID:(id)id iabSessionID:(id)id isURLSourceE2EEThread:(BOOL)eethread isURLSourceOpenThread:(BOOL)thread iawPolicyZonesEnabled:(BOOL)enabled;
- (void)setPaymentsBillingAddressLevel:(id)level;
- (void)setFetchCardsErrorDescription:(id)description;
- (void)setPaymentCredentialIDToLog:(id)log;
- (void)setTimeElapsedInMs:(long long)ms;
- (void)setSaveDialogStartTime:(id)time;
- (void)setHasLoggedPaymentFormCompletion:(BOOL)completion;
- (void)setSucceededCVVVerification:(BOOL)cvvverification;
- (void)setUserOptedSaveContactAsBilling:(BOOL)billing;
- (void)setDidShowHybridPrompt:(BOOL)prompt;
- (void)setIsEligibleForCombinedPromptAndVerification:(BOOL)verification;
- (void)setDidShowCombinedPromptAndVerification:(BOOL)verification;
- (void)setIsPaymentAutofillFlow:(BOOL)flow;
- (void)setDidDetectPaymentClassifierVersion:(BOOL)version;
- (void)setDidShowContactNameInPaymentUsage:(BOOL)usage;
- (void)setDidFailPaymentSave:(BOOL)save;
- (void)setDidShowPaymentSoftKeyboard:(BOOL)keyboard;
- (void)setIsPaymentAutofillSoftKeyboardFlow:(BOOL)flow;
- (void)setIsShowingIABBlockingExperience:(BOOL)experience;
- (void)setDidLogPromptedAutofillForSoftKeyboard:(BOOL)keyboard;
- (void)setDidLogAcceptedAutofillForSoftKeyboard:(BOOL)keyboard;
- (void)setDidLogDeclinedAutofillForSoftKeyboard:(BOOL)keyboard;
- (void)setDidLogPromptedAutofillForContactSoftKeyboard:(BOOL)keyboard;
- (void)setDidLogAcceptedAutofillForContactSoftKeyboard:(BOOL)keyboard;
- (void)setDidLogDeclinedAutofillForContactSoftKeyboard:(BOOL)keyboard;
- (id)getIABSessionID;
- (id)getAdID;
- (BOOL)getIsURLSourceE2EEThread;
- (BOOL)getIsURLSourceOpenThread;
- (BOOL)getIawPolicyZonesEnabled;
- (id)getPaymentsBillingAddressLevel;
- (id)getFetchCardsErrorDescription;
- (id)getPaymentCredentialIDToLog;
- (long long)getTimeElapsedInMs;
- (id)getSaveDialogStartTime;
- (BOOL)getHasLoggedPaymentFormCompletion;
- (BOOL)getSucceededCVVVerification;
- (BOOL)getUserOptedSaveContactAsBilling;
- (BOOL)getDidShowHybridPrompt;
- (BOOL)getIsEligibleForCombinedPromptAndVerification;
- (BOOL)getDidShowCombinedPromptAndVerification;
- (BOOL)getIsPaymentAutofillFlow;
- (BOOL)getDidDetectPaymentClassifierVersion;
- (BOOL)getDidShowContactNameInPaymentUsage;
- (BOOL)getDidFailPaymentSave;
- (BOOL)getDidShowPaymentSoftKeyboard;
- (BOOL)getIsPaymentAutofillSoftKeyboardFlow;
- (BOOL)getIsShowingIABBlockingExperience;
- (BOOL)getDidLogPromptedAutofillForSoftKeyboard;
- (BOOL)getDidLogAcceptedAutofillForSoftKeyboard;
- (BOOL)getDidLogDeclinedAutofillForSoftKeyboard;
- (BOOL)getDidLogAcceptedAutofillForContactSoftKeyboard;
- (BOOL)getDidLogPromptedAutofillForContactSoftKeyboard;
- (BOOL)getDidLogDeclinedAutofillForContactSoftKeyboard;
- (id)init;
@end

#endif /* _TtC13AutofillSwift28AutofillCoordinatorDataModel_h */