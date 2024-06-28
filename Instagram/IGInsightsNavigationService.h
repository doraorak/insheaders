//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInsightsNavigationService_h
#define IGInsightsNavigationService_h
@import Foundation;

#include "IGCreationViewControllerNavigationDelegate-Protocol.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGSingleFeedConfiguration.h"
#include "IGStoryViewerPresentationController.h"

@class IGFeedNetworkSource, IGUserSession, NSString, UINavigationController, UIView, UIViewController;

@interface IGInsightsNavigationService : NSObject<IGFeedNetworkSourceDelegate, IGCreationViewControllerNavigationDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFeedNetworkSource *_source;
  IGSingleFeedConfiguration *_singleFeedConfiguration;
  NSString *_storyId;
  NSString *_storySurface;
  UIView *_storyView;
  UIViewController *_storyViewController;
  NSString *_feedItemFetchType;
  IGStoryViewerPresentationController *_storyViewerPresentationController;
  UINavigationController *_navigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (void)creationViewController:(id)controller didEnterState:(long long)state;
- (void)creationViewController:(id)controller willShareToDirectRecipients:(id)recipients;
- (void)creationViewController:(id)controller didFinishWithExitPoint:(long long)point shouldAnimateTransition:(BOOL)transition isNavigationHandledByPresenter:(BOOL)presenter;
- (void)creationViewControllerWillDismiss:(id)dismiss;
- (void)creationViewController:(id)controller didDismissWithExitPoint:(long long)point destination:(long long)destination storySendTarget:(long long)target toDirectRecipients:(id)recipients image:(id)image storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids completion:(id /* block */)completion;
@end

#endif /* IGInsightsNavigationService_h */
