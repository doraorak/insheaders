//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchEchoMetaVerifiedBoostDisclosureSectionController_h
#define IGSearchEchoMetaVerifiedBoostDisclosureSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGSearchEchoMetaVerifiedBoostDisclosureSectionControllerDelegate;

@interface IGSearchEchoMetaVerifiedBoostDisclosureSectionController : IGListSectionController<IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGSearchEchoMetaVerifiedBoostDisclosureSectionControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGSearchEchoMetaVerifiedBoostDisclosureSectionController_h */
