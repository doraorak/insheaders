//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXFeedCrossPostingAfterShareChainingUpsell_h
#define IGFXFeedCrossPostingAfterShareChainingUpsell_h
@import Foundation;

#include "FXUnifiedACUpsellContent.h"
#include "IGFXUpsellDataFetcher.h"
#include "IGFXUpsellServerImpressionLogger.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class IGBloksActionNavigationController, IGUserSessionProvider, NSArray, NSString, UIViewController;

@interface IGFXFeedCrossPostingAfterShareChainingUpsell : NSObject<IGPartialModalSheetListener> {
  /* instance variables */
  IGUserSessionProvider *_userSessionProvider;
  IGFXUpsellDataFetcher *_dataFetcher;
  IGFXUpsellServerImpressionLogger *_serverLogger;
  UIViewController *_presentingVC;
  UIViewController *_hostingViewController;
  id /* block */ _dismissActionBlock;
  id /* block */ _autoXpostingActionBlock;
  BOOL _isEligibleFeedCrossPostingAfterShareChainingUpsellFromServerFetch;
  BOOL _isDismissedByButtonTapping;
  BOOL _isLinkingCompletedSuccessfully;
  long long _linkingScenario;
  NSString *_targetAccountName;
  IGBloksActionNavigationController *_bloksNavigationController;
  NSString *_analyticsModule;
  NSArray *_opaqueVerifiedNativeAuthData;
  FXUnifiedACUpsellContent *_prescreenContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider serverLogger:(id)logger dataFetcher:(id)fetcher;
- (void)xpostingACUpsellBottomSheetControllerDidTapCTAButton;
- (void)xpostingACUpsellBottomSheetControllerDidTapCancelButton;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheetDidDismiss:(id)dismiss;
@end

#endif /* IGFXFeedCrossPostingAfterShareChainingUpsell_h */