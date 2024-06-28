//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPoliticalAdsFEVView_h
#define IGPoliticalAdsFEVView_h
@import Foundation;

#include "UIScrollView.h"

@class IGCoreTextView, UIImageView, UILabel, UIView;

@interface IGPoliticalAdsFEVView : UIScrollView {
  /* instance variables */
  UILabel *_bylineView;
  UILabel *_fundingEntityTextView;
  UILabel *_phoneTextView;
  UILabel *_emailTextView;
  UILabel *_websiteTextView;
  UILabel *_taxIdTextView;
  UILabel *_disclaimerView;
  UIView *_lineSeparatorTop;
  UILabel *_scmeTextView;
  UIView *_lineSeparatorBottom;
  UILabel *_aboutHeaderView;
  UILabel *_aboutDescriptionView;
  UIImageView *_phoneIcon;
  UIImageView *_emailIcon;
  UIImageView *_websiteIcon;
  UIImageView *_taxIdIcon;
  BOOL _isAdsPreferencePoliticalSheet;
  IGCoreTextView *_learnMoreView;
  IGCoreTextView *_scmeDescriptionWithLearnMoreView;
  IGCoreTextView *_visitArchiveView;
  IGCoreTextView *_helpCenterView;
  UILabel *_libraryLinkView;
  UIView *_emailView;
  UIView *_phoneView;
  UIView *_websiteView;
  UIView *_taxIdView;
}

/* instance methods */
- (id)init;
- (void)layoutSubviews;
@end

#endif /* IGPoliticalAdsFEVView_h */