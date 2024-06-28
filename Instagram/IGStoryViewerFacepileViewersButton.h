//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerFacepileViewersButton_h
#define IGStoryViewerFacepileViewersButton_h
@import Foundation;

#include "UIControl.h"
#include "IGEDRViewType-Protocol.h"
#include "IGStoryFullscreenStoryOwnerViewerButtonViewModel.h"

@class IGStoryFacepileView, NSString, UIImageView, UILabel;

@interface IGStoryViewerFacepileViewersButton : UIControl<IGEDRViewType> {
  /* instance variables */
  IGStoryFacepileView *_facepileView;
  UIImageView *_expiredViewersIcon;
  UILabel *_seenByLabel;
  BOOL _edr;
  double _labelMaxWidth;
}

@property (nonatomic) struct UIOffset { double x0; double x1; } tapPadding;
@property (readonly, nonatomic) IGStoryFullscreenStoryOwnerViewerButtonViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setEDR:(BOOL)edr;
@end

#endif /* IGStoryViewerFacepileViewersButton_h */
