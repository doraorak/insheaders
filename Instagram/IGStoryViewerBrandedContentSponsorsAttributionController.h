//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerBrandedContentSponsorsAttributionController_h
#define IGStoryViewerBrandedContentSponsorsAttributionController_h
@import Foundation;

#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStoryFullscreenSectionLoggingContext.h"
#include "IGStoryViewerHeaderAttributionType-Protocol.h"

@class IGMedia, IGStringStyle, IGUserSession, NSArray, NSString;
@protocol IGStoryViewerCurrentItemProvider, IGStoryViewerNavigation;

@interface IGStoryViewerBrandedContentSponsorsAttributionController : NSObject<IGStoryViewerHeaderAttributionType> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGStoryViewerCurrentItemProvider> *_storyItemProvider;
  NSObject<IGPartialModalSheetListener> *_partialModalSheetListener;
  NSObject<IGStoryViewerNavigation> *_storyViewerNavigation;
  IGMedia *_media;
  NSString *_sourceModule;
  BOOL _isPaidBrandedContent;
  NSArray *_brandedContentSponsors;
  NSString *_firstSponsorsUserName;
  IGStringStyle *_stringStyle;
  NSString *_sponsoredPostLabel;
  IGStoryFullscreenSectionLoggingContext *_loggingContext;
}

@property (copy, nonatomic) NSString *finalDestinationModuleForNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStoryItemProvider:(id)provider brandedContentSponsors:(id)sponsors media:(id)media isPaidBrandedContent:(BOOL)content sponsoredPostLabel:(id)label storyViewerNavigation:(id)navigation userSession:(id)session partialModalSheetListener:(id)listener sourceModule:(id)module loggingContext:(id)context;
- (id)actionSheetButtonTitles;
- (id)tooltipProvider;
- (BOOL)userInteractionEnabled;
- (BOOL)alwaysShowActionSheetOnTap;
- (BOOL)shouldBeIncludedInMultiAttributionBottomSheet;
- (id)newAttributionView;
- (void)didTakeActionWithTitle:(id)title attributionDelegate:(id)delegate navigationController:(id)controller;
- (id)analyticsString;
@end

#endif /* IGStoryViewerBrandedContentSponsorsAttributionController_h */
