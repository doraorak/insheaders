//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioUnavailableSearchQueryCell_h
#define IGAudioUnavailableSearchQueryCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"

@class NSString, UIImageView, UILabel;

@interface IGAudioUnavailableSearchQueryCell : IGBouncyCollectionViewCell {
  /* instance variables */
  UIImageView *_errorImageView;
  UIImageView *_chevronImageView;
  UILabel *_disabledReasonLabel;
}

@property (copy, nonatomic) NSString *disabledReason;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
@end

#endif /* IGAudioUnavailableSearchQueryCell_h */
