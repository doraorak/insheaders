//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextSheetPoliticalGenAIDisclaimerCell_h
#define IGContextSheetPoliticalGenAIDisclaimerCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, NSString, UILabel;

@interface IGContextSheetPoliticalGenAIDisclaimerCell : UICollectionViewCell<IGCoreTextLinkHandler> {
  /* instance variables */
  UILabel *_title;
  IGCoreTextView *_learnMoreTextView;
  UILabel *_conditionParagraph;
  UILabel *_conditionBulletpoints;
  UILabel *_footerParagraph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGContextSheetPoliticalGenAIDisclaimerCell_h */
