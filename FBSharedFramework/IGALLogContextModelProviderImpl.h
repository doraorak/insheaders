//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGALLogContextModelProviderImpl_h
#define IGALLogContextModelProviderImpl_h
@import Foundation;

#include "IGALLogContextModelProvider-Protocol.h"
#include "IGALTrackingModel-Protocol.h"

@class NSString;

@interface IGALLogContextModelProviderImpl : NSObject<IGALLogContextModelProvider>

@property (readonly, nonatomic) NSObject<IGALTrackingModel> *trackingModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTrackingModel:(id)model;
@end

#endif /* IGALLogContextModelProviderImpl_h */