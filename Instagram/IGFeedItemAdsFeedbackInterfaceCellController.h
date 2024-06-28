//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemAdsFeedbackInterfaceCellController_h
#define IGFeedItemAdsFeedbackInterfaceCellController_h
@import Foundation;

#include "IGFeedItemCellController.h"
#include "IGFeedItemAdsFeedbackInterfaceCell.h"
#include "IGFeedItemAdsFeedbackInterfaceDataFetcher.h"
#include "IGFeedItemAdsFeedbackInterfaceDataModel.h"
#include "IGFeedItemAdsFeedbackInterfaceLogger.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGFeedItemAdsFeedbackInterfaceCellControllerDelegate;

@interface IGFeedItemAdsFeedbackInterfaceCellController : IGFeedItemCellController<NSObject> {
  /* instance variables */
  IGFeedItemAdsFeedbackInterfaceDataModel *_dataModel;
  IGFeedItemAdsFeedbackInterfaceDataFetcher *_dataFetcher;
  IGFeedItemAdsFeedbackInterfaceLogger *_afiLogger;
  IGUserSession *_userSession;
  IGFeedItemAdsFeedbackInterfaceCell *_afiCell;
}

@property (weak, nonatomic) NSObject<IGFeedItemAdsFeedbackInterfaceCellControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)collectionViewCellClass;

/* instance methods */
- (id)initWithSectionContext:(id)context feedItemSectionContext:(id)context dataFetcher:(id)fetcher userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeForWidth:(double)width;
- (void)configureCell:(id)cell;
- (void)afiCellDidTapDismissButton:(id)button;
- (void)afiCellDidTapLeftButton:(id)button;
- (void)afiCellDidTapRightButton:(id)button;
@end

#endif /* IGFeedItemAdsFeedbackInterfaceCellController_h */