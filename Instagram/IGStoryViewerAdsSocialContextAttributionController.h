//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerAdsSocialContextAttributionController_h
#define IGStoryViewerAdsSocialContextAttributionController_h
@import Foundation;

#include "IGStoryAdsSocialContextView.h"
#include "IGStoryViewerHeaderAttributionType-Protocol.h"

@class IGMedia, IGUserSession, NSString;

@interface IGStoryViewerAdsSocialContextAttributionController : NSObject<IGStoryViewerHeaderAttributionType> {
  /* instance variables */
  IGStoryAdsSocialContextView *_socialContextView;
  IGMedia *_media;
  NSString *_sponsoredPostLabel;
  NSString *_analyticsModule;
  IGUserSession *_userSession;
}

@property (copy, nonatomic) NSString *finalDestinationModuleForNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSponsoredPostLabel:(id)label media:(id)media analyticsModule:(id)module userSession:(id)session;
- (id)actionSheetButtonTitles;
- (id)newAttributionView;
- (id)tooltipProvider;
- (BOOL)userInteractionEnabled;
- (BOOL)alwaysShowActionSheetOnTap;
- (BOOL)shouldBeIncludedInMultiAttributionBottomSheet;
- (void)didTakeActionWithTitle:(id)title attributionDelegate:(id)delegate navigationController:(id)controller;
- (id)analyticsString;
@end

#endif /* IGStoryViewerAdsSocialContextAttributionController_h */
