//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMyWeekNuxViewController_h
#define IGMyWeekNuxViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGMyWeekRow.h"
#include "IGMyWeekSwitchRow.h"
#include "IGStoryViewerPresentationController.h"
#include "NSObject-Protocol.h"

@class IGBottomButtonsView, IGImageView, IGStoryTrayViewModel, IGUserSession, NSString, UILabel, UIView;
@protocol UIView<IGStoryTrayAvatarViewProtocol;

@interface IGMyWeekNuxViewController : IGViewController<NSObject> {
  /* instance variables */
  long long _contentStyle;
  IGStoryTrayViewModel *_viewModel;
  UIView<IGStoryTrayAvatarViewProtocol> *_previewView;
  IGImageView *_iconView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGMyWeekRow *_firstRow;
  IGMyWeekRow *_secondRow;
  IGMyWeekRow *_thirdRow;
  IGMyWeekSwitchRow *_latelyToggleView;
  BOOL _originalValue;
  UIView *_divider;
  IGBottomButtonsView *_bottomButtonsView;
  IGUserSession *_userSession;
  IGStoryViewerPresentationController *_storyViewerPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentStyle:(long long)style trayViewModel:(id)model userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)partialModalSheet:(id)sheet didTapDimmingBackgroundView:(id)view atPoint:(struct CGPoint { double x0; double x1; })point timeSinceOpening:(double)opening;
- (void)_onPreviewViewTap:(id)tap;
@end

#endif /* IGMyWeekNuxViewController_h */