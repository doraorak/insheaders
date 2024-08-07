//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPTextAnnotation_h
#define SCPTextAnnotation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SCPTextAnnotationStyle.h"

@class NSString;

@interface SCPTextAnnotation : NSObject<NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topLeftCoords;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) SCPTextAnnotationStyle *style;

/* instance methods */
- (id)initWithTopLeftCoords:(struct CGPoint { double x0; double x1; })coords text:(id)text style:(id)style;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SCPTextAnnotation_h */
