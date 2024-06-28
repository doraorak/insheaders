//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDrawBrushStub_h
#define IGDrawBrushStub_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIColor;
@protocol IGDrawDynamics;

@interface IGDrawBrushStub : NSObject<NSObject>

@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) double size;
@property (readonly, nonatomic) double minSize;
@property (readonly, nonatomic) double maxSize;
@property (readonly, nonatomic) double defaultSize;
@property (readonly, nonatomic) BOOL ignoresColor;
@property (readonly, nonatomic) BOOL isInternal;
@property (nonatomic) struct CGSize { double x0; double x1; } backingSize;
@property (nonatomic) union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16] } projection;
@property (retain, nonatomic) NSObject<IGDrawDynamics> *brushDynamics;
@property (nonatomic) double spacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)prepareToDraw;
- (id)createMark;
@end

#endif /* IGDrawBrushStub_h */