//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentWarningClassifier_h
#define IGContentWarningClassifier_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber;

@interface IGContentWarningClassifier : NSObject<NSCopying> {
  /* instance variables */
  NSNumber *_bullyScore;
  NSNumber *_hateScore;
  NSNumber *_sexualScore;
  NSNumber *_spamScore;
}

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithBullyScore:(id)score hateScore:(id)score sexualScore:(id)score spamScore:(id)score;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGContentWarningClassifier_h */
