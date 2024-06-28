//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPMegaphoneSectionControllerPresenter_h
#define IGQPMegaphoneSectionControllerPresenter_h
@import Foundation;

#include "IGQPSectionControllerPresenter.h"
#include "IGQPActionHandlerProtocol-Protocol.h"
#include "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class BKBloksViewHelper, IGGenericMegaphone, IGUserSession, NSString, UIView;
@protocol IGQPMegaphonePresenterProtocol;

@interface IGQPMegaphoneSectionControllerPresenter : IGQPSectionControllerPresenter<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGGenericMegaphone *_megaphone;
  NSObject<IGQPMegaphonePresenterProtocol> *_presenter;
  NSObject<IGQPActionHandlerProtocol> *_actionHandler;
  UIView *_megaphoneView;
  BKBloksViewHelper *_bloksViewHelper;
  BOOL _isInUpdate;
  BOOL _enableServerMegaPhoneBackground;
}

@property (weak, nonatomic) NSObject<IGQPMegaphoneSectionControllerPresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (void)didUpdateToObject:(id)object;
- (void)viewPresenterDidDismiss:(id)dismiss;
- (void)viewPresenter:(id)presenter handleURL:(id)url;
- (void)megaphoneViewPresenter:(id)presenter didHandleButton:(id)button;
- (void)viewPresenter:(id)presenter needsToPushViewController:(id)controller;
- (void)viewPresenterPopTopViewController:(id)controller;
- (void)popToPresentersViewController;
- (void)viewPresenter:(id)presenter presentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)viewPresenter:(id)presenter dismissViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)megaphonePresenterNeedsMegaphoneResize:(id)resize;
- (void)viewPresenter:(id)presenter handleUserScopedIntent:(id)intent;
- (void)megaphonePresenterDismissCurrentPromotion;
- (void)megaphoneViewPresenterTappedNotNow:(id)now;
- (id)qpSurfaceID;
- (void)dismissCurrentPromotion;
- (void)bloksViewHelperNeedsUpdate:(id)update;
- (void)handleBloksAction:(id)action actionType:(id)type;
- (void)didClickButtonWithActionType:(id)type;
- (void)didDismissPromotion;
@end

#endif /* IGQPMegaphoneSectionControllerPresenter_h */
