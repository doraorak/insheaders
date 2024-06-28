//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFHttpRequest_h
#define FNFHttpRequest_h
@import Foundation;

#include "GCDAsyncSocket.h"
#include "HTTPMessage.h"

@interface FNFHttpRequest : NSObject {
  /* instance variables */
  GCDAsyncSocket *_socket;
  HTTPMessage *_inboundRequestMessage;
  unsigned long long _dataLength;
  struct _NSRange { unsigned long long location; unsigned long long length; } _range;
  struct _NSRange { unsigned long long location; unsigned long long length; } _absoluteRange;
  unsigned long long _videoChunkOffset;
}

@property (nonatomic) BOOL sentResponseCompleted;
@property (nonatomic) BOOL isChunked;

/* instance methods */
- (id)initWithSocket:(id)socket socketData:(id)data;
- (void)sendResponseDelimiterData:(id)data;
- (void)sendResponseData:(id)data;
- (void)sendResponseDataForVideo:(id)video url:(id)url range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range length:(unsigned long long)length;
- (void)sendResponseDataForPlaylist:(id)playlist;
- (void)sendFinishedLoadingResponse;
- (void)sendHeaderDataForURL:(id)url range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range length:(unsigned long long)length;
- (void)sendChunkedHeaderForURL:(id)url;
- (void)sendRedirectForURL:(id)url;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getByteRequestRange;
- (id)getRequestURL;
- (id)requestID;
- (unsigned long long)dataLength;
- (unsigned long long)currentOffset;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getByteRequestAbsoluteRange;
- (BOOL)isThrottlingDisabled;
- (BOOL)limitRequestLength;
- (id)_playlistResponseForData:(id)data;
- (void)_writeDataToSocket:(id)socket;
@end

#endif /* FNFHttpRequest_h */