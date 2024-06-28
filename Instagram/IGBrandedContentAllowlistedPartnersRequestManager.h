//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandedContentAllowlistedPartnersRequestManager_h
#define IGBrandedContentAllowlistedPartnersRequestManager_h
@import Foundation;

#include "IGAPIClient-Protocol.h"

@class IGUserStore, NSArray;

@interface IGBrandedContentAllowlistedPartnersRequestManager : NSObject {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  IGUserStore *_userStore;
  BOOL _requireApprovalSetting;
  BOOL _manualApproveAdsSetting;
  NSArray *_allowlistedAccounts;
}

@property (readonly, nonatomic) NSArray *pendingRequests;

/* instance methods */
- (id)initWithNetworker:(id)networker userStore:(id)store;
@end

#endif /* IGBrandedContentAllowlistedPartnersRequestManager_h */
