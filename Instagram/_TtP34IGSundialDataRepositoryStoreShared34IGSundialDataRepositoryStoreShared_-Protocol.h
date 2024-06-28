//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP34IGSundialDataRepositoryStoreShared34IGSundialDataRepositoryStoreShared__Protocol_h
#define _TtP34IGSundialDataRepositoryStoreShared34IGSundialDataRepositoryStoreShared__Protocol_h
@import Foundation;

@protocol _TtP34IGSundialDataRepositoryStoreShared34IGSundialDataRepositoryStoreShared_ 
/* instance methods */
- (void)moveSundialDraftsWithDraftsToCopy:(id)copy destinationDraftStoreType:(long long)type sourceDraftStoreType:(long long)type completion:(id /* block */)completion;
- (id)autoSavedDraft;
- (id)autoSavedDraftId;
- (id)draftForMediaId:(id)id draftStoreType:(long long)type;
- (void)removeAutoSavedDraft;
- (void)removeDraftsWithIdentifiers:(id)identifiers draftStoreType:(long long)type surface:(long long)surface completion:(id /* block */)completion;
- (unsigned long long)draftCountForDraftStoreType:(long long)type;
- (id)previewImageForDraft:(id)draft draftStoreType:(long long)type;
- (id)draftStoreLoadingTaskForDraftStoreType:(long long)type;
- (id)eventAnnouncerForDraftStoreType:(long long)type;
- (id)lastDraftRestoreErrorForDraftStoreType:(long long)type;
- (id)lastDraftSaveErrorForDraftStoreType:(long long)type;
- (void)startObservingPostWithPostId:(id)id draftStoreType:(long long)type identifier:(id)identifier userSession:(id)session;
- (void)clearPreviewImageCacheForDraftStoreType:(long long)type;
- (void)cancelPendingDraftForDraftStoreType:(long long)type;
- (id)copyDraftFromShareExtensionFolder;
- (void)showDraftCleanupToastIfNeededFor:(double)for draftStoreType:(long long)type with:(id /* block */)with;
- (void)showPanavisionRestoreErrorDialogWithDraftId:(id)id error:(id)error;
@end

#endif /* _TtP34IGSundialDataRepositoryStoreShared34IGSundialDataRepositoryStoreShared__Protocol_h */
