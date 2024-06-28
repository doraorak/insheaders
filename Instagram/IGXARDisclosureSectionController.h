//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGXARDisclosureSectionController_h
#define IGXARDisclosureSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGXARDisclosureBannerCell.h"
#include "IGXARDisclosureModel.h"

@class IGUserSession;
@protocol IGXARDisclosureBannerCellDelegate;

@interface IGXARDisclosureSectionController : IGListSectionController {
  /* instance variables */
  IGXARDisclosureModel *_model;
  IGUserSession *_userSession;
  BOOL _hasMarkedImpression;
  IGXARDisclosureBannerCell *_sizingCell;
}

@property (weak, nonatomic) NSObject<IGXARDisclosureBannerCellDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
@end

#endif /* IGXARDisclosureSectionController_h */