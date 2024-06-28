//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteTitleSubtitleCell_h
#define IGPromoteTitleSubtitleCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextNonLinkHandler-Protocol.h"
#include "IGPromoteTitleSubtitleViewModel.h"

@class IGCoreTextView, NSString, UIActivityIndicatorView, UIView;
@protocol IGPromoteTitleSubtitleCellDelegate;

@interface IGPromoteTitleSubtitleCell : UICollectionViewCell<IGCoreTextLinkHandler, IGCoreTextNonLinkHandler> {
  /* instance variables */
  IGCoreTextView *_titleView;
  IGCoreTextView *_subtitleView;
  UIView *_topSeparatorView;
  UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) IGPromoteTitleSubtitleViewModel *viewModel;
@property (weak, nonatomic) NSObject<IGPromoteTitleSubtitleCellDelegate> *delegate;
@property (nonatomic) long long viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)heightThatFitsWithViewModel:(id)model width:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextViewDidTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
@end

#endif /* IGPromoteTitleSubtitleCell_h */
