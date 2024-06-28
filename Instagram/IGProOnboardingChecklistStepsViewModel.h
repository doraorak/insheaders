//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProOnboardingChecklistStepsViewModel_h
#define IGProOnboardingChecklistStepsViewModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class NSArray;

@interface IGProOnboardingChecklistStepsViewModel : NSObject<IGListDiffable> {
  /* instance variables */
  NSArray *_checklistSteps;
}

@property (readonly, nonatomic) BOOL completed;

/* instance methods */
- (id)initViewModel:(id)model checklistSteps:(id)steps isCompleted:(BOOL)completed;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isCompleted;
@end

#endif /* IGProOnboardingChecklistStepsViewModel_h */