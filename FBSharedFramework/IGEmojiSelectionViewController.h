//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmojiSelectionViewController_h
#define IGEmojiSelectionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGEmojiSelectionView.h"
#include "IGEmojiSelectionViewControllerDelegate-Protocol.h"
#include "IGMedia.h"
#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIView;
@protocol IGEmojiSelectionViewControllerLoggingDelegate;

@interface IGEmojiSelectionViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  UIView *_containerView;
  unsigned long long _source;
  BOOL _enableEmojiGNV;
  IGEmojiSelectionView *_emojiSelectionView;
  BOOL _isSuggestedCommentsEnabled;
  UIActivityIndicatorView *_activityIndicator;
  IGMedia *_media;
  NSMutableArray *_suggestedEmojiModels;
  NSString *_selectionViewTitle;
}

@property (weak, nonatomic) NSObject<IGEmojiSelectionViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGEmojiSelectionViewControllerLoggingDelegate> *loggingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module containerView:(id)view source:(unsigned long long)source media:(id)media;
- (void)viewDidLoad;
- (BOOL)disableNavigationEvent;
- (void)emojiSelectionView:(id)view didTapEmoji:(id)emoji suggestedComment:(id)comment atIndex:(long long)index;
- (void)suggestedEmojiProviderDidUpdateEmojis;
@end

#endif /* IGEmojiSelectionViewController_h */
