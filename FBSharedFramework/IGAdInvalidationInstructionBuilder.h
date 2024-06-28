//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdInvalidationInstructionBuilder_h
#define IGAdInvalidationInstructionBuilder_h
@import Foundation;

@class NSArray;

@interface IGAdInvalidationInstructionBuilder : NSObject {
  /* instance variables */
  unsigned long long _signal;
  NSArray *_conditions;
}

/* class methods */
+ (id)adInvalidationInstruction;
+ (id)adInvalidationInstructionFromExistingAdInvalidationInstruction:(id)instruction;

/* instance methods */
- (id)build;
- (id)withSignal:(unsigned long long)signal;
- (id)withConditions:(id)conditions;
@end

#endif /* IGAdInvalidationInstructionBuilder_h */
