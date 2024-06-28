//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentContactInfoGeneralFormViewModel_h
#define FBPayComponentContactInfoGeneralFormViewModel_h
@import Foundation;

#include "FBPayFormViewModel.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutOneTimeCheckoutModel.h"
#include "FBPayFormSectionConfiguration.h"
#include "FBPayFormViewConfiguration.h"
#include "FBPayFormViewLifeCycleDelegate-Protocol.h"
#include "FBPayUPLLoggingAPI-Protocol.h"

@class NSString;

@interface FBPayComponentContactInfoGeneralFormViewModel : FBPayFormViewModel<FBPayFormViewLifeCycleDelegate> {
  /* instance variables */
  FBPayFormSectionConfiguration *_inputFieldConfiguration;
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayExpressCheckoutOneTimeCheckoutModel *_oneTimeCheckoutModel;
  NSObject<FBPayUPLLoggingAPI> *_logger;
  BOOL _shouldEnableOSAutofill;
  FBPayFormSectionConfiguration *_saveButtonSection;
  FBPayFormSectionConfiguration *_termsSection;
  FBPayFormViewConfiguration *_configuration;
  BOOL _isReadyToSave;
  BOOL _hasPayerName;
  BOOL _hasEmail;
  BOOL _hasPhoneNumber;
  BOOL _isNuxForm;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContactInfoFieldConfig:(id)config ecpContext:(id)context oneTimeCheckoutModel:(id)model logger:(id)logger shouldEnableOSAutofill:(BOOL)osautofill isNuxForm:(BOOL)form;
- (void)reloadSaveButtonSection;
- (void)save;
- (id)mutationRequestToExecute;
- (BOOL)hasUnsavedUserInputData;
- (void)logAddEventForInlineForm;
- (void)fbpayFormViewControllerViewDidLoad:(id)load;
- (void)fbpayFormViewControllerViewDidAppear:(id)appear;
- (BOOL)shouldEnableOSAutofill;
- (id)getLogger;
@end

#endif /* FBPayComponentContactInfoGeneralFormViewModel_h */
