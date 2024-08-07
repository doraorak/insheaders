//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDrawMarkBacked_h
#define IGDrawMarkBacked_h
@import Foundation;

#include "IGDrawBrushBackedIGL.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDrawBrushCommon, IGDrawBrushMark;

@interface IGDrawMarkBacked : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGDrawBrushMark> *_innerMark;
}

@property (readonly, nonatomic) NSObject<IGDrawBrushCommon> *brush;
@property (readonly, nonatomic) BOOL supportsIncrementalDrawing;
@property (nonatomic) BOOL hadToStopDueToFullBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBrush:(id)brush;
- (void)prepareToDraw;
- (void)draw;
- (void)drawIncremental;
- (void)startWith:(struct _IGDrawTouchSample { struct _GLKVector2 { float x0[2] } x0; double x1; double x2; double x3; double x4; })with;
- (void)addSample:(struct _IGDrawTouchSample { struct _GLKVector2 { float x0[2] } x0; double x1; double x2; double x3; double x4; })sample;
- (void)endWith:(struct _IGDrawTouchSample { struct _GLKVector2 { float x0[2] } x0; double x1; double x2; double x3; double x4; })with;
- (void)idle;
- (void)setColor:(id)color;
@end

#endif /* IGDrawMarkBacked_h */
