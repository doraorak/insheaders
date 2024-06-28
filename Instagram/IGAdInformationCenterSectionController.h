//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdInformationCenterSectionController_h
#define IGAdInformationCenterSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGAdInformationCenterBloksCell.h"
#include "NSObject-Protocol.h"

@class BKBloksViewHelper, IGUserSession, NSString;

@interface IGAdInformationCenterSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  BKBloksViewHelper *_bloksViewHelper;
  IGAdInformationCenterBloksCell *_bloksCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)bloksViewHelperNeedsUpdate:(id)update;
@end

#endif /* IGAdInformationCenterSectionController_h */