//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteLeadGenOneTapViewController_h
#define IGPromoteLeadGenOneTapViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBoostPostLogger.h"
#include "IGPromoteDataStore.h"
#include "NSObject-Protocol.h"

@class IGScopedObjectMap, IGUserSession, NSString;

@interface IGPromoteLeadGenOneTapViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_entrypoint;
  IGPromoteDataStore *_localDataStore;
  IGBoostPostLogger *_logger;
  IGScopedObjectMap *_objectMap;
  BOOL _didCreateSocket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session localDataStore:(id)store logger:(id)logger;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_onBackBarButtonTapped;
- (void)leadGenOneClickOnboardingAdapterDidSelectStandardForm;
- (void)leadGenOneClickOnboardingAdapterDidSelectCustomForm;
- (void)leadGenOneClickOnboardingAdapterDidTapPreviewStandardForm;
- (id)valueWithInitializer:(undefined *)initializer;
@end

#endif /* IGPromoteLeadGenOneTapViewController_h */
