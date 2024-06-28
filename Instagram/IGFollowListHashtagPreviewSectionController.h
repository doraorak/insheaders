//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFollowListHashtagPreviewSectionController_h
#define IGFollowListHashtagPreviewSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGProfileAndTrailingButtonControllerDelegate-Protocol.h"

@class IGFollowListHashtagPreviewModel, NSString;
@protocol IGFollowListHashtagPreviewSectionControllerDelegate;

@interface IGFollowListHashtagPreviewSectionController : IGListSectionController<IGProfileAndTrailingButtonControllerDelegate> {
  /* instance variables */
  NSObject<IGFollowListHashtagPreviewSectionControllerDelegate> *_delegate;
  IGFollowListHashtagPreviewModel *_item;
  NSString *_titleText;
  NSString *_subtitleText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)profileAndTrailingButtonViewProfilePictureTapped:(id)tapped;
- (void)profileAndTrailingButtonViewProfileBodyTapped:(id)tapped;
- (void)profileAndTrailingButtonViewButtonTapped:(id)tapped;
@end

#endif /* IGFollowListHashtagPreviewSectionController_h */
