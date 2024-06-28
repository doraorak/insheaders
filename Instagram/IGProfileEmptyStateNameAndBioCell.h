//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileEmptyStateNameAndBioCell_h
#define IGProfileEmptyStateNameAndBioCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGProfileEmptyStateBannerView.h"
#include "IGProfileEmptyStateInLineLinkView.h"
#include "IGProfileEmptyStateNameAndBioModel.h"

@interface IGProfileEmptyStateNameAndBioCell : UICollectionViewCell {
  /* instance variables */
  IGProfileEmptyStateNameAndBioModel *_model;
  IGProfileEmptyStateInLineLinkView *_inLineLinkView;
  IGProfileEmptyStateBannerView *_bannerView;
}

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeForConstrainingSize:(struct CGSize { double x0; double x1; })size model:(id)model;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithModel:(id)model;
- (void)layoutSubviews;
@end

#endif /* IGProfileEmptyStateNameAndBioCell_h */
