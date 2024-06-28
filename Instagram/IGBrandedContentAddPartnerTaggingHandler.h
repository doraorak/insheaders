//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandedContentAddPartnerTaggingHandler_h
#define IGBrandedContentAddPartnerTaggingHandler_h
@import Foundation;

#include "IGAddPartnerTaggingViewControllerDelegate-Protocol.h"
#include "IGBrandedContentTagApprovalRequestSender.h"

@class IGUserSession, IGViewController, NSArray, NSString;

@interface IGBrandedContentAddPartnerTaggingHandler : NSObject {
  /* instance variables */
  NSArray *_selectedPartnerSponsors;
  IGUserSession *_userSession;
  NSString *_taggedMerchantId;
  NSString *_analyticsModule;
  BOOL _shouldShowRequestApprovalsDesign;
  NSObject<IGAddPartnerTaggingViewControllerDelegate> *_delegate;
  IGBrandedContentTagApprovalRequestSender *_tagApprovalRequestSender;
  id /* block */ _requestStatusChangeCompletionHandler;
}

@property (weak, nonatomic) IGViewController *context;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate selectedPartnerSponsors:(id)sponsors taggedMerchantId:(id)id shouldShowRequestApprovalsDesign:(BOOL)design analyticsModule:(id)module entryPoint:(id)point requestStatusChangeCompletionHandler:(id /* block */)handler;
@end

#endif /* IGBrandedContentAddPartnerTaggingHandler_h */
