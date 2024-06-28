//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoreGraphicsShapeNode_h
#define IGCoreGraphicsShapeNode_h
@import Foundation;

#include "IGCoreGraphicsNode.h"
#include "NSSecureCoding-Protocol.h"

@class UIBezierPath, UIColor;

@interface IGCoreGraphicsShapeNode : IGCoreGraphicsNode<NSSecureCoding>

@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) UIColor *fillColor;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)drawInContext:(struct CGContext *)context;
@end

#endif /* IGCoreGraphicsShapeNode_h */
