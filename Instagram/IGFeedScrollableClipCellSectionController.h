//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedScrollableClipCellSectionController_h
#define IGFeedScrollableClipCellSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFeedPlaybackComposableSession.h"
#include "IGFeedPreviewableSectionController-Protocol.h"

@class IGFeedScrollableClipViewModel, IGUserSession, NSString;
@protocol IGFeedScrollableClipCellSectionControllerDelegate;

@interface IGFeedScrollableClipCellSectionController : IGListSectionController<IGFeedPreviewableSectionController> {
  /* instance variables */
  NSString *_analyticsModule;
  IGUserSession *_userSession;
  BOOL _forceDarkMode;
  BOOL _enablePlaybackAnimation;
  BOOL _enableMusicMetadata;
  unsigned long long _coverSize;
}

@property (retain, nonatomic) IGFeedScrollableClipViewModel *viewModel;
@property (weak, nonatomic) NSObject<IGFeedScrollableClipCellSectionControllerDelegate> *delegate;
@property (retain, nonatomic) IGFeedPlaybackComposableSession *playbackSession;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module userSession:(id)session forceDarkMode:(BOOL)mode enablePlaybackAnimation:(BOOL)animation enableMusicMetadata:(BOOL)metadata coverSize:(unsigned long long)size;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)presentFeedPreviewableItem;
@end

#endif /* IGFeedScrollableClipCellSectionController_h */
