//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTaggedUserSectionController_h
#define IGTaggedUserSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGProfileAndTrailingButtonControllerDelegate-Protocol.h"
#include "IGTaggedUserViewModel.h"

@class NSString;
@protocol IGTaggedUserSectionControllerDelegate;

@interface IGTaggedUserSectionController : IGListSectionController<IGProfileAndTrailingButtonControllerDelegate> {
  /* instance variables */
  IGTaggedUserViewModel *_taggedUserViewModel;
  BOOL _moreOptionsIsEnabled;
  BOOL _isMultipleCollaboratorsEnabled;
}

@property (weak, nonatomic) NSObject<IGTaggedUserSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMoreOptionsEnabled:(BOOL)enabled isMultipleCollaboratorsEnabled:(BOOL)enabled;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)profileProviderIconButtonTapped;
- (void)profileAndTrailingButtonViewProfilePictureTapped:(id)tapped;
- (void)profileAndTrailingButtonViewProfileBodyTapped:(id)tapped;
- (void)profileAndTrailingButtonViewButtonTapped:(id)tapped;
- (void)toggleCategoryButton:(BOOL)button;
@end

#endif /* IGTaggedUserSectionController_h */
