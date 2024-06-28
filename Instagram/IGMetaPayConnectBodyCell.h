//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMetaPayConnectBodyCell_h
#define IGMetaPayConnectBodyCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGImageViewDelegate-Protocol.h"

@class IGImageView, IGProfilePhotoView, NSString, UILabel, UIView;

@interface IGMetaPayConnectBodyCell : UICollectionViewCell<IGImageViewDelegate> {
  /* instance variables */
  UIView *_containerView;
  IGImageView *_cardView;
  UILabel *_nameLabel;
  UILabel *_emailLabel;
  UILabel *_addressLine1Label;
  UILabel *_addressLine2Label;
  UILabel *_cardTitleLabel;
  IGProfilePhotoView *_fbProfilePicture;
  NSString *_lastFourDigitsOfCard;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGMetaPayConnectBodyCell_h */
