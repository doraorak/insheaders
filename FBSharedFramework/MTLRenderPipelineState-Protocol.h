//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MTLRenderPipelineState_Protocol_h
#define MTLRenderPipelineState_Protocol_h
@import Foundation;

@protocol MTLRenderPipelineState <NSObject>

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<MTLDevice> *device;
@property (nonatomic, readonly) long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, readonly) BOOL threadgroupSizeMatchesTileSize;
@property (nonatomic, readonly) long long imageblockSampleLength;
@property (nonatomic, readonly) BOOL supportIndirectCommandBuffers;
@property (nonatomic, readonly) long long maxTotalThreadsPerObjectThreadgroup;
@property (nonatomic, readonly) long long maxTotalThreadsPerMeshThreadgroup;
@property (nonatomic, readonly) long long objectThreadExecutionWidth;
@property (nonatomic, readonly) long long meshThreadExecutionWidth;
@property (nonatomic, readonly) long long maxTotalThreadgroupsPerMeshGrid;
@property (nonatomic, readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;

/* instance methods */
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })dimensions;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })dimensions;
- (id)functionHandleWithFunction:(id)function stage:(unsigned long long)stage;
- (id)functionHandleWithFunction:(id)function stage:(unsigned long long)stage;
- (id)newVisibleFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newVisibleFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newIntersectionFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newIntersectionFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)functions error:(id *)error;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)functions error:(id *)error;
@end

#endif /* MTLRenderPipelineState_Protocol_h */