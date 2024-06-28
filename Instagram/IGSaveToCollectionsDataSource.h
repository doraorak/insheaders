//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveToCollectionsDataSource_h
#define IGSaveToCollectionsDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"

@class IGSpinnerLabelViewModel, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGSaveToCollectionsSectionControllerDelegate;

@interface IGSaveToCollectionsDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  NSString *_module;
  long long _currentMediaIndex;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) NSArray *medias;
@property (weak, nonatomic) NSObject<IGSaveToCollectionsSectionControllerDelegate> *selectionDelegate;
@property (readonly, nonatomic) IGSpinnerLabelViewModel *spinnerViewModel;
@property (readonly, copy, nonatomic) NSArray *collections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session medias:(id)medias selectionDelegate:(id)delegate module:(id)module currentMediaIndex:(long long)index;
- (void)fetch;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)objectsForListAdapter:(id)adapter;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGSaveToCollectionsDataSource_h */