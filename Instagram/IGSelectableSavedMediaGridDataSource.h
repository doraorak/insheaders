//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSelectableSavedMediaGridDataSource_h
#define IGSelectableSavedMediaGridDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"

@class IGEmptyFeedView, IGFeedNetworkSource, IGUserSession, NSMutableArray, NSString;
@protocol IGLoadFailureViewCellRetryDelegate, IGSelectableSavedMediaDataSourceDelegate;

@interface IGSelectableSavedMediaGridDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGEmptyFeedView *_emptyView;
  NSObject<IGMediaThumbnailSectionControllerSelectionDelegate> *_mediaThumbnailSelectionDelegate;
}

@property (retain, nonatomic) IGFeedNetworkSource *feedNetworkSource;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IGUserSession *userSession;
@property (nonatomic) struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; } feedLayoutConfiguration;
@property (retain, nonatomic) NSString *collectionIdAddingTo;
@property (copy, nonatomic) NSString *analyticsModule;
@property (weak, nonatomic) NSObject<IGLoadFailureViewCellRetryDelegate> *loadFailureRetryDelegate;
@property (weak, nonatomic) NSObject<IGSelectableSavedMediaDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeedNetworkSource:(id)source userSession:(id)session retryDelegate:(id)delegate mediaThumbnailSelectionDelegate:(id)delegate feedLayoutConfiguration:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })configuration collectionIdAddingTo:(id)to analyticsModule:(id)module;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)objectsForListAdapter:(id)adapter;
@end

#endif /* IGSelectableSavedMediaGridDataSource_h */
