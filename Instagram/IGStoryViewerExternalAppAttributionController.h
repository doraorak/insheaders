//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerExternalAppAttributionController_h
#define IGStoryViewerExternalAppAttributionController_h
@import Foundation;

#include "IGStoryViewerHeaderAttributionType-Protocol.h"

@class IGStoryAttributionModel, NSString;
@protocol IGStoryViewerLogging;

@interface IGStoryViewerExternalAppAttributionController : NSObject<IGStoryViewerHeaderAttributionType> {
  /* instance variables */
  BOOL _isDisabledAttributionType;
  NSObject<IGStoryViewerLogging> *_storyViewerLogger;
}

@property (readonly, nonatomic) IGStoryAttributionModel *attributionModel;
@property (copy, nonatomic) NSString *finalDestinationModuleForNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAttributionModel:(id)model isDisabledAttributionType:(BOOL)type storyViewerLogger:(id)logger;
- (id)actionSheetButtonTitles;
- (id)tooltipProvider;
- (BOOL)userInteractionEnabled;
- (BOOL)alwaysShowActionSheetOnTap;
- (BOOL)shouldBeIncludedInMultiAttributionBottomSheet;
- (id)newAttributionView;
- (void)didTakeActionWithTitle:(id)title attributionDelegate:(id)delegate navigationController:(id)controller;
- (id)analyticsString;
- (void)_notifyAppAttributionToolTipTap;
@end

#endif /* IGStoryViewerExternalAppAttributionController_h */