//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProCreatePostFlow_h
#define IGProCreatePostFlow_h
@import Foundation;

#include "IGFeedCreationFlowDelegate-Protocol.h"

@class IG4BLogger, IGProFlowNavigationPresenter, IGProIntroViewController, IGUserSession, NSString;
@protocol IGProCreatePostFlowDelegate;

@interface IGProCreatePostFlow : NSObject<IGFeedCreationFlowDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IG4BLogger *_flowLogger;
  IGProIntroViewController *_proIntroViewController;
  IGProFlowNavigationPresenter *_flowPresenter;
  NSString *_title;
  NSString *_subtitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGProCreatePostFlowDelegate> *delegate;

/* instance methods */
- (id)initWithFlowPresenter:(id)presenter userSession:(id)session title:(id)title subtitle:(id)subtitle logger:(id)logger entryPoint:(id)point;
- (void)start;
- (void)feedCreationFlowDidCancelWithSelectedAssetMetadatas:(id)metadatas;
- (void)feedCreationFlowDidFinishWithType:(long long)type sharingInfo:(id)info postId:(id)id;
- (id)feedCreationFlowWillNavigateToTarget;
- (void)feedCreationFlowDidShareSundialComposition:(id)composition toDestination:(long long)destination;
- (void)feedCreationFlowDidSaveSundialDraft:(id)draft;
- (void)introViewControllerDidTapPrimaryButton:(id)button;
- (void)introViewControllerDidTapCancel:(id)cancel;
@end

#endif /* IGProCreatePostFlow_h */