//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAddPartnerSearchContainerViewController_h
#define IGAddPartnerSearchContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAddPartnerSearchContainerViewControllerDelegate-Protocol.h"
#include "IGAddPartnerTaggingNullStateDataSource.h"
#include "IGAddPartnerTaggingViewControllerDelegate-Protocol.h"
#include "IGBrandedContentPartnersListViewController.h"
#include "IGSearchClickHandler-Protocol.h"
#include "IGSearchTypeaheadSearchResultViewModelProvider-Protocol.h"

@class IGUserSession, IGViewController, NSArray, NSString;

@interface IGAddPartnerSearchContainerViewController : IGViewController<IGSearchTypeaheadSearchResultViewModelProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGViewController *_searchViewController;
  long long _mediaType;
  BOOL _shouldShowRequestApprovalsDesign;
  BOOL _isDisclosureRedesignEnabled;
  BOOL _isSingleScreenPresentedModally;
  NSObject<IGAddPartnerTaggingViewControllerDelegate> *_taggingDelegate;
  NSObject<IGAddPartnerSearchContainerViewControllerDelegate> *_delegate;
  IGAddPartnerTaggingNullStateDataSource *_searchNullStateDataSource;
  NSObject<IGSearchClickHandler> *_searchClickHandler;
  NSArray *_addedBrandPartners;
  NSArray *_addedPendingApprovalBrandPartners;
  IGBrandedContentPartnersListViewController *_seeAllViewController;
  long long _originalUserInterfaceStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session taggingDelegate:(id)delegate delegate:(id)delegate selectedPartnerSponsors:(id)sponsors taggedMerchantId:(id)id mediaId:(id)id mediaType:(long long)type isEditing:(BOOL)editing shouldShowRequestApprovalsDesign:(BOOL)design isDisclosureRedesignEnabled:(BOOL)enabled isSingleScreenPresentedModally:(BOOL)modally modifiedBrandPartners:(id)partners entryPoint:(id)point analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)searchViewControllerDidCancelSearch:(id)search;
- (void)searchViewControllerDidExitSearch:(id)search;
- (BOOL)searchViewControllerShouldTriggerSearchWithReturnKeyClick:(id)click;
- (void)partnersListViewControllerDidClickOnBrandPartner:(id)partner;
- (void)didClickOnBrandPartner:(id)partner;
- (void)didTapOnTextViewString:(id)string URL:(id)url;
- (id)viewModelWithDataModel:(id)model sourceType:(unsigned long long)type userSession:(id)session analyticsModule:(id)module searchText:(id)text;
- (void)didTapSeeAllButton;
- (void)_onBackButtonTapped;
- (void)_onNextButtonTapped;
@end

#endif /* IGAddPartnerSearchContainerViewController_h */
