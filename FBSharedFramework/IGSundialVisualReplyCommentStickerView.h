//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialVisualReplyCommentStickerView_h
#define IGSundialVisualReplyCommentStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGAPIMediaVCRTappableData.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGGradientView.h"
#include "IGProfilePictureImageView.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStickerViewBackendIdentifiableType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGTimedObject-Protocol.h"
#include "IGUser.h"

@class NSAttributedString, NSString, UILabel;

@interface IGSundialVisualReplyCommentStickerView : UIView<IGConstrainedSizeStickerViewType, IGStickerBundleContentViewType, IGStoryStickerDeletable, IGStickerViewBackendIdentifiableType, IGTimedObject> {
  /* instance variables */
  long long _currentStyle;
  IGGradientView *_backgroundGradientView;
  IGProfilePictureImageView *_profilePictureImageView;
  UILabel *_commentLabel;
  UILabel *_commentAuthorAttributionLabel;
  IGAPIMediaVCRTappableData *_commentModel;
  NSAttributedString *_commentAttributedString;
}

@property (readonly, nonatomic) IGUser *commentAuthor;
@property (readonly, nonatomic) NSString *commentID;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;
@property (nonatomic) BOOL isNonDeletable;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithCommentAttributedString:(id)string commentAuthor:(id)author commentID:(id)id userSession:(id)session;
- (id)initWithCommentModel:(id)model userSession:(id)session;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)isDraftSupported;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)outlinePath;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)xpostingModel;
@end

#endif /* IGSundialVisualReplyCommentStickerView_h */
