//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProInspirationStoryHighlightsViewController_h
#define IGProInspirationStoryHighlightsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDSHeadlineViewDelegate-Protocol.h"
#include "IGFeedStarterKit.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGProInspirationLogger.h"
#include "IGProInspirationStoryHighlightsDataSource.h"
#include "IGProInspirationStoryHighlightsNetworker.h"

@class IGUserSession, NSString, UIActivityIndicatorView;
@protocol IGInspirationHubDelegate;

@interface IGProInspirationStoryHighlightsViewController : IGViewController<IGDSHeadlineViewDelegate, IGListAdapterDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGProInspirationStoryHighlightsNetworker *_networker;
  UIActivityIndicatorView *_spinner;
  IGFeedStarterKit *_feed;
  IGProInspirationStoryHighlightsDataSource *_dataSource;
  IGProInspirationLogger *_proLogger;
  BOOL _shouldUseTopNavigation;
}

@property (weak, nonatomic) NSObject<IGInspirationHubDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)_didTapCancelButton;
- (void)headlineTextButtonWasTapped;
- (void)headlineProfileImageWasTapped;
- (void)didTapStoryHighlight:(id)highlight;
- (id)emptyViewForDataSource:(id)source;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
@end

#endif /* IGProInspirationStoryHighlightsViewController_h */
