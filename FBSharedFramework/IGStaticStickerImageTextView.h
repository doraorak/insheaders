//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStaticStickerImageTextView_h
#define IGStaticStickerImageTextView_h
@import Foundation;

#include "UIView.h"
#include "IGImageStickerView.h"
#include "IGStaticStickerPaddedLabel.h"
#include "IGStaticStickerSingleModel.h"

@interface IGStaticStickerImageTextView : UIView

@property (retain, nonatomic) IGStaticStickerSingleModel *model;
@property (readonly, nonatomic) IGStaticStickerPaddedLabel *label;
@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) IGImageStickerView *imageStickerView;

/* instance methods */
- (id)initWithModel:(id)model brandRefresh:(BOOL)refresh useBrandRefreshForGlobalScripts:(BOOL)scripts module:(id)module;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)outlinePath;
@end

#endif /* IGStaticStickerImageTextView_h */
