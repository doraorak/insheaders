//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAutofillPaymentUsageBloksBottomSheet_h
#define IABAutofillPaymentUsageBloksBottomSheet_h
@import Foundation;

#include "IABAutofillBloksBottomSheet-Protocol.h"
#include "IABAutofillData.h"

@class NSArray, NSString;

@interface IABAutofillPaymentUsageBloksBottomSheet : NSObject<IABAutofillBloksBottomSheet> {
  /* instance variables */
  NSArray *_cards;
  IABAutofillData *_contactInfo;
  BOOL _hasAcceptedConsent;
  BOOL _isReOptIn;
  id /* block */ _onAcceptPayment;
  id /* block */ _onDecline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)prefetch:(id)prefetch platform:(unsigned long long)platform;
+ (void)invalidatePrefetchScreen:(id)screen platform:(unsigned long long)platform;

/* instance methods */
- (id)initWithCards:(id)cards contactInfo:(id)info hasAcceptedConsent:(BOOL)consent isReOptIn:(BOOL)in onAcceptPayment:(id /* block */)payment onDecline:(id /* block */)decline;
- (void)showBottomSheet:(id)sheet platform:(unsigned long long)platform loggingMetadata:(id)metadata settings:(id)settings contribs:(id)contribs onOpenNativeBottomsheet:(id /* block */)bottomsheet onLogEvent:(id /* block */)event;
@end

#endif /* IABAutofillPaymentUsageBloksBottomSheet_h */