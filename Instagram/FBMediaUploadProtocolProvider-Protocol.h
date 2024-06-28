//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaUploadProtocolProvider_Protocol_h
#define FBMediaUploadProtocolProvider_Protocol_h
@import Foundation;

@protocol FBMediaUploadProtocolProvider <NSObject, NSCoding, NSCopying>
/* instance methods */
- (id)getServerUrlForJobDetail:(id)detail jobId:(id)id phase:(id)phase;
- (id)defaultHeaders;
- (id)parseResponse:(id)response error:(id *)error;
- (unsigned long long)authType;
@end

#endif /* FBMediaUploadProtocolProvider_Protocol_h */