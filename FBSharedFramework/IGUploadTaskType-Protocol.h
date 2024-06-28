//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadTaskType_Protocol_h
#define IGUploadTaskType_Protocol_h
@import Foundation;

@protocol IGUploadTaskType <NSObject>
/* instance methods */
- (id)taskId;
- (id)uploadId;
- (double)progress;
- (long long)status;
- (void)cancel;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGUploadTaskType_Protocol_h */
