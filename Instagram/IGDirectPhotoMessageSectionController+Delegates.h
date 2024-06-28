//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPhotoMessageSectionController_Delegates_h
#define IGDirectPhotoMessageSectionController_Delegates_h
@import Foundation;

@interface IGDirectPhotoMessageSectionController (Delegates) <IGDirectAggregatedMediaViewerViewControllerDelegate>
/* instance methods */
- (BOOL)shouldLaunchZoomingWithZoomController:(id)controller gestureRecognizer:(id)recognizer;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)mediaViewer:(id)viewer didSendText:(id)text quotedMessage:(id)message;
- (void)mediaViewerDidOpenCameraReply:(id)reply withSourceMedia:(id)media anchorView:(id)view messageId:(id)id productType:(long long)type;
- (void)mediaViewerDidTapGalleryToReply:(id)reply withSourceMedia:(id)media anchorView:(id)view messageId:(id)id embeddedPublishedMessage:(id)message productType:(long long)type;
- (void)mediaViewerDidTapStickersToReply:(id)reply embeddedPublishedMessage:(id)message productType:(long long)type;
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
- (void)directPhotoMessageCellWillLoadImage:(id)image;
- (void)directPhotoMessageCell:(id)cell didLoadImage:(id)image imageView:(id)view loadSource:(id)source networkRequestSummary:(id)summary;
- (void)directPhotoMessageCell:(id)cell didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (void)directPhotoMessageCell:(id)cell didUpdateLoadingState:(id)state;
- (void)shareToStoryWithMessageViewModel:(id)model previousMessageViewModel:(id)model;
@end

#endif /* IGDirectPhotoMessageSectionController_Delegates_h */
