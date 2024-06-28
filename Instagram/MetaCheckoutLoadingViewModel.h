//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MetaCheckoutLoadingViewModel_h
#define MetaCheckoutLoadingViewModel_h
@import Foundation;

#include "CheckoutShopifyUPLLogger.h"
#include "IABAdsContext.h"

@class BKObjectSet, NSString;

@interface MetaCheckoutLoadingViewModel : NSObject

@property (readonly, nonatomic) BKObjectSet *bkObjectSet;
@property (readonly, nonatomic) IABAdsContext *iabAdsContext;
@property (readonly, nonatomic) NSString *clickSource;
@property (readonly, nonatomic) NSString *loggingSessionID;
@property (readonly, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) CheckoutShopifyUPLLogger *logger;

/* instance methods */
- (id)initWithBkObjectSet:(id)set iabAdsContext:(id)context clickSource:(id)source loggingSessionID:(id)id sourceURL:(id)url logger:(id)logger;
@end

#endif /* MetaCheckoutLoadingViewModel_h */
