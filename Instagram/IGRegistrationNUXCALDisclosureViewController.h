//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationNUXCALDisclosureViewController_h
#define IGRegistrationNUXCALDisclosureViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGNUXAgeInfo.h"
#include "IGNUXFBContent.h"
#include "IGNUXLayoutSpec.h"
#include "IGRegistrationNUXCALDisclosureView.h"
#include "NSObject-Protocol.h"

@class IGRegistrationLogger, IGUserSession, NSString;
@protocol IGRegistrationNUXCALDisclosureViewControllerDelegate;

@interface IGRegistrationNUXCALDisclosureViewController : IGViewController<NSObject> {
  /* instance variables */
  IGRegistrationNUXCALDisclosureView *_containerView;
  IGNUXLayoutSpec *_layoutSpec;
  IGNUXFBContent *_content;
  IGUserSession *_userSession;
  IGRegistrationLogger *_logger;
  BOOL _isDiscoverPeopleFlow;
  NSString *_fbToken;
  BOOL _isUsingBigBlueToken;
  IGNUXAgeInfo *_ageInfo;
  BOOL _performLinkUponCompletion;
  unsigned long long _linkingEntryPoint;
}

@property (weak, nonatomic) NSObject<IGRegistrationNUXCALDisclosureViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContent:(id)content userSession:(id)session fbToken:(id)token isUsingBigBlueToken:(BOOL)token ageInfo:(id)info logger:(id)logger isDiscoverPeopleFlow:(BOOL)flow layoutSpec:(id)spec linkingEntryPoint:(unsigned long long)point performLinkUponCompletion:(BOOL)completion;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)calViewDidTapPrimaryButton:(id)button;
- (void)calViewDidTapSecondaryButton:(id)button;
- (void)calViewDidTapBackButton:(id)button;
- (void)calView:(id)view didTapURL:(id)url;
@end

#endif /* IGRegistrationNUXCALDisclosureViewController_h */
