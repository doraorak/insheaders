//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductAdControlsBlockListDataSource_h
#define IGMonetizationProductAdControlsBlockListDataSource_h
@import Foundation;

#include "IGMonetizationProductAdControlsBlockListRequestSender.h"

@class IGUserSession, NSArray;
@protocol IGMonetizationProductAdControlsBlockListDataSourceDelegate;

@interface IGMonetizationProductAdControlsBlockListDataSource : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSArray *_monetizationProductGatingDecisions;
  IGMonetizationProductAdControlsBlockListRequestSender *_requestSender;
  BOOL _isRevShareEligible;
  NSArray *_blockListAccounts;
  NSArray *_blockListCategories;
}

@property (weak, nonatomic) NSObject<IGMonetizationProductAdControlsBlockListDataSourceDelegate> *delegate;
@property (readonly, nonatomic) long long payoutProductType;

/* instance methods */
- (id)initWithUserSession:(id)session requestSender:(id)sender monetizationProductGatingDecisions:(id)decisions payoutProductType:(long long)type;
@end

#endif /* IGMonetizationProductAdControlsBlockListDataSource_h */