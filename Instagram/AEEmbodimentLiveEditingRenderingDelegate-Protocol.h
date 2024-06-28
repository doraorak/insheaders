//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEEmbodimentLiveEditingRenderingDelegate_Protocol_h
#define AEEmbodimentLiveEditingRenderingDelegate_Protocol_h
@import Foundation;

@protocol AEEmbodimentLiveEditingRenderingDelegate <NSObject>
/* instance methods */
- (void)liveEditingRenderingDidUpdateGltfForRequestId:(id)id error:(id)error;
- (void)liveEditingRenderingDidUpdateColorRampsWithError:(id)error;
- (id)liveEditingRenderingRequestsALE;
@end

#endif /* AEEmbodimentLiveEditingRenderingDelegate_Protocol_h */
