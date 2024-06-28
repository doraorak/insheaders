//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectChangeGroupIconActionManager_h
#define IGDirectChangeGroupIconActionManager_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDirectGroupProfilePhotoArmadilloLogger.h"

@class IGDirectGroupImageUploadManager, IGDirectThreadKey, NSString;

@interface IGDirectChangeGroupIconActionManager : NSObject {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSString *_analyticsModule;
  NSString *_threadId;
  IGDirectThreadKey *_threadKey;
  IGDirectGroupImageUploadManager *_groupImageUploadManager;
  IGDirectGroupProfilePhotoArmadilloLogger *_groupProfilePhotoArmadilloLogger;
}

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger analyticsModule:(id)module threadId:(id)id threadKey:(id)key;
@end

#endif /* IGDirectChangeGroupIconActionManager_h */
