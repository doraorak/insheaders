//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGLFFilter_h
#define IGGLFFilter_h
@import Foundation;

#include "IGContext.h"
#include "IGFilter.h"
#include "IGGLFFilterProtocol-Protocol.h"
#include "IGGLKTexture2D.h"

@class NSString;

@interface IGGLFFilter : NSObject<IGGLFFilterProtocol> {
  /* instance variables */
  BOOL _shouldSkipDrawing;
  IGContext *_context;
}

@property (readonly, nonatomic) IGFilter *filter;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct _GLKMatrix4 { float x0[16] } modelViewProjectionMatrix;
@property (retain, nonatomic) IGGLKTexture2D *sampleTexture;
@property (nonatomic) BOOL enablePrecompiledShader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)filterWithFilterKitFilter:(id)filter;

/* instance methods */
- (id)initWithFilterKitFilter:(id)filter;
- (long long)filterType;
- (id)filterName;
- (id)filterIdentifier;
- (double)filterStrength;
- (void)drawInContext:(id)context;
@end

#endif /* IGGLFFilter_h */