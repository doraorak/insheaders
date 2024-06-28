//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMutationRequestProcessingToolbox_h
#define IGDirectMutationRequestProcessingToolbox_h
@import Foundation;

#include "IGDirectMutationCleanupInstructions.h"
#include "IGDirectMutationOptimisticUpdateWithThreadId.h"
#include "IGDirectMutationRequestProcessing-Protocol.h"

@protocol IGDirectMutationRequestLogging;

@interface IGDirectMutationRequestProcessingToolbox : NSObject

@property (readonly, nonatomic) NSObject<IGDirectMutationRequestProcessing> *processor;
@property (readonly, nonatomic) NSObject<IGDirectMutationRequestLogging> *logger;
@property (readonly, nonatomic) IGDirectMutationCleanupInstructions *cleanupInstructions;
@property (readonly, nonatomic) IGDirectMutationOptimisticUpdateWithThreadId *optimisticUpdates;

/* instance methods */
- (id)initWithProcessor:(id)processor logger:(id)logger cleanupInstructions:(id)instructions optimisticUpdates:(id)updates;
@end

#endif /* IGDirectMutationRequestProcessingToolbox_h */