//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGStoryAttributionKitSwift49IGStoryViewerPolaroidStickerAttributionController_h
#define _TtC26IGStoryAttributionKitSwift49IGStoryViewerPolaroidStickerAttributionController_h
@import Foundation;

#include "IGStoryViewerHeaderAttributionType-Protocol.h"

@class NSString;

@interface _TtC26IGStoryAttributionKitSwift49IGStoryViewerPolaroidStickerAttributionController : NSObject<IGStoryViewerHeaderAttributionType> { // (Swift)
  /* instance variables */
   photoFrameString;
   byInstagramString;
}

@property (nonatomic, copy) NSString *finalDestinationModuleForNavigation;

/* instance methods */
- (id)actionSheetButtonTitles;
- (id)newAttributionView;
- (id)tooltipProvider;
- (BOOL)userInteractionEnabled;
- (BOOL)alwaysShowActionSheetOnTap;
- (BOOL)shouldBeIncludedInMultiAttributionBottomSheet;
- (void)didTakeActionWithTitle:(id)title attributionDelegate:(id)delegate navigationController:(id)controller;
- (id)analyticsString;
- (id)init;
@end

#endif /* _TtC26IGStoryAttributionKitSwift49IGStoryViewerPolaroidStickerAttributionController_h */
