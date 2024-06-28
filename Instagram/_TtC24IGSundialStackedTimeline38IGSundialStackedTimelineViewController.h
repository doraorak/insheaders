//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController_h
#define _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP24IGSundialStackedTimeline46IGSundialStackedTimelineViewControllerDelegate_-Protocol.h"
#include "_TtP24IGSundialStackedTimeline68IGSundialStackedTimelineViewControllerVoiceoverRecorderToolProviding_-Protocol.h"

@class IGSundialComposition, IGSundialCreationHighlightedTool, IGSundialVideoTimeline, UIView;

@interface _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController : IGViewController { // (Swift)
  /* instance variables */
   stackedTimelineView;
   stackedTimelineBottomSheetViewController;
   uiAnimationDriver;
   nuxLabelInset;
   pointsDifferenceThreshold;
   dimmedButtonAlpha;
   dataSource;
   interactionController;
   qplLogger;
   lastVideoClipsBeforeSoundSync;
   hasSoundSyncedInGallery;
   previewNux;
   audioDurationAtBeginningOfTrim;
   didConformToLicensedMusicPolicyAtLastCheck;
   textToSpeechOptionsVC;
   addClipsPopoverMenu;
   playbackIsOutsideOfSelectedClipRange;
   isPlaying;
   $__lazy_storage_$_nextButton;
   $__lazy_storage_$_backButton;
   $__lazy_storage_$_undoRedoNewBadge;
   activeReverseVideoTool;
   wasPlaying;
   transitionState;
   reorderState;
   colorFilterState;
   playbackStateRevision;
   speedSliderIsBeingDragged;
   undo_redo_instanceKey;
   isSpinsSelected;
   editingMode;
   userSession;
   reorderThumbnailTray;
   reorderThumbnailTrayTopMargin;
   transitionsDialTrayView;
   transitionName;
   transitionNubIndex;
   $__lazy_storage_$_transitionImageLookUp;
   transitionPreviewStart;
   transitionEditModePlaybackTimeline;
   shouldLogVideoAdjust;
   isCurrentlyAdjustingVideo;
   $__lazy_storage_$_panGesture;
   _currentlySelectedClipIndex;
   $__lazy_storage_$_audioAdjustNuxLabel;
   $__lazy_storage_$_videoAdjustNuxLabel;
   selectedTimedElement;
   navigationBar;
   toolbar;
   toolbarBackground;
   toolbarToastContentView;
   textToSpeechIsLoadingLabel;
   isAudioChangeRequested;
   minStartOfClipPlaybackTime;
   accuracyTolerance;
   isCurrentlyTrimmingVideo;
   hasSeenTrimZoomHint;
   bottomToastPresenter;
   $__lazy_storage_$_trimZoomHintLabel;
   persistPlayStateOnDeselect;
   pendingTasksObserver;
   stackedTimelineLogger;
   topLevelToolPositions;
   clipLevelToolPositions;
}

@property (nonatomic, weak) UIView *preview;
@property (nonatomic, weak) NSObject<_TtP24IGSundialStackedTimeline46IGSundialStackedTimelineViewControllerDelegate_> *delegate;
@property (nonatomic, weak) NSObject<_TtP24IGSundialStackedTimeline68IGSundialStackedTimelineViewControllerVoiceoverRecorderToolProviding_> *voiceoverRecorderToolProvider;
@property (nonatomic, retain) IGSundialComposition *composition;
@property (nonatomic, retain) IGSundialVideoTimeline *timelineView;
@property (nonatomic, retain) IGSundialCreationHighlightedTool *highlightedCreationTool;

/* instance methods */
- (id)initWithUserSession:(id)session composition:(id)composition;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handlePanWithGesture:(id)gesture;
- (void)didTapView:(id)view;
- (void)selectAudioTrackClipWithIdentifier:(id)identifier;
- (void)presentStackedTimelineEditorWithPanGesture:(id)gesture selectedVideoClip:(id)clip selectedTimedElement:(id)element selectedTimedElementIdentifier:(id)identifier shouldAnimate:(BOOL)animate shouldSlowAnimation:(BOOL)animation preselectedEditingMode:(long long)mode;
- (void)updateNavigationBarTimelabel;
- (void)registerPresentationProgressUpdateForKey:(id)key closure:(id /* block */)closure;
- (void)exitStackedTimelineEditor;
- (void)moveTimedElementToFrontWithElement:(id)element;
- (void)didEnterReorderMode;
- (void)backToDefaultModeWithPause:(BOOL)pause;
- (void)setDefaultModeToolbarOptions;
- (void)deleteClipAtIndex:(long long)index;
- (void)exitTransitionModeWithPlayAfterExit:(BOOL)exit;
- (void)didTapAudioCancelButton;
- (void)didTapNextButton;
- (void)didTapBackButton;
- (void)setPlaybackWithRate:(double)rate time:(double)time hostTime:(double)time;
- (void)updateWithComposition:(id)composition;
- (void)updateExitButtonsAlpha;
- (void)startVideoAdjustWithIndex:(long long)index videoClip:(id)clip;
- (void)hideTextToSpeechIsLoadingLabelForVoice:(unsigned long long)voice;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController_h */