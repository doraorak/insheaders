//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBillingWizardNativeWrapperQE_h
#define IGBillingWizardNativeWrapperQE_h
@import Foundation;

@interface IGBillingWizardNativeWrapperQE : NSObject
/* class methods */
+ (void)fetchQEData:(id)qedata paymentAccountID:(id)id completionBlock:(id /* block */)block;
+ (id)parseQEInResponse:(id)response paramName:(id)name;
+ (void)logExposure:(id)exposure paymentAccountID:(id)id completionBlock:(id /* block */)block;
@end

#endif /* IGBillingWizardNativeWrapperQE_h */