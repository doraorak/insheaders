//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARPeerVideoStreamsServiceDataSource_Protocol_h
#define FBARPeerVideoStreamsServiceDataSource_Protocol_h
@import Foundation;

@protocol FBARPeerVideoStreamsServiceDataSource <NSObject>
/* instance methods */
- (struct shared_ptr<arfx::engine::renderer::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; })createTextureForStreamId:(const void *)id renderContext:(void *)context;
- (BOOL)hasStreamTextureForIdentifier:(const void *)identifier;
- (BOOL)hasStreamUpdatedForIdentifier:(const void *)identifier;
- (void)loadBufferForStreamId:(const void *)id texture:(struct ITexture *)texture renderContext:(void *)context;
@end

#endif /* FBARPeerVideoStreamsServiceDataSource_Protocol_h */
