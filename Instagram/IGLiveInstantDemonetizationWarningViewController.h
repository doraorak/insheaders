//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveInstantDemonetizationWarningViewController_h
#define IGLiveInstantDemonetizationWarningViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGStackLayout, IGUserSession, NSString, UIView;
@protocol IGLiveInstantDemonetizationWarningViewControllerDelegate;

@interface IGLiveInstantDemonetizationWarningViewController : IGViewController<IGPartialModalSheetListener, IGGestureHandler, IGCoreTextLinkHandler> {
  /* instance variables */
  UIView *_bottomSeparator;
  IGBottomButtonsView *_buttonsView;
  IGStackLayout *_stackLayout;
  IGCoreTextView *_descriptionTextView;
  IGUserSession *_userSession;
  NSString *_mediaID;
}

@property (weak, nonatomic) NSObject<IGLiveInstantDemonetizationWarningViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session mediaID:(id)id;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGLiveInstantDemonetizationWarningViewController_h */
