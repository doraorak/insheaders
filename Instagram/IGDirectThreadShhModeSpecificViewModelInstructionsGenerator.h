//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadShhModeSpecificViewModelInstructionsGenerator_h
#define IGDirectThreadShhModeSpecificViewModelInstructionsGenerator_h
@import Foundation;

#include "IGDirectInteropFeatureGating-Protocol.h"
#include "NSObject-Protocol.h"

@class IGDirectLastSeenShhMessageInfo, IGUserDefaults, NSString;

@interface IGDirectThreadShhModeSpecificViewModelInstructionsGenerator : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGDirectInteropFeatureGating> *_featureSetProvider;
  IGUserDefaults *_userDefaults;
  NSString *_currentUserId;
  IGDirectLastSeenShhMessageInfo *_lastSeenShhMessageInfoForOtherUserWhenEnteringShhMode;
}

@property (copy, nonatomic) IGDirectLastSeenShhMessageInfo *lastSeenShhMessageInfoForCurrentUserWhenEnteringShhMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeatureSetProvider:(id)provider userDefaults:(id)defaults currentUserId:(id)id;
- (id)generateInstructionsForMessages:(id)messages generationInput:(id)input previousGenerationOutput:(id)output;
@end

#endif /* IGDirectThreadShhModeSpecificViewModelInstructionsGenerator_h */