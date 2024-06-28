//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnlockedStickerBottomSheetViewController_h
#define IGUnlockedStickerBottomSheetViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGAPIStoryUnlockableStickerTappableObject, IGListAdapter, IGUserSession, NSString, UIView;
@protocol IGUnlockedStickerBottomSheetViewControllerDelegate;

@interface IGUnlockedStickerBottomSheetViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGAPIStoryUnlockableStickerTappableObject *_storyUnlockableStickerInfo;
  UIView *_contentView;
  IGListAdapter *_listAdapter;
}

@property (weak, nonatomic) NSObject<IGUnlockedStickerBottomSheetViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session storyUnlockableStickerInfo:(id)info;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)unlockedStickersSingleStoryView:(id)view didTapCreateStoryButton:(id)button;
- (void)unlockedStickerStorySectionController:(id)controller didTapCreateStoryButton:(id)button;
@end

#endif /* IGUnlockedStickerBottomSheetViewController_h */