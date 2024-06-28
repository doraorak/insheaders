//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemMediaCollectionThumbnailController_h
#define IGFeedItemMediaCollectionThumbnailController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFeedConfigurationType-Protocol.h"
#include "IGFeedItemMediaCollectionThumbnailViewModel.h"
#include "IGListDisplayDelegate-Protocol.h"

@class NSString;

@interface IGFeedItemMediaCollectionThumbnailController : IGListSectionController<IGListDisplayDelegate> {
  /* instance variables */
  IGFeedItemMediaCollectionThumbnailViewModel *_viewModel;
  NSObject<IGFeedConfigurationType> *_feedConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSectionViewModel:(id)model feedConfiguration:(id)configuration;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGFeedItemMediaCollectionThumbnailController_h */