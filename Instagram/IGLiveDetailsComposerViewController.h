//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveDetailsComposerViewController_h
#define IGLiveDetailsComposerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGLiveDetailsComposerView.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class IGUserSession, NSArray, NSString;
@protocol IGLiveDetailsComposerViewControllerDelegate;

@interface IGLiveDetailsComposerViewController : IGViewController<IGPartialModalSheetListener, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_broadcastTitle;
  NSArray *_taggedPartners;
  IGLiveDetailsComposerView *_composerView;
}

@property (weak, nonatomic) NSObject<IGLiveDetailsComposerViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session broadcastTitle:(id)title taggedPartners:(id)partners;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)liveDetailsComposerViewDidTapAddTitleButton:(id)button withTitle:(id)title taggedPartners:(id)partners;
- (void)liveDetailsComposerViewDidTapTagBusinessPartner:(id)partner withTitle:(id)title taggedPartners:(id)partners;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
@end

#endif /* IGLiveDetailsComposerViewController_h */
