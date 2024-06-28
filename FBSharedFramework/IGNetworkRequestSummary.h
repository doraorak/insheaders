//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetworkRequestSummary_h
#define IGNetworkRequestSummary_h
@import Foundation;

@interface IGNetworkRequestSummary : NSObject {
  /* instance variables */
  unsigned long long _totalBytesExpectedToUpload;
  unsigned long long _totalBytesUploaded;
  unsigned long long _bytesExpectedToDownload;
  unsigned long long _requestSendTimeMs;
  unsigned long long _totalRequestTimeMs;
}

@property (readonly, nonatomic) unsigned long long totalBytesDownloaded;
@property (readonly, nonatomic) unsigned long long totalBytesResponseSize;
@property (readonly, nonatomic) unsigned long long timeToFirstByteMs;
@property (readonly, nonatomic) unsigned long long timeToResponseBodyStartMs;
@property (readonly, nonatomic) unsigned long long timeToLastByteMs;

/* instance methods */
- (id)initWithBytesDownExpected:(unsigned long long)expected downloaded:(unsigned long long)downloaded responseSize:(unsigned long long)size bytesUpExpected:(unsigned long long)expected uploaded:(unsigned long long)uploaded requestSendTimeMs:(unsigned long long)ms timeToFirstByteMs:(unsigned long long)ms timeToResponseBodyStartMs:(unsigned long long)ms timeToLastByteMs:(unsigned long long)ms totalRequestTimeMs:(unsigned long long)ms;
@end

#endif /* IGNetworkRequestSummary_h */