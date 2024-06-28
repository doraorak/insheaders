//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGResharedPhotoStickerView_h
#define IGResharedPhotoStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGGradientView.h"
#include "IGImageStickerView.h"
#include "IGResharedMediaStickerEditingProtocol-Protocol.h"
#include "IGResharedPhotoStickerModel.h"
#include "IGResharedVideoStickerHeaderView.h"
#include "IGSpecialBurnedInContentStickerViewType-Protocol.h"
#include "IGStickerViewBackendIdentifiableType-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGUserSession.h"

@class NSArray, NSString, UILabel;

@interface IGResharedPhotoStickerView : UIView<IGStickerViewType, IGStoryStickerDeletable, IGResharedMediaStickerEditingProtocol, IGSpecialBurnedInContentStickerViewType, IGStickerViewBackendIdentifiableType, IGConstrainedZPositionStickerViewType> {
  /* instance variables */
  IGImageStickerView *_imageStickerView;
  IGResharedVideoStickerHeaderView *_headerView;
  IGGradientView *_topGradientView;
  UILabel *_captionLabel;
  IGGradientView *_captionGradientView;
  IGUserSession *_userSession;
}

@property (nonatomic) long long imageContentMode;
@property (readonly, nonatomic) IGResharedPhotoStickerModel *model;
@property (nonatomic) double cornerRadiusWidthRatio;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isNonDeletable;
@property (readonly, nonatomic) BOOL isTapToAdvanceEnabled;
@property (readonly, nonatomic) long long stickerStyle;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (readonly, nonatomic) long long zIndexConstraint;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithModel:(id)model userSession:(id)session;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)advanceStickerStyle;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)isDraftSupported;
- (id)outlinePath;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)xpostingModel;
- (void)updateContentForBurnIn:(BOOL)in;
- (void)restoreContentFromBurnIn;
@end

#endif /* IGResharedPhotoStickerView_h */