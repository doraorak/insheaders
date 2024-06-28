//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentTermsCell_h
#define FBPayComponentTermsCell_h
@import Foundation;

#include "FBPayComponentBaseCell.h"
#include "FBPayComponentTermsCellViewModel.h"
#include "FBPayCoreTextView.h"
#include "NSObject-Protocol.h"

@class NSLayoutConstraint, NSString, UILabel;
@protocol FBPayComponentTermsCellDelegate, FBPayViewStyleConfiguring;

@interface FBPayComponentTermsCell : FBPayComponentBaseCell<NSObject> {
  /* instance variables */
  FBPayCoreTextView *_termsBodyView;
  FBPayCoreTextView *_termsLinkView;
  NSObject<FBPayViewStyleConfiguring> *_viewStyleConfiguration;
  FBPayComponentTermsCellViewModel *_viewModel;
  UILabel *_firstLineShimmerLabel;
  UILabel *_secondLineShimmerLabel;
  UILabel *_thirdLineShimmerLabel;
  UILabel *_fourthLineShimmerLabel;
  NSLayoutConstraint *_termsCellHeightConstraint;
}

@property (weak, nonatomic) NSObject<FBPayComponentTermsCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setViewModel:(id)model;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
@end

#endif /* FBPayComponentTermsCell_h */