//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoverPeopleSearchNullStateSectionController_h
#define IGDiscoverPeopleSearchNullStateSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDiscoverPeopleCellDelegate-Protocol.h"
#include "IGDiscoverPeopleItemConfiguration.h"

@class IGUserSession, NSString;
@protocol IGDiscoverPeopleSearchNullStateSectionControllerDelegate;

@interface IGDiscoverPeopleSearchNullStateSectionController : IGListSectionController<IGDiscoverPeopleCellDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDiscoverPeopleItemConfiguration *_model;
  NSString *_module;
}

@property (weak, nonatomic) NSObject<IGDiscoverPeopleSearchNullStateSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session model:(id)model module:(id)module;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)discoverPeopleCellDidTapProfileRing:(id)ring;
- (void)discoverPeopleCellDidTapFollow:(id)follow;
- (void)discoverPeopleCellDidTapDismiss:(id)dismiss;
- (void)discoverPeopleCellDidTapFollowing:(id)following;
- (void)discoverPeopleCell:(id)cell didTapCustomButtonTypeModel:(id)model;
@end

#endif /* IGDiscoverPeopleSearchNullStateSectionController_h */