//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryLandscapeAdsPreviewerToolView_h
#define IGStoryLandscapeAdsPreviewerToolView_h
@import Foundation;

#include "UIView.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIButton, UITableView, UIView;
@protocol IGStoryLandscapeAdsPreviewerToolViewDelegate;

@interface IGStoryLandscapeAdsPreviewerToolView : UIView<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  UIButton *_internalPreviewerToolButton;
  UIView *_internalPreviewerToolPanel;
  UITableView *_internalPreviewerToolPanelTableView;
  UIButton *_internalPreviewerToolPanelApplyButton;
  UIButton *_internalPreviewerToolPanelResetButton;
  UIButton *_internalPreviewerToolPanelInitButton;
  UIButton *_internalPreviewerToolPanelCloseButton;
  NSMutableDictionary *_parameter;
  NSMutableDictionary *_parameterSaved;
}

@property (weak, nonatomic) NSObject<IGStoryLandscapeAdsPreviewerToolViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame parameter:(id)parameter;
- (void)layoutSubviews;
- (void)refresh;
- (void)_didClickInternalPreviewerToolButton;
- (void)_didClickInternalPreviewerToolApplyButton;
- (void)_didClickInternalPreviewerToolResetButton;
- (void)_didClickInternalPreviewerToolInitButton;
- (void)_didClickInternalPreviewerToolCloseButton;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)storyInternalPreviewerToolTableViewCellDidClickIncreaseButton:(id)button;
- (void)storyInternalPreviewerToolTableViewCellDidClickDecreaseButton:(id)button;
@end

#endif /* IGStoryLandscapeAdsPreviewerToolView_h */