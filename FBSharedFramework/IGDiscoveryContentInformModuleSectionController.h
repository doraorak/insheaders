//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryContentInformModuleSectionController_h
#define IGDiscoveryContentInformModuleSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDiscoveryContentInformModuleLoggingModel.h"
#include "IGDiscoveryContentInformModuleViewModel.h"
#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDiscoveryContentInformModuleSectionControllerDelegate;

@interface IGDiscoveryContentInformModuleSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDiscoveryContentInformModuleViewModel *_model;
  IGDiscoveryContentInformModuleLoggingModel *_loggingModel;
  NSString *_session;
}

@property (weak, nonatomic) NSObject<IGDiscoveryContentInformModuleSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session loggingModel:(id)model;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)_presentBloksBottomSheetAppId:(id)id params:(id)params navBarTitle:(id)title hideNavBar:(BOOL)bar;
- (void)_presentDMShareComposer;
- (void)discoveryContentInformModule:(id)module didTapOnAction:(id)action actionTitle:(id)title actionBodyText:(id)text;
- (void)discoveryContentInformModuleCellDidTapOnSeeResults:(id)results hideInformModule:(BOOL)module;
- (void)_handleAction:(id)action additionalData:(id)data;
- (void)_handleActionLinkAsURL:(id)url;
- (void)_returnToSearchTypeAhead;
@end

#endif /* IGDiscoveryContentInformModuleSectionController_h */
