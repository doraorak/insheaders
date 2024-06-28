//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPostSessionType_Protocol_h
#define IGPostSessionType_Protocol_h
@import Foundation;

@protocol IGPostSessionType <NSCopying>
/* instance methods */
- (id)postId;
- (id)uploadIds;
- (id)attachmentFbidForUploadId:(id)id;
- (id)instamadilloMediaResponseForUploadId:(id)id;
- (long long)uploadStatus;
- (double)uploadProgress;
- (void)retry;
- (void)cancelForReason:(id)reason;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (id)shares;
- (id)shareForShareId:(id)id;
- (id)createShareLoggerWithShareType:(long long)type shareId:(id)id logger:(id)logger;
- (id)debugObject:(id)object;
- (id)wearablesRequestParamsTask;
@end

#endif /* IGPostSessionType_Protocol_h */