//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFCAGradientLayer_h
#define KFCAGradientLayer_h
@import Foundation;

#include "CAGradientLayer.h"
#include "KFCALayerImpl.h"
#include "KFCALayerProtocol-Protocol.h"

@class NSString;

@interface KFCAGradientLayer : CAGradientLayer<KFCALayerProtocol> {
  /* instance variables */
  KFCALayerImpl *_layerImpl;
}

@property (nonatomic) unsigned long long activeProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithToolbox:(id)toolbox;
- (void)addScalarAnimation:(void *)animation forProperty:(unsigned long long)property context:(const struct KF3CAAnimationContext *)context;
- (void)addPointAnimation:(void *)animation forProperty:(unsigned long long)property context:(const struct KF3CAAnimationContext *)context;
- (void)addColorAnimation:(void *)animation forProperty:(unsigned long long)property context:(const struct KF3CAAnimationContext *)context;
- (void)addPathAnimation:(void *)animation forProperty:(unsigned long long)property context:(const struct KF3CAAnimationContext *)context;
- (void)addScalarArrayAnimation:(void *)animation forProperty:(unsigned long long)property context:(const struct KF3CAAnimationContext *)context;
- (void)addColorArrayAnimation:(void *)animation forProperty:(unsigned long long)property context:(const struct KF3CAAnimationContext *)context;
- (void)setStringValue:(id)value forProperty:(unsigned long long)property;
- (void)addTag:(id)tag;
- (BOOL)hasTag:(id)tag;
- (void)layoutSublayers;
- (id)actionForKey:(id)key;
- (void)addCAAnimation:(id)caanimation;
- (void)callCABlock:(id /* block */)cablock;
- (void)setCAScalarValue:(double)value forProperty:(unsigned long long)property;
- (void)setCAPointValue:(struct CGPoint { double x0; double x1; })value forProperty:(unsigned long long)property;
- (void)setCAObjectValue:(id)value forProperty:(unsigned long long)property;
- (void)setCARectValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })value forProperty:(unsigned long long)property;
- (void)setCAPathValue:(struct CGPath *)value forProperty:(unsigned long long)property;
- (void)setCAIntegerValue:(unsigned long long)value forProperty:(unsigned long long)property;
- (void)applyPendingCAValues;
@end

#endif /* KFCAGradientLayer_h */
