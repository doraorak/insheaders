//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSmartSuggestionsManager_h
#define IGDirectSmartSuggestionsManager_h
@import Foundation;

#include "IGDirectSmartSuggestionsContainerView.h"
#include "IGDirectSmartSuggestionsDataSource.h"
#include "IGDirectSmartSuggestionsViewModelProcessor.h"
#include "NSObject-Protocol.h"

@class IGDirectSmartSuggestionsLogger, IGListAdapter, IGUserSession, NSArray, NSString;
@protocol IGDirectSmartSuggestionsManagerDelegate, IGDirectThreadInfoProviding;

@interface IGDirectSmartSuggestionsManager : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGDirectSmartSuggestionsManagerDelegate> *_delegate;
  IGListAdapter *_listAdapter;
  IGDirectSmartSuggestionsDataSource *_dataSource;
  IGDirectSmartSuggestionsContainerView *_view;
  id /* block */ _constrainingWidthProvider;
  id /* block */ _configProvider;
  IGDirectSmartSuggestionsLogger *_logger;
  IGDirectSmartSuggestionsViewModelProcessor *_viewModelProcessor;
  NSObject<IGDirectThreadInfoProviding> *_threadConfigProvider;
  BOOL _isBottomSheetVisible;
}

@property (readonly, nonatomic) NSArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate constrainingWidthProvider:(id /* block */)provider configProvider:(id /* block */)provider threadConfigProvider:(id)provider;
- (void)cleanup;
- (void)didTapSuggestionWithText:(id)text position:(long long)position source:(long long)source;
- (void)didTapThreadSmartSuggestionWithText:(id)text requestId:(id)id;
- (void)didTapActionButtonWithSuggestionType:(long long)type threadSmartSuggestionContext:(id)context;
- (void)didTapShowMoreAnimatedMediaButtonWithCategory:(id)category;
- (void)didSelectAnimatedModelWithId:(id)id;
- (void)didSelectEmojiTextQuickReplyWithSuggestion:(id)suggestion index:(unsigned long long)index;
- (void)didTapSuggestedActionPrimaryCTAWithViewModel:(id)model;
- (void)didTapSuggestedActionSecondaryCTAWithViewModel:(id)model;
- (void)didTapSuggestedActionDismissButtonWithViewModel:(id)model;
- (void)suggestionsViewModelProcessor:(id)processor didUpdateWithItems:(id)items;
@end

#endif /* IGDirectSmartSuggestionsManager_h */