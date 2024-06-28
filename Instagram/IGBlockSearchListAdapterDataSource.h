//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBlockSearchListAdapterDataSource_h
#define IGBlockSearchListAdapterDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGUserListSectionControllerSelectionDelegate-Protocol.h"
#include "IGUserListSectionControllerTapDelegate-Protocol.h"

@class IGUserSession, NSArray, NSString;
@protocol IGBlockSearchListAdapterDataSourceDelegate;

@interface IGBlockSearchListAdapterDataSource : NSObject<IGUserListSectionControllerSelectionDelegate, IGUserListSectionControllerTapDelegate, IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_moduleName;
}

@property (readonly, copy, nonatomic) NSArray *recipients;
@property (weak, nonatomic) NSObject<IGBlockSearchListAdapterDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session moduleName:(id)name;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)userListSectionControllerDidSelectUser:(id)user;
- (void)userListSectionControllerDidDeselectUser:(id)user;
- (void)userListSectionControllerCellWasTapped:(id)tapped;
- (BOOL)userListSectionControllerShouldNavigateToProfileOnTap:(id)tap;
- (id)userListSectionControllerNavigationController:(id)controller;
@end

#endif /* IGBlockSearchListAdapterDataSource_h */
