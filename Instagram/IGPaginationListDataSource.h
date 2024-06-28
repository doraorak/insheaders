//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPaginationListDataSource_h
#define IGPaginationListDataSource_h
@import Foundation;

#include "IGDataProviderPageInfo-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"

@class NSString;
@protocol IGPaginationListDataSourceDelegate;

@interface IGPaginationListDataSource : NSObject<IGScrollViewListener, IGListAdapterDataSource> {
  /* instance variables */
  NSObject<IGListAdapterDataSource> *_contentDataSource;
  NSObject<IGDataProviderPageInfo> *_pageInfo;
}

@property (weak, nonatomic) NSObject<IGPaginationListDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentDataSource:(id)source scrollViewAnnouncer:(id)announcer;
- (void)updatePageInfo:(id)info;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
@end

#endif /* IGPaginationListDataSource_h */
