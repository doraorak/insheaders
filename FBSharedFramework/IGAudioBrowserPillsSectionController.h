//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserPillsSectionController_h
#define IGAudioBrowserPillsSectionController_h
@import Foundation;

#include "IGListBindingSectionController.h"
#include "IGAudioBrowserLogger-Protocol.h"
#include "IGAudioBrowserModelsListViewControllerDelegate-Protocol.h"
#include "IGListBindingSectionControllerDataSource-Protocol.h"
#include "IGListBindingSectionControllerSelectionDelegate-Protocol.h"
#include "IGUserSession.h"

@class NSMutableDictionary, NSString;
@protocol IGAudioBrowserPillsSectionControllerDelegate;

@interface IGAudioBrowserPillsSectionController : IGListBindingSectionController<IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate, IGAudioBrowserModelsListViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGAudioBrowserLogger> *_logger;
  NSMutableDictionary *_playlistRequestCache;
  BOOL _bookmarkingEnabled;
  double _requiredMinimumAudioDurationInMs;
}

@property (copy, nonatomic) NSString *analyticsModule;
@property (weak, nonatomic) NSObject<IGAudioBrowserPillsSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger;
- (void)didUpdateToObject:(id)object;
- (id)sectionController:(id)controller cellForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sectionController:(id)controller sizeForViewModel:(id)model atIndex:(long long)index;
- (id)sectionController:(id)controller viewModelsForObject:(id)object;
- (void)sectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didHighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didUnhighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)audioBrowserPillsSingleCellModelDidTapPill:(id)pill;
- (void)modelsListViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context category_DEPRECATED:(unsigned long long)deprecated;
- (void)modelsListViewController:(id)controller didTapAudioPageForAudioTrack:(id)track pivotPageSessionId:(id)id;
- (void)modelsListViewController:(id)controller didTapArtist:(id)artist category:(unsigned long long)category;
- (void)modelsListViewControllerDidTapClearAllForRecentSearches:(id)searches;
- (void)modelsListViewControllerDidUpdateModels:(id)models;
- (void)modelsListViewController:(id)controller multiTrackDidTapAudioTrack:(id)track;
- (void)modelsListViewController:(id)controller didTapLimitedCatalogBannerLearnMoreLinkWithUrl:(id)url;
@end

#endif /* IGAudioBrowserPillsSectionController_h */
