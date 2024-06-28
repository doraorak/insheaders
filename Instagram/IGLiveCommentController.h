//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveCommentController_h
#define IGLiveCommentController_h
@import Foundation;

#include "IGLiveCommentControlService.h"
#include "IGLiveCommentPostingService.h"
#include "IGLiveFlaggedCommentLedger.h"
#include "IGLiveInteractivityService.h"
#include "NSObject-Protocol.h"

@class FBTimer, IGLiveCommentModel, IGUser, IGUserSession, NSMutableArray, NSMutableSet, NSString;
@protocol IGLiveCommentControllerDelegate, IGLiveCommentService;

@interface IGLiveCommentController : NSObject<NSObject> {
  /* instance variables */
  IGUser *_currentUser;
  NSObject<IGLiveCommentService> *_commentService;
  IGLiveInteractivityService *_interactivityService;
  NSMutableArray *_commentQueue;
  FBTimer *_consumeCommentTimer;
  long long _secondsPerComment;
  double _lastCommentDisplayTime;
  IGLiveFlaggedCommentLedger *_flaggedCommentLedger;
  IGLiveCommentPostingService *_commentPostingService;
  IGLiveCommentControlService *_commentControlService;
  NSMutableSet *_loadedCommentPKs;
  NSMutableSet *_newFollowerPKS;
  IGLiveCommentModel *_currentlyDisplayedRequestPrompt;
  IGLiveCommentModel *_incomingRequestPrompt;
  BOOL _commentSubscriptionEnabled;
  BOOL _started;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGLiveCommentControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_sortedComments:(id)comments;
+ (double)currentTime;

/* instance methods */
- (id)initWithBroadcastId:(id)id mentionedCommentId:(id)id userSession:(id)session currentUser:(id)user loggingContext:(id)context flaggedCommentLedger:(id)ledger isMultiplePaymentsEnabled:(BOOL)enabled isBroadcaster:(BOOL)broadcaster commentSubscriptionEnabled:(BOOL)enabled;
- (id)initWithNetworker:(id)networker userSession:(id)session currentUser:(id)user loggingContext:(id)context flaggedCommentLedger:(id)ledger commentService:(id)service commentPostingService:(id)service commentControlService:(id)service interactivityService:(id)service commentSubscriptionEnabled:(BOOL)enabled;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)markRequestsSeen;
- (void)commentService:(id)service didFetchComments:(id)comments visibleComments:(id)comments systemComments:(id)comments requestToJoinPrompt:(id)prompt numberOfTotalRequests:(id)requests secondsPerComment:(id)comment pinnedComment:(id)comment isInitialFetch:(BOOL)fetch;
- (void)commentService:(id)service didReceiveCommentMutedStatus:(BOOL)status;
- (void)interactivityService:(id)service didReceiveCommentMutedStatus:(BOOL)status;
- (void)interactivityService:(id)service didReceiveBadgesStatusChange:(BOOL)change;
- (void)interactivityService:(id)service didReceiveQuestionEvent:(id)event;
- (void)interactivityServiceQuestionSubmissionStatusDidChange:(BOOL)change submittedQuestionCount:(long long)count;
- (void)interactivityService:(id)service didReceiveReaction:(id)reaction fromUserId:(id)id;
- (void)interactivityService:(id)service didReceiveAvatarReaction:(id)reaction fromUserId:(id)id;
- (void)interactivityService:(id)service isPlayingGame:(id)game withStatus:(id)status;
- (void)interactivityService:(id)service didUpdateJoinRequestForUser:(id)user withStatus:(unsigned long long)status;
- (void)commentPostingService:(id)service didSuccessfullyPostComment:(id)comment commentToReplace:(id)replace;
- (void)commentPostingService:(id)service didFailToPostComment:(id)comment;
- (void)commentControlService:(id)service didFailToPinComment:(id)comment;
- (void)commentControlService:(id)service didFailToUnpinComment:(id)comment;
- (void)commentControlService:(id)service didFailToToggleComment:(id)comment asLiked:(BOOL)liked;
- (void)commentControlService:(id)service didSuccessfullyToggleComment:(id)comment asLiked:(BOOL)liked;
@end

#endif /* IGLiveCommentController_h */
