//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialThumbnailUserFlowLoggingConfigHelper_h
#define IGSundialThumbnailUserFlowLoggingConfigHelper_h
@import Foundation;

#include "IGUserLauncherSet-Protocol.h"
#include "METAMediaCompositionConfigHelperEntryProtocol-Protocol.h"

@class NSString, NSValue;

@interface IGSundialThumbnailUserFlowLoggingConfigHelper : NSObject<METAMediaCompositionConfigHelperEntryProtocol> {
  /* instance variables */
  NSObject<IGUserLauncherSet> *_cachedLauncherSet;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSValue *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIGUserLauncherSet:(id)set;
- (id)getValueWithOptions:(struct { BOOL x0; })options;
@end

#endif /* IGSundialThumbnailUserFlowLoggingConfigHelper_h */
