//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBUpsellSectionController_h
#define IGFBUpsellSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFBUpsellNetegoModel.h"
#include "IGFeedItemCTAButtonCellConfigurableDelegate-Protocol.h"
#include "IGScopedListener-Protocol.h"

@class FBTimer, IGUserSession, NSString;
@protocol IGNetegoImpressionActionProvider;

@interface IGFBUpsellSectionController : IGListSectionController<IGFeedItemCTAButtonCellConfigurableDelegate, IGScopedListener> {
  /* instance variables */
  IGFBUpsellNetegoModel *_model;
  IGUserSession *_userSession;
  unsigned long long _hiddenState;
  FBTimer *_ctaDwellDetectionTimer;
  NSString *_module;
  NSObject<IGNetegoImpressionActionProvider> *_netegoStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long itemPositionInFeed;

/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module netegoImpressionStrategy:(id)strategy;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)headerDidTapOnRightSideMoreButton;
- (void)hideFBInviteNetEgoItem:(id)item;
- (BOOL)showSubmittedLabelForFeedItemActionCell:(id)cell;
- (void)feedItemActionCellDidTapCustomizableButton:(id)button directResponseInfoContext:(id)context tapPoint:(struct CGPoint { double x0; double x1; })point;
- (void)feedItemActionCellCustomizableButtonStateDidChange:(id)change toState:(unsigned long long)state withIntent:(id)intent;
- (void)feedItemActionCellCustomizableButtonDidChange:(id)change toVisible:(BOOL)visible;
- (void)clearCTADwellDetectionTimer;
- (void)handleCTAButtonTapped:(id)tapped sponsoredPostEntryPoint:(unsigned long long)point context:(unsigned long long)context tapPoint:(struct CGPoint { double x0; double x1; })point;
- (void)handleAdTagTapped:(unsigned long long)tapped;
- (void)handleShowcaseAdTagTappedWithIndex:(long long)index sponsoredEntryPostPoint:(unsigned long long)point;
@end

#endif /* IGFBUpsellSectionController_h */
