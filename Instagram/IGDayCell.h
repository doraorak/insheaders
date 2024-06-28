//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDayCell_h
#define IGDayCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGImageViewDelegate-Protocol.h"

@class IGBouncyButton, IGImageView, NSString, UIActivityIndicatorView, UILabel, UIView;
@protocol IGDayCellDelegate;

@interface IGDayCell : UICollectionViewCell<IGImageViewDelegate> {
  /* instance variables */
  IGBouncyButton *_bouncyButton;
  UIView *_circleMask;
  UIActivityIndicatorView *_activityIndicatorView;
}

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) IGImageView *imageView;
@property (weak, nonatomic) NSObject<IGDayCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)_dayCellTapped:(id)tapped;
- (void)setCoverUrl:(id)url module:(id)module;
- (void)setIcon:(unsigned long long)icon iconColor:(id)color module:(id)module;
- (void)setImage:(id)image;
- (void)setBorderWidth:(double)width borderColor:(id)color;
- (void)showLoadingIndicator:(BOOL)indicator;
- (void)layoutSubviews;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGDayCell_h */
