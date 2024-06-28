//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareProfileStickerView_h
#define IGShareProfileStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGImageView.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGThumbnailMediaGridView.h"
#include "IGUser.h"
#include "IGUserSession.h"

@class CAShapeLayer, NSArray, NSString, UILabel, UIView;

@interface IGShareProfileStickerView : UIView<IGConstrainedSizeStickerViewType, IGStickerBundleContentViewType> {
  /* instance variables */
  UIView *_containerView;
  CAShapeLayer *_backgroundLayer;
  CAShapeLayer *_backgroundProfilePictureLayer;
  IGImageView *_profilePictureView;
  UIView *_separatorView;
  UILabel *_nameLabel;
  UILabel *_usernameLabel;
  UILabel *_bioLabel;
  IGThumbnailMediaGridView *_thumbnailMediaGridView;
  UILabel *_actionLabel;
  NSArray *_shimmeringViews;
  NSArray *_highlightedMediaIds;
  BOOL _shouldShowImages;
  BOOL _isLoadingThumbnails;
}

@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSString *displayType;
@property (nonatomic) long long displayStyle;
@property (readonly, nonatomic) NSString *tapStateId;
@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithUserSession:(id)session displayType:(id)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)highlightedMediaIds;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
@end

#endif /* IGShareProfileStickerView_h */
