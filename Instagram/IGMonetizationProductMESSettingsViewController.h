//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductMESSettingsViewController_h
#define IGMonetizationProductMESSettingsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGMonetizationProductMESSettingsViewController : IGViewController<IGListAdapterDataSource, IGImageTitleSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSArray *_gatingDecisions;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  long long _productType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session gatingDecisions:(id)decisions productType:(long long)type;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)mesStatusSectionController:(id)controller didTapItemViewModel:(id)model;
- (void)imageTitleSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (void)imageTitleSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGMonetizationProductMESSettingsViewController_h */