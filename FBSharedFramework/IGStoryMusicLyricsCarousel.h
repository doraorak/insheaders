//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMusicLyricsCarousel_h
#define IGStoryMusicLyricsCarousel_h
@import Foundation;

#include "UIView.h"
#include "IGAudioLyricsTrackModel.h"
#include "IGGestureCoordinatingCollectionView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol IGMusicLyricsCarouselDelegate;

@interface IGStoryMusicLyricsCarousel : UIView<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGGestureCoordinatingCollectionView *_collectionView;
  double _totalSongDuration;
}

@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) NSObject<IGMusicLyricsCarouselDelegate> *delegate;
@property (retain, nonatomic) IGAudioLyricsTrackModel *lyricsSongModel;
@property (nonatomic) double clipDuration;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScroll:(id)scroll;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureCoordinatingCollectionView:(id)view touchesShouldCancelInContentView:(id)view;
@end

#endif /* IGStoryMusicLyricsCarousel_h */
