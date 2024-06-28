//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryMapSearchCategoriesSectionController_h
#define IGDiscoveryMapSearchCategoriesSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGDiscoveryMapSearchCategoriesSectionControllerDelegate;

@interface IGDiscoveryMapSearchCategoriesSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
}

@property (weak, nonatomic) NSObject<IGDiscoveryMapSearchCategoriesSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)navigationTray:(id)tray didSelectItem:(id)item atIndex:(long long)index;
@end

#endif /* IGDiscoveryMapSearchCategoriesSectionController_h */