//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGPostCreationManager_h
#define IGUserScopedObjects_IGPostCreationManager_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGAuthHeaderStore.h"
#include "IGBackgroundRenderIGLContextProvider-Protocol.h"
#include "IGCameraLogger.h"
#include "IGDInstamadilloMediaUploading-Protocol.h"
#include "IGFacebookServiceHelper.h"
#include "IGListDiffable-Protocol.h"
#include "IGMediaUploadEventLogger.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "IGPostDataStore.h"
#include "IGPostSessionFactory.h"
#include "IGScopeEnding-Protocol.h"
#include "IGUploadService.h"
#include "IGUser.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoRenderQueue.h"
#include "_TtC19IGUploadMediaSource30IGUploadARFilterDependencyList.h"

@class NSMutableDictionary, NSString;
@protocol IGPostCreationManagerAnnouncer, IGUploadsUnarchiveAnnouncer, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface IGUserScopedObjects (IGPostCreationManager)
/* instance methods */
- (id)postCreationManager;
@end

#endif /* IGUserScopedObjects_IGPostCreationManager_h */
