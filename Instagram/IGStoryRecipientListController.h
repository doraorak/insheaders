//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryRecipientListController_h
#define IGStoryRecipientListController_h
@import Foundation;

#include "IGBoostPostLogger.h"
#include "IGDirectRecipientListViewControllerDelegate-Protocol.h"
#include "IGPostCreationManagerListener-Protocol.h"
#include "IGPostShareListener-Protocol.h"
#include "IGStoryShareInfosBuilder.h"
#include "IGStorySharePostListener-Protocol.h"

@class IGDirectCameraCreationViewMode, IGDirectThreadService, IGMedia, IGStoryAnalyticsUploadWaterfall, IGUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString;
@protocol IGStoryRecipientListControllerDelegate, IGViewController<IGDirectRecipientListViewControllerType;

@interface IGStoryRecipientListController : NSObject<IGDirectRecipientListViewControllerDelegate, IGStorySharePostListener, IGPostCreationManagerListener, IGPostShareListener> {
  /* instance variables */
  NSMutableSet *_selectedExternalShareServices;
  NSMutableOrderedSet *_selectedDirectRecipients;
  NSOrderedSet *_recipientsFromSearch;
  NSSet *_bumpedRecipients;
  BOOL _adsModeBoostStoryEnabled;
  NSMutableSet *_selectedHighlightReelIDs;
  NSMutableArray *_selectedHighlightReelTitles;
  NSString *_loggingSessionID;
  double _cameraRequestedTimestamp;
  IGMedia *_sharedStoryItem;
  long long _shareType;
  NSMutableDictionary *_uploadModelsToMetadata;
  NSMutableDictionary *_uploadModelsToMetadataForProtectedUpload;
  BOOL _didFinishAction;
  BOOL _shouldShowPromoteFlow;
  IGBoostPostLogger *_boostPostLogger;
  IGDirectCameraCreationViewMode *_directCreationMode;
  IGStoryShareInfosBuilder *_storyShareInfosBuilder;
  IGViewController<IGDirectRecipientListViewControllerType> *_recipientListViewController;
  long long _selectedStorySendTarget;
  NSArray *_uploadModels;
  IGStoryAnalyticsUploadWaterfall *_uploadWaterfall;
  IGDirectThreadService *_threadService;
}

@property (readonly, nonatomic) long long replyType;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) NSObject<IGStoryRecipientListControllerDelegate> *delegate;
@property (nonatomic) BOOL beExtremelyHackyAndHijackTheNavigationBarBackButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session uploadModels:(id)models loggingSessionID:(id)id cameraRequestedTimestamp:(double)timestamp replyType:(long long)type configuration:(id)configuration oneTapStateTracker:(id)tracker initialIntendedRecipient:(id)recipient selectedRecipients:(id)recipients recipientsFromSearch:(id)search bumpedRecipients:(id)recipients selectedExternalShareServices:(id)services selectedHighlightReelIDs:(id)ids selectedHighlightTitles:(id)titles selectedStorySendTarget:(long long)target shareType:(long long)type directCreationMode:(id)mode entryPoint:(id)point title:(id)title reshareToStoryValue:(id)value adsModeBoostStoryEnabled:(BOOL)enabled;
- (void)storyItemPosted:(id)posted videoFileURL:(id)url shareType:(long long)type mediaData:(id)data postId:(id)id postShareId:(id)id reelOwner:(id)owner reelPk:(id)pk;
- (void)selectRecipientViewController:(id)controller didOneTapSendToStoryTarget:(long long)target willShareToFbWithYourStoryButton:(BOOL)button;
- (void)selectRecipientViewController:(id)controller didOneTapSendToExternalService:(long long)service willShareToFbWithYourStoryButton:(BOOL)button;
- (void)selectRecipientViewController:(id)controller didOneTapSendToDirectRecipient:(id)recipient messageText:(id)text;
- (void)selectRecipientViewController:(id)controller didOneTapSendToBlastList:(id)list;
- (void)selectRecipientViewController:(id)controller;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(id)highlight;
- (void)selectRecipientViewControllerDidTapPromote:(id)promote;
- (id)selectedRecipientsSoFarFromOneTapping:(id)tapping;
- (void)selectRecipientViewControllerDidTapFinishButton:(id)button storySendTarget:(long long)target sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text fromOneTap:(BOOL)tap storyViewerViewModel:(id)model storyViewerLoggingContext:(id)context currentStoryItem:(id)item loggingProvider:(id)provider media:(id)media selectedPost:(id)post sharedAttachments:(id)attachments;
- (void)selectRecipientViewControllerDidDismissRecipientList:(id)list recipientsFromSearch:(id)search bumpedRecipients:(id)recipients;
- (void)selectRecipientViewControllerDidTapBackButton:(id)button;
- (void)selectRecipientViewController:(id)controller didUpdateSelectedRecipients:(id)recipients;
- (void)selectRecipientViewController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)selectRecipientViewController:(id)controller willToggleFullScreenOn:(BOOL)on;
- (void)selectRecipientViewControllerDidTapFinishButtonWithDirectSendForSender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)selectRecipientViewController:(id)controller willShowPrivacyBanner:(BOOL)banner;
- (void)selectRecipientViewControllerDidTapSave:(id)save;
- (void)selectRecipientViewController:(id)controller didTapSendToGroupButtonWithSelectedRecipients:(id)recipients sender:(id)sender text:(id)text externalServices:(id)services storyViewerViewModel:(id)model storyViewerLoggingContext:(id)context currentStoryItem:(id)item loggingProvider:(id)provider media:(id)media selectedPost:(id)post;
- (void)didTapFavoritesSubtitle;
- (void)didPostStory;
- (void)addHighlightsSheetDidCancel:(id)cancel;
- (void)addHighlightsSheet:(id)sheet wantsNewReelWithTitle:(id)title cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect creationToken:(id)token isOpalHighlight:(BOOL)highlight;
- (void)addHighlightsSheet:(id)sheet didUpdateReelWithPK:(id)pk added:(BOOL)added title:(id)title coverURL:(id)url isOpalHighlight:(BOOL)highlight;
- (BOOL)isRecipientListViewControllerDismissed;
- (void)postCreationManager:(id)manager didAddShare:(id)share;
- (void)postCreationManagerDidResumeArchivedPosts:(id)posts;
- (void)postCreationManager:(id)manager post:(id)post carouselDidRenderVideoURL:(id)url hasEdits:(BOOL)edits;
- (void)postCreationManager:(id)manager post:(id)post carouselDidRenderImageSource:(id)source hasEdits:(BOOL)edits;
- (void)postCreationManager:(id)manager didSuspendVideoProcessingForPost:(id)post;
- (void)postShare:(id)share didUpdateStatus:(long long)status serverResponse:(id)response;
- (void)postShare:(id)share didUpdateProgress:(double)progress;
- (void)postShare:(id)share didRenderVideoAtURL:(id)url;
- (void)postShareDidSuspendVideoProcessing:(id)processing;
- (void)newPromotionCreated;
- (void)newPromotionSuccessDialogOkActionClick;
@end

#endif /* IGStoryRecipientListController_h */