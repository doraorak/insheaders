//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGLFIGLUFilter_h
#define IGGLFIGLUFilter_h
@import Foundation;

#include "IGGLFFilterProtocol-Protocol.h"
#include "IGGLKTexture2D.h"

@class NSString;
@protocol {shared_ptr<iglu::filterkit::IFilter>="__ptr_"^{IFilter}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::filterkit::IFilterDescriptor>="__ptr_"^{IFilterDescriptor}"__cntrl_"^{__shared_weak_count}};

@interface IGGLFIGLUFilter : NSObject<IGGLFFilterProtocol> {
  /* instance variables */
  NSString *_filterIdentifier;
  struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter *__ptr_; struct __shared_weak_count *__cntrl_; } _filter;
  struct shared_ptr<iglu::filterkit::IFilterDescriptor> { struct IFilterDescriptor *__ptr_; struct __shared_weak_count *__cntrl_; } _filterDescriptor;
}

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
+ (id)newWithIgluFilterIdentifier:(id)identifier;

/* instance methods */
- (id)initWithIgluFilterIdentifier:(id)identifier;
- (long long)filterType;
- (id)filterName;
- (id)filterIdentifier;
- (double)filterStrength;
- (void)drawInContext:(id)context;
- (id)imageSourceFilter;
@end

#endif /* IGGLFIGLUFilter_h */