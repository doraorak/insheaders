//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageAttachedMultiReactView_h
#define IGDirectMessageAttachedMultiReactView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectMessageCellAttachedBubbleViewLayoutSpec.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"
#include "IGEmojiPickerTrayViewControllerDelegate-Protocol.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString, UICollectionView;
@protocol IGDirectMessageAttachedMultiReactViewDelegate;

@interface IGDirectMessageAttachedMultiReactView : UIView<IGListAdapterDataSource, IGEmojiPickerTrayViewControllerDelegate> {
  /* instance variables */
  NSObject<IGDirectMessageReactionsViewThemeable> *_theme;
  unsigned long long _viewType;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_layoutSpec;
  BOOL _showAllReactions;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  NSArray *_viewModels;
  NSMutableSet *_emojiUnicodesToAnimate;
  NSDictionary *_previousReactsEmojiUnicodeToReactionCountsMap;
  BOOL _isThreadUsingCustomTheme;
}

@property (weak, nonatomic) NSObject<IGDirectMessageAttachedMultiReactViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model viewType:(unsigned long long)type theme:(id)theme layoutSpec:(id)spec isDisplayingCell:(BOOL)cell shouldShowAllReactions:(BOOL)reactions launcherSet:(id)set;
- (unsigned long long)viewType;
- (id)layoutSpec;
- (void)animateUserReaction:(id)reaction;
- (void)animateStreamingReaction:(id)reaction;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })specifiersContainerViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentedFrameForMessageSize:(struct CGSize { double x0; double x1; })size;
- (void)layoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)directMessageAttachedMultiReactSectionControllerWasTapped:(id)tapped emojiUnicode:(id)unicode;
- (void)directMessageAttachedMultiReactSectionControllerWillAnimate:(id)animate emojiUnicode:(id)unicode;
- (void)directMessageAttachedMultiReactSectionControllerWasLongPressed:(id)pressed emojiUnicode:(id)unicode;
- (void)directMessageAttachedMultiReactButtonSectionControllerWasTapped:(id)tapped buttonType:(id)type;
- (void)directMessageAttachedMultiReactButtonSectionControllerWillAnimate:(id)animate emojiUnicode:(id)unicode;
- (void)emojiPickerTrayViewController:(id)controller didSelectEmoji:(id)emoji fromEmojiView:(id)view fromSearch:(BOOL)search;
- (void)emojiPickerTrayViewControllerDidTapSearchCancel:(id)cancel;
- (void)emojiPickerTrayViewController:(id)controller didTapDoneForEmotionModerationWithSelectedEmojis:(id)emojis;
- (BOOL)emojiPickerTrayViewController:(id)controller shouldFilterOutEmoji:(id)emoji;
- (void)emojiPickerTrayViewController:(id)controller didTapActionButtonForType:(unsigned long long)type actionButton:(id)button;
- (void)_animateReloadWithShouldShowAllReactions:(id)reactions;
@end

#endif /* IGDirectMessageAttachedMultiReactView_h */
