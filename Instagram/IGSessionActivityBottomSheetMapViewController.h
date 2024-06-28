//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSessionActivityBottomSheetMapViewController_h
#define IGSessionActivityBottomSheetMapViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGSessionActivityBottomSheetMapView.h"
#include "IGSessionActivityInfoModel.h"

@class IGUserSession, NSString;
@protocol IGSessionActivityBottomSheetMapViewControllerDelegate;

@interface IGSessionActivityBottomSheetMapViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSessionActivityBottomSheetMapView *_bottomMapView;
  IGSessionActivityInfoModel *_viewModel;
  BOOL _presentationFinished;
}

@property (weak, nonatomic) NSObject<IGSessionActivityBottomSheetMapViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)sessionActivityBottomSheetMapViewDidTapOnLogOutButton:(id)button;
@end

#endif /* IGSessionActivityBottomSheetMapViewController_h */
