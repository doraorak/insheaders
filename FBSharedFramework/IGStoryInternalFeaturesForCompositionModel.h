//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryInternalFeaturesForCompositionModel_h
#define IGStoryInternalFeaturesForCompositionModel_h
@import Foundation;

#include "IGStoryMediaCompositionState.h"
#include "IGUserSession.h"

@interface IGStoryInternalFeaturesForCompositionModel : NSObject

@property (readonly, nonatomic) IGStoryMediaCompositionState *composition;
@property (readonly, nonatomic) IGUserSession *userSession;

/* instance methods */
- (id)initWithComposition:(id)composition userSession:(id)session;
@end

#endif /* IGStoryInternalFeaturesForCompositionModel_h */
