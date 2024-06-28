//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPSessionOperation_h
#define FBMPSessionOperation_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol struct variant<FBMPSessionConnectOperation, FBMPSessionConnectPortsOperation, FBMPSessionDisconnectOperation, FBMPSessionDisconnectPortsOperation, FBMPSessionReplaceOperation, FBMPSessionRemoveOperation> { int x0; struct aligned_storage<16UL, 8UL> { union data_t { char x0[16] struct a8 x1; } x0; } x1; }, {variant<FBMPSessionConnectOperation, FBMPSessionConnectPortsOperation, FBMPSessionDisconnectOperation, FBMPSessionDisconnectPortsOperation, FBMPSessionReplaceOperation, FBMPSessionRemoveOperation>="which_"i"storage_"{aligned_storage<16UL, 8UL>="data_"(data_t="buf"[16c]"align_"{a8=})}};

@interface FBMPSessionOperation : NSObject<NSObject>

@property (readonly, nonatomic) struct variant<FBMPSessionConnectOperation, FBMPSessionConnectPortsOperation, FBMPSessionDisconnectOperation, FBMPSessionDisconnectPortsOperation, FBMPSessionReplaceOperation, FBMPSessionRemoveOperation> { int x0; struct aligned_storage<16UL, 8UL> { union data_t { char x0[16] struct a8 x1; } x0; } x1; } operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOperation:(struct variant<FBMPSessionConnectOperation, FBMPSessionConnectPortsOperation, FBMPSessionDisconnectOperation, FBMPSessionDisconnectPortsOperation, FBMPSessionReplaceOperation, FBMPSessionRemoveOperation> { int x0; struct aligned_storage<16UL, 8UL> { union data_t { char x0[16] struct a8 x1; } x0; } x1; })operation;
- (BOOL)isEqual:(id)equal;
@end

#endif /* FBMPSessionOperation_h */