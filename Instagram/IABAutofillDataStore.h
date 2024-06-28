//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAutofillDataStore_h
#define IABAutofillDataStore_h
@import Foundation;

#include "IABAutofillData.h"
#include "IABAutofillDomainActionTracker.h"
#include "_TtC13AutofillSwift15AutofillService.h"

@class NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol IABAutofillDataStoreDelegate;

@interface IABAutofillDataStore : NSObject {
  /* instance variables */
  NSMutableDictionary *_domainOptOutMap;
  NSMutableDictionary *_domainAcceptedAutofillMap;
  NSMutableDictionary *_urlAutofilledDataMap;
  NSMutableDictionary *_autofillFormDetectionData;
  NSNumber *_consecutiveNegativeInteractionCount;
  NSNumber *_paymentAutofillConsecutiveNegativeInteractionCount;
  NSDate *_previousOptInPromptTimestamp;
  BOOL _isContactAutofillFbpayDisclosureShown;
  NSArray *_multipleEntriesAutofillData;
  IABAutofillData *_autofillData;
  IABAutofillData *_pendingAutofillData;
  IABAutofillData *_prefetchedAutofillData;
  BOOL _hasPrefetchedWalletData;
  BOOL _useClientCache;
  NSObject<IABAutofillDataStoreDelegate> *_delegate;
  NSArray *_maskedCards;
  NSArray *_maskedCardsWithPANFriction;
  BOOL _pageAcceptedAutofill;
  NSMutableDictionary *_paymentAutofillFieldsMap;
  NSMutableDictionary *_contactAutofillFieldsMap;
  NSMutableDictionary *_paymentAutofillFieldsKeyMap;
  NSMutableDictionary *_originHostAcceptedPaymentAutofillMap;
  NSNumber *_contactAutofillOptInPromptsThreshold;
  NSNumber *_paymentAutofillOptInPromptsThreshold;
  NSMutableSet *_paymentAutofillBlockListSet;
  NSMutableSet *_domainBlockListSet;
  BOOL _isOptInToPaymentAutofill;
  BOOL _shouldResetPageAccepted;
  NSString *_metaPayAccountPaymentMethodStatus;
  NSMutableDictionary *_noPromptedAutofillReasons;
  NSMutableDictionary *_noPromptedSaveReasons;
  NSNumber *_numPaymentAutofillDeclinedInSession;
  NSNumber *_paymentAutofillIncreasedOptInPromptsThreshold;
  BOOL _isEligibleForPaymentAutofillReOptInPrompt;
  BOOL _isContactPUXUser;
  NSString *_autofillQRTTestGroup;
  IABAutofillDomainActionTracker *_domainActionTracker;
  NSMutableSet *_requestedPaymentFields;
  NSMutableDictionary *_credentialIdToAvailableStatus;
  NSString *_contactPrefetchV2Variant;
  NSArray *_autofillQRTExperimentVersions;
  _TtC13AutofillSwift15AutofillService *_autofillService;
}

/* class methods */
+ (BOOL)hasReachedConsecutiveNegInteractionThreshold:(id)threshold threshold:(int)threshold;

/* instance methods */
- (id)initWithDelegate:(id)delegate autofillService:(id)service useClientCache:(BOOL)cache shouldResetPageAccepted:(BOOL)accepted autofillMC:(id)mc;
- (id)paymentAutofillSaveCardData;
- (BOOL)isPaymentAutofillSaveCardDataEmpty;
- (void)setContactAutofillOptInPromptsThreshold:(id)threshold;
- (void)setPaymentAutofillOptInPromptsThreshold:(id)threshold;
- (void)setPaymentAutofillIncreasedOptInPromptsThreshold:(id)threshold;
- (void)setPaymentAutofillDomainBlockList:(id)list;
- (void)setDomainBlockList:(id)list;
- (void)setPaymentOptInStatus:(BOOL)status;
- (void)setNoPromptedAutofillReason:(id)reason;
- (id)noPromptedAutofillReasons;
- (void)setNoPromptedSaveReason:(id)reason;
- (void)setRequestedPaymentFields:(id)fields;
- (void)clearNoPromptedSaveReasonDictionary;
- (id)noPromptedSaveReasons;
- (BOOL)isOptInToPaymentAutofill;
- (BOOL)isContactOptIn;
- (BOOL)hasAcceptedConsent;
- (void)setIsEligibleForPaymentAutofillReOptInPrompt:(BOOL)prompt;
- (id)setPaymentAutofillFieldPublicEncryptionKeyValue:(id)value forPaymentFieldTag:(id)tag;
- (void)clearPaymentFieldsKeyMap;
- (id)paymentAutofillFieldsKeyMap;
- (BOOL)isOriginHostInAllowList:(id)list;
- (BOOL)isOriginHostInPaymentsBlockList:(id)list;
- (BOOL)isDomainInBlockList:(id)list;
- (void)setDomainOptOutResult:(id)result forDomain:(id)domain;
- (void)setPaymentField:(id)field forKey:(id)key;
- (void)deletePaymentField:(id)field;
- (void)setContactField:(id)field forKey:(id)key;
- (void)clearPaymentFieldsOptInData;
- (void)resetAutofillPageActions;
- (void)setUserOptOutResult:(int)result;
- (void)setPaymentAutofillUserOptOutResult:(int)result;
- (void)setAutofillConsentAccepted:(BOOL)accepted;
- (void)incrementNumPaymentAutofillDeclinedInSession;
- (id)numPaymentAutofillDeclinesInSession;
- (void)setPreviousOptInPromptTimestamp:(int)timestamp;
- (void)setIsContactAutofillFbpayDisclosureShownAndNotifyClientCache:(BOOL)cache;
- (void)setUserOptOutResultWithOperation:(unsigned long long)operation;
- (void)setPaymentAutofillUserOptOutResultWithOperation:(unsigned long long)operation;
- (id)domainActionTracker;
- (void)trackAction:(unsigned long long)action forContactBottomSheet:(unsigned long long)sheet forDomain:(id)domain forUrl:(id)url;
- (void)trackAction:(unsigned long long)action forPaymentBottomSheet:(unsigned long long)sheet forDomain:(id)domain forUrl:(id)url;
- (BOOL)doesActionExst:(unsigned long long)exst forContactBottomSheet:(unsigned long long)sheet forDomain:(id)domain;
- (void)setAutofillAccepted:(id)accepted forDomain:(id)domain;
- (void)setPaymentAutofillAccepted:(id)accepted forOriginHost:(id)host;
- (BOOL)containsDomainOptOutResult:(id)result;
- (BOOL)shouldInjectJSWithURL:(id)url;
- (BOOL)shouldBlockJSCallFromOptedOutDomainWithURL:(id)url;
- (void)syncAutofillDataFromSeverData:(id)data;
- (void)syncMultipleEntriesAutofillDataFromSeverData:(id)data;
- (void)syncAutofillWalletDataFromServerData:(id)data;
- (id)getAutofillFormDetectionDataForKey:(id)key;
- (void)setAutofillFormDetectionData:(id)data;
- (void)setAutofillQRTTestGroup:(id)group;
- (void)setAutofillQRTExperimentVersions:(id)versions;
- (id)autofillQRTExperimentVersions;
- (void)setPendingAutofillData:(id)data;
- (void)setPendingAutofillDataWithContactFieldsMap;
- (id)autofillFormDetectionData;
- (void)resetAutofillDetectionData;
- (id)autofillData;
- (id)pendingAutofillData;
- (id)previewAutofillData;
- (id)prefetchedAutofillData;
- (BOOL)hasPrefetchedWalletData;
- (id)multipleEntriesAutofillData;
- (id)previewAutofillDataWithBottomSheetType:(unsigned long long)type;
- (id)dataStoreStateForURL:(id)url;
- (id)paymentAutofillDataStoreStateForOriginHost:(id)host;
- (id)contactConsecutiveNegInteractionCount;
- (id)paymentConsecutiveNegInteractionCount;
- (BOOL)isEligibleForPaymentAutofillReOptInPrompt;
- (BOOL)hasFetchedContactAutofillUserOptOutResult;
- (BOOL)hasReachedConsecutiveNegInteractionThreshold;
- (BOOL)hasReachedPaymentConsecutiveNegInteractionThreshold;
- (BOOL)isUserOptedOutFromPaymentBrowserSettings;
- (void)setUserMaskedCards:(id)cards shouldFilterPANFriction:(BOOL)panfriction shouldShowCardsWithPasskey:(BOOL)passkey;
- (id)maskedCards;
- (id)maskedCardsWithPANfricton;
- (BOOL)hasPaymentCards;
- (void)setMetaPayAccountPaymentMethodStatus;
- (id)metaPayAccountPaymentMethodStatus;
- (BOOL)isContactAutofillFbpayDisclosureShown;
- (BOOL)isAutofillPUXUser;
- (id)autofillQRTTestGroup;
- (id)requestedPaymentFields;
- (void)setCredentialIDToAvailableStatus:(id)status;
- (id)credentialIdToAvailableStatus;
@end

#endif /* IABAutofillDataStore_h */
