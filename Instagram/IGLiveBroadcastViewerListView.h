//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastViewerListView_h
#define IGLiveBroadcastViewerListView_h
@import Foundation;

#include "UIView.h"
#include "IGLiveBroadcastViewerListHeaderView.h"
#include "NSObject-Protocol.h"

@class IGListAdapter, NSString, UICollectionView;
@protocol IGLiveBroadcastViewerListViewDelegate;

@interface IGLiveBroadcastViewerListView : UIView<NSObject> {
  /* instance variables */
  IGLiveBroadcastViewerListHeaderView *_headerView;
}

@property (readonly, nonatomic) IGListAdapter *listAdapter;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGLiveBroadcastViewerListViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame userSession:(id)session;
- (void)layoutSubviews;
- (void)doneButtonTappedInHeaderView:(id)view;
@end

#endif /* IGLiveBroadcastViewerListView_h */
