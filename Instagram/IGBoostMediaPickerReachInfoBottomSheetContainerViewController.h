//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBoostMediaPickerReachInfoBottomSheetContainerViewController_h
#define IGBoostMediaPickerReachInfoBottomSheetContainerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, IGUserSession, NSString, UIImageView, UILabel;

@interface IGBoostMediaPickerReachInfoBottomSheetContainerViewController : UIViewController<IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  UILabel *_reachHeaderLabel;
  IGCoreTextView *_reachSubtitleTextView;
  UIImageView *_promoteIconImageView;
  UILabel *_accountCenterHeaderLabel;
  IGCoreTextView *_accountCenterSubtitleTextView;
  UILabel *_accountHeaderLabel;
  IGCoreTextView *_accountSubtitleTextView;
  IGCoreTextView *_insightsDisclaimerTextView;
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
- (BOOL)prefersNavigationBarDividerHidden;
- (double)heightForPartialModalSheet;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGBoostMediaPickerReachInfoBottomSheetContainerViewController_h */
