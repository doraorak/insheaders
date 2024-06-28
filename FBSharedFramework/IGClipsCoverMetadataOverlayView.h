//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGClipsCoverMetadataOverlayView_h
#define IGClipsCoverMetadataOverlayView_h
@import Foundation;

#include "UIView.h"
#include "IGClipsCoverMetadataOverlayType.h"
#include "IGMaxWidthLayout.h"
#include "IGProfilePictureImageView.h"
#include "IGStackLayout.h"
#include "IGStoryFacepileView.h"

@class UIFont, UIImageView, UILabel;
@protocol UIView<IGContentNotesRIXUOverlayViewType;

@interface IGClipsCoverMetadataOverlayView : UIView {
  /* instance variables */
  IGClipsCoverMetadataOverlayType *_metadata;
  UIImageView *_iconImageView;
  UILabel *_titleLabel;
  IGProfilePictureImageView *_profilePictureImageView;
  IGStoryFacepileView *_facepileView;
  UIView<IGContentNotesRIXUOverlayViewType> *_contentNoteView;
  IGStackLayout *_layout;
  IGMaxWidthLayout *_titleMaxLayout;
}

@property (retain, nonatomic) IGClipsCoverMetadataOverlayType *style;
@property (retain, nonatomic) UIFont *customTitleFont;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)prepareForReuse;
@end

#endif /* IGClipsCoverMetadataOverlayView_h */