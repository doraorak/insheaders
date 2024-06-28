//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationPlatformExpandablePayoutInfoDataSource_h
#define IGMonetizationPlatformExpandablePayoutInfoDataSource_h
@import Foundation;

#include "IGMonetizationPlatformFinancialEntityDataModel.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSArray, NSString;

@interface IGMonetizationPlatformExpandablePayoutInfoDataSource : NSObject<NSObject> {
  /* instance variables */
  IGMonetizationPlatformFinancialEntityDataModel *_financialEntityDataModel;
  NSArray *_payoutInfoPerCredentailDataModelCollection;
  BOOL _isIndividualType;
  BOOL _isPayoutNotificationEnabled;
  BOOL _isSecurityChallengeEnabled;
  BOOL _isTransactionHistoryEnabled;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) long long productType;
@property (readonly, nonatomic) long long origin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session productType:(long long)type origin:(long long)origin;
- (void)fetchFinancialEntityInformationWithCompletion:(id /* block */)completion feId:(id)id;
- (void)updateBusinessInfo:(id)info completion:(id /* block */)completion;
- (void)updateLegalOwnerInfo:(id)info completion:(id /* block */)completion;
- (void)updatePayoutMethodWithCredentialID:(id)id subtypes:(id)subtypes completion:(id /* block */)completion;
@end

#endif /* IGMonetizationPlatformExpandablePayoutInfoDataSource_h */