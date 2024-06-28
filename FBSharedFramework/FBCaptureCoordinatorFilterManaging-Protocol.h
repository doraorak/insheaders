//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCaptureCoordinatorFilterManaging_Protocol_h
#define FBCaptureCoordinatorFilterManaging_Protocol_h
@import Foundation;

@protocol FBCaptureCoordinatorFilterManaging <NSObject>

@property (readonly, copy, nonatomic) NSArray *currentFilters;

/* instance methods */
- (void)setFilters:(id)filters completion:(id /* block */)completion;
- (void)clearInMemoryCacheWithCompletion:(id /* block */)completion;
- (void)performWithIGLDeviceOnVideoQueue:(id /* block */)queue;
@optional
/* instance methods */
- (id)filterFromDescriptor:(id)descriptor error:(id *)error;
@end

#endif /* FBCaptureCoordinatorFilterManaging_Protocol_h */
