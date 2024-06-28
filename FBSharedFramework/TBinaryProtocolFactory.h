//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef TBinaryProtocolFactory_h
#define TBinaryProtocolFactory_h
@import Foundation;

#include "TProtocolFactory-Protocol.h"

@class NSString;

@interface TBinaryProtocolFactory : NSObject<TProtocolFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedFactory;

/* instance methods */
- (id)newProtocolOnTransport:(id)transport;
@end

#endif /* TBinaryProtocolFactory_h */