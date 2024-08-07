//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVPostLiveShareToIGTVFlow_h
#define IGTVPostLiveShareToIGTVFlow_h
@import Foundation;

#include "IGCoverPickerSelection.h"
#include "IGTVCreationAnalyticsSession.h"
#include "IGTVPostLiveCoverPickerViewController.h"
#include "IGTVPostLiveMetadataEditorViewController.h"
#include "IGTVPostLiveThumbnailResponse.h"
#include "IGTVUploadMetadata.h"
#include "IGTVUploadTask.h"
#include "NSObject-Protocol.h"

@class IGLContext, IGNavigationController, IGUserSession, NSArray, NSString;
@protocol IGPostLiveShareToIGTVFlowDelegate;

@interface IGTVPostLiveShareToIGTVFlow : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_broadcastID;
  NSString *_mediaID;
  BOOL _wasLiveInternalOnly;
  BOOL _wasFanClubOnly;
  BOOL _fanClubEnabled;
  BOOL _shoppingEnabled;
  long long _broadcastDuration;
  NSString *_archivedMediaId;
  NSArray *_taggedPartners;
  IGNavigationController *_navigationController;
  IGTVPostLiveCoverPickerViewController *_coverPickerViewController;
  IGTVPostLiveMetadataEditorViewController *_metadataEditorViewController;
  IGTVCreationAnalyticsSession *_creationAnalytics;
  IGCoverPickerSelection *_coverPickerSelection;
  IGTVPostLiveThumbnailResponse *_thumbnailResponse;
  IGTVUploadMetadata *_metadata;
  IGTVUploadTask *_uploadTask;
  IGLContext *_iglContext;
  BOOL _onlyEditing;
  BOOL _oneClickPost;
}

@property (weak, nonatomic) NSObject<IGPostLiveShareToIGTVFlowDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session broadcastID:(id)id mediaID:(id)id wasLiveInternalOnly:(BOOL)only wasFanClubOnly:(BOOL)only fanClubEnabled:(BOOL)enabled shoppingEnabled:(BOOL)enabled broadcastDuration:(long long)duration taggedPartners:(id)partners archivedMediaId:(id)id onlyEditing:(BOOL)editing oneClickPost:(BOOL)post;
- (void)postLiveCoverPickerViewControllerDidTapNext:(id)next withSelection:(id)selection;
- (void)postLiveCoverPickerViewControllerDidTapBackButton:(id)button;
- (void)tvMetadataEditor:(id)editor didUpdateWithTitle:(id)title showSeriesTag:(BOOL)tag;
- (void)tvMetadataEditor:(id)editor didExitWithMetadata:(id)metadata;
@end

#endif /* IGTVPostLiveShareToIGTVFlow_h */
