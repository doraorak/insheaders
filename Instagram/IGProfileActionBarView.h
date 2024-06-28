//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileActionBarView_h
#define IGProfileActionBarView_h
@import Foundation;

#include "UIView.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGFollowControllerDelegate-Protocol.h"
#include "IGProfileActionBarViewModel.h"
#include "_TtP26IGProfileActionBarUIShared38IGProfileMessageComposerButtonDelegate_-Protocol.h"

@class IGDirectThreadService, IGFollowController, IGTextButton, IGUserSession, NSDictionary, NSString, UIActivityIndicatorView, UIImageView;
@protocol IGProfileActionBarViewDelegate;

@interface IGProfileActionBarView : UIView<IGFollowControllerDelegate, _TtP26IGProfileActionBarUIShared38IGProfileMessageComposerButtonDelegate_, FBGNVGenericClickMetadataProvider> {
  /* instance variables */
  IGProfileActionBarViewModel *_viewModel;
  IGUserSession *_userSession;
  NSDictionary *_actionToButtonMap;
  NSDictionary *_actionToBadgeMap;
  IGFollowController *_followController;
  IGTextButton *_chainingButton;
  UIActivityIndicatorView *_chainingButtonSpinner;
  UIImageView *_chainingButtonImageView;
  double _horizontalMargin;
  NSString *_analyticsModule;
  BOOL _showProminentMessageButton;
  BOOL _showSuggestedUsersToggleForChainingUnitInDropdown;
  BOOL _suggestedUsersChainingDropdownItemIsSelected;
  IGDirectThreadService *_threadService;
  BOOL _showChainingSpinner;
}

@property (weak, nonatomic) NSObject<IGProfileActionBarViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)_messageComposerButtonWithUser:(id)user userSession:(id)session;
- (void)_didTapEditProfile:(id)profile;
- (void)_didTapPromote:(id)promote;
- (void)_didTapSuggestedUsers:(id)users;
- (void)_didTapSimplifiedDropdown:(id)dropdown;
- (void)_didTapMessage:(id)message;
- (void)_didTapCall:(id)call;
- (void)_didTapAudioCall:(id)call;
- (void)_didTapText:(id)text;
- (void)_didTapEmail:(id)email;
- (void)_didTapShop:(id)shop;
- (void)_didTapOverflow:(id)overflow;
- (void)_didTapShare:(id)share;
- (void)_didTapContact:(id)contact;
- (void)_didTapDonate:(id)donate;
- (void)_didTapFBE:(id)fbe;
- (void)_didTapBuy:(id)buy;
- (void)_didTapDelivery:(id)delivery;
- (void)_didTapCapability:(id)capability;
- (void)_didTapWhatsApp:(id)app;
- (void)_didTapSubscribe:(id)subscribe;
- (void)_didTapViewSubscription:(id)subscription;
- (void)_didTapViewOwnSubscription:(id)subscription;
- (void)_didTapSeeMenu:(id)menu;
- (void)_didTapViewFacebookLink:(id)link;
- (void)_didTapViewExternalLink:(id)link;
- (void)_didTapCreatorMarketplaceInsights:(id)insights;
- (void)followControllerDidDetectNewButtonState:(id)state;
- (void)followController:(id)controller buttonWasTappedWithAction:(long long)action;
- (void)followController:(id)controller didCompleteAction:(long long)action success:(BOOL)success;
- (void)followController:(id)controller didTapButtonWithAction:(long long)action actionExecutionBlock:(id /* block */)block;
- (void)didTapMessageButton:(id)button;
- (void)followControllerWantsToOpenFollowingSheet:(id)sheet;
- (id)contentMetadata;
- (void)messageComposerButtonDidTapIcon:(id)icon;
@end

#endif /* IGProfileActionBarView_h */