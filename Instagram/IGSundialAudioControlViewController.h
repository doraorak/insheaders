//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAudioControlViewController_h
#define IGSundialAudioControlViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGSundialAudioControlViewControllerDelegate-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGSundialComposition, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGSundialAudioEditorToolTypeDelegate;

@interface IGSundialAudioControlViewController : IGViewController<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGGestureHandler> {
  /* instance variables */
  IGSundialComposition *_composition;
  IGUserSession *_userSession;
  NSArray *_editorSections;
  UICollectionView *_collectionView;
}

@property (weak, nonatomic) NSObject<IGSundialAudioControlViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGSundialAudioEditorToolTypeDelegate> *audioEditorToolDelegate;
@property (readonly, nonatomic) BOOL footerPlayButtonHidden;
@property (readonly, nonatomic) BOOL footerUndoButtonHidden;
@property (readonly, nonatomic) BOOL footerUndoButtonInteractionEnabled;

/* instance methods */
- (id)initWithComposition:(id)composition userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (void)handlePlayPauseButtonAction;
- (void)handleUndoButtonAction;
- (void)handleDoneButtonAction;
- (void)handleBackButtonAction;
- (void)sundialAudioSliderCellDidChangeVolume:(id)volume from:(double)from to:(double)to;
- (void)sundialAudioSliderCellDidFinishSliding:(id)sliding atVolume:(double)volume;
- (void)sundialAudioSliderCellDidTapOptionsMenu:(id)menu;
- (void)sundialAudioSliderCellDidRemoveAudio:(id)audio;
- (void)sundialAudioSliderCellDidTapEditTrack:(id)track;
- (void)sundialAudioSliderCellDidTapAddEffects:(id)effects;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGSundialAudioControlViewController_h */
