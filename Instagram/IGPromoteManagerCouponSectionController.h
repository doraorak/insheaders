//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteManagerCouponSectionController_h
#define IGPromoteManagerCouponSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGPromoteManagerCouponViewCellDelegate-Protocol.h"
#include "IGPromoteManagerCouponViewModel.h"

@class IGUserSession, NSString;
@protocol IGPromoteManagerCouponSectionControllerDelegate;

@interface IGPromoteManagerCouponSectionController : IGListBindingSingleSectionController<IGPromoteManagerCouponViewCellDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (readonly, nonatomic) IGPromoteManagerCouponViewModel *viewModel;
@property (weak, nonatomic) NSObject<IGPromoteManagerCouponSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)couponViewCellDidTapEnrollCouponButton:(id)button;
- (void)couponViewCellDidTapOpenPromoteMediaPickerButton:(id)button;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
@end

#endif /* IGPromoteManagerCouponSectionController_h */