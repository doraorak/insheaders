//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFundraiserStickerSummarySectionController_h
#define IGFundraiserStickerSummarySectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "NSObject-Protocol.h"

@class IGFundraiserStickerViewerListSummaryModel, IGUserSession, NSString;
@protocol IGFundraiserStickerSummarySectionControllerDelegate;

@interface IGFundraiserStickerSummarySectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGFundraiserStickerViewerListSummaryModel *_fundraiserSummaryModel;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGFundraiserStickerSummarySectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)fundraiserStickerSummaryCellDidTapBeneficiaryUsername:(id)username;
- (void)fundraiserStickerSummaryCellDidTapSayThanksButton:(id)button;
- (void)fundraiserStickerSummaryCellDidTapAmountInfoIcon:(id)icon;
@end

#endif /* IGFundraiserStickerSummarySectionController_h */
