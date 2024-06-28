//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromptsHomeViewController_h
#define IGPromptsHomeViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromptsDisclaimerViewController.h"
#include "IGPromptsLogger.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGStoryViewerLoggingContext.h"
#include "IGStoryViewerPresentationController.h"

@class IGInjectedPromptModel, IGListAdapter, IGScrollViewAnnouncer, IGUserSession, NSMutableArray, NSString, UICollectionView;

@interface IGPromptsHomeViewController : IGViewController<IGListAdapterDataSource, IGScrollViewListener> {
  /* instance variables */
  IGListAdapter *_listAdapter;
  IGUserSession *_userSession;
  UICollectionView *_collectionView;
  NSMutableArray *_trendingPrompts;
  IGStoryViewerPresentationController *_storyViewerController;
  BOOL _isLoading;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  BOOL _isNextPageAvailable;
  NSString *_cursor;
  IGStoryViewerLoggingContext *_loggingContext;
  BOOL _isViewEntryLogged;
  BOOL _isLoadSuccessLogged;
  IGInjectedPromptModel *_injectedPrompt;
  BOOL _isFeaturedStoryPresented;
  IGPromptsLogger *_logger;
  long long _entrypoint;
  IGPromptsDisclaimerViewController *_disclaimerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session entrypoint:(long long)entrypoint loggingContext:(id)context injectedPrompt:(id)prompt;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didTapPromptHeaderWithPromptStickerModel:(id)model promptPosition:(unsigned long long)position promptSubtype:(id)subtype mediaCount:(unsigned long long)count;
- (void)didTapOnPreviewWithReelPks:(id)pks focusedReelPk:(id)pk previewView:(id)view selectedMediaInfo:(id)info promptPosition:(unsigned long long)position promptSubtype:(id)subtype promptId:(id)id;
- (void)didTapOnAddYoursButtonForPromptStickerModel:(id)model promptPosition:(unsigned long long)position promptSubtype:(id)subtype mediaCount:(unsigned long long)count;
- (void)didConfigurePromptHeader:(id)header withModel:(id)model;
- (void)logPromptTrayCellImpression:(id)impression;
- (void)prompStickerParticipantList:(id)list didTapShareButtonWithModel:(id)model fromInternalSticker:(BOOL)sticker sharedList:(id)list;
- (void)prompStickerParticipantList:(id)list didTapInviteFriendButton:(id)button;
- (void)prompStickerParticipantList:(id)list didTapAuthorAttribution:(id)attribution;
- (void)prompStickerParticipantList:(id)list didTapParticipantId:(id)id promptStickerModel:(id)model;
- (void)_didRightBarButtonTapped;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
@end

#endif /* IGPromptsHomeViewController_h */