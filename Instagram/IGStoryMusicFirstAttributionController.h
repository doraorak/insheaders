//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMusicFirstAttributionController_h
#define IGStoryMusicFirstAttributionController_h
@import Foundation;

#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStoryMediaControlling-Protocol.h"
#include "IGStoryMusicFirstCreationHandlerDelegate-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGStoryViewerHeaderAttributionType-Protocol.h"

@class IGUserSession, NSString, UINavigationController;

@interface IGStoryMusicFirstAttributionController : NSObject<IGStoryMusicFirstCreationHandlerDelegate, IGStoryViewerHeaderAttributionType> {
  /* instance variables */
  NSObject<IGStoryPostCaptureEditingViewControllerDelegate> *_postCaptureEditingDelegate;
  IGUserSession *_userSession;
  UINavigationController *_navigationController;
  NSObject<IGPartialModalSheetListener> *_partialModalSheetListener;
  NSObject<IGStoryMediaControlling> *_mediaController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *finalDestinationModuleForNavigation;

/* instance methods */
- (id)initWithPostCaptureEditingDelegate:(id)delegate partialModalSheetListener:(id)listener mediaController:(id)controller userSession:(id)session;
- (id)actionSheetButtonTitles;
- (id)newAttributionView;
- (id)tooltipProvider;
- (BOOL)userInteractionEnabled;
- (BOOL)alwaysShowActionSheetOnTap;
- (BOOL)shouldBeIncludedInMultiAttributionBottomSheet;
- (void)didTakeActionWithTitle:(id)title attributionDelegate:(id)delegate navigationController:(id)controller;
- (id)analyticsString;
- (void)musicFirstCreationHandlerDidProduceMediaCompositionState:(id)state;
- (void)musicFirstCreationHandlerDidCancelAudioSelection;
@end

#endif /* IGStoryMusicFirstAttributionController_h */
