//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerGenAIStickerAttributionController_h
#define IGStoryViewerGenAIStickerAttributionController_h
@import Foundation;

#include "IGStoryViewerHeaderAttributionType-Protocol.h"

@class NSString;

@interface IGStoryViewerGenAIStickerAttributionController : NSObject<IGStoryViewerHeaderAttributionType>

@property (copy, nonatomic) NSString *finalDestinationModuleForNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)actionSheetButtonTitles;
- (id)tooltipProvider;
- (BOOL)userInteractionEnabled;
- (BOOL)alwaysShowActionSheetOnTap;
- (BOOL)shouldBeIncludedInMultiAttributionBottomSheet;
- (id)newAttributionView;
- (void)didTakeActionWithTitle:(id)title attributionDelegate:(id)delegate navigationController:(id)controller;
- (id)analyticsString;
@end

#endif /* IGStoryViewerGenAIStickerAttributionController_h */