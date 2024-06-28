//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxPartnershipsHeaderBannerCellSectionController_h
#define IGDirectInboxPartnershipsHeaderBannerCellSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGDirectInboxPartnershipsHeaderBannerViewModel.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGDirectInboxPartnershipsHeaderBannerCellSectionController : IGListBindingSingleSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_session;
}

@property (retain, nonatomic) IGDirectInboxPartnershipsHeaderBannerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)didSelectItemWithCell:(id)cell;
- (void)didDeselectItemWithCell:(id)cell;
- (void)didUpdateToObject:(id)object;
- (void)didTapPartnershipMonetizationPoliciesLink:(id)link;
@end

#endif /* IGDirectInboxPartnershipsHeaderBannerCellSectionController_h */
