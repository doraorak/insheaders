//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaUploadLogging_Protocol_h
#define FBMediaUploadLogging_Protocol_h
@import Foundation;

@protocol FBMediaUploadLogging <NSObject>
/* instance methods */
- (void)logUploadTransferStart;
- (void)logUploadTransferSuccessWithMediaId:(id)id;
- (void)logUploadTransferFailure:(id)failure;
- (void)logUploadTransferCancel;
- (void)addEntriesFromDictionary:(id)dictionary;
@end

#endif /* FBMediaUploadLogging_Protocol_h */
