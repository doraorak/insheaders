//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMediaCompositionExportedUploadModel_h
#define IGStoryMediaCompositionExportedUploadModel_h
@import Foundation;

#include "IGQuickCamOutputAsset.h"
#include "IGStoryCreationEditsModel.h"
#include "NSCopying-Protocol.h"

@class UIImage;

@interface IGStoryMediaCompositionExportedUploadModel : NSObject<NSCopying>

@property (readonly, nonatomic) IGQuickCamOutputAsset *outputAsset;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) IGStoryCreationEditsModel *creationEdits;

/* instance methods */
- (id)initWithOutputAsset:(id)asset creationEdits:(id)edits previewImage:(id)image;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* IGStoryMediaCompositionExportedUploadModel_h */