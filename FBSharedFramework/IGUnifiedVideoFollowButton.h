//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnifiedVideoFollowButton_h
#define IGUnifiedVideoFollowButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGFollowButtonViewConfiguration.h"
#include "IGFollowController.h"
#include "IGFollowControllerDelegate-Protocol.h"
#include "IGFollowControllerLoggingProvider-Protocol.h"
#include "IGUser.h"
#include "IGUserSession.h"

@class NSArray, NSString, UIFont;
@protocol IGUnifiedVideoCollabrativeFollowButtonDelegate, IGUnifiedVideoFollowButtonDelegate, IGUnifiedVideoFollowButtonLoggingMetadataProvider;

@interface IGUnifiedVideoFollowButton : IGBouncyButton<IGFollowControllerLoggingProvider, IGFollowControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFollowController *_followController;
  IGFollowButtonViewConfiguration *_followButtonConfig;
  NSObject<IGUnifiedVideoFollowButtonLoggingMetadataProvider> *_loggingMetadataProvider;
}

@property (weak, nonatomic) NSObject<IGUnifiedVideoFollowButtonDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGUnifiedVideoCollabrativeFollowButtonDelegate> *collabrativeFollowButtonDelegate;
@property (retain, nonatomic) IGUser *user;
@property (retain, nonatomic) NSArray *coauthorProducers;
@property (readonly, nonatomic) BOOL isFollowing;
@property (nonatomic) long long viewMode;
@property (readonly, nonatomic) UIFont *titleLabelFont;
@property (nonatomic) BOOL edr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session viewMode:(long long)mode;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setEDR:(BOOL)edr;
- (void)_hackilyHandleOurOwnButtonTaps:(id)taps;
- (id)analyticsExtras;
- (void)followControllerDidDetectNewButtonState:(id)state;
- (void)followController:(id)controller buttonWasTappedWithAction:(long long)action;
- (void)followController:(id)controller didCompleteAction:(long long)action success:(BOOL)success;
- (void)setFollowButtonState:(long long)state;
- (double)borderWidth;
@end

#endif /* IGUnifiedVideoFollowButton_h */