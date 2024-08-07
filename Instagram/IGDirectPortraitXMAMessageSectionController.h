//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPortraitXMAMessageSectionController_h
#define IGDirectPortraitXMAMessageSectionController_h
@import Foundation;

#include "IGDirectMessageSectionController.h"
#include "IGDirectAggregatedMediaViewerViewControllerDelegate-Protocol.h"
#include "IGDirectPortraitXMAMessageCell.h"
#include "IGDirectReplySundialFeedViewControllerDelegate-Protocol.h"
#include "IGDirectSundialMessageMetaDataProvider-Protocol.h"
#include "IGDirectXMARenderQPLLogger.h"
#include "IGSundialPlaybackDelegate-Protocol.h"
#include "IGTransitionZoomListCapable-Protocol.h"
#include "IGVideoViewListener-Protocol.h"

@class IGMediaLoggingSecurePersistentIdGenerator, IGPlaybackCoordinatorDelegatedSession, IGVideo, NSMutableSet, NSString;

@interface IGDirectPortraitXMAMessageSectionController : IGDirectMessageSectionController<IGTransitionZoomListCapable, IGDirectReplySundialFeedViewControllerDelegate, IGSundialPlaybackDelegate, IGDirectAggregatedMediaViewerViewControllerDelegate, IGVideoViewListener> {
  /* instance variables */
  IGDirectPortraitXMAMessageCell *_cell;
  NSMutableSet *_messagePksWithSentWatchImpressions;
  IGPlaybackCoordinatorDelegatedSession *_playbackSession;
  IGMediaLoggingSecurePersistentIdGenerator *_secureIDGenerator;
  IGDirectXMARenderQPLLogger *_xmaRenderQPLLogger;
  BOOL _eligibleToShowCommentPreview;
  BOOL _commentPreviewVisible;
  IGVideo *_video;
  NSObject<IGDirectSundialMessageMetaDataProvider> *_messageMetaDataProviderDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (void)_configureCellWithImmersivePhotoViewIfNeededWithViewModel:(id)model;
- (void)messageCellDidTapOnPreviewImage:(id)image actionInfo:(id)info actionURL:(id)url;
- (void)messageCellDidTapOnCTA:(id)cta actionInfo:(id)info actionURL:(id)url;
- (void)sundialFeedReplyBarDidSendReplyWithText:(id)text quotedMessage:(id)message;
- (void)didSelectEmoji:(id)emoji isSelected:(BOOL)selected messageId:(id)id clientContext:(id)context sentDate:(id)date contentType:(id)type;
- (void)didUpdateActiveVideo:(id)video threadMessage:(id)message;
- (void)dismissedSundialViewer;
- (void)sundialFeedViewController:(id)controller didUpdatePlaybackState:(struct { long long x0; double x1; double x2; })state forVideoIndex:(long long)index threadMessage:(id)message;
- (id)aggregatedMediaViewer:(id)viewer animationViewForMedia:(id)media;
- (void)aggregatedMediaViewer:(id)viewer didViewMedia:(id)media;
- (id)aggregatedMediaViewerBackgroundViewForSnapshot:(id)snapshot;
- (double)aggregatedMediaViewer:(id)viewer centerOffsetForAnimationView:(id)view;
- (void)aggregatedMediaViewerWillAppear:(id)appear;
- (id)aggregatedMediaViewer:(id)viewer layoutSpecForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer reactionsViewLayoutSpecForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer reactionsViewModelForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer reactionsViewThemeableForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer shadowLayerForMedia:(id)media;
- (void)reactionUpdatedOnMedia:(id)media isSelected:(BOOL)selected previousReaction:(id)reaction newreaction:(id)newreaction actionSource:(long long)source completionHandler:(id /* block */)handler;
- (void)aggregatedMediaViewer:(id)viewer reactionListForMedia:(id)media completionHandler:(id /* block */)handler;
- (void)aggregatedMediaViewer:(id)viewer unsendMediaWithId:(id)id mediaType:(unsigned long long)type authorPk:(id)pk;
- (void)aggregatedMediaViewer:(id)viewer reportMediaWithId:(id)id authorPk:(id)pk;
- (id)aggregatedMediaViewer:(id)viewer supportedMessageActionsForMedia:(id)media;
- (BOOL)aggregatedMediaViewerIsDisappearingModeActive:(id)active;
- (BOOL)aggregatedMediaViewer:(id)viewer wasMediaGeneratedByAI:(id)ai;
- (id)aggregatedMediaViewer:(id)viewer overlayButtonModelForMedia:(id)media;
- (void)aggregatedMediaViewer:(id)viewer didTapOverlayButtonWithModel:(id)model;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)playbackCoordinatorSession:(id)session didReceiveEvent:(long long)event withContext:(id)context;
- (void)videoView:(id)view didUpdateLoadingProgress:(double)progress;
- (void)videoView:(id)view didUpdateCoverImageLoadStatus:(long long)status;
- (void)videoViewDidPrepareVideo:(id)video;
- (void)videoViewDidLoadVideo:(id)video;
- (void)videoView:(id)view didBeginPlayingWithStatus:(id)status;
- (void)videoView:(id)view didUpdatePlaybackStatus:(id)status;
- (void)videoViewDidStallToBufferContent:(id)content;
- (void)videoViewDidPlayThroughToCompletion:(id)completion;
- (void)videoViewItemTimeFullyLoaded:(id)loaded;
- (void)videoViewDidPause:(id)pause;
- (void)videoViewDidStop:(id)stop;
- (void)videoView:(id)view didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
- (void)videoView:(id)view didFailWithError:(id)error;
- (void)videoViewDidAdoptPreconfiguredPlayer:(id)player;
- (void)videoViewDidUpdateAvailableAudioAutoTranslateLanguages:(id)languages;
- (id)transitionZoomViewWithContext:(id)context;
- (long long)transitionZoomViewIndex;
@end

#endif /* IGDirectPortraitXMAMessageSectionController_h */
