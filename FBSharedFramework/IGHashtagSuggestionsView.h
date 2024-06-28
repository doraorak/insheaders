//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagSuggestionsView_h
#define IGHashtagSuggestionsView_h
@import Foundation;

#include "UIView.h"
#include "FBShimmeringView.h"
#include "IGHashtagSuggestionsDataSource.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGUserSession.h"

@class NSArray, NSString, UICollectionView, UILabel;
@protocol IGHashtagSuggestionsViewDelegate;

@interface IGHashtagSuggestionsView : UIView<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  FBShimmeringView *_shimmeringWrapperView;
  UILabel *_suggestionsTitleLabel;
  IGListAdapter *_hashtagListAdapter;
  UICollectionView *_hashtagListView;
  IGHashtagSuggestionsDataSource *_dataSource;
  BOOL _supportChallengesInResults;
  BOOL _useBrandRefreshFontUsingGlobalScripts;
}

@property (weak, nonatomic) NSObject<IGHashtagSuggestionsViewDelegate> *delegate;
@property (readonly, nonatomic) NSArray *suggestedHashtags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithMaximumSuggestionCharacterCount:(long long)count userSession:(id)session isChallengesSearch:(BOOL)search supportChallengesInResults:(BOOL)results searchSurfaceType:(long long)type;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)hashtagSuggestionsDataSource:(id)source didUpdateLoadingState:(BOOL)state;
- (void)hashtagSuggestionsDataSource:(id)source didUpdateSuggestedHashtags:(id)hashtags;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didSelectSuggestedHashtagSectionController:(id)controller;
@end

#endif /* IGHashtagSuggestionsView_h */