//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGThirdPartyStickerView_h
#define IGThirdPartyStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGStackableStickerViewType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"

@class NSNumber, NSString, UIBezierPath, UIImageView;

@interface IGThirdPartyStickerView : UIView<IGConstrainedSizeStickerViewType, IGStackableStickerViewType, IGStoryStickerDeletable> {
  /* instance variables */
  UIImageView *_imageView;
  UIBezierPath *_cachedOutlinePath;
  BOOL _outlinePathComputationInProgress;
}

@property (retain, nonatomic) NSString *sourceApplication;
@property (retain, nonatomic) NSString *attributionContentURL;
@property (readonly, nonatomic) unsigned long long thirdPartyStickerViewType;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *stackedLayerIndex;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL containsAudio;
@property (nonatomic) BOOL isNonDeletable;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)outlinePath;
- (BOOL)highQualityOutlinePath;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGThirdPartyStickerView_h */