//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBUploadOffProcessNetworkResponse_h
#define FBUploadOffProcessNetworkResponse_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface FBUploadOffProcessNetworkResponse : NSObject

@property (readonly, nonatomic) id /* block */ success;
@property (readonly, nonatomic) id /* block */ failure;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
- (id)initWithSuccess:(id /* block */)success failure:(id /* block */)failure queue:(id)queue;
@end

#endif /* FBUploadOffProcessNetworkResponse_h */
