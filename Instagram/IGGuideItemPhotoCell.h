//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideItemPhotoCell_h
#define IGGuideItemPhotoCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGGuideItemAttributionOverlay.h"
#include "IGImageProgressViewDelegate-Protocol.h"

@class IGImageProgressView, NSString;
@protocol IGGuideItemPhotoCellDelegate;

@interface IGGuideItemPhotoCell : UICollectionViewCell<IGImageProgressViewDelegate> {
  /* instance variables */
  IGGuideItemAttributionOverlay *_attributionOverlay;
}

@property (readonly, nonatomic) IGImageProgressView *imageView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (weak, nonatomic) NSObject<IGGuideItemPhotoCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
@end

#endif /* IGGuideItemPhotoCell_h */
