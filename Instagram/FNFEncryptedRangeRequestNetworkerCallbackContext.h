//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFEncryptedRangeRequestNetworkerCallbackContext_h
#define FNFEncryptedRangeRequestNetworkerCallbackContext_h
@import Foundation;

@class NSMutableArray, NSMutableData;

@interface FNFEncryptedRangeRequestNetworkerCallbackContext : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableData *responseData;
@property (nonatomic) long long totalLength;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double ttfb;
@property (nonatomic) long long statusCode;

/* instance methods */
- (id)initWithHandler:(id /* block */)handler requestStartTime:(double)time;
- (void)addHandler:(id /* block */)handler;
@end

#endif /* FNFEncryptedRangeRequestNetworkerCallbackContext_h */
