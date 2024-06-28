//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveHeaderGuestSheetListDataSource_h
#define IGLiveHeaderGuestSheetListDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGLiveBroadcastEmptyView.h"
#include "IGLiveBroadcastImageTitleModel.h"

@class IGLabelItemConfiguration, IGLabelItemViewModel, IGUser, IGUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGLiveHeaderSheetDelegate;

@interface IGLiveHeaderGuestSheetListDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGLiveHeaderSheetDelegate> *_headerSheetDelegate;
  IGLabelItemViewModel *_sectionTitleModel;
  IGLabelItemViewModel *_viewerListSectionTitleModel;
  IGLabelItemViewModel *_viewerListSectionSubtitleModel;
  IGLiveBroadcastImageTitleModel *_requestJoinModel;
  IGLiveBroadcastEmptyView *_emptyView;
  NSMutableDictionary *_followStatusByUserPk;
  NSMutableDictionary *_guestStateByUserPk;
  NSString *_module;
  NSArray *_brandPartners;
  IGLabelItemConfiguration *_labelConfig;
  BOOL _asViewer;
  BOOL _asModerator;
  NSMutableArray *_disabledViewerPKs;
}

@property (copy, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) IGUser *host;
@property (retain, nonatomic) NSArray *guests;
@property (retain, nonatomic) NSArray *viewers;
@property (nonatomic) BOOL requestToJoinEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session headerSheetDelegate:(id)delegate asViewer:(BOOL)viewer asModerator:(BOOL)moderator module:(id)module;
- (void)liveBroadcastImageTitleSectionController:(id)controller didTapOnModel:(id)model;
- (void)liveBroadcastUserSectionController:(id)controller didTapOnUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller userSource:(id)source toggled:(BOOL)toggled;
- (void)liveBroadcastUserSectionController:(id)controller userSource:(id)source selected:(BOOL)selected;
- (void)liveBroadcastUserSectionController:(id)controller didTapButtonOfUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller didTapInviteButtonOfUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller didTapMoreButtonOfUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller didTapWaveButtonOfUserSource:(id)source;
- (BOOL)liveBroadcastUserSectionControllerShouldDisplayWaveButton:(id)button;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGLiveHeaderGuestSheetListDataSource_h */