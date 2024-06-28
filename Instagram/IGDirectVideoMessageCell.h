//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVideoMessageCell_h
#define IGDirectVideoMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGDirectVideoMessageBubbleView.h"
#include "IGHeartAnimatable-Protocol.h"
#include "_TtC37IGDirectUserFlowMediaConsumptionSwift38IGDirectUserFlowMediaConsumptionLogger.h"

@class IGMediaLoggingSecurePersistentIdGenerator, IGMediaOverlayView, NSString;
@protocol IGDirectVideoMessageCellImageViewDelegate;

@interface IGDirectVideoMessageCell : IGDirectMessageCell<IGHeartAnimatable> {
  /* instance variables */
  struct CGSize { double width; double height; } _videoViewSize;
  IGMediaLoggingSecurePersistentIdGenerator *_secureIDGenerator;
  NSObject<IGDirectVideoMessageCellImageViewDelegate> *_imageViewDelegate;
  IGMediaOverlayView *_mediaOverlayView;
  _TtC37IGDirectUserFlowMediaConsumptionSwift38IGDirectUserFlowMediaConsumptionLogger *_userConsumptionLogger;
}

@property (retain, nonatomic) IGDirectVideoMessageBubbleView *videoBubbleView;
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
- (id)previewImage;
- (void)videoBubbleViewWillLoadImage;
- (void)videoBubbleViewDidUpdateImageLoadingState:(id)state;
- (void)videoBubbleViewDidLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)videoBubbleViewDidFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (void)dealloc;
@end

#endif /* IGDirectVideoMessageCell_h */