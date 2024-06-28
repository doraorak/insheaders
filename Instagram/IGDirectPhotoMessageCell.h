//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPhotoMessageCell_h
#define IGDirectPhotoMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGDirectMediaViewerPresentationCellProtocol-Protocol.h"
#include "IGDirectPhotoMessageBubbleView.h"
#include "IGDirectPhotoMessageViewModel.h"
#include "IGHeartAnimatable-Protocol.h"
#include "_TtC37IGDirectUserFlowMediaConsumptionSwift38IGDirectUserFlowMediaConsumptionLogger.h"

@class IGMediaLoggingSecurePersistentIdGenerator, IGMediaOverlayView, IGRingViewSpecFactory, NSString, UIView;
@protocol IGDirectPhotoMessageCellImageViewDelegate;

@interface IGDirectPhotoMessageCell : IGDirectMessageCell<IGDirectMediaViewerPresentationCellProtocol, IGHeartAnimatable> {
  /* instance variables */
  UIView *_recognizerView;
  IGMediaLoggingSecurePersistentIdGenerator *_secureIDGenerator;
  IGRingViewSpecFactory *_ringViewSpecFactory;
  NSObject<IGDirectPhotoMessageCellImageViewDelegate> *_imageViewDelegate;
  IGMediaOverlayView *_mediaOverlayView;
  _TtC37IGDirectUserFlowMediaConsumptionSwift38IGDirectUserFlowMediaConsumptionLogger *_userConsumptionLogger;
}

@property (retain, nonatomic) IGDirectPhotoMessageBubbleView *photoBubbleView;
@property (readonly, nonatomic) IGDirectPhotoMessageViewModel *model;
@property (readonly, nonatomic) UIView *photoImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })messageContentSize;
- (id)imageViewForMediaViewer;
- (id)previewImageForMediaViewer;
- (id)replyImageViewForMediaViewer;
- (id)replyPreviewImageForMediaViewer;
- (id)contentViewForHeartAnimation;
- (void)refreshContentBeforeMediaViewerDismissal;
- (void)photoBubbleViewWillLoadImage;
- (void)photoBubbleViewDidUpdateLoadingState:(id)state;
- (void)photoBubbleViewDidLoadImage:(id)image imageView:(id)view loadSource:(id)source networkRequestSummary:(id)summary;
- (void)photoBubbleViewDidFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (id)previewImage;
- (void)dealloc;
@end

#endif /* IGDirectPhotoMessageCell_h */