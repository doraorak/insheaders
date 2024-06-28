//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetworkInfo_h
#define IGNetworkInfo_h
@import Foundation;

@class NSString;

@interface IGNetworkInfo : NSObject {
  /* instance variables */
  long long _networkReachabilityStatus;
}

@property (readonly, nonatomic) NSString *radioType;

/* instance methods */
- (id)initWithNetworkReachabilityStatus:(long long)status radioType:(id)type;
- (BOOL)isReachable;
@end

#endif /* IGNetworkInfo_h */