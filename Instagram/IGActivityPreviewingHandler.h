//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityPreviewingHandler_h
#define IGActivityPreviewingHandler_h
@import Foundation;

#include "IGFeedItemPreviewingHandler.h"
#include "IGPreviewingDelegate-Protocol.h"
#include "IGUserPreviewingHandler.h"
#include "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSString;
@protocol IGContextMenuInteractionDelegate;

@interface IGActivityPreviewingHandler : NSObject<IGPreviewingDelegate> {
  /* instance variables */
  IGUserPreviewingHandler *_userDelegate;
  IGFeedItemPreviewingHandler *_feedItemDelegate;
  NSObject<UIViewControllerPreviewingDelegate> *_usedDelegate;
  NSObject<IGContextMenuInteractionDelegate> *_usedContextDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session newsListViewController:(id)controller scrollView:(id)view;
- (id)previewingContext:(id)context viewControllerForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)previewingContext:(id)context commitViewController:(id)controller;
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)contextMenuConfigurationForCollectionViewCell:(id)cell collectionView:(id)view viewController:(id)controller location:(struct CGPoint { double x0; double x1; })location;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)performViewControllerCommitForPreviewedItem;
@end

#endif /* IGActivityPreviewingHandler_h */
