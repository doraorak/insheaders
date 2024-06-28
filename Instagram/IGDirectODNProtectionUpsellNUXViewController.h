//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectODNProtectionUpsellNUXViewController_h
#define IGDirectODNProtectionUpsellNUXViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDSHeadlineViewBulletItemLinkDelegate-Protocol.h"

@class IGBottomButtonsView, IGDSHeadlineView, IGUserSession, NSString, UIScrollView;

@interface IGDirectODNProtectionUpsellNUXViewController : IGViewController<IGDSHeadlineViewBulletItemLinkDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDSHeadlineView *_headlineView;
  IGBottomButtonsView *_bottomButtonView;
  UIScrollView *_scrollView;
  BOOL _isTeenDefaultOn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session isTeenDefaultOn:(BOOL)on;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)_getBottomButtonsViewStyle;
- (void)headlineView:(id)view didTapBulletItemLinkText:(id)text url:(id)url;
@end

#endif /* IGDirectODNProtectionUpsellNUXViewController_h */