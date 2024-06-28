//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef HTTPMessage_h
#define HTTPMessage_h
@import Foundation;

@interface HTTPMessage : NSObject {
  /* instance variables */
  struct __CFHTTPMessage * message;
}

/* instance methods */
- (id)initEmptyRequest;
- (id)initRequestWithMethod:(id)method URL:(id)url version:(id)version;
- (id)initResponseWithStatusCode:(long long)code description:(id)description version:(id)version;
- (void)dealloc;
- (BOOL)appendData:(id)data;
- (BOOL)isHeaderComplete;
- (id)version;
- (id)method;
- (id)url;
- (long long)statusCode;
- (id)allHeaderFields;
- (id)headerField:(id)field;
- (void)setHeaderField:(id)field value:(id)value;
- (id)messageData;
- (id)body;
- (void)setBody:(id)body;
@end

#endif /* HTTPMessage_h */