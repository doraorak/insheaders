//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMemoriesStickerListViewController_h
#define IGMemoriesStickerListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGUserSession, METABackgroundGradient, NSArray, NSString, UICollectionView;
@protocol IGMemoriesStickerListViewControllerDelegate;

@interface IGMemoriesStickerListViewController : IGViewController<UICollectionViewDataSource, UICollectionViewDelegate, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  NSArray *_models;
  UICollectionView *_collectionView;
  METABackgroundGradient *_backgroundGradient;
}

@property (weak, nonatomic) NSObject<IGMemoriesStickerListViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOnThisDayModels:(id)models backgroundGradient:(id)gradient userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGMemoriesStickerListViewController_h */
