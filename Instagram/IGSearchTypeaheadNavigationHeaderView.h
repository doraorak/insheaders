//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchTypeaheadNavigationHeaderView_h
#define IGSearchTypeaheadNavigationHeaderView_h
@import Foundation;

#include "IGCustomHeaderView.h"
#include "IGDSSegmentedPillBarViewDelegate-Protocol.h"
#include "IGSearchResultSectionControllerLoggingProvider-Protocol.h"

@class IGSearchBar, IGSearchBarConfig, IGUserSession, NSArray, NSString;
@protocol IGSearchTypeaheadNavigationHeaderViewDelegate, UIView<IGCollapsibleNavigationViewType, UIView<IGSearchTypeaheadSearchBarProtocol;

@interface IGSearchTypeaheadNavigationHeaderView : IGCustomHeaderView<IGDSSegmentedPillBarViewDelegate> {
  /* instance variables */
  IGSearchBarConfig *_searchBarConfig;
  UIView<IGSearchTypeaheadSearchBarProtocol> *_searchBarWithActionButton;
  NSArray *_keywordModels;
  UIView<IGCollapsibleNavigationViewType> *_keywordPillsView;
  IGUserSession *_userSession;
  BOOL _isKeywordPillsEnabled;
}

@property (weak, nonatomic) NSObject<IGSearchTypeaheadNavigationHeaderViewDelegate> *delegate;
@property (readonly, nonatomic) IGSearchBar *searchBar;
@property (weak, nonatomic) NSObject<IGSearchResultSectionControllerLoggingProvider> *loggingProvider;
@property (nonatomic) BOOL roundedTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchBarConfig:(id)config searchType:(id)type userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)segmentedPillBar:(id)bar didTapPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didLongPressPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didSelectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldDeselectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldSelectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar pillAtIndex:(unsigned long long)index didUpdateImpressionStateWithContext:(id)context;
@end

#endif /* IGSearchTypeaheadNavigationHeaderView_h */