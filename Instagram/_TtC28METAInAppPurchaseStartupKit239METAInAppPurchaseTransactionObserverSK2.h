//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC28METAInAppPurchaseStartupKit239METAInAppPurchaseTransactionObserverSK2_h
#define _TtC28METAInAppPurchaseStartupKit239METAInAppPurchaseTransactionObserverSK2_h
@import Foundation;

#include "METAInAppPurchaseTransactionObserver-Protocol.h"

@interface _TtC28METAInAppPurchaseStartupKit239METAInAppPurchaseTransactionObserverSK2 : NSObject<METAInAppPurchaseTransactionObserver> { // (Swift)
  /* instance variables */
   handleResultHashValue;
   updates;
}

/* instance methods */
- (id)initWithHandleResultHashValue:(id /* block */)value;
- (void)dealloc;
- (void)registerTransactionObserver;
- (void)unregisterTransactionObserver;
- (id)init;
@end

#endif /* _TtC28METAInAppPurchaseStartupKit239METAInAppPurchaseTransactionObserverSK2_h */
