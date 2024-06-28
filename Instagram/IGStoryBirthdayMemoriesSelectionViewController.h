//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryBirthdayMemoriesSelectionViewController_h
#define IGStoryBirthdayMemoriesSelectionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGStoryArchiveViewController.h"
#include "IGStoryBirthdayMemoriesSelectionNavigationHeaderView.h"

@class IGStoryMultiEditCompositionThumbnailTray, IGUserSession, NSOrderedSet, NSString;
@protocol IGStoryBirthdayMemoriesSelectionViewControllerDelegate;

@interface IGStoryBirthdayMemoriesSelectionViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  NSOrderedSet *_selectedItems;
  IGStoryBirthdayMemoriesSelectionNavigationHeaderView *_navigationHeaderView;
  IGStoryArchiveViewController *_archiveController;
  IGStoryMultiEditCompositionThumbnailTray *_thumbnailTray;
}

@property (weak, nonatomic) NSObject<IGStoryBirthdayMemoriesSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session selectedItems:(id)items thumbnailTray:(id)tray;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dismissStoryArchiveViewController:(id)controller navigationAction:(long long)action;
- (void)storyArchiveViewController:(id)controller didSelectStoryItem:(id)item atIndex:(long long)index;
- (void)storyArchiveViewController:(id)controller didDeselectStoryItem:(id)item atIndex:(long long)index;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGStoryBirthdayMemoriesSelectionViewController_h */
