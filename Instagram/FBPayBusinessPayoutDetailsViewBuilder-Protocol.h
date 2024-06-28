//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessPayoutDetailsViewBuilder_Protocol_h
#define FBPayBusinessPayoutDetailsViewBuilder_Protocol_h
@import Foundation;

#include "FBPayBusinessContext.h"
#include "FBPayBusinessPayoutDetailsViewBuilder-Protocol.h"

@class NSString;

@protocol FBPayBusinessPayoutDetailsViewBuilder <NSObject>
/* instance methods */
- (void)fetchPayoutDetailsViewWithViewConfig:(id)config contentConfig:(id)config financialEntity:(id)entity managedMerchantAccountId:(id)id payoutModel:(id)model embeddedViewController:(id)controller textViewDelegate:(id)delegate viewModelDelegate:(id)delegate success:(id /* block */)success failure:(id /* block */)failure;
@end

#endif /* FBPayBusinessPayoutDetailsViewBuilder_Protocol_h */