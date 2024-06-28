//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveAudienceControlsDisclaimerCell_h
#define IGLiveAudienceControlsDisclaimerCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGLiveAudienceControlsDisclaimerViewModel.h"

@class IGCoreTextView, NSString, UIImageView, UIView;
@protocol IGLiveAudienceControlsDisclaimerCellDelegate;

@interface IGLiveAudienceControlsDisclaimerCell : UICollectionViewCell<IGCoreTextLinkHandler> {
  /* instance variables */
  UIView *_wrapperView;
  IGCoreTextView *_textLabel;
  UIImageView *_imageView;
  IGLiveAudienceControlsDisclaimerViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGLiveAudienceControlsDisclaimerCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGLiveAudienceControlsDisclaimerCell_h */
