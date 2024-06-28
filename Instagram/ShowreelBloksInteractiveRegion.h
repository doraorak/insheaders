//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ShowreelBloksInteractiveRegion_h
#define ShowreelBloksInteractiveRegion_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface ShowreelBloksInteractiveRegion : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

/* instance methods */
- (id)initWithIdentifier:(id)identifier type:(id)type bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
@end

#endif /* ShowreelBloksInteractiveRegion_h */
