//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectChannelsSelectionViewController_h
#define IGDirectChannelsSelectionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGAPIChannelsPreviewDict, IGListAdapter, NSArray, NSDictionary, NSString, UIBarButtonItem, UICollectionView;
@protocol IGDirectChannelsSelectionViewControllerDelegate;

@interface IGDirectChannelsSelectionViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler> {
  /* instance variables */
  NSDictionary *_channelInfoViewModelByIdentifier;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGAPIChannelsPreviewDict *_selectedChannel;
  NSArray *_allChannelsInfos;
  UIBarButtonItem *_doneButtonItem;
  BOOL _isLoading;
}

@property (weak, nonatomic) NSObject<IGDirectChannelsSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title allChannelsInfos:(id)infos selectedChannel:(id)channel;
- (id)initWithTitle:(id)title threadSubtypes:(id)subtypes selectedChannel:(id)channel userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_doneButtonTapped;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGDirectChannelsSelectionViewController_h */