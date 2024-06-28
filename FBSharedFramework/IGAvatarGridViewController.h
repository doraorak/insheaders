//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarGridViewController_h
#define IGAvatarGridViewController_h
@import Foundation;

#include "IGViewController.h"
#include "FBBlockDebouncer.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGAvatarAdapterDataSource.h"
#include "IGAvatarGridPerformanceLogger.h"
#include "IGAvatarGridViewControllerDelegate-Protocol.h"
#include "IGAvatarGridViewControllerProtocol-Protocol.h"
#include "IGListAdapter.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGScrollViewAnnouncer.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSearchAnalyticsLogger.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGSearchBarWithCancel.h"
#include "IGSearchSession.h"
#include "IGUserAvatarStatusListener-Protocol.h"
#include "IGUserSession.h"
#include "UICollectionViewDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UICollectionView, UILongPressGestureRecognizer, UIView, UIVisualEffectView;

@interface IGAvatarGridViewController : IGViewController<UICollectionViewDelegate, IGListAdapterDelegate, IGSearchBarDelegate, IGScrollViewListener, IGUserAvatarStatusListener, IGAvatarGridViewControllerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_avatarOwnerId;
  IGListAdapter *_listAdapter;
  NSString *_surface;
  long long _entryPoint;
  IGAvatarAdapterDataSource *_listAdapterDataSource;
  IGScrollViewAnnouncer *_feedScrollAnnouncer;
  NSMutableSet *_seenStickerIds;
  UIView *_collectionContainerView;
  CAGradientLayer *_collectionContainerMask;
  IGSearchAnalyticsLogger *_searchLogger;
  IGSearchSession *_searchSession;
  IGAvatarGridPerformanceLogger *_perfLogger;
  NSString *_searchText;
  BOOL _feedScrollAnnouncerConfigured;
  BOOL _isFetchingFromScroll;
  UIVisualEffectView *_blurEffectView;
  UIButton *_chevronButton;
  long long _stickerPackType;
  BOOL _isE2EEThread;
  BOOL _isInstamadilloThread;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  NSString *_stickerPackId;
  NSObject<IGAlertHUDHandling> *_alertHUD;
  BOOL _searchDebouncerEnabled;
  FBBlockDebouncer *_searchDebouncer;
  NSMutableDictionary *_stickerMap;
}

@property (readonly, nonatomic) IGSearchBarWithCancel *searchBarWithCancel;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGAvatarGridViewControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session avatarOwnerId:(id)id entryPoint:(long long)point items:(id)items avatarStickerGridProvider:(id)provider instamadilloAvatarStickerGridProvider:(id)provider isE2EEThread:(BOOL)eethread isDisappearingModeOn:(BOOL)on isInstamadilloThread:(BOOL)thread mentionedUsers:(id)users threadParticipantIds:(id)ids isEligibleForSocialStickers:(BOOL)stickers;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)setShowsCancelButton:(BOOL)button;
- (void)hideSearchBar:(BOOL)bar;
- (void)searchAvatarStickersWithText:(id)text;
- (void)setBottomContentInsets:(double)insets;
- (void)fetchAvatars;
- (void)refreshFavoriteAvatarStickers;
- (void)_didTapChevronButton;
- (void)_searchCancelTapped;
- (void)viewDidLayoutSubviews;
- (long long)_avatarEmotesEntryPoint;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)avatarDataSource:(id)source didClickStaticSticker:(id)sticker;
- (void)avatarDataSource:(id)source didClickAnimatedSticker:(id)sticker;
- (void)didStartFetchingAvatarsAtPage:(unsigned long long)page;
- (void)didFetchAvatars:(id)avatars isNewPage:(BOOL)page;
- (void)didFetchFavoriteAvatars:(id)avatars;
- (void)navigateToAvatarEditor;
- (void)didFailToFetchAvatars:(id)avatars;
- (void)avatarDataSourceSearchDidFailToLoadSearchQuery;
- (void)avatarDataSourceSearchDidFinishFetchWithItems:(id)items;
- (void)avatarDataSourceSearchDidUpdateItems;
- (void)navigateToAvatarGridOf:(id)of pogPosition:(long long)position source:(long long)source;
- (void)presentMaxMentionsReachedAlert;
- (void)didSelectAvatarEmotesEntryPoint;
- (void)shouldHideAvatarConvergenceBannerView;
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangePlaceholder:(id)placeholder;
- (void)updateBottomInsets:(double)insets;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (BOOL)prefersNavigationBarHidden;
- (void)_didTriggerLongPress:(id)press;
@end

#endif /* IGAvatarGridViewController_h */
