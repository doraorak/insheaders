//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPersonalInformationViewController_h
#define IGPersonalInformationViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGQPMegaphoneSectionControllerPresenter.h"
#include "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#include "IGSettingsAccountsCenterTransitionBannerHelper.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGInfoView, IGListAdapter, IGQPMegaphone, IGQPSlotID, IGQuickPromotionCoordinator, IGUserSession, NSCalendar, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface IGPersonalInformationViewController : IGViewController<IGListAdapterDataSource, UICollectionViewDelegate, IGQPMegaphoneSectionControllerPresenterDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableDictionary *_userDict;
  IGListAdapter *_adapter;
  NSMutableArray *_fieldModels;
  IGInfoView *_loadingView;
  IGQuickPromotionCoordinator *_qpCoordinator;
  IGQPMegaphone *_qpMegaphone;
  IGQPSlotID *_qpSlot;
  IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
  IGSettingsAccountsCenterTransitionBannerHelper *_transitionBannerHelper;
  NSString *_secondaryActionURLTransitionBanner;
  UIView *_transitionBanner;
  NSString *_transitionDescriptionText;
  NSString *_birthdayString;
  BOOL _isUserLinkedToFB;
  BOOL _shouldSeeCentralizedSettings;
  BOOL _firstLoadFromAccountSettings;
  BOOL _shouldShowNotConfirmedBirthdayButton;
  NSDateFormatter *_birthdayFormatter;
  NSCalendar *_personalInfoCalendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)presenter;
- (void)_fetchUserData;
- (void)personalInformationFieldSectionController:(id)controller willUpdateWithFieldModel:(id)model;
- (void)personalInformationFieldSectionControllerRefetchUserData:(id)data;
- (void)personalInformationFieldSectionControllerBringCellToFront:(id)front;
- (void)_handleAgeVerificationFlowExitNotification:(id)notification;
@end

#endif /* IGPersonalInformationViewController_h */
