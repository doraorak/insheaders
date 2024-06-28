//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCTMessagingAdsStoryReplyView_h
#define IGCTMessagingAdsStoryReplyView_h
@import Foundation;

#include "UIView.h"
#include "IGCTMessagingAdsStoryReplyViewModel.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGCoreTextView, IGProfilePhotoView, NSString, UICollectionView, UILabel;
@protocol IGCTMessagingAdsStoryReplyViewDelegate;

@interface IGCTMessagingAdsStoryReplyView : UIView<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  IGCTMessagingAdsStoryReplyViewModel *_viewModel;
  IGProfilePhotoView *_profileView;
  IGCoreTextView *_welcomeMessageView;
  UILabel *_icebreakerLabel;
  UICollectionView *_collectionView;
}

@property (weak, nonatomic) NSObject<IGCTMessagingAdsStoryReplyViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)setHidden:(BOOL)hidden;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)iceBreakerCellDidReceiveTap:(id)tap;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGCTMessagingAdsStoryReplyView_h */
