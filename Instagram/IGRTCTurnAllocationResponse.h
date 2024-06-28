//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRTCTurnAllocationResponse_h
#define IGRTCTurnAllocationResponse_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSError, NSString;

@interface IGRTCTurnAllocationResponse : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_success_ip;
  NSString *_success_ip_6;
  NSString *_success_ssl_tcp_port;
  NSString *_success_tcp_port;
  NSString *_success_udp_port;
  NSError *_otherFailure_error;
}

/* class methods */
+ (id)otherFailureWithError:(id)error;
+ (id)successWithIp:(id)ip ip_6:(id)ip_6 ssl_tcp_port:(id)ssl_tcp_port tcp_port:(id)tcp_port udp_port:(id)udp_port;

/* instance methods */
@end

#endif /* IGRTCTurnAllocationResponse_h */
