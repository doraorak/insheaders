//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFSystem_h
#define KFSystem_h
@import Foundation;

#include "KFECSToolbox.h"
#include "KFECSUpdatingProtocol-Protocol.h"

@class NSString;

@interface KFSystem : NSObject<KFECSUpdatingProtocol>

@property (readonly, nonatomic) KFECSToolbox *toolbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)mutateWithToolbox:(id)toolbox pass:(unsigned long long)pass;
- (void)constructWithToolbox:(id)toolbox pass:(unsigned long long)pass;
- (void)setupWithToolbox:(id)toolbox pass:(unsigned long long)pass;
- (void)updateWithToolbox:(id)toolbox pass:(unsigned long long)pass progress:(double)progress;
- (void)renderWithToolbox:(id)toolbox pass:(unsigned long long)pass;
@end

#endif /* KFSystem_h */