//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAutofillCachedPresenter_h
#define IABAutofillCachedPresenter_h
@import Foundation;

#include "_TtP13AutofillSwift10AutofillMC_-Protocol.h"

@protocol IABAutofillCachedPresenterDelegate;

@interface IABAutofillCachedPresenter : NSObject {
  /* instance variables */
  NSObject<IABAutofillCachedPresenterDelegate> *_delegate;
  NSObject<_TtP13AutofillSwift10AutofillMC_> *_autofillMC;
  unsigned long long _cachedContactBottomSheet;
  unsigned long long _cachedPaymentBottomSheet;
  unsigned long long _cachedContactSaveActionType;
  id /* block */ _onDidPresentContactBottomSheetRequest;
  id /* block */ _onDidPresentPaymentBottomSheetRequest;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate autofillMC:(id)mc;
- (void)presentContactBottomSheet:(unsigned long long)sheet onDidPresentContactBottomSheetRequest:(id /* block */)request onDidCacheContactBottomSheetRequest:(id /* block */)request;
- (void)presentPaymentBottomSheet:(unsigned long long)sheet contactSaveActionType:(unsigned long long)type onDidPresentPaymentBottomSheetRequest:(id /* block */)request onDidCachePaymentBottomSheetRequest:(id /* block */)request;
- (BOOL)presentCachedBottomSheet;
- (unsigned long long)getContactSavedActionTypeFromCachedContactBottomSheetType;
- (BOOL)hasCachedBottomSheet;
@end

#endif /* IABAutofillCachedPresenter_h */