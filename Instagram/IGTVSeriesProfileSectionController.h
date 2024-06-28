//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVSeriesProfileSectionController_h
#define IGTVSeriesProfileSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGTVAnalyticsModuleSuffix.h"
#include "IGTVDestinationEntryPoint.h"
#include "NSObject-Protocol.h"

@class IGPartialModalSheetNavigationController, IGUser, IGUserSession, NSString;

@interface IGTVSeriesProfileSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGUser *_user;
  long long _style;
  NSString *_destinationSessionID;
  IGTVDestinationEntryPoint *_entryPoint;
  IGTVAnalyticsModuleSuffix *_analyticsModuleSuffix;
  IGPartialModalSheetNavigationController *_outerNavigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session user:(id)user style:(long long)style destinationSessionID:(id)id entryPoint:(id)point analyticsModuleSuffix:(id)suffix;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)seriesProfileListViewController:(id)controller didSelectSeriesChannelDataSource:(id)source;
@end

#endif /* IGTVSeriesProfileSectionController_h */
