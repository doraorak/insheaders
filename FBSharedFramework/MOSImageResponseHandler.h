//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MOSImageResponseHandler_h
#define MOSImageResponseHandler_h
@import Foundation;

#include "MOSImageResponseHandlerCallbacks.h"

@class NSDictionary;
@protocol MOSResponseHandlingDelegate;

@interface MOSImageResponseHandler : NSObject

@property (readonly, nonatomic) MOSImageResponseHandlerCallbacks *callbacks;
@property (weak, nonatomic) NSObject<MOSResponseHandlingDelegate> *delegate;
@property (copy, nonatomic) NSDictionary *debugData;

/* instance methods */
- (id)initWithCallbacks:(id)callbacks;
- (void)openWithPartialData:(id)data expectedFinalDataLength:(long long)length;
- (void)handleData:(id)data;
- (void)close;
- (void)abort;
@end

#endif /* MOSImageResponseHandler_h */
