//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBrandedContentPartnersViewController_h
#define IGLiveBrandedContentPartnersViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAddPartnerTaggingViewControllerDelegate-Protocol.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGBrandedContentPartnersLoggerContext, IGUserSession, NSArray, NSString;
@protocol IGLiveBrandedContentPartnersViewControllerDelegate;

@interface IGLiveBrandedContentPartnersViewController : IGGroupedTableViewController<IGAddPartnerTaggingViewControllerDelegate, IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  NSArray *_sections;
  NSArray *_partners;
  NSString *_liveDetailsTitle;
  IGBrandedContentPartnersLoggerContext *_logger;
}

@property (weak, nonatomic) NSObject<IGLiveBrandedContentPartnersViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session liveDetailsTitle:(id)title partners:(id)partners;
- (void)viewDidLoad;
- (void)_onDoneTapped;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)brandedContentPartnerCell:(id)cell didRemoveUser:(id)user;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)user viewController:(id)controller;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)user viewController:(id)controller;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)out;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGLiveBrandedContentPartnersViewController_h */
