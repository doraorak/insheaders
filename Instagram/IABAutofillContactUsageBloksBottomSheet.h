//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAutofillContactUsageBloksBottomSheet_h
#define IABAutofillContactUsageBloksBottomSheet_h
@import Foundation;

#include "IABAutofillBloksBottomSheet-Protocol.h"

@class NSString;

@interface IABAutofillContactUsageBloksBottomSheet : NSObject<IABAutofillBloksBottomSheet> {
  /* instance variables */
  id /* block */ _onAutofillCallback;
  id /* block */ _onDeclineCallback;
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
- (id)initWithOnAutofillCallback:(id /* block */)callback onDeclineCallback:(id /* block */)callback;
- (void)showBottomSheet:(id)sheet platform:(unsigned long long)platform autofillData:(id)data loggingMetadata:(id)metadata settings:(id)settings contribs:(id)contribs onOpenNativeBottomsheet:(id /* block */)bottomsheet onLogEvent:(id /* block */)event;
@end

#endif /* IABAutofillContactUsageBloksBottomSheet_h */
