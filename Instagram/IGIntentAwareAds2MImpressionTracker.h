//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIntentAwareAds2MImpressionTracker_h
#define IGIntentAwareAds2MImpressionTracker_h
@import Foundation;

#include "IGScrollViewListener-Protocol.h"
#include "IGViewAppearListener-Protocol.h"

@class IGItemDiffing, IGListAdapter, IGSponsoredSupportConfiguration, IGUserSession, IGViewController, NSString, UICollectionView;

@interface IGIntentAwareAds2MImpressionTracker : NSObject<IGScrollViewListener, IGViewAppearListener> {
  /* instance variables */
  IGViewController *_feedViewController;
  IGListAdapter *_listAdapter;
  NSString *_analyticsModule;
  IGUserSession *_userSession;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  UICollectionView *_feedCollectionView;
  IGItemDiffing *_viewableItemTracker;
  BOOL _viewDidAppearFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeedViewController:(id)controller feedScrollViewAnnouncer:(id)announcer feedCollectionView:(id)view listAdapter:(id)adapter userSession:(id)session analyticsModule:(id)module sponsoredSupportConfiguration:(id)configuration;
- (void)viewController:(id)controller viewWillAppearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewDidAppearAnimated:(BOOL)animated;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)itemDiffing:(id)diffing didChangeWithItemAdded:(id)added;
- (void)itemDiffing:(id)diffing didChangeWithItemRemoved:(id)removed;
@end

#endif /* IGIntentAwareAds2MImpressionTracker_h */
