//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveParticipantAttributionView_h
#define IGLiveParticipantAttributionView_h
@import Foundation;

#include "UIView.h"
#include "IGActionSheetControllerDelegate-Protocol.h"
#include "IGLiveBroadcastLogger.h"

@class IGProfilePictureImageView, IGUser, NSString, UIImageView, UILabel, UIVisualEffectView;
@protocol IGLiveAddonCoordinating;

@interface IGLiveParticipantAttributionView : UIView<IGActionSheetControllerDelegate> {
  /* instance variables */
  IGUser *_participant;
  id /* block */ _followHandler;
  id /* block */ _removeHandler;
  IGLiveBroadcastLogger *_logger;
  UIVisualEffectView *_blurBackgroundView;
  IGProfilePictureImageView *_profileImageView;
  UILabel *_nameLabel;
  UIImageView *_moreOptionsIndicator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGLiveAddonCoordinating> *coordinator;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL addonLifeCycleEventEnabled;

/* instance methods */
- (id)initWithParticipant:(id)participant actionSheetFollowHandler:(id /* block */)handler actionSheetRemoveHandler:(id /* block */)handler logger:(id)logger;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_presentActionSheet:(id)sheet;
- (void)actionSheetControllerDidDismiss:(id)dismiss;
- (void)actionSheetController:(id)controller willDismissWithActionStyle:(long long)style;
- (void)actionSheetControllerDidSelectNonCancelAction:(id)action;
- (void)configurateCoordinator:(id)coordinator;
- (void)unconfigurateCoordinator;
- (void)receiveEvent:(unsigned long long)event from:(id)from payload:(id)payload;
- (BOOL)canHandleRequest:(id)request;
- (id)handleRequest:(id)request;
@end

#endif /* IGLiveParticipantAttributionView_h */
