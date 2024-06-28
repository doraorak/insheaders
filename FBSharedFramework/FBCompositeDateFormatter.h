//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCompositeDateFormatter_h
#define FBCompositeDateFormatter_h
@import Foundation;

#include "FBDateFormatter.h"
#include "FBDateFormatter.h"

@interface FBCompositeDateFormatter : FBDateFormatter

@property (readonly, nonatomic) FBDateFormatter *formatterA;
@property (readonly, nonatomic) FBDateFormatter *formatterB;
@property (readonly, nonatomic) id /* block */ formatBlock;

/* instance methods */
- (id)formatDate:(id)date;
- (id)initWithFormatterA:(id)a formatterB:(id)b formatBlock:(id /* block */)block;
@end

#endif /* FBCompositeDateFormatter_h */