//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSectionPerformUpdateListener_Protocol_h
#define IGFeedSectionPerformUpdateListener_Protocol_h
@import Foundation;

@protocol IGFeedSectionPerformUpdateListener <NSObject>
/* instance methods */
- (void)reloadSectionControllerAnimated:(BOOL)animated shouldScrollToTop:(BOOL)top update:(id /* block */)update;
- (void)reloadSectionControllerAnimated:(BOOL)animated shouldScrollToTop:(BOOL)top update:(id /* block */)update;
- (void)reloadInSectionControllerAnimated:(BOOL)animated forCell:(id)cell update:(id /* block */)update completion:(id /* block */)completion;
- (void)reloadInSectionControllerAnimated:(BOOL)animated forCell:(id)cell update:(id /* block */)update completion:(id /* block */)completion;
- (void)reloadInSectionControllerAnimated:(BOOL)animated forCellType:(int)type textCellType:(long long)type update:(id /* block */)update completion:(id /* block */)completion;
- (void)reloadInSectionControllerAnimated:(BOOL)animated forCellType:(int)type textCellType:(long long)type update:(id /* block */)update completion:(id /* block */)completion;
- (void)reloadTextCells;
- (void)didTapMoreOptions;
- (void)presentCameraEffectBottomSheet;
- (void)reloadSectionAnimated:(BOOL)animated;
- (void)reloadSectionAnimated:(BOOL)animated;
- (void)rebuildItemViewModelWithMedia:(id)media useFallbackForShowreelNative:(BOOL)native;
- (void)rebuildItemViewModelWithMedia:(id)media useFallbackForShowreelNative:(BOOL)native;
- (void)invalidateLayoutSectionController;
- (void)invalidateLayoutSectionControllerAnimated:(BOOL)animated atIndexes:(id)indexes update:(id /* block */)update completion:(id /* block */)completion;
- (void)invalidateLayoutSectionControllerAnimated:(BOOL)animated atIndexes:(id)indexes update:(id /* block */)update completion:(id /* block */)completion;
- (void)updateItemViewModelWithReason:(id)reason completion:(id /* block */)completion;
- (void)updateItemViewModelWithReason:(id)reason completion:(id /* block */)completion;
- (void)updateItemViewModelWithCompletion:(id /* block */)completion;
- (void)updateItemViewModelWithCompletion:(id /* block */)completion;
- (void)updateItemViewModelAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)updateItemViewModelAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)provideSourceViewControllerWithCompletion:(id /* block */)completion;
- (void)provideSourceViewControllerWithCompletion:(id /* block */)completion;
- (void)provideSourceSectionControllerWithCompletion:(id /* block */)completion;
- (void)provideSourceSectionControllerWithCompletion:(id /* block */)completion;
- (void)provideCollectionContextWithCompletion:(id /* block */)completion;
- (void)provideCollectionContextWithCompletion:(id /* block */)completion;
- (void)provideMediaAndCanvasConfigurationWithCompletion:(id /* block */)completion;
- (void)provideMediaAndCanvasConfigurationWithCompletion:(id /* block */)completion;
- (void)provideMediaCellForMedia:(id)media withCompletion:(id /* block */)completion;
- (void)provideMediaCellForMedia:(id)media withCompletion:(id /* block */)completion;
- (void)provideVideoCellWithCompletion:(id /* block */)completion;
- (void)provideVideoCellWithCompletion:(id /* block */)completion;
- (void)provideSectionSourceIndexForSectionType:(int)type textType:(long long)type withCompletion:(id /* block */)completion;
- (void)provideSectionSourceIndexForSectionType:(int)type textType:(long long)type withCompletion:(id /* block */)completion;
- (void)provideListAdapterWithCompletion:(id /* block */)completion;
- (void)provideListAdapterWithCompletion:(id /* block */)completion;
@end

#endif /* IGFeedSectionPerformUpdateListener_Protocol_h */