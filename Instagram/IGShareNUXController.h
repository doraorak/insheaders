//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareNUXController_h
#define IGShareNUXController_h
@import Foundation;

#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGTooltipViewDelegate-Protocol.h"

@class IGAlertDialogView, IGTooltipView, IGUserSession, NSString, UICollectionView, UITapGestureRecognizer, UIViewController;
@protocol IGShareNUXControllerDelegate, UIViewController<IGViewControllerType;

@interface IGShareNUXController : NSObject<IGTooltipViewDelegate, IGCoreTextLinkHandler> {
  /* instance variables */
  UIViewController *_viewController;
  IGTooltipView *_NUXView;
  IGTooltipView *_tempNUXView;
  IGAlertDialogView *_alertDialogView;
  UITapGestureRecognizer *_mainNuxDismissTap;
  UITapGestureRecognizer *_titleNuxDismissTap;
  IGUserSession *_userSession;
  UIViewController<IGViewControllerType> *_alertViewController;
  UICollectionView *_collectionView;
  BOOL _hasSeenNux;
}

@property (weak, nonatomic) NSObject<IGShareNUXControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller collectionView:(id)view andUserSession:(id)session;
- (void)hideTooltip;
- (void)_showGenAITooltipOnCell:(id)cell;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (BOOL)_cellIsVisible:(id)visible;
- (void)_showShareToOtherAccountsTooltipOnCell:(id)cell;
- (void)_showTagProductsTooltipOnCell:(id)cell;
- (void)_showTagCollectionsAndPromotionsTooltipOnCell:(id)cell;
- (void)_showAutomaticTaggingTooltipOnLabel:(id)label;
- (void)_showTagProductsWithTooltipOverrideOnCell:(id)cell;
- (void)_showShareToFacebookSecondTimeExperienceTooltipOnCell:(id)cell;
- (void)_showShareToFacebookPageTooltipOnCell:(id)cell;
- (void)_showShareToFacebookEducationalTooltipOnCell:(id)cell;
- (void)_showAddButtonTooltipOnCell:(id)cell;
- (void)_showAddOrganicCTATooltipOnCell:(id)cell;
- (void)_showSellProductTooltipOnCell:(id)cell;
- (void)_showFanClubShareTooltipOnCell:(id)cell;
- (void)_showFanClubAudienceControlsShareTooltipOnCell:(id)cell;
- (BOOL)_showAudienceControlsShareTooltipOnCell:(id)cell;
- (void)_showContentSchedulingTooltipOnLabel:(id)label;
- (void)_showFundraiserCreationNudgeTooltipOnCell:(id)cell;
- (void)didTapTooltipView:(id)view;
@end

#endif /* IGShareNUXController_h */
