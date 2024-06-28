//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVMetadataEditorContentFundingSectionController_h
#define IGTVMetadataEditorContentFundingSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"

@protocol IGTVMetadataEditorContentFundingSectionControllerDelegate;

@interface IGTVMetadataEditorContentFundingSectionController : IGListGenericSectionController

@property (weak, nonatomic) NSObject<IGTVMetadataEditorContentFundingSectionControllerDelegate> *delegate;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGTVMetadataEditorContentFundingSectionController_h */
