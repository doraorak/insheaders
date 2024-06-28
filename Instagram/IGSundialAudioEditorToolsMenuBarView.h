//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAudioEditorToolsMenuBarView_h
#define IGSundialAudioEditorToolsMenuBarView_h
@import Foundation;

#include "UIView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol IGSundialAudioEditorToolsMenuBarViewDelegate;

@interface IGSundialAudioEditorToolsMenuBarView : UIView<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  NSArray *_menuItems;
  UICollectionView *_menuItemCollectionView;
}

@property (weak, nonatomic) NSObject<IGSundialAudioEditorToolsMenuBarViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLauncherSetProvider:(id)provider isMultiTrack:(BOOL)track;
- (void)layoutSubviews;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
@end

#endif /* IGSundialAudioEditorToolsMenuBarView_h */
