//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBCompositionFilterMetadata_h
#define IGFBCompositionFilterMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface IGFBCompositionFilterMetadata : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSArray *gradientColors;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } outputSize;
@property (nonatomic) struct IGCompositionFilterTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; } mediaTransform;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGradientColors:(id)colors outputSize:(struct CGSize { double x0; double x1; })size;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGFBCompositionFilterMetadata_h */