//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetworkActivityIndicatorService_h
#define IGNetworkActivityIndicatorService_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGNetworker, NSString, UIApplication;

@interface IGNetworkActivityIndicatorService : NSObject<NSObject> {
  /* instance variables */
  IGNetworker *_networker;
  BOOL _isNetworkActivityIndicatorVisible;
  id /* block */ _deferredUpdateBlock;
  UIApplication *_application;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)networkOperationsDidChange;
@end

#endif /* IGNetworkActivityIndicatorService_h */
