//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExclusiveMediaPreviewPickerHelperViewController_h
#define IGExclusiveMediaPreviewPickerHelperViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGExclusiveMediaPreviewPickerHelperTipView.h"
#include "IGGestureHandler-Protocol.h"

@class IGImageView, NSString, UILabel;

@interface IGExclusiveMediaPreviewPickerHelperViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  IGImageView *_headerImageView;
  UILabel *_headerLabel;
  IGExclusiveMediaPreviewPickerHelperTipView *_firstHelperTipView;
  IGExclusiveMediaPreviewPickerHelperTipView *_secondHelperTipView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGExclusiveMediaPreviewPickerHelperViewController_h */
