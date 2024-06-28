//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBlockListBlockedUserAdapterDataSource_h
#define IGBlockListBlockedUserAdapterDataSource_h
@import Foundation;

#include "IGBlockListEmptyStateView.h"
#include "IGBlockListFailedLoadStateView.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGUserSession, NSArray, NSString, UIActivityIndicatorView;
@protocol IGBlockListAdapterDataSourceDelegate;

@interface IGBlockListBlockedUserAdapterDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGBlockListEmptyStateView *_usersEmptyStateView;
  IGBlockListFailedLoadStateView *_failedLoadStateView;
  UIActivityIndicatorView *_activityIndicatorView;
  long long _dataSourceType;
  id /* block */ _suggestedBlocklistTapHandler;
  id /* block */ _supervisionTapHandler;
  IGUserSession *_userSession;
  NSArray *_displayedBlockedUsers;
}

@property (weak, nonatomic) NSObject<IGBlockListAdapterDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGBlockListBlockedUserAdapterDataSource_h */
