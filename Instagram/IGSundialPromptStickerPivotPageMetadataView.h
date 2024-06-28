//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialPromptStickerPivotPageMetadataView_h
#define IGSundialPromptStickerPivotPageMetadataView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGPivotPageUsernameButton.h"

@class IGRoundedImageView, NSString, NSURL, UILabel;
@protocol IGSundialPromptStickerPivotPageMetadataViewDelegate;

@interface IGSundialPromptStickerPivotPageMetadataView : IGPassthroughView {
  /* instance variables */
  IGRoundedImageView *_roundedImageView;
  UILabel *_stickerPromptLabel;
  UILabel *_videoCountLabel;
  IGPivotPageUsernameButton *_promptCreatorAttribution;
}

@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSString *videoCountString;
@property (weak, nonatomic) NSObject<IGSundialPromptStickerPivotPageMetadataViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapUsernameButton;
@end

#endif /* IGSundialPromptStickerPivotPageMetadataView_h */
