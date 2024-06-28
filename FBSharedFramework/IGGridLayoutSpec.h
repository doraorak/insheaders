//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGridLayoutSpec_h
#define IGGridLayoutSpec_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface IGGridLayoutSpec : NSObject<NSCopying> {
  /* instance variables */
  long long _rowBehavior;
  unsigned long long _totalNumberOfColumns;
}

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) long long numberOfColumns;

/* instance methods */
- (id)initWithAspectRatio:(double)ratio rowBehavior:(long long)behavior totalNumberOfColumns:(unsigned long long)columns numberOfColumns:(unsigned long long)columns;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGGridLayoutSpec_h */
