//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMediaPileMessageSectionController_h
#define IGDirectMediaPileMessageSectionController_h
@import Foundation;

#include "IGDirectMessageSectionController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDirectAggregatedMediaViewerViewControllerDelegate-Protocol.h"
#include "IGDirectGridViewNetworkHelperDelegate-Protocol.h"
#include "IGDirectIntermediateViewerReplyManager.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"
#include "IGDirectReplySundialFeedViewControllerDelegate-Protocol.h"
#include "IGDirectSundialMessageMetaDataProvider-Protocol.h"
#include "IGSundialDraftsShareSheetViewControllerDelegate-Protocol.h"

@class IGDirectGridViewNetworkHelper, NSArray, NSDictionary, NSString;

@interface IGDirectMediaPileMessageSectionController : IGDirectMessageSectionController<IGDirectAggregatedMediaViewerViewControllerDelegate, IGSundialDraftsShareSheetViewControllerDelegate, IGDirectGridViewNetworkHelperDelegate, IGCoreTextLinkHandler, IGDirectReplySundialFeedViewControllerDelegate> {
  /* instance variables */
  IGDirectIntermediateViewerReplyManager *_replyManager;
  IGDirectGridViewNetworkHelper *_networkHelper;
  NSArray *_stacksViewModels;
  NSObject<IGDirectMessageReactionsViewThemeable> *_reactionsTheme;
  NSDictionary *_mediaReactionsByEmoji;
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
- (void)mediaPileMessageCell:(id)cell didTapBubbleView:(id)view;
- (void)mediaPileMessageCellDidTapExpandView:(id)view;
- (void)mediaPileMessageCell:(id)cell didDoubleTapBubbleView:(id)view;
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
- (void)aggregatedMediaViewer:(id)viewer reactionListForMedia:(id)media completionHandler:(id /* block */)handler;
- (void)reactionUpdatedOnMedia:(id)media isSelected:(BOOL)selected previousReaction:(id)reaction newreaction:(id)newreaction actionSource:(long long)source completionHandler:(id /* block */)handler;
- (void)aggregatedMediaViewer:(id)viewer unsendMediaWithId:(id)id mediaType:(unsigned long long)type authorPk:(id)pk;
- (void)aggregatedMediaViewer:(id)viewer reportMediaWithId:(id)id authorPk:(id)pk;
- (id)aggregatedMediaViewer:(id)viewer supportedMessageActionsForMedia:(id)media;
- (BOOL)aggregatedMediaViewerIsDisappearingModeActive:(id)active;
- (BOOL)aggregatedMediaViewer:(id)viewer wasMediaGeneratedByAI:(id)ai;
- (id)aggregatedMediaViewer:(id)viewer overlayButtonModelForMedia:(id)media;
- (void)aggregatedMediaViewer:(id)viewer didTapOverlayButtonWithModel:(id)model;
- (void)navigateToDraftShareSheetWithDraft:(id)draft;
- (void)presentGalleryViewControllerForSharedAlbumFromViewController:(id)controller originalMessageClientContext:(id)context originalMessageId:(id)id sharedAlbumId:(id)id sendAttribution:(id)attribution actionType:(unsigned long long)type;
- (id)stackPreviewImages;
- (id)stackViewsForAnimation;
- (id)stackBubbleLayoutSpec;
- (id)promptCardViewForAnimation;
- (BOOL)directCardGalleryViewController:(id)controller shouldHandleSentText:(id)text quotedMessage:(id)message;
- (void)sundialDraftsShareSheet:(id)sheet didShareComposition:(id)composition toDestination:(long long)destination;
- (void)sundialDraftShareSheetDidExitShareComposition:(id)composition;
- (void)mediaViewer:(id)viewer didSendText:(id)text quotedMessage:(id)message;
- (void)didFetchResponse:(id)response;
- (void)didFailToFetch;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (void)sundialFeedReplyBarDidSendReplyWithText:(id)text quotedMessage:(id)message;
- (void)didSelectEmoji:(id)emoji isSelected:(BOOL)selected messageId:(id)id clientContext:(id)context sentDate:(id)date contentType:(id)type;
- (void)didUpdateActiveVideo:(id)video threadMessage:(id)message;
- (void)dismissedSundialViewer;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
@end

#endif /* IGDirectMediaPileMessageSectionController_h */